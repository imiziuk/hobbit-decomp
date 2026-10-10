
void __thiscall FUN_0061f5e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_005af000();
  if (iVar1 == 0) {
    FUN_005af120();
    fVar3 = (float10)FUN_005aaac0();
    if (fVar3 <= (float10)*(float *)(param_1 + 0x6c)) {
      iVar1 = FUN_005af7e0();
      if (iVar1 == 0) goto LAB_0061f624;
    }
    uVar2 = 1;
    if (*(short *)(param_1 + 0x42) == 6) goto LAB_0061f628;
  }
LAB_0061f624:
  uVar2 = param_2;
LAB_0061f628:
  FUN_005bec70(uVar2);
  return;
}

