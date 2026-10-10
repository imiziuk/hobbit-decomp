
undefined4 __thiscall
FUN_0050b5c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  uVar1 = FUN_00508220(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(int *)(param_1 + 0x160) != 0) {
    iVar2 = FUN_006a22a0(300);
    iVar3 = FUN_006a2260(0);
    uVar1 = FUN_006a22a0(300);
    uStack_10 = FUN_006a2260(0);
    uStack_c = uVar1;
    iStack_8 = iVar3 + 0x26c;
    iStack_4 = iVar2 + 0x1e;
    (**(code **)(**(int **)(param_1 + 0x160) + 0xc))(&uStack_10);
    uVar1 = param_7;
  }
  return uVar1;
}

