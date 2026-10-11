// MSVC runtime helpers with register inputs that Ghidra does not model by default, so call sites decompile as
// `__ftol()` with the converted value missing (our C then converts whatever is left on the x87 stack):
//   __ftol   0x006c04c0  (float10 in ST0)            -> longlong in EDX:EAX   (truncating float->int)
//   __allshl 0x006c0920  (longlong in EDX:EAX, CL)   -> longlong in EDX:EAX
//   __aullshr 0x006c12e0 (ulonglong in EDX:EAX, CL)  -> ulonglong in EDX:EAX
//   __allshr 0x006c1670  (longlong in EDX:EAX, CL)   -> longlong in EDX:EAX
// Custom variable storage makes every call site show the inputs, e.g. `__ftol(fVar1)`.
// Usage (headless): -postScript ApplyHelperStorage.java
// @category Hobbit
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.*;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.symbol.SourceType;
import java.util.*;

public class ApplyHelperStorage extends GhidraScript {
    Register reg(String n) { return currentProgram.getRegister(n); }

    void apply(long addr, DataType ret, DataType[] types, Register[][] storage) throws Exception {
        Function f = getFunctionAt(toAddr(addr));
        if (f == null) { println("no function at " + Long.toHexString(addr)); return; }
        List<Variable> params = new ArrayList<>();
        for (int i = 0; i < types.length; i++) {
            VariableStorage vs = new VariableStorage(currentProgram, storage[i]);
            params.add(new ParameterImpl("p" + i, types[i], vs, currentProgram));
        }
        VariableStorage rs = new VariableStorage(currentProgram, reg("EDX"), reg("EAX"));
        ReturnParameterImpl rp = new ReturnParameterImpl(ret, rs, currentProgram);
        f.setCustomVariableStorage(true);
        f.updateFunction("__cdecl", rp, params, FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.USER_DEFINED);
        println("helper storage: " + f.getName() + " -> " + f.getPrototypeString(false, false));
    }

    @Override
    public void run() throws Exception {
        DataType ll = LongLongDataType.dataType, ull = UnsignedLongLongDataType.dataType;
        apply(0x006c04c0L, ll, new DataType[]{Float10DataType.dataType}, new Register[][]{{reg("ST0")}});
        apply(0x006c0920L, ll, new DataType[]{ll, ByteDataType.dataType},
              new Register[][]{{reg("EDX"), reg("EAX")}, {reg("CL")}});
        apply(0x006c12e0L, ull, new DataType[]{ull, ByteDataType.dataType},
              new Register[][]{{reg("EDX"), reg("EAX")}, {reg("CL")}});
        apply(0x006c1670L, ll, new DataType[]{ll, ByteDataType.dataType},
              new Register[][]{{reg("EDX"), reg("EAX")}, {reg("CL")}});
    }
}
