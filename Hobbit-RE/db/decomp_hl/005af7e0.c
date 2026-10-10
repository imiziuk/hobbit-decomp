
bool __fastcall FUN_005af7e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c));
  if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 4) & 0x50) != 0)) {
    iVar2 = (**(code **)(*piVar1 + 0x108))(1);
    return iVar2 == 0;
  }
  return true;
}

