
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00587fc0(void)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float10 fVar9;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcaa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  if (DAT_0076f1dc != 0) {
    iVar3 = FUN_00549470();
    iVar4 = FUN_00549470();
    if (((iVar3 != 0) && (iVar4 != 0)) && (iVar5 = FUN_0065f190(), iVar5 != 0)) {
      FUN_00587d00();
      FUN_00553770();
      FUN_0066c3a0();
      FUN_0066dac0();
      FUN_0066db80(iVar3,0);
      _DAT_0076f658 = 1;
      DAT_0076f654 = DAT_0076f1d8;
      fVar9 = (float10)FUN_00557bb0();
      local_5c = (float)fVar9;
      FUN_0065fce0();
      while ((iVar5 = DAT_0076f654, iVar3 = DAT_0076f654, DAT_0076f654 != 0 &&
             (iVar3 = *(int *)(DAT_0076f654 + 100), DAT_0076f654 != 0))) {
        pbVar1 = (byte *)(DAT_0076f654 + 0x16f);
        DAT_0076f654 = iVar3;
        if (((*pbVar1 & 4) != 0) && (iVar3 = FUN_004b1070(), iVar3 == 0)) {
          local_74 = *(float *)(iVar5 + 0x44);
          local_70 = *(float *)(iVar5 + 0x48);
          local_6c = *(float *)(iVar5 + 0x4c);
          FUN_004357e0();
          fVar9 = (float10)FUN_004b37a0();
          FUN_00401f00(local_68 + local_74);
          FUN_00402160(&local_4c);
          local_7c = local_48 + (float)fVar9;
          local_78 = local_44;
          local_80 = local_4c;
          pfVar6 = (float *)FUN_00672260();
          local_94 = local_80 - *pfVar6;
          local_90 = local_7c - pfVar6[1];
          local_8c = local_78 - pfVar6[2];
          fVar2 = DAT_006e92e8 /
                  SQRT(local_94 * local_94 + local_90 * local_90 + local_8c * local_8c);
          iVar3 = FUN_0064cf30();
          if (iVar3 == 0) {
            local_94 = 0.0;
            local_90 = 0.0;
            local_8c = 0.0;
          }
          else {
            local_94 = local_94 * fVar2;
            local_90 = local_90 * fVar2;
            local_8c = local_8c * fVar2;
          }
          FUN_00405080(&local_58);
          local_84 = local_58;
          if (local_58 < DAT_006e92e4 != (NAN(local_58) || NAN(DAT_006e92e4))) {
            local_84 = -local_58;
          }
          fVar2 = _DAT_006f4060 * local_84;
          local_80 = local_94 * fVar2 + local_80;
          local_7c = local_90 * fVar2 + local_7c;
          local_78 = local_8c * fVar2 + local_78;
          local_88 = _DAT_00777a04 * local_84;
          local_84 = _DAT_00777a08 * local_84;
          fVar2 = DAT_007779d8;
          if (local_88 < DAT_007779d8 != (NAN(local_88) || NAN(DAT_007779d8))) {
            fVar2 = local_88;
          }
          if (DAT_007779e0 <= fVar2) {
            if (local_88 < DAT_007779d8 == (NAN(local_88) || NAN(DAT_007779d8))) {
              local_88 = DAT_007779d8;
            }
          }
          else {
            local_88 = DAT_007779e0;
          }
          fVar2 = DAT_007779dc;
          if (local_84 < DAT_007779dc != (NAN(local_84) || NAN(DAT_007779dc))) {
            fVar2 = local_84;
          }
          if (DAT_007779e4 <= fVar2) {
            if (local_84 < DAT_007779dc == (NAN(local_84) || NAN(DAT_007779dc))) {
              local_84 = DAT_007779dc;
            }
          }
          else {
            local_84 = DAT_007779e4;
          }
          FUN_00425250(&DAT_00777a00);
          uVar7 = FUN_0041b9c0(0x3f800000,0x3f800000);
          uVar8 = FUN_0041b9c0(0,0);
          FUN_0066e740(&local_80,&local_88,uVar8,uVar7);
        }
      }
      DAT_0076f654 = iVar3;
      FUN_0066d9a0();
      _DAT_0076f658 = 0;
      DAT_0076f654 = 0;
      FUN_0066c3a0();
      FUN_0066db80(iVar4,0);
      _DAT_0076f658 = 1;
      DAT_0076f654 = DAT_0076f1d8;
      fVar9 = (float10)FUN_00557bb0();
      local_5c = (float)fVar9;
      while ((iVar4 = DAT_0076f654, iVar3 = DAT_0076f654, DAT_0076f654 != 0 &&
             (iVar3 = *(int *)(DAT_0076f654 + 100), DAT_0076f654 != 0))) {
        pbVar1 = (byte *)(DAT_0076f654 + 0x16f);
        DAT_0076f654 = iVar3;
        if (((*pbVar1 & 4) != 0) && (iVar3 = FUN_004b1070(), iVar3 == 0)) {
          local_74 = *(float *)(iVar4 + 0x44);
          local_70 = *(float *)(iVar4 + 0x48);
          local_6c = *(float *)(iVar4 + 0x4c);
          FUN_004357e0();
          fVar9 = (float10)FUN_004b37a0();
          FUN_00401f00(local_68 + local_74);
          FUN_00402160(&local_58);
          local_7c = local_54 + (float)fVar9;
          local_80 = local_58;
          local_78 = local_50;
          pfVar6 = (float *)FUN_00672260();
          local_94 = local_80 - *pfVar6;
          local_90 = local_7c - pfVar6[1];
          fVar2 = local_78 - pfVar6[2];
          local_8c = DAT_006e92e8 / SQRT(local_94 * local_94 + local_90 * local_90 + fVar2 * fVar2);
          iVar3 = FUN_0064cf30();
          if (iVar3 == 0) {
            local_94 = 0.0;
            local_90 = 0.0;
            local_8c = 0.0;
          }
          else {
            local_94 = local_8c * local_94;
            local_90 = local_8c * local_90;
            local_8c = local_8c * fVar2;
          }
          local_4c = local_68 - local_74;
          local_48 = local_64 - local_70;
          local_84 = local_60 - local_6c;
          if (local_94 <= local_90) {
            if (local_8c < local_90) {
              local_84 = local_48;
            }
          }
          else if (local_8c < local_94) {
            local_84 = local_4c;
          }
          fVar2 = _DAT_006f4064 * local_84;
          local_80 = local_80 + local_94 * fVar2;
          local_7c = fVar2 * local_90 + local_7c;
          local_78 = local_78 + fVar2 * local_8c;
          local_88 = _DAT_00777a04 * local_84;
          local_84 = local_84 * _DAT_00777a08;
          fVar2 = DAT_007779d8;
          if (local_88 < DAT_007779d8 != (NAN(local_88) || NAN(DAT_007779d8))) {
            fVar2 = local_88;
          }
          if (DAT_007779e0 <= fVar2) {
            if (local_88 < DAT_007779d8 == (NAN(local_88) || NAN(DAT_007779d8))) {
              local_88 = DAT_007779d8;
            }
          }
          else {
            local_88 = DAT_007779e0;
          }
          fVar2 = DAT_007779dc;
          if (local_84 < DAT_007779dc != (NAN(local_84) || NAN(DAT_007779dc))) {
            fVar2 = local_84;
          }
          if (DAT_007779e4 <= fVar2) {
            if (local_84 < DAT_007779dc == (NAN(local_84) || NAN(DAT_007779dc))) {
              local_84 = DAT_007779dc;
            }
          }
          else {
            local_84 = DAT_007779e4;
          }
          FUN_00425250(&DAT_00777a00);
          uVar7 = FUN_0041b9c0(0x3f800000,0x3f800000);
          uVar8 = FUN_0041b9c0(0,0);
          FUN_0066e740(&local_80,&local_88,uVar8,uVar7);
        }
      }
      DAT_0076f654 = iVar3;
      FUN_0066d9a0();
      FUN_0065f430();
      _DAT_0076f658 = 0;
      DAT_0076f654 = 0;
      FUN_00587d00();
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

