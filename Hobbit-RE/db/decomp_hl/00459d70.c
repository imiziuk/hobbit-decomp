
void __fastcall FUN_00459d70(int param_1)

{
  int iVar1;
  
  FUN_004ac540();
  iVar1 = FUN_00659e10(*(undefined4 *)(param_1 + 0x130));
  if (iVar1 == 0) {
    iVar1 = FUN_00659e70(*(undefined4 *)(param_1 + 0x130));
    if (iVar1 == 0) goto LAB_00459db5;
  }
  FUN_00659c80(*(undefined4 *)(param_1 + 0x130),0);
LAB_00459db5:
  *(undefined4 *)(param_1 + 0x130) = 0;
  return;
}

