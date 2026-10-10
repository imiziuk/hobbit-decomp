
void __thiscall FUN_00551310(int param_1,int param_2,undefined4 param_3)

{
  *(int *)(param_1 + 0x84) = param_2;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x58) == 0) {
      *(undefined4 *)(param_1 + 0x58) = 1;
    }
    FUN_005893e0(param_1 + 0x5c,*(undefined4 *)(param_1 + 0x60),param_3,1,0,0);
    return;
  }
  FUN_005893e0(param_1 + 0x5c,0,param_3,1,0,0);
  return;
}

