// Applies auto/proto_fixes_ret.tsv (addr, return type: float10 | undefined4 | void) derived from the x87 stack
// behaviour of the original code (tools/x87_audit.py). Keeps calling convention and parameters.
// Usage (headless): -postScript ApplyRetFixes.java <proto_fixes_ret.tsv>
// @category Hobbit
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;
import java.io.*;

public class ApplyRetFixes extends GhidraScript {
    @Override
    public void run() throws Exception {
        int ok = 0, bad = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(getScriptArgs()[0]))) {
            for (String line; (line = r.readLine()) != null;) {
                String[] p = line.split("\t");
                if (p.length < 2) continue;
                Function f = getFunctionAt(toAddr(Long.parseLong(p[0], 16)));
                if (f == null) { bad++; continue; }
                // "float" (4 bytes) is what Ghidra's x86 conventions return in ST0; float10 (10 bytes) on a
                // thiscall/fastcall function became a hidden __return_storage_ptr__ (wrong)
                DataType dt = p[1].equals("float") ? FloatDataType.dataType
                            : p[1].equals("float10") ? Float10DataType.dataType
                            : p[1].equals("void") ? VoidDataType.dataType : Undefined4DataType.dataType;
                try {
                    f.setReturnType(dt, SourceType.USER_DEFINED);
                    ok++;
                } catch (Exception e) {
                    println("failed " + p[0] + ": " + e.getMessage());
                    bad++;
                }
            }
        }
        println("return type fixes applied: " + ok + ", failed: " + bad);
    }
}
