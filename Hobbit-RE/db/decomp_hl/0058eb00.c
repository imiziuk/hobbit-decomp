
void __fastcall FUN_0058eb00(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    if ((*(uint *)(param_1 + 0x380) & 1 << ((byte)iVar1 & 0x1f)) != 0) {
      FUN_0058e6f0(iVar1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  return;
}

