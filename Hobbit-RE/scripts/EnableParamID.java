// Pre-script: enables "Decompiler Parameter ID" so auto-analysis commits decompiler-derived
// prototypes (incl. thiscall 'this') to every function; then exported C has consistent call sites.
// @category Hobbit
import ghidra.app.script.GhidraScript;

public class EnableParamID extends GhidraScript {
    @Override
    public void run() throws Exception {
        setAnalysisOption(currentProgram, "Decompiler Parameter ID", "true");
        println("Decompiler Parameter ID enabled");
    }
}
