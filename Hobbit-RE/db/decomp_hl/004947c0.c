
void __thiscall FUN_004947c0(int param_1,float param_2)

{
  float fVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 < DAT_006e92e8) {
    param_2 = DAT_006e92e8;
  }
  *(float *)(param_1 + 0xe4) = param_2;
  fVar1 = -param_2;
  FUN_00401f00(param_2,param_2,param_2);
  *(float *)(param_1 + 0x2c) = fVar1;
  *(float *)(param_1 + 0x30) = fVar1;
  *(float *)(param_1 + 0x34) = fVar1;
  *(undefined4 *)(param_1 + 0x38) = local_c;
  *(undefined4 *)(param_1 + 0x3c) = local_8;
  *(undefined4 *)(param_1 + 0x40) = local_4;
  *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) | 0x10;
  return;
}

