
void __thiscall FUN_006592a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __ftol();
  if (iVar1 < -0x5a) {
    iVar1 = -0x5a;
  }
  else if (0x5a < iVar1) {
    iVar1 = 0x5a;
  }
  iVar1 = (iVar1 + 0x1c2) * 0x10;
  iVar2 = iVar1 + param_1;
  *param_3 = *(undefined4 *)(iVar1 + param_1);
  param_3[1] = *(undefined4 *)(iVar2 + 4);
  param_3[2] = *(undefined4 *)(iVar2 + 8);
  param_3[3] = *(undefined4 *)(iVar2 + 0xc);
  return;
}

