
undefined4 __thiscall FUN_00532230(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  DAT_00736e78 = 0;
  FUN_005321f0();
  if (((*(int *)(param_1 + 0x140) != param_2) || (*(int *)(param_1 + 0x60) != param_2)) ||
     (*(int *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1) == 0)) {
    uVar1 = FUN_00532500(param_2,param_3);
    *(undefined4 *)(param_1 + 0x140) = uVar1;
    *(undefined4 *)(param_1 + 0x1b4) = 1;
    FUN_00532700();
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  return *(undefined4 *)(param_1 + 0x140);
}

