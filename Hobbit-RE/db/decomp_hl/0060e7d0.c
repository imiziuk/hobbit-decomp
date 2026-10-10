
void __thiscall FUN_0060e7d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  FUN_005af120();
  fVar3 = (float10)FUN_005aaac0();
  if (fVar3 < (float10)*(float *)(param_1 + 0xc) !=
      (NAN(fVar3) || NAN((float10)*(float *)(param_1 + 0xc)))) {
    iVar1 = FUN_005af780(2);
    uVar2 = 2;
    if (iVar1 != 0) goto LAB_0060e807;
  }
  uVar2 = param_2;
LAB_0060e807:
  FUN_005bec70(uVar2);
  return;
}

