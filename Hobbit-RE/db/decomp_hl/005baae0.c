
void __fastcall FUN_005baae0(int param_1)

{
  int iVar1;
  float *pfVar2;
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
  
  iVar1 = FUN_0041bcc0();
  local_30 = *(float *)(iVar1 + 0x44);
  local_2c = *(float *)(iVar1 + 0x48);
  local_28 = *(float *)(iVar1 + 0x4c);
  local_24 = *(float *)(iVar1 + 0x50);
  local_20 = *(float *)(iVar1 + 0x54);
  local_1c = *(float *)(iVar1 + 0x58);
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
    if (iVar1 != 0) {
      pfVar2 = (float *)FUN_005c0150();
      local_14 = pfVar2[1];
      local_10 = pfVar2[2];
      local_8 = pfVar2[4];
      local_4 = pfVar2[5];
      if ((((local_30 <= pfVar2[3]) && (local_24 < *pfVar2 == (NAN(local_24) || NAN(*pfVar2)))) &&
          (local_28 <= local_4)) &&
         (((local_1c < local_10 == (NAN(local_1c) || NAN(local_10)) && (local_2c <= local_8)) &&
          (local_20 < local_14 == (NAN(local_20) || NAN(local_14)))))) {
        *(undefined4 *)(param_1 + 100) = 0x43480000;
      }
    }
    iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    if (iVar1 != 0) {
      pfVar2 = (float *)FUN_005c0150();
      local_18 = *pfVar2;
      local_14 = pfVar2[1];
      local_10 = pfVar2[2];
      FUN_004357e0(pfVar2 + 3);
      if (((local_30 <= local_c) && (local_24 < local_18 == (NAN(local_24) || NAN(local_18)))) &&
         ((local_28 <= local_4 &&
          (((local_1c < local_10 == (NAN(local_1c) || NAN(local_10)) && (local_2c <= local_8)) &&
           (local_20 < local_14 == (NAN(local_20) || NAN(local_14)))))))) {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      return;
    }
  }
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 != 0) {
    iVar1 = FUN_005c0150();
    FUN_004357e0(iVar1);
    FUN_004357e0(iVar1 + 0xc);
    iVar1 = FUN_004322c0(&local_30);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x78) = 1;
    }
  }
  return;
}

