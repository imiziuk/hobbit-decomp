// Exports the whole program as C (functions + header with data types and referenced globals)
// using Ghidra's built-in C/C++ exporter. Usage (headless): -postScript ExportC.java <outfile.c>
// @category Hobbit
import ghidra.app.script.GhidraScript;
import ghidra.app.util.Option;
import ghidra.app.util.exporter.CppExporter;
import java.io.File;
import java.util.ArrayList;
import java.util.List;

public class ExportC extends GhidraScript {
    @Override
    public void run() throws Exception {
        File out = new File(getScriptArgs()[0]);
        CppExporter exp = new CppExporter();
        List<Option> opts = new ArrayList<>();
        opts.add(new Option(CppExporter.CREATE_HEADER_FILE, Boolean.TRUE));
        opts.add(new Option(CppExporter.CREATE_C_FILE, Boolean.TRUE));
        opts.add(new Option(CppExporter.USE_CPP_STYLE_COMMENTS, Boolean.TRUE));
        opts.add(new Option(CppExporter.EMIT_TYPE_DEFINITONS, Boolean.TRUE));
        exp.setOptions(opts);
        boolean ok = exp.export(out, currentProgram, null, monitor);
        println("C export " + (ok ? "ok" : "FAILED") + ": " + out);
    }
}
