
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a69a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_0041bcc0();
  iVar2 = (**(code **)(*piVar1 + 0x108))(1);
  if (iVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1[2],param_1[3],(param_1[0x9a] << 4) >> 0x1f);
    uVar3 = FUN_004a4150(uVar3);
    FUN_004b2a60(uVar3);
  }
  iVar2 = FUN_004a2340();
  if (iVar2 != 0) {
    param_1[0x11e] = param_1[0x11e] & 0xffffffdf;
    FUN_004f8a50(0xffffffff,5,0);
  }
  iVar2 = (**(code **)(*param_1 + 0x28))();
  if (_DAT_006ede84 < *(float *)(iVar2 + 4) - _DAT_006ede90) {
    (**(code **)(*param_1 + 0x14))(&stack0xfffffff0,0);
  }
  param_1[0x9a] = param_1[0x9a] | 0x20000;
  FUN_005af7a0();
  (**(code **)(*param_1 + 0x154))();
  FUN_00542580();
  return;
}

