
void __thiscall
FUN_004b8450(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = param_1;
  if (-1 < *(int *)(param_1 + 0x1b0)) {
    FUN_005c1ed0(*(int *)(param_1 + 0x1b0));
    iVar2 = extraout_ECX;
  }
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x3f28f5c3;
  uVar1 = param_5;
  FUN_00425250(&param_4);
  uVar1 = FUN_005c1cf0(param_2,param_3,iVar2,uVar1,uVar3,uVar4,uVar5);
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  FUN_00515fc0(1);
  return;
}

