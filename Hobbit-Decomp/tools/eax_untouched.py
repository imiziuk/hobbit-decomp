"""Original functions that never write EAX and never call out: their caller's EAX survives the call, and some
original callers rely on that (like ECX in SetRange/SetCount). For these the thunk restores the caller's EAX
(Ret::Void); every other void-typed unit gets Ret::VoidPass (our EAX goes back, e.g. pass-through returns).
Output: auto/eax_untouched.txt.  Usage: tools/.venv/Scripts/python tools/eax_untouched.py"""
import os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from x86scan import ROOT, touches_eax
units = [l.split("\t")[0] for l in open(os.path.join(ROOT, "auto", "units.tsv"), encoding="utf-8")
         if l.split("\t")[2:3] == ["ok"]]
keep = [a for a in units if not touches_eax(int(a, 16))]
open(os.path.join(ROOT, "auto", "eax_untouched.txt"), "w").write("\n".join(keep) + "\n")
print(f"{len(keep)} of {len(units)} units never touch EAX (thunk restores it); the rest pass our EAX back")
