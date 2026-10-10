
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041b580(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 fVar9;
  float10 extraout_ST1;
  undefined4 uVar10;
  int local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_a4;
  int local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_38 = 0;
  local_48 = 0;
  local_68 = 0;
  local_34 = 0;
  local_54 = 0;
  local_64 = 0;
  local_40 = 0;
  local_50 = 0;
  local_60 = 0;
  local_6c = 0x3f800000;
  local_58 = 0x3f800000;
  local_44 = 0x3f800000;
  local_30 = 0x3f800000;
  FUN_0066c3a0(7,0xa6);
  FUN_0066d9c0(&local_6c);
  iVar8 = 0;
  FUN_0066db80(param_2,0);
  FUN_0065fce0(0);
  FUN_00672330(&local_7c);
  local_7c = local_7c * _DAT_006e97e8;
  local_78 = local_78 * _DAT_006e97e8;
  local_74 = local_74 * _DAT_006e97e8;
  iVar4 = FUN_0041ba80();
  if (0 < *(int *)(iVar4 + 0x4c)) {
    local_a0 = 0;
    local_a4 = 0;
    do {
      iVar4 = FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      iVar4 = (int)*(short *)(*(int *)(iVar4 + 0x50) + 2 + local_a4);
      if (iVar4 == -1) {
        pfVar5 = (float *)FUN_0041bab0(iVar8);
        local_9c = *pfVar5;
        local_98 = pfVar5[1];
        local_94 = pfVar5[2];
        local_90 = local_9c;
        local_8c = local_98;
        local_88 = local_94;
      }
      else {
        pfVar5 = (float *)FUN_0041bab0(iVar4);
        local_9c = *pfVar5;
        local_98 = pfVar5[1];
        local_94 = pfVar5[2];
        if (*(int *)(param_1 + 0x590) != 0) {
          FUN_005423d0();
        }
        pfVar5 = (float *)(*(int *)(param_1 + 0x594) + local_a0);
        local_90 = *pfVar5;
        local_8c = pfVar5[1];
        local_88 = pfVar5[2];
      }
      FUN_00401f00(local_90 - local_9c,local_8c - local_98,local_88 - local_94);
      fVar1 = SQRT(local_b0 * local_b0 + local_a8 * local_a8 + local_ac * local_ac);
      local_80 = _DAT_006e95a8 * fVar1;
      if (DAT_006e92e8 < local_80 != (NAN(DAT_006e92e8) || NAN(local_80))) {
        local_80 = 1.0;
      }
      if (fVar1 < DAT_006e92e4 == (fVar1 == DAT_006e92e4)) {
        iVar4 = __ftol();
        fVar1 = (float)(extraout_ST0 / (float10)iVar4);
        fVar2 = (float)((float10)DAT_006e92e8 / extraout_ST1);
        local_84 = iVar4;
        iVar6 = FUN_0064cf30(fVar2);
        if (iVar6 == 0) {
          local_a8 = 0.0;
          local_b0 = DAT_006e92e4;
          local_ac = DAT_006e92e4;
        }
        else {
          local_a8 = local_a8 * fVar2;
          local_b0 = fVar2 * local_b0;
          local_ac = local_ac * fVar2;
        }
        local_b0 = local_b0 * fVar1;
        local_ac = local_ac * fVar1;
        local_a8 = local_a8 * fVar1;
        fVar9 = (float10)FUN_00557bb0();
        local_b4 = 0;
        local_70 = (float)(fVar9 * (float10)_DAT_006e97d8);
        if (0 < iVar4) {
          do {
            FUN_0064c800((float)(local_b4 + iVar8) * _DAT_006e97dc + local_70);
            uVar3 = __ftol();
            uVar10 = CONCAT31(CONCAT21(CONCAT11(uVar3,param_4._2_1_),param_4._1_1_),
                              (undefined1)param_4);
            uVar7 = FUN_0041b9c0(_DAT_006e97ec * local_80,_DAT_006e97ec * local_80);
            uVar7 = FUN_00402160(local_24,&local_b0,(float)local_b4,&local_7c,uVar7,uVar10);
            uVar7 = FUN_00402130(local_c,&local_9c,uVar7);
            uVar7 = FUN_00402130(local_18,uVar7);
            FUN_0066e5a0(uVar7);
            local_b4 = local_b4 + 1;
          } while (local_b4 < local_84);
        }
      }
      local_a0 = local_a0 + 0xc;
      local_a4 = local_a4 + 0x80;
      iVar8 = iVar8 + 1;
      iVar4 = FUN_0041ba80();
    } while (iVar8 < *(int *)(iVar4 + 0x4c));
  }
  FUN_0066d9a0();
  return;
}

