
void __fastcall FUN_0063aaa0(int param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    bVar2 = *(byte *)(iVar1 + 0x80);
    if (*(byte *)(param_1 + 9) < *(byte *)(iVar1 + 0x80)) {
      bVar2 = *(byte *)(param_1 + 9);
    }
    FUN_00554720(CONCAT31((int3)((uint)iVar1 >> 8),bVar2));
  }
  FUN_00581f30();
  return;
}

