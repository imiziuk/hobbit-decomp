
void __thiscall FUN_00523e00(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x5b] == 0) goto LAB_00523e6b;
  iVar1 = FUN_006a4c80();
  if (iVar1 == 0) {
    param_1[0x5e] = 0;
    if (param_1[0x59] != 0) {
      uVar3 = 1;
LAB_00523e5a:
      FUN_006a3240(0x100,uVar3);
    }
  }
  else if (iVar1 != -1) {
    if (iVar1 != param_1[0x5c]) {
      iVar2 = FUN_0052f6a0(iVar1 + -1);
      param_1[0x5e] = iVar2;
    }
    if (param_1[0x59] != 0) {
      uVar3 = 0;
      goto LAB_00523e5a;
    }
  }
  param_1[0x5c] = iVar1;
LAB_00523e6b:
  FUN_0052f5f0(param_3);
  iVar1 = FUN_0052f690();
  if (iVar1 == 0) {
    if (param_1[0x57] != 0) {
      FUN_006a3240(0x100,0);
    }
    if (param_1[0x5a] != 0) {
      FUN_006a3240(0x100,0);
    }
    if (param_1[0x58] != 0) {
      FUN_006a3240();
      return;
    }
  }
  else {
    if (iVar1 == 4) {
      FUN_006a16c0(DAT_00813038,1);
      FUN_0052d740();
      return;
    }
    if (iVar1 == 5) {
      (**(code **)(*param_1 + 0x8c))();
      FUN_0052e160(0);
    }
  }
  return;
}

