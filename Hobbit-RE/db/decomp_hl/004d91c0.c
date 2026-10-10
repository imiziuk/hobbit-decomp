
undefined4 __thiscall FUN_004d91c0(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int *local_78;
  int *local_74;
  int *local_70;
  undefined1 local_6c [12];
  undefined1 local_60 [24];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [24];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  piVar2 = (int *)FUN_00549470(param_1 + 0xa8);
  if (piVar2 != (int *)0x0) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    pfVar4 = (float *)(piVar2 + 2);
    iVar5 = 5;
    do {
      if (*pfVar4 < local_48 != (NAN(*pfVar4) || NAN(local_48))) {
        local_48 = *pfVar4;
      }
      if (pfVar4[1] < local_44 != (NAN(pfVar4[1]) || NAN(local_44))) {
        local_44 = pfVar4[1];
      }
      if (pfVar4[2] < local_40 != (NAN(pfVar4[2]) || NAN(local_40))) {
        local_40 = pfVar4[2];
      }
      if (local_3c < *pfVar4) {
        local_3c = *pfVar4;
      }
      if (local_38 < pfVar4[1]) {
        local_38 = pfVar4[1];
      }
      if (local_34 < pfVar4[2]) {
        local_34 = pfVar4[2];
      }
      pfVar4 = pfVar4 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (local_48 < DAT_006e92e4 != (NAN(local_48) || NAN(DAT_006e92e4))) {
      local_48 = -local_48;
    }
    fVar1 = local_3c;
    if (local_3c < DAT_006e92e4 != (NAN(local_3c) || NAN(DAT_006e92e4))) {
      fVar1 = -local_3c;
    }
    if ((local_48 <= fVar1) &&
       (local_48 = local_3c, local_3c < DAT_006e92e4 != (NAN(local_3c) || NAN(DAT_006e92e4)))) {
      local_48 = -local_3c;
    }
    fVar1 = local_40;
    if (local_40 < DAT_006e92e4 != (NAN(local_40) || NAN(DAT_006e92e4))) {
      fVar1 = -local_40;
    }
    if ((local_48 <= fVar1) &&
       (local_48 = local_40, local_40 < DAT_006e92e4 != (NAN(local_40) || NAN(DAT_006e92e4)))) {
      local_48 = -local_40;
    }
    fVar1 = local_34;
    if (local_34 < DAT_006e92e4 != (NAN(local_34) || NAN(DAT_006e92e4))) {
      fVar1 = -local_34;
    }
    if ((local_48 <= fVar1) &&
       (local_48 = local_34, local_34 < DAT_006e92e4 != (NAN(local_34) || NAN(DAT_006e92e4)))) {
      local_48 = -local_34;
    }
    local_40 = -local_48;
    local_3c = local_48;
    local_48 = local_40;
    local_34 = local_3c;
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    iVar5 = 0;
    if (0 < *piVar2) {
      iVar6 = 0;
      do {
        pfVar4 = (float *)(piVar2[1] + iVar6);
        FUN_00401f00(pfVar4[1] * param_3[4] + param_3[8] * pfVar4[2] + *param_3 * *pfVar4 +
                     param_3[0xc],
                     param_3[9] * pfVar4[2] + param_3[5] * pfVar4[1] + param_3[1] * *pfVar4 +
                     param_3[0xd],
                     param_3[6] * pfVar4[1] +
                     param_3[10] * pfVar4[2] + param_3[2] * *(float *)(piVar2[1] + iVar6) +
                     param_3[0xe]);
        FUN_004357e0(&local_48);
        FUN_004357e0(&local_3c);
        FUN_0042faf0(&local_78);
        FUN_0042faf0(&local_78);
        FUN_004db7f0(local_60);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar5 < *piVar2);
    }
    uVar3 = FUN_0042ebd0(local_60);
    FUN_0042faf0(uVar3);
    FUN_0042faf0(uVar3);
    FUN_00549580(param_1 + 0xa8);
    FUN_00480f60(local_30);
    return param_2;
  }
  local_78 = piVar2;
  local_74 = piVar2;
  local_70 = piVar2;
  uVar3 = FUN_00401f00(0x42c80000,0x42c80000,0x42c80000);
  uVar3 = FUN_00405080(local_60,&local_78,uVar3);
  FUN_004357e0(uVar3);
  uVar3 = FUN_00401f00(0x42c80000,0x42c80000,0x42c80000);
  uVar3 = FUN_00402130(local_6c,&local_78,uVar3);
  FUN_004357e0(uVar3);
  FUN_004357e0(local_18);
  FUN_004357e0(local_c);
  return param_2;
}

