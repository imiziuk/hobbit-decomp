
undefined4 __thiscall FUN_00569630(int param_1,float *param_2)

{
  int *piVar1;
  float *pfVar2;
  
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (piVar1 != (int *)0x0) {
    pfVar2 = (float *)(**(code **)(*piVar1 + 0x28))();
    *param_2 = *pfVar2;
    param_2[1] = pfVar2[1];
    param_2[2] = pfVar2[2];
    *param_2 = *(float *)(param_1 + 0x48) + *param_2;
    param_2[1] = *(float *)(param_1 + 0x4c) + param_2[1];
    param_2[2] = *(float *)(param_1 + 0x50) + param_2[2];
    return 1;
  }
  return 0;
}

