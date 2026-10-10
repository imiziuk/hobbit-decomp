
void __thiscall FUN_00416c80(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = (*(float *)(param_1 + 0x50) + DAT_006e92e8) - *(float *)(param_1 + 0x2c);
  if (DAT_006e92e8 < local_8) {
    local_8 = DAT_006e92e8;
  }
  local_8 = local_8 * *(float *)(&DAT_0071f4c4 + (int)param_3 * 4);
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x44),&local_10,&param_3);
  local_c = param_3 * DAT_006e92e4 - local_10 * local_8;
  local_8 = local_10 * DAT_006e92e4 + param_3 * local_8;
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x3c),&param_3,&local_10);
  local_4 = local_10 * DAT_006e92e4 + local_8 * param_3;
  local_8 = local_10 * local_8 - param_3 * DAT_006e92e4;
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x40),&local_10,&param_3);
  fVar1 = *(float *)(param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 0x38);
  *param_2 = param_3 * local_c + local_4 * local_10 + *(float *)(param_1 + 0x30);
  param_2[1] = local_8 + fVar1;
  param_2[2] = (local_4 * param_3 - local_c * local_10) + fVar2;
  return;
}

