
void __fastcall FUN_005bdba0(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
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
  
  iVar3 = FUN_0041bcc0();
  local_30 = *(float *)(iVar3 + 0x44);
  local_2c = *(float *)(iVar3 + 0x48);
  local_28 = *(float *)(iVar3 + 0x4c);
  FUN_004357e0(iVar3 + 0x50);
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
    if (iVar3 != 0) {
      pfVar4 = (float *)FUN_005c0150();
      local_18 = *pfVar4;
      local_14 = pfVar4[1];
      local_10 = pfVar4[2];
      FUN_004357e0(pfVar4 + 3);
      if ((((local_30 <= local_c) && (local_24 < local_18 == (NAN(local_24) || NAN(local_18)))) &&
          (local_28 <= local_4)) &&
         (((local_1c < local_10 == (NAN(local_1c) || NAN(local_10)) && (local_2c <= local_8)) &&
          (local_20 < local_14 == (NAN(local_20) || NAN(local_14)))))) {
        *(undefined4 *)(param_1 + 0x88) = 0x43480000;
      }
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x134)) {
      do {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x138) + iVar3 * 4);
        if ((((*(byte *)(puVar2 + 4) & 2) != 0) &&
            (iVar5 = FUN_004021c0(*puVar2,puVar2[1]), iVar5 != 0)) &&
           (((pfVar4 = (float *)FUN_005c0150(), local_30 <= pfVar4[3] &&
             (((local_24 < *pfVar4 == (NAN(local_24) || NAN(*pfVar4)) && (local_28 <= pfVar4[5])) &&
              (local_1c < pfVar4[2] == (NAN(local_1c) || NAN(pfVar4[2])))))) &&
            ((local_2c <= pfVar4[4] && (local_20 < pfVar4[1] == (NAN(local_20) || NAN(pfVar4[1])))))
            ))) {
          puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x138) + iVar3 * 4) + 0x10);
          *puVar1 = *puVar1 | 0xfffffffd;
          *(int *)(param_1 + 0x14c) = iVar3;
          *(undefined4 *)(param_1 + 0x148) = 1;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x134));
    }
    iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    if (iVar3 != 0) {
      pfVar4 = (float *)FUN_005c0150();
      local_18 = *pfVar4;
      local_14 = pfVar4[1];
      local_10 = pfVar4[2];
      FUN_004357e0(pfVar4 + 3);
      if (((local_30 <= local_c) && (local_24 < local_18 == (NAN(local_24) || NAN(local_18)))) &&
         ((local_28 <= local_4 &&
          (((local_1c < local_10 == (NAN(local_1c) || NAN(local_10)) && (local_2c <= local_8)) &&
           (local_20 < local_14 == (NAN(local_20) || NAN(local_14)))))))) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      return;
    }
  }
  iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  if (iVar3 != 0) {
    iVar3 = FUN_005c0150();
    FUN_004357e0(iVar3);
    FUN_004357e0(iVar3 + 0xc);
    iVar3 = FUN_004322c0(&local_30);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xa8) = 1;
    }
  }
  return;
}

