
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0044f0c0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar4 = 0;
  local_28 = 0;
  local_2c = 3.4028235e+38;
  if (0 < *(int *)(param_1 + 0xac)) {
    do {
      iVar1 = iVar4 * 8;
      iVar3 = FUN_004021c0(*(undefined4 *)(iVar1 + *(int *)(param_1 + 0xb0)),
                           *(undefined4 *)(iVar1 + 4 + *(int *)(param_1 + 0xb0)));
      FUN_00401f00(*(float *)(iVar3 + 0x44) + *(float *)(iVar3 + 0x50),
                   *(float *)(iVar3 + 0x54) + *(float *)(iVar3 + 0x48),
                   *(float *)(iVar3 + 0x58) + *(float *)(iVar3 + 0x4c));
      FUN_00401f00(local_c * _DAT_006e936c,local_8 * _DAT_006e936c,local_4 * _DAT_006e936c);
      fVar2 = (local_24 - *param_2) * (local_24 - *param_2) +
              (local_20 - param_2[1]) * (local_20 - param_2[1]) +
              (local_1c - param_2[2]) * (local_1c - param_2[2]);
      if (fVar2 < local_2c != (NAN(fVar2) || NAN(local_2c))) {
        local_18 = local_24;
        local_28 = *(int *)(param_1 + 0xb0) + iVar1;
        local_14 = local_20;
        local_10 = local_1c;
        local_2c = fVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xac));
  }
  *param_3 = local_18;
  param_3[1] = local_14;
  param_3[2] = local_10;
  return local_28;
}

