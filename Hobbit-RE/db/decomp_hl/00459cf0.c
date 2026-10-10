
void __thiscall FUN_00459cf0(int param_1,int param_2)

{
  int iVar1;
  
  if ((((*(byte *)(param_1 + 0x10c) & 2) == 0) || (param_2 != 0)) ||
     (*(int *)(param_1 + 0x130) == 0)) goto LAB_00459d50;
  iVar1 = FUN_00659e10(*(int *)(param_1 + 0x130));
  if (iVar1 == 0) {
    iVar1 = FUN_00659e70(*(undefined4 *)(param_1 + 0x130));
    if (iVar1 != 0) goto LAB_00459d33;
  }
  else {
LAB_00459d33:
    FUN_00659c80(*(undefined4 *)(param_1 + 0x130),0);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
LAB_00459d50:
  *(uint *)(param_1 + 0x10c) =
       (param_2 * 2 ^ *(uint *)(param_1 + 0x10c)) & 2 ^ *(uint *)(param_1 + 0x10c);
  return;
}

