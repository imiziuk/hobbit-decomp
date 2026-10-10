
undefined4 __thiscall FUN_00568600(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  
  piVar5 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (piVar5 != (int *)0x0) {
    pfVar6 = (float *)(**(code **)(*piVar5 + 0x28))();
    fVar1 = *(float *)(param_1 + 0x1c);
    fVar2 = pfVar6[1];
    fVar3 = *(float *)(param_1 + 0x20);
    fVar4 = pfVar6[2];
    *param_2 = *(float *)(param_1 + 0x18) + *pfVar6;
    param_2[1] = fVar1 + fVar2;
    param_2[2] = fVar3 + fVar4;
    return 1;
  }
  return 0;
}

