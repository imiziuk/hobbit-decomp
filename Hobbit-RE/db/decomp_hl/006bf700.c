
void __thiscall FUN_006bf700(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = DAT_006e92e8 / (*(float *)(param_2 + 0x18) - *(float *)(param_2 + 0x14));
  fVar1 = *(float *)(param_2 + 0x14);
  *(int *)(param_1 + 4) = param_2;
  fVar1 = -(fVar2 * fVar1);
  *(float *)(param_1 + 8) = fVar2;
  FUN_0064c330(fVar1);
  iVar3 = __ftol();
  *(int *)(param_1 + 0xc) = iVar3;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(float *)(param_1 + 0x10) = fVar1 - (float)iVar3;
  return;
}

