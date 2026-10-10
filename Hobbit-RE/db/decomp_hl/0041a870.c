
void __fastcall FUN_0041a870(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x154))();
  iVar2 = FUN_00549470(uVar1);
  FUN_00549580(uVar1);
  iVar2 = *(int *)(iVar2 + 0x4c);
  param_1[0x10f] = iVar2;
  iVar3 = (DAT_007f23d8 + 0x3fU & 0xffffffc0) - DAT_007f23d8;
  iVar4 = DAT_007f23d8 + iVar3;
  DAT_007f23d8 = DAT_007f23d8 + (iVar2 * 0x40 + 0xf + iVar3 & 0xfffffff0U);
  param_1[0x1399] = iVar4;
  iVar2 = (**(code **)(*param_1 + 0x154))();
  if (*(int *)(iVar2 + 300) != 0) {
    FUN_00542230();
  }
  FUN_00648480(param_1[0x1399],*(undefined4 *)(iVar2 + 0x130),param_1[0x10f] << 6);
  param_1[0x13ad] = param_1[0x1399];
  FUN_00581420(param_1[0x1399],param_1[0x10f],0);
  return;
}

