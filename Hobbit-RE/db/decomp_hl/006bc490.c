
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006bc490(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar1 = *(float *)(param_1 + 0x30);
  iVar12 = *(int *)(param_1 + 4);
  if (*(int *)(iVar12 + 0xa8) == 0) {
    if ((fVar1 < DAT_006e92e8 == (NAN(fVar1) || NAN(DAT_006e92e8))) ||
       (DAT_006e92e4 <= *(float *)(param_1 + 0x30))) {
      if (*(float *)(param_1 + 0x30) < DAT_006e92e8 ==
          (NAN(*(float *)(param_1 + 0x30)) || NAN(DAT_006e92e8))) {
        fStack_30 = 1.0;
      }
      else {
        fStack_30 = *(float *)(param_1 + 0x30);
      }
    }
    else {
      fStack_30 = 0.0;
    }
    if ((*(float *)(param_1 + 0x34) < DAT_006e92e8 ==
         (NAN(*(float *)(param_1 + 0x34)) || NAN(DAT_006e92e8))) ||
       (DAT_006e92e4 <= *(float *)(param_1 + 0x34))) {
      if (*(float *)(param_1 + 0x34) < DAT_006e92e8 ==
          (NAN(*(float *)(param_1 + 0x34)) || NAN(DAT_006e92e8))) {
        fStack_2c = 1.0;
      }
      else {
        fStack_2c = *(float *)(param_1 + 0x34);
      }
    }
    else {
      fStack_2c = 0.0;
    }
    if ((*(float *)(param_1 + 0x38) < DAT_006e92e8 ==
         (NAN(*(float *)(param_1 + 0x38)) || NAN(DAT_006e92e8))) ||
       (DAT_006e92e4 <= *(float *)(param_1 + 0x38))) {
      if (*(float *)(param_1 + 0x38) < DAT_006e92e8 ==
          (NAN(*(float *)(param_1 + 0x38)) || NAN(DAT_006e92e8))) {
        fStack_28 = 1.0;
      }
      else {
        fStack_28 = *(float *)(param_1 + 0x38);
      }
    }
    else {
      fStack_28 = 0.0;
    }
    if (((*(float *)(param_1 + 0x3c) < DAT_006e92e8 ==
          (NAN(*(float *)(param_1 + 0x3c)) || NAN(DAT_006e92e8))) ||
        (fStack_14 = DAT_006e92e4, DAT_006e92e4 <= *(float *)(param_1 + 0x3c))) &&
       (fStack_14 = DAT_006e92e8,
       *(float *)(param_1 + 0x3c) < DAT_006e92e8 !=
       (NAN(*(float *)(param_1 + 0x3c)) || NAN(DAT_006e92e8)))) {
      fStack_14 = *(float *)(param_1 + 0x3c);
    }
    fStack_1c = fStack_2c;
    fVar2 = (float)((uint)*(byte *)(iVar12 + 0xb2) * (uint)*(byte *)(param_1 + 0x42)) * fStack_30;
    fVar3 = (float)((uint)*(byte *)(iVar12 + 0xb1) * (uint)*(byte *)(param_1 + 0x41)) * fStack_2c;
    fVar4 = (float)((uint)*(byte *)(iVar12 + 0xb0) * (uint)*(byte *)(param_1 + 0x40)) * fStack_28;
    fStack_24 = (float)((uint)*(byte *)(iVar12 + 0xb3) * (uint)*(byte *)(param_1 + 0x43)) *
                fStack_14;
    fStack_20 = (float)((uint)*(byte *)(iVar12 + 0xae) * (uint)*(byte *)(param_1 + 0x42)) *
                fStack_30;
    fStack_18 = (float)((uint)*(byte *)(iVar12 + 0xac) * (uint)*(byte *)(param_1 + 0x40)) *
                fStack_28;
    fStack_14 = (float)((uint)*(byte *)(iVar12 + 0xaf) * (uint)*(byte *)(param_1 + 0x43)) *
                fStack_14;
    fVar1 = *(float *)(iVar12 + 0x98);
    fStack_4c = fVar1 * (float)((uint)*(byte *)(iVar12 + 0xad) * (uint)*(byte *)(param_1 + 0x41)) *
                        fStack_2c;
    fStack_48 = fVar1 * fStack_18;
    fStack_44 = fVar1 * fStack_14;
    fStack_64 = DAT_006e92e8 - *(float *)(iVar12 + 0x98);
    uStack_70 = fVar2 * fStack_64;
    uStack_6c = fVar3 * fStack_64;
    uStack_68 = fVar4 * fStack_64;
    fStack_64 = fStack_64 * fStack_24;
    fStack_60 = uStack_70 + fVar1 * fStack_20;
    fStack_5c = uStack_6c + fStack_4c;
    fStack_58 = uStack_68 + fStack_48;
    fStack_54 = fStack_64 + fStack_44;
    fStack_30 = fVar2 * _DAT_006ed3a4;
    fStack_2c = fVar3 * _DAT_006ed3a4;
    fStack_28 = fVar4 * _DAT_006ed3a4;
    fStack_24 = fStack_24 * _DAT_006ed3a4;
    fStack_20 = fStack_20 * _DAT_006ed3a4;
    fStack_18 = fStack_18 * _DAT_006ed3a4;
    fStack_14 = fStack_14 * _DAT_006ed3a4;
    fStack_10 = fStack_60 * _DAT_006ed3a4;
    fStack_c = fStack_5c * _DAT_006ed3a4;
    fStack_8 = fStack_58 * _DAT_006ed3a4;
    fStack_4 = fStack_54 * _DAT_006ed3a4;
    uVar5 = __ftol();
    uStack_70._0_3_ = CONCAT12(uVar5,(undefined2)uStack_70);
    uVar5 = __ftol();
    uStack_70._0_2_ = CONCAT11(uVar5,(undefined1)uStack_70);
    uVar5 = __ftol();
    uStack_70 = (float)CONCAT31(uStack_70._1_3_,uVar5);
    uVar5 = __ftol();
    uStack_70 = (float)CONCAT13(uVar5,(undefined3)uStack_70);
    uVar5 = __ftol();
    uStack_6c._0_3_ = CONCAT12(uVar5,(undefined2)uStack_6c);
    uVar5 = __ftol();
    uStack_6c._0_2_ = CONCAT11(uVar5,(undefined1)uStack_6c);
    uVar5 = __ftol();
    uStack_6c = (float)CONCAT31(uStack_6c._1_3_,uVar5);
    uVar5 = __ftol();
    uStack_6c = (float)CONCAT13(uVar5,(undefined3)uStack_6c);
    uVar5 = __ftol();
    uVar6 = __ftol();
    uStack_68._0_2_ = CONCAT11(uVar6,(undefined1)uStack_68);
    uVar6 = __ftol();
    uStack_68 = (float)CONCAT31(uStack_68._1_3_,uVar6);
    uVar6 = __ftol();
    iVar10 = 0;
    iVar12 = *(int *)(iVar12 + 0x9c) + 1;
    if (0 < iVar12) {
      iStack_7c = iVar12 * 8;
      iStack_80 = iVar12 * 4;
      iVar11 = iVar12 * 0xc;
      do {
        puVar8 = (undefined1 *)(*(int *)(param_1 + 0xc4) + iVar10 * 4);
        puVar8[3] = uStack_70._3_1_;
        puVar8[2] = uStack_70._2_1_;
        puVar8[1] = uStack_70._1_1_;
        *puVar8 = (undefined1)uStack_70;
        puVar8 = (undefined1 *)(*(int *)(param_1 + 0xc4) + iStack_80);
        puVar8[3] = uVar6;
        puVar8[1] = uStack_68._1_1_;
        puVar8[2] = uVar5;
        *puVar8 = (undefined1)uStack_68;
        puVar8 = (undefined1 *)(*(int *)(param_1 + 0xc4) + iStack_7c);
        puVar8[3] = uStack_6c._3_1_;
        puVar8[2] = uStack_6c._2_1_;
        puVar8[1] = uStack_6c._1_1_;
        *puVar8 = (undefined1)uStack_6c;
        puVar8 = (undefined1 *)(*(int *)(param_1 + 0xc4) + iVar11);
        iVar10 = iVar10 + 1;
        puVar8[3] = uVar6;
        puVar8[1] = uStack_68._1_1_;
        puVar8[2] = uVar5;
        *puVar8 = (undefined1)uStack_68;
        iStack_80 = iStack_80 + 4;
        iVar11 = iVar11 + 4;
        iStack_7c = iStack_7c + 4;
      } while (iVar10 < iVar12);
    }
  }
  else {
    if ((fVar1 < DAT_006e92e8 == (NAN(fVar1) || NAN(DAT_006e92e8))) ||
       (DAT_006e92e4 <= *(float *)(param_1 + 0x30))) {
      if (*(float *)(param_1 + 0x30) < DAT_006e92e8 ==
          (NAN(*(float *)(param_1 + 0x30)) || NAN(DAT_006e92e8))) {
        fStack_50 = 1.0;
      }
      else {
        fStack_50 = *(float *)(param_1 + 0x30);
      }
    }
    else {
      fStack_50 = 0.0;
    }
    if ((*(float *)(param_1 + 0x34) < DAT_006e92e8 ==
         (NAN(*(float *)(param_1 + 0x34)) || NAN(DAT_006e92e8))) ||
       (DAT_006e92e4 <= *(float *)(param_1 + 0x34))) {
      if (*(float *)(param_1 + 0x34) < DAT_006e92e8 ==
          (NAN(*(float *)(param_1 + 0x34)) || NAN(DAT_006e92e8))) {
        fStack_4c = 1.0;
      }
      else {
        fStack_4c = *(float *)(param_1 + 0x34);
      }
    }
    else {
      fStack_4c = 0.0;
    }
    if ((*(float *)(param_1 + 0x38) < DAT_006e92e8 ==
         (NAN(*(float *)(param_1 + 0x38)) || NAN(DAT_006e92e8))) ||
       (DAT_006e92e4 <= *(float *)(param_1 + 0x38))) {
      if (*(float *)(param_1 + 0x38) < DAT_006e92e8 ==
          (NAN(*(float *)(param_1 + 0x38)) || NAN(DAT_006e92e8))) {
        fStack_48 = 1.0;
      }
      else {
        fStack_48 = *(float *)(param_1 + 0x38);
      }
    }
    else {
      fStack_48 = 0.0;
    }
    if (((*(float *)(param_1 + 0x3c) < DAT_006e92e8 ==
          (NAN(*(float *)(param_1 + 0x3c)) || NAN(DAT_006e92e8))) ||
        (fVar1 = DAT_006e92e4, DAT_006e92e4 <= *(float *)(param_1 + 0x3c))) &&
       (fVar1 = DAT_006e92e8,
       *(float *)(param_1 + 0x3c) < DAT_006e92e8 !=
       (NAN(*(float *)(param_1 + 0x3c)) || NAN(DAT_006e92e8)))) {
      fVar1 = *(float *)(param_1 + 0x3c);
    }
    fStack_3c = fStack_4c;
    fStack_40 = (float)((uint)*(byte *)(iVar12 + 0xae) * (uint)*(byte *)(param_1 + 0x42) *
                       (uint)*(byte *)(param_1 + 0x46)) * fStack_50;
    fStack_38 = (float)((uint)*(byte *)(iVar12 + 0xac) * (uint)*(byte *)(param_1 + 0x40) *
                       (uint)*(byte *)(param_1 + 0x44)) * fStack_48;
    uStack_70 = (float)((uint)*(byte *)(iVar12 + 0xaf) * (uint)*(byte *)(param_1 + 0x43) *
                       (uint)*(byte *)(param_1 + 0x47));
    fStack_50 = (float)((uint)*(byte *)(iVar12 + 0xb2) * (uint)*(byte *)(param_1 + 0x42) *
                       (uint)*(byte *)(param_1 + 0x46)) * fStack_50 * _DAT_006fd3d0;
    fStack_4c = (float)((uint)*(byte *)(iVar12 + 0xb1) * (uint)*(byte *)(param_1 + 0x41) *
                       (uint)*(byte *)(param_1 + 0x45)) * fStack_4c * _DAT_006fd3d0;
    fStack_48 = (float)((uint)*(byte *)(iVar12 + 0xb0) * (uint)*(byte *)(param_1 + 0x40) *
                       (uint)*(byte *)(param_1 + 0x44)) * fStack_48 * _DAT_006fd3d0;
    fStack_44 = (float)((uint)*(byte *)(iVar12 + 0xb3) * (uint)*(byte *)(param_1 + 0x43) *
                       (uint)*(byte *)(param_1 + 0x47)) * fVar1 * _DAT_006fd3d0;
    fStack_40 = fStack_40 * _DAT_006fd3d0;
    fStack_38 = fStack_38 * _DAT_006fd3d0;
    fStack_34 = (float)(int)uStack_70 * fVar1 * _DAT_006fd3d0;
    uVar5 = __ftol();
    uStack_70._0_3_ = CONCAT12(uVar5,(undefined2)uStack_70);
    uVar5 = __ftol();
    uStack_70._0_2_ = CONCAT11(uVar5,(undefined1)uStack_70);
    uVar5 = __ftol();
    uStack_70 = (float)CONCAT31(uStack_70._1_3_,uVar5);
    uVar5 = __ftol();
    uStack_70 = (float)CONCAT13(uVar5,(undefined3)uStack_70);
    uVar5 = __ftol();
    uStack_6c._0_3_ = CONCAT12(uVar5,(undefined2)uStack_6c);
    uVar5 = __ftol();
    uStack_6c._0_2_ = CONCAT11(uVar5,(undefined1)uStack_6c);
    uVar5 = __ftol();
    uStack_6c = (float)CONCAT31(uStack_6c._1_3_,uVar5);
    uVar5 = __ftol();
    uStack_6c = (float)CONCAT13(uVar5,(undefined3)uStack_6c);
    uVar7 = 0;
    if (0 < *(int *)(param_1 + 0xb0)) {
      do {
        uVar9 = uVar7 & 1;
        puVar8 = (undefined1 *)(*(int *)(param_1 + 0xc4) + uVar7 * 4);
        uVar7 = uVar7 + 1;
        puVar8[3] = *(undefined1 *)((int)&uStack_70 + uVar9 * 4 + 3);
        puVar8[2] = *(undefined1 *)((int)&uStack_70 + uVar9 * 4 + 2);
        uVar5 = *(undefined1 *)(&uStack_70 + uVar9);
        puVar8[1] = *(undefined1 *)((int)&uStack_70 + uVar9 * 4 + 1);
        *puVar8 = uVar5;
      } while ((int)uVar7 < *(int *)(param_1 + 0xb0));
      return;
    }
  }
  return;
}

