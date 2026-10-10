// Finds C++ vtables (arrays of code pointers in .rdata that code references) and creates
// functions at every slot target that has none yet. Prints how many it created.
// Run: Ghidra > Window > Script Manager > (add Hobbit-RE/scripts as a script dir) > run.
// @category Hobbit
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.util.*;

public class CreateVtableFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        Memory mem = currentProgram.getMemory();
        MemoryBlock rdata = mem.getBlock(".rdata");
        MemoryBlock text = mem.getBlock(".text");
        ReferenceManager refs = currentProgram.getReferenceManager();
        Set<Address> targets = new TreeSet<>();
        int vtables = 0;
        AddressIterator it = refs.getReferenceDestinationIterator(new AddressSet(rdata.getStart(), rdata.getEnd()), true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Address vt = it.next();
            boolean fromCode = false;
            for (Reference r : refs.getReferencesTo(vt)) {
                if (text.contains(r.getFromAddress())) { fromCode = true; break; }
            }
            if (!fromCode) continue;
            List<Address> slots = new ArrayList<>();
            Address a = vt;
            while (slots.size() < 300) {
                int v;
                try { v = mem.getInt(a); } catch (MemoryAccessException e) { break; }
                Address p = toAddr(v & 0xffffffffL);
                if (!text.contains(p)) break;
                if (slots.size() > 0) {
                    // stop where another code-referenced table starts
                    boolean code = false;
                    for (Reference r : refs.getReferencesTo(a)) if (text.contains(r.getFromAddress())) code = true;
                    if (code) break;
                }
                slots.add(p);
                a = a.add(4);
            }
            if (slots.size() < 3) continue;
            vtables++;
            targets.addAll(slots);
        }
        int created = 0, failed = 0;
        for (Address t : targets) {
            if (getFunctionContaining(t) != null && getFunctionAt(t) != null) continue;
            if (getFunctionAt(t) == null) {
                disassemble(t);
                CreateFunctionCmd cmd = new CreateFunctionCmd(t);
                if (cmd.applyTo(currentProgram, monitor)) created++; else failed++;
            }
        }
        println("vtables: " + vtables + ", slot targets: " + targets.size()
                + ", functions created: " + created + ", failed: " + failed);
    }
}
