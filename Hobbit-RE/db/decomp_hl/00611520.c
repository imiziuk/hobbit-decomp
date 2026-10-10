
void __thiscall FUN_00611520(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x42) == 5) {
    FUN_005af120();
    iVar1 = FUN_004a9920();
    if (iVar1 != 0) {
      FUN_005af120();
      FUN_004a9910();
      FUN_005be370(param_2,6);
      return;
    }
    uVar2 = 5;
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) goto LAB_006115af;
  }
  else {
    if (*(short *)(param_1 + 0x42) != 6) {
      FUN_005be370(param_2,5);
      return;
    }
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      FUN_005be370(param_2,5);
      return;
    }
  }
  uVar2 = param_3;
LAB_006115af:
  FUN_005be370(param_2,uVar2);
  return;
}

