// Decompiles every function whose <outdir>/<addr>.c does not exist yet.
// Usage (headless): -postScript ExportMissingDecomp.java <outdir>
// @category Hobbit
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;

public class ExportMissingDecomp extends GhidraScript {
    @Override
    public void run() throws Exception {
        File out = new File(getScriptArgs()[0]);
        out.mkdirs();
        DecompInterface d = new DecompInterface();
        d.openProgram(currentProgram);
        int n = 0;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (monitor.isCancelled()) break;
            File fo = new File(out, String.format("%08x.c", f.getEntryPoint().getOffset()));
            if (fo.exists()) continue;
            DecompileResults r = d.decompileFunction(f, 60, monitor);
            String c = (r != null && r.decompileCompleted()) ? r.getDecompiledFunction().getC()
                                                            : "/* DECOMPILE FAILED */\n";
            try (Writer w = new OutputStreamWriter(new FileOutputStream(fo), "UTF-8")) { w.write(c); }
            n++;
        }
        println("exported " + n + " new functions");
    }
}
