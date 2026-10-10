
void __thiscall FUN_00430ff0(int param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x5edc) == 0) {
    *(float *)(param_1 + 0x5ee0) = *(float *)(param_1 + 0x920) + *(float *)(param_1 + 0x5ee0);
  }
  if ((DAT_006ebfec <= *(float *)(param_1 + 0x5ee0)) && (*(int *)(param_1 + 0x5edc) == 0)) {
    fVar1 = (float10)FUN_00647b30(DAT_006ebfec,DAT_006ebfec + DAT_006ebfec);
    *(float *)(param_1 + 0x5ee0) = (float)fVar1;
    FUN_00431080(param_2,param_3);
  }
  if (*(int *)(param_1 + 0x5edc) != 0) {
    FUN_00431080(param_2,param_3);
  }
  return;
}

