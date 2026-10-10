
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006bd810(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar7 = *(int *)(param_1 + 4);
  if ((*(float *)(param_1 + 0x30) < DAT_006e92e8 ==
       (NAN(*(float *)(param_1 + 0x30)) || NAN(DAT_006e92e8))) ||
     (DAT_006e92e4 <= *(float *)(param_1 + 0x30))) {
    if (*(float *)(param_1 + 0x30) < DAT_006e92e8 ==
        (NAN(*(float *)(param_1 + 0x30)) || NAN(DAT_006e92e8))) {
      fStack_20 = 1.0;
    }
    else {
      fStack_20 = *(float *)(param_1 + 0x30);
    }
  }
  else {
    fStack_20 = 0.0;
  }
  if ((*(float *)(param_1 + 0x34) < DAT_006e92e8 ==
       (NAN(*(float *)(param_1 + 0x34)) || NAN(DAT_006e92e8))) ||
     (DAT_006e92e4 <= *(float *)(param_1 + 0x34))) {
    if (*(float *)(param_1 + 0x34) < DAT_006e92e8 ==
        (NAN(*(float *)(param_1 + 0x34)) || NAN(DAT_006e92e8))) {
      fStack_1c = 1.0;
    }
    else {
      fStack_1c = *(float *)(param_1 + 0x34);
    }
  }
  else {
    fStack_1c = 0.0;
  }
  if ((*(float *)(param_1 + 0x38) < DAT_006e92e8 ==
       (NAN(*(float *)(param_1 + 0x38)) || NAN(DAT_006e92e8))) ||
     (DAT_006e92e4 <= *(float *)(param_1 + 0x38))) {
    if (*(float *)(param_1 + 0x38) < DAT_006e92e8 ==
        (NAN(*(float *)(param_1 + 0x38)) || NAN(DAT_006e92e8))) {
      fStack_18 = 1.0;
    }
    else {
      fStack_18 = *(float *)(param_1 + 0x38);
    }
  }
  else {
    fStack_18 = 0.0;
  }
  if (((*(float *)(param_1 + 0x3c) < DAT_006e92e8 ==
        (NAN(*(float *)(param_1 + 0x3c)) || NAN(DAT_006e92e8))) ||
      (fVar3 = DAT_006e92e4, DAT_006e92e4 <= *(float *)(param_1 + 0x3c))) &&
     (fVar3 = DAT_006e92e8,
     *(float *)(param_1 + 0x3c) < DAT_006e92e8 !=
     (NAN(*(float *)(param_1 + 0x3c)) || NAN(DAT_006e92e8)))) {
    fVar3 = *(float *)(param_1 + 0x3c);
  }
  fStack_c = fStack_1c;
  fStack_10 = (float)((uint)*(byte *)(iVar7 + 0xaa) * (uint)*(byte *)(param_1 + 0x42)) * fStack_20;
  uStack_28 = (uint)*(byte *)(iVar7 + 0xab) * (uint)*(byte *)(param_1 + 0x43);
  fStack_8 = (float)((uint)*(byte *)(iVar7 + 0xa8) * (uint)*(byte *)(param_1 + 0x40)) * fStack_18;
  fStack_20 = (float)((uint)*(byte *)(iVar7 + 0xa6) * (uint)*(byte *)(param_1 + 0x42)) * fStack_20 *
              _DAT_006ed3a4;
  fStack_1c = (float)((uint)*(byte *)(iVar7 + 0xa5) * (uint)*(byte *)(param_1 + 0x41)) * fStack_1c *
              _DAT_006ed3a4;
  fStack_18 = (float)((uint)*(byte *)(iVar7 + 0xa4) * (uint)*(byte *)(param_1 + 0x40)) * fStack_18 *
              _DAT_006ed3a4;
  fStack_14 = (float)((uint)*(byte *)(iVar7 + 0xa7) * (uint)*(byte *)(param_1 + 0x43)) * fVar3 *
              _DAT_006ed3a4;
  fStack_10 = fStack_10 * _DAT_006ed3a4;
  fStack_8 = fStack_8 * _DAT_006ed3a4;
  fStack_4 = (float)uStack_28 * fVar3 * _DAT_006ed3a4;
  uVar4 = __ftol();
  uStack_28._0_3_ = CONCAT12(uVar4,(undefined2)uStack_28);
  uVar5 = __ftol();
  uStack_28._0_2_ = CONCAT11(uVar5,(undefined1)uStack_28);
  uVar5 = __ftol();
  uStack_28 = CONCAT31(uStack_28._1_3_,uVar5);
  uVar5 = __ftol();
  uStack_28 = CONCAT13(uVar5,(undefined3)uStack_28);
  uStack_22 = __ftol();
  uStack_23 = __ftol();
  uStack_24 = __ftol();
  uStack_21 = __ftol();
  if ((*(int *)(param_1 + 0xb4) == 0) || (*(int *)(iVar7 + 0x84) == 0)) {
    uVar8 = 0;
    if (0 < *(int *)(param_1 + 0xb0)) {
      do {
        uVar6 = uVar8 & 1;
        puVar1 = (undefined1 *)(*(int *)(param_1 + 200) + uVar8 * 4);
        uVar8 = uVar8 + 1;
        puVar1[3] = *(undefined1 *)((int)&uStack_28 + uVar6 * 4 + 3);
        puVar1[2] = *(undefined1 *)((int)&uStack_28 + uVar6 * 4 + 2);
        uVar4 = *(undefined1 *)(&uStack_28 + uVar6);
        puVar1[1] = *(undefined1 *)((int)&uStack_28 + uVar6 * 4 + 1);
        *puVar1 = uVar4;
      } while ((int)uVar8 < *(int *)(param_1 + 0xb0));
    }
  }
  else {
    puVar1 = *(undefined1 **)(param_1 + 200);
    if (*(int *)(param_1 + 0xb4) == 1) {
      puVar1[3] = uStack_28._3_1_;
      puVar1[2] = uVar4;
      puVar1[1] = uStack_28._1_1_;
      *puVar1 = (undefined1)uStack_28;
      iVar7 = 1;
      if (1 < *(int *)(param_1 + 0xb0)) {
        do {
          iVar2 = *(int *)(param_1 + 200);
          *(undefined1 *)(iVar2 + 2 + iVar7 * 4) = uStack_22;
          puVar1 = (undefined1 *)(iVar2 + iVar7 * 4);
          iVar7 = iVar7 + 1;
          puVar1[1] = uStack_23;
          puVar1[3] = uStack_21;
          *puVar1 = uStack_24;
        } while (iVar7 < *(int *)(param_1 + 0xb0));
        return;
      }
    }
    else {
      puVar1[3] = uStack_21;
      puVar1[2] = uStack_22;
      puVar1[1] = uStack_23;
      *puVar1 = uStack_24;
      iVar7 = 1;
      if (1 < *(int *)(param_1 + 0xb0)) {
        do {
          iVar2 = *(int *)(param_1 + 200);
          *(undefined1 *)(iVar2 + 3 + iVar7 * 4) = uStack_28._3_1_;
          puVar1 = (undefined1 *)(iVar2 + iVar7 * 4);
          iVar7 = iVar7 + 1;
          puVar1[1] = uStack_28._1_1_;
          puVar1[2] = uVar4;
          *puVar1 = (undefined1)uStack_28;
        } while (iVar7 < *(int *)(param_1 + 0xb0));
        return;
      }
    }
  }
  return;
}

