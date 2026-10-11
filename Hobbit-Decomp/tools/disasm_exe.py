"""Disassemble Meridian.exe: python tools/dis.py <start_hex> <end_hex>"""
import os, sys, capstone, pefile
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
pe = pefile.PE(os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "Meridian.exe"), fast_load=True)
a, b = int(sys.argv[1], 16), int(sys.argv[2], 16)
data = pe.get_data(a - pe.OPTIONAL_HEADER.ImageBase, b - a)
for i in capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32).disasm(data, a):
    print(f"{i.address:08X}  {i.mnemonic} {i.op_str}")
