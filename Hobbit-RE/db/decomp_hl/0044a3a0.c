
void __thiscall FUN_0044a3a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *(undefined4 *)(param_1 + 0x465c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4660) = 0;
  local_28 = 3.4028235e+38;
  FUN_004021c0(*(undefined4 *)(param_1 + 0x3a50),*(undefined4 *)(param_1 + 0x3a54));
  iVar2 = FUN_004c8960();
  *(int *)(param_1 + 0x4664) = iVar2;
  pfVar3 = (float *)&DAT_0075c814;
  if (iVar2 == 0) {
    pfVar3 = (float *)&DAT_0075c808;
  }
  local_24 = *pfVar3;
  local_20 = pfVar3[1];
  local_1c = pfVar3[2];
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x474),&local_2c,&local_30);
  fVar1 = local_24 * local_2c;
  local_24 = local_30 * local_24 + local_1c * local_2c + *(float *)(param_1 + 0x14);
  local_20 = local_20 + *(float *)(param_1 + 0x18);
  local_1c = (local_1c * local_30 - fVar1) + *(float *)(param_1 + 0x1c);
  if (0 < *(int *)(param_1 + 0x4658)) {
    iVar2 = param_1 + 0x3a58;
    iVar4 = 0;
    do {
      pfVar3 = (float *)FUN_00402040(&local_18,iVar2,iVar2 + 0xc);
      fVar1 = pfVar3[2] * pfVar3[2] + pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3;
      if (fVar1 < local_28 != (NAN(fVar1) || NAN(local_28))) {
        *(int *)(param_1 + 0x465c) = iVar4;
        local_28 = fVar1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar4 < *(int *)(param_1 + 0x4658));
  }
  iVar2 = param_1 + *(int *)(param_1 + 0x465c) * 0x18;
  pfVar3 = (float *)FUN_00402040(&local_18,iVar2 + 0x3a58,iVar2 + 0x3a64);
  FUN_00401f00(local_24 + *pfVar3,local_20 + pfVar3[1],local_1c + pfVar3[2]);
  local_c = local_c - *(float *)(param_1 + 0x3a58 + *(int *)(param_1 + 0x465c) * 0x18);
  iVar2 = param_1 + *(int *)(param_1 + 0x465c) * 0x18;
  local_8 = local_8 - *(float *)(iVar2 + 0x3a5c);
  local_4 = local_4 - *(float *)(iVar2 + 0x3a60);
  local_18 = *(float *)(iVar2 + 0x3a64) - *(float *)(iVar2 + 0x3a58);
  local_14 = *(float *)(iVar2 + 0x3a68) - *(float *)(iVar2 + 0x3a5c);
  local_10 = *(float *)(iVar2 + 0x3a6c) - *(float *)(iVar2 + 0x3a60);
  *(float *)(param_1 + 0x4660) =
       SQRT(local_c * local_c + local_8 * local_8 + local_4 * local_4) /
       SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_1 + 0x474);
  *param_3 = *(undefined4 *)(param_1 + 0x474);
  FUN_0044a0b0(param_2,param_3);
  return;
}

