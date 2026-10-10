
float * __thiscall FUN_0056fe40(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_camera_mgr__GetLookAhead_0073f970);
  local_1c = DAT_006e92e4;
  local_4 = 0;
  local_24 = 0.0;
  if ((*(byte *)(param_1 + 0x484) & 6) == 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x730) + 0xc0);
    local_1c = (*(float *)(param_1 + 0x4b0) - *(float *)(param_1 + 0x4cc)) * fVar1 *
               (DAT_006e92e8 / param_3);
    local_24 = (*(float *)(param_1 + 0x4a8) - *(float *)(param_1 + 0x4c4)) * fVar1 *
               (DAT_006e92e8 / param_3);
  }
  local_20 = 0.0;
  fVar1 = SQRT(local_24 * local_24 + local_1c * local_1c);
  if (*(float *)(*(int *)(param_1 + 0x730) + 0xb4) < fVar1) {
    local_10 = local_1c + *(float *)(param_1 + 0x4b0);
    local_14 = *(undefined4 *)(param_1 + 0x4ac);
    local_18 = local_24 + *(float *)(param_1 + 0x4a8);
    FUN_005795c0(*(undefined4 *)(param_1 + 0x688),*(undefined4 *)(param_1 + 0x68c),
                 (float *)(param_1 + 0x4a8),&local_18,
                 *(undefined4 *)(*(int *)(param_1 + 0x730) + 0xc4),3);
    FUN_005798f0(1);
    iVar3 = FUN_00577e70();
    if (iVar3 != 0) {
      fVar2 = DAT_007734f0 * fVar1;
      if (DAT_007734f0 * fVar1 < DAT_006e92e4) {
        fVar2 = DAT_006e92e4;
      }
      fVar2 = fVar2 / fVar1;
      local_24 = local_24 * fVar2;
      local_20 = DAT_006e92e4 * fVar2;
      local_1c = fVar2 * local_1c;
    }
  }
  *param_2 = local_24;
  param_2[2] = local_1c;
  param_2[1] = local_20;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return param_2;
}

