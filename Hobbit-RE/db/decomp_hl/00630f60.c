
undefined4 __thiscall FUN_00630f60(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(float *)(param_1 + 0x4c) <= *(float *)(param_1 + 0x48)) {
    *param_2 = 9;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x174);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x170);
    uVar3 = 1;
    FUN_005afc20(uVar1,uVar2,1);
    FUN_005c7dd0(uVar1,uVar2,uVar3);
    return 1;
  }
  return 0;
}

