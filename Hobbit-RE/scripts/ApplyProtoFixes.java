// Applies auto/proto_fixes.tsv (addr, calling convention, number of stack params) derived from the
// binary's ret N and ECX/EDX use. Keeps existing parameter types where the position still exists.
// Usage (headless): -postScript ApplyProtoFixes.java <proto_fixes.tsv>
// @category Hobbit
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.symbol.SourceType;
import java.io.*;
import java.util.*;

public class ApplyProtoFixes extends GhidraScript {
    @Override
    public void run() throws Exception {
        int ok = 0, bad = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(getScriptArgs()[0]))) {
            for (String line; (line = r.readLine()) != null;) {
                String[] p = line.split("\t");
                if (p.length < 3) continue;
                Function f = getFunctionAt(toAddr(Long.parseLong(p[0], 16)));
                if (f == null) { bad++; continue; }
                String cc = p[1];
                int nstack = Integer.parseInt(p[2]);
                int nreg = cc.equals("__fastcall") ? 2 : 0;   // thiscall's `this` is an auto-parameter
                Parameter[] old = f.getParameters();
                List<Variable> params = new ArrayList<>();
                int skipOld = old.length > 0 && old[0].isAutoParameter() ? 1 : 0;
                for (int i = 0; i < nreg + nstack; i++) {
                    DataType dt = (i + skipOld < old.length) ? old[i + skipOld].getDataType() : Undefined4DataType.dataType;
                    if (dt.getLength() != 4 && dt.getLength() > 0) dt = Undefined4DataType.dataType;
                    params.add(new ParameterImpl("param_" + (i + 1), dt, currentProgram));
                }
                try {
                    f.updateFunction(cc, f.getReturn(), params, FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                                     true, SourceType.USER_DEFINED);
                    ok++;
                } catch (Exception e) {
                    println("failed " + p[0] + ": " + e.getMessage());
                    bad++;
                }
            }
        }
        println("prototype fixes applied: " + ok + ", failed: " + bad);
    }
}
