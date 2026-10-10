"""Hex-dump bytes at virtual addresses in a PE file. Usage: peek.py exe VA [VA...] [-n N]"""
import struct, sys
args = sys.argv[1:]; n = 24
if "-n" in args: i = args.index("-n"); n = int(args[i+1]); del args[i:i+2]
d = open(args[0], "rb").read()
pe = struct.unpack_from("<I", d, 0x3c)[0]
nsec = struct.unpack_from("<H", d, pe+6)[0]; opt = struct.unpack_from("<H", d, pe+20)[0]
base = struct.unpack_from("<I", d, pe+24+28)[0]; sec = pe+24+opt
secs = [struct.unpack_from("<8sIIII", d, sec+40*k) for k in range(nsec)]
for va in args[1:]:
    rva = int(va, 16) - base
    for name, vsz, vaddr, rsz, raw in secs:
        if vaddr <= rva < vaddr + max(vsz, rsz):
            off = raw + rva - vaddr; print(va, d[off:off+n].hex(" ")); break
