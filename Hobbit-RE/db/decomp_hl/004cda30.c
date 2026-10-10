
void __thiscall FUN_004cda30(int param_1,undefined4 *param_2,undefined4 param_3)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 0x164) = *param_2;
  *(undefined4 *)(param_1 + 0x168) = param_2[1];
  *(undefined4 *)(param_1 + 0x16c) = param_2[2];
  *(undefined4 *)(param_1 + 0x170) = param_3;
  fVar1 = (float10)FUN_00557bb0();
  *(float *)(param_1 + 0x174) = (float)fVar1;
  DAT_0075dad8 = *(undefined4 *)(param_1 + 8);
  DAT_0075dadc = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x160) = 1;
  FUN_0052d960();
  return;
}

