
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00449e80(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined1 *puVar4;
  float *pfVar5;
  float10 fVar6;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_24 [24];
  undefined1 local_c [12];
  
  iVar3 = *(int *)(param_1 + 0x3a50);
  iVar1 = *(int *)(param_1 + 0x3a54);
  if (((iVar3 != 0 || iVar1 != 0) &&
      (((iVar3 != *(int *)(param_1 + 0x4670) || (iVar1 != *(int *)(param_1 + 0x4674))) ||
       (*(float *)(param_1 + 0x466c) <= DAT_006e92e4)))) &&
     ((iVar3 = FUN_004021c0(iVar3,iVar1), iVar3 != 0 && (iVar3 = FUN_004caff0(), iVar3 != 0)))) {
    local_3c = DAT_0075c814;
    local_38 = DAT_0075c818;
    local_44 = 3.4028235e+38;
    local_34 = DAT_0075c81c;
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x474),&local_40,&local_48);
    iVar3 = 0;
    fVar2 = local_3c * local_40;
    local_3c = local_48 * local_3c + local_34 * local_40 + *(float *)(param_1 + 0x14);
    local_38 = local_38 + *(float *)(param_1 + 0x18);
    local_34 = (local_34 * local_48 - fVar2) + *(float *)(param_1 + 0x1c);
    if (0 < *(int *)(param_1 + 0x4658)) {
      pfVar5 = (float *)(param_1 + 0x3a58);
      do {
        FUN_00401f00(local_3c - *pfVar5,local_38 - pfVar5[1],local_34 - pfVar5[2]);
        FUN_00405080(local_24,pfVar5 + 3,pfVar5);
        fVar6 = (float10)FUN_00402020(local_24);
        local_48 = (float)fVar6;
        if ((float10)_DAT_006e92f8 < fVar6) {
          fVar6 = (float10)FUN_00402020(local_24);
          if ((float10)local_48 < fVar6) {
            puVar4 = (undefined1 *)FUN_0042eea0(local_c,(float)((float10)local_48 / fVar6),local_24)
            ;
          }
          else {
            puVar4 = local_24;
          }
          FUN_0042ebf0(puVar4);
        }
        FUN_0042ebd0(&local_30);
        fVar2 = local_2c * local_2c + local_30 * local_30 + local_28 * local_28;
        if (fVar2 < local_44 != (NAN(fVar2) || NAN(local_44))) {
          local_44 = fVar2;
        }
        iVar3 = iVar3 + 1;
        pfVar5 = pfVar5 + 6;
      } while (iVar3 < *(int *)(param_1 + 0x4658));
    }
    if (local_44 < _DAT_007245d8 * _DAT_007245d8) {
      return 1;
    }
  }
  return 0;
}

