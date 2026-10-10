
void __thiscall FUN_005a4110(int param_1,undefined4 param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_00649600(s_collmesh__GetTriVertsAndBBox_0074423c);
  iVar2 = FUN_005a40b0(param_2,0);
  iVar1 = *(int *)(param_1 + 0x90) + iVar2 * 6;
  *param_3 = (float)*(ushort *)(*(int *)(param_1 + 0x90) + iVar2 * 6) * *(float *)(param_1 + 0x30) +
             *(float *)(param_1 + 0x24);
  param_3[1] = (float)*(ushort *)(iVar1 + 2) * *(float *)(param_1 + 0x34) +
               *(float *)(param_1 + 0x28);
  param_3[2] = (float)*(ushort *)(iVar1 + 4) * *(float *)(param_1 + 0x38) +
               *(float *)(param_1 + 0x2c);
  iVar2 = FUN_005a40b0(param_2,1);
  iVar1 = *(int *)(param_1 + 0x90) + iVar2 * 6;
  param_3[3] = (float)*(ushort *)(*(int *)(param_1 + 0x90) + iVar2 * 6) * *(float *)(param_1 + 0x30)
               + *(float *)(param_1 + 0x24);
  param_3[4] = (float)*(ushort *)(iVar1 + 2) * *(float *)(param_1 + 0x34) +
               *(float *)(param_1 + 0x28);
  param_3[5] = (float)*(ushort *)(iVar1 + 4) * *(float *)(param_1 + 0x38) +
               *(float *)(param_1 + 0x2c);
  iVar2 = FUN_005a40b0(param_2,2);
  iVar1 = *(int *)(param_1 + 0x90) + iVar2 * 6;
  param_3[6] = (float)*(ushort *)(*(int *)(param_1 + 0x90) + iVar2 * 6) * *(float *)(param_1 + 0x30)
               + *(float *)(param_1 + 0x24);
  param_3[7] = (float)*(ushort *)(iVar1 + 2) * *(float *)(param_1 + 0x34) +
               *(float *)(param_1 + 0x28);
  param_3[8] = (float)*(ushort *)(iVar1 + 4) * *(float *)(param_1 + 0x38) +
               *(float *)(param_1 + 0x2c);
  *param_4 = *param_3;
  param_4[1] = param_3[1];
  param_4[2] = param_3[2];
  param_4[3] = *param_3;
  param_4[4] = param_3[1];
  param_4[5] = param_3[2];
  if (param_3[3] < *param_4 != (NAN(param_3[3]) || NAN(*param_4))) {
    *param_4 = param_3[3];
  }
  if (param_3[4] < param_4[1] != (NAN(param_3[4]) || NAN(param_4[1]))) {
    param_4[1] = param_3[4];
  }
  if (param_3[5] < param_4[2] != (NAN(param_3[5]) || NAN(param_4[2]))) {
    param_4[2] = param_3[5];
  }
  if (param_4[3] < param_3[3]) {
    param_4[3] = param_3[3];
  }
  if (param_4[4] < param_3[4]) {
    param_4[4] = param_3[4];
  }
  if (param_4[5] < param_3[5]) {
    param_4[5] = param_3[5];
  }
  if (param_3[6] < *param_4 != (NAN(param_3[6]) || NAN(*param_4))) {
    *param_4 = param_3[6];
  }
  if (param_3[7] < param_4[1] != (NAN(param_3[7]) || NAN(param_4[1]))) {
    param_4[1] = param_3[7];
  }
  if (param_3[8] < param_4[2] != (NAN(param_3[8]) || NAN(param_4[2]))) {
    param_4[2] = param_3[8];
  }
  if (param_4[3] < param_3[6]) {
    param_4[3] = param_3[6];
  }
  if (param_4[4] < param_3[7]) {
    param_4[4] = param_3[7];
  }
  if (param_4[5] < param_3[8]) {
    param_4[5] = param_3[8];
  }
  FUN_00649720();
  return;
}

