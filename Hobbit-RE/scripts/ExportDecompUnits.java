// For every non-library function: decompile, and write <outdir>/<addr>.json with
//   {addr, name, cc, proto, c, globals:[{name,addr,type,array,elem,len}], callees:[{name,addr,cc,ret,params,variadic}],
//    warnings:[...]}
// so a converter can turn each function into a standalone compilable C unit.
// Usage (headless): -postScript ExportDecompUnits.java <outdir>
// @category Hobbit
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import java.io.*;
import java.util.*;

public class ExportDecompUnits extends GhidraScript {
    static String js(String s) {
        StringBuilder b = new StringBuilder("\"");
        for (char c : s.toCharArray()) {
            switch (c) {
                case '"': b.append("\\\""); break;
                case '\\': b.append("\\\\"); break;
                case '\n': b.append("\\n"); break;
                case '\r': break;
                case '\t': b.append("\\t"); break;
                default: if (c < 0x20) b.append(String.format("\\u%04x", (int) c)); else b.append(c);
            }
        }
        return b.append('"').toString();
    }

    String typeStr(DataType dt) { return dt == null ? "undefined4" : dt.getDisplayName(); }

    @Override
    public void run() throws Exception {
        File out = new File(getScriptArgs()[0]);
        out.mkdirs();
        DecompInterface d = new DecompInterface();
        d.openProgram(currentProgram);
        int n = 0;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (monitor.isCancelled()) break;
            if (f.isThunk() || f.getName().startsWith("Unwind@") || f.isExternal()) continue;
            Address ep = f.getEntryPoint();
            File fo = new File(out, String.format("%08x.json", ep.getOffset()));
            if (fo.exists()) continue;
            DecompileResults r = d.decompileFunction(f, 90, monitor);
            StringBuilder b = new StringBuilder("{");
            b.append("\"addr\":").append(js(String.format("%08x", ep.getOffset())));
            b.append(",\"name\":").append(js(f.getName()));
            b.append(",\"cc\":").append(js(f.getCallingConventionName()));
            b.append(",\"proto\":").append(js(f.getPrototypeString(true, false)));
            if (r == null || !r.decompileCompleted()) {
                b.append(",\"error\":").append(js(r == null ? "null" : r.getErrorMessage())).append("}");
                write(fo, b.toString());
                continue;
            }
            b.append(",\"c\":").append(js(r.getDecompiledFunction().getC()));
            HighFunction hf = r.getHighFunction();
            // globals referenced by the decompiled code
            b.append(",\"globals\":[");
            boolean first = true;
            Iterator<HighSymbol> it = hf.getGlobalSymbolMap().getSymbols();
            while (it.hasNext()) {
                HighSymbol s = it.next();
                Address a = s.getStorage().isMemoryStorage() ? s.getStorage().getMinAddress() : null;
                if (a == null) continue;
                DataType dt = s.getDataType();
                if (!first) b.append(',');
                first = false;
                b.append("{\"name\":").append(js(s.getName()))
                 .append(",\"addr\":").append(js(String.format("%08x", a.getOffset())))
                 .append(",\"type\":").append(js(typeStr(dt)));
                if (dt instanceof Array) {
                    Array arr = (Array) dt;
                    b.append(",\"array\":true,\"elem\":").append(js(typeStr(arr.getDataType())))
                     .append(",\"len\":").append(arr.getNumElements());
                }
                b.append('}');
            }
            b.append(']');
            // direct callees with their committed signatures
            b.append(",\"callees\":[");
            Set<Address> seen = new HashSet<>();
            first = true;
            Iterator<PcodeOpAST> ops = hf.getPcodeOps();
            while (ops.hasNext()) {
                PcodeOpAST op = ops.next();
                if (op.getOpcode() != PcodeOp.CALL) continue;
                Address ta = op.getInput(0).getAddress();
                if (!seen.add(ta)) continue;
                Function cf = getFunctionAt(ta);
                if (!first) b.append(',');
                first = false;
                b.append("{\"addr\":").append(js(String.format("%08x", ta.getOffset())));
                if (cf != null) {
                    Function real = cf.isThunk() ? cf.getThunkedFunction(true) : cf;
                    b.append(",\"name\":").append(js(cf.getName()))
                     .append(",\"cc\":").append(js(cf.getCallingConventionName()))
                     .append(",\"ret\":").append(js(typeStr(cf.getReturnType())))
                     .append(",\"variadic\":").append(cf.hasVarArgs())
                     .append(",\"external\":").append(real != null && real.isExternal())
                     .append(",\"params\":[");
                    Parameter[] ps = cf.getParameters();
                    for (int i = 0; i < ps.length; i++) {
                        if (i > 0) b.append(',');
                        b.append(js(typeStr(ps[i].getDataType())));
                    }
                    b.append(']');
                }
                b.append('}');
            }
            b.append("]}");
            write(fo, b.toString());
            if (++n % 500 == 0) println("exported " + n);
        }
        println("exported " + n + " units");
    }

    void write(File fo, String s) throws IOException {
        try (Writer w = new OutputStreamWriter(new FileOutputStream(fo), "UTF-8")) { w.write(s); }
    }
}
