
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00421a00(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  char cVar12;
  undefined4 unaff_EBX;
  float10 fVar13;
  float fVar14;
  float fStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  int iStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int iStack_a8;
  float fStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined1 auStack_90 [8];
  int local_88;
  int local_84;
  int local_80;
  undefined1 auStack_78 [8];
  int local_70;
  int local_6c;
  int local_68;
  int iStack_60;
  int iStack_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 auStack_40 [64];
  
  local_88 = 0x7f7fffff;
  local_84 = 0x7f7fffff;
  local_80 = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  local_58 = 0x7f7fffff;
  local_54 = 0x7f7fffff;
  local_50 = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  local_70 = 0x7f7fffff;
  local_6c = 0x7f7fffff;
  local_68 = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  local_a0 = 0x7f7fffff;
  local_9c = 0x7f7fffff;
  local_98 = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  piVar2 = (int *)FUN_004021c0(param_1[0x1372],param_1[0x1373]);
  piVar3 = (int *)FUN_004021c0(param_1[0x1374],param_1[0x1375]);
  local_88 = piVar2[0x11];
  local_84 = piVar2[0x12];
  local_80 = piVar2[0x13];
  FUN_004357e0(piVar2 + 0x14);
  local_70 = piVar3[0x11];
  local_6c = piVar3[0x12];
  local_68 = piVar3[0x13];
  FUN_004357e0(piVar3 + 0x14);
  iVar4 = (**(code **)(*param_1 + 0x154))();
  if (iVar4 != 0) {
    piVar11 = param_1 + 5000;
    iVar4 = FUN_00540e90(s_Weapon_00720300,piVar11,0);
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_0064e040(auStack_40,param_1 + 0x139a,piVar11);
      if ((piVar11 != piVar5) && (piVar1 = piVar5 + 0x10, piVar5 != piVar1)) {
        uStack_c8 = (float)((int)piVar5 - (int)piVar11);
        piVar11 = param_1 + 0x138a;
        do {
          piVar11[-2] = *piVar5;
          piVar11[-1] = piVar5[1];
          *piVar11 = *(int *)((int)uStack_c8 + (int)piVar11);
          piVar11[1] = piVar5[3];
          piVar5 = piVar5 + 4;
          piVar11 = piVar11 + 4;
        } while (piVar5 != piVar1);
      }
      fStack_a4 = (float)param_1[0x1396];
      fStack_b8 = (float)param_1[0x1394] + (float)param_1[0x1382];
      fStack_b4 = (float)param_1[0x1395] + (float)param_1[0x1383];
      fStack_b0 = fStack_a4 + (float)param_1[0x1384];
      FUN_0041b9f0(&fStack_ac,param_1 + 0x137c);
      fStack_c4 = fStack_ac;
      iStack_c0 = iStack_a8;
      fStack_bc = fStack_a4;
      goto LAB_00421c76;
    }
  }
  fStack_b8 = 0.0;
  fStack_b4 = 0.0;
  fStack_b0 = 0.0;
  fStack_c4 = 0.0;
  iStack_c0 = 0;
  fStack_bc = 0.0;
LAB_00421c76:
  fStack_cc = (float)((uint)fStack_cc & 0xffffff);
  uVar6 = __ftol();
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  uStack_c8._0_3_ = CONCAT12((char)uVar6,(undefined2)uStack_c8);
  uVar6 = __ftol();
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  uVar7 = __ftol();
  if (0xff < uVar7) {
    uVar7 = 0xff;
  }
  FUN_00494850(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + 0x4e03),uStack_c8._2_1_),
                                 (char)uVar6),(char)uVar7));
  if ((float)param_1[0x1385] < _DAT_006e92f4) {
    fVar14 = (float)param_1[0x137f];
  }
  else {
    fVar14 = (float)param_1[0x137f] + (float)param_1[0x137f];
  }
  FUN_004947c0(fVar14);
  FUN_00494620(param_1[0x1381]);
  FUN_004948c0(1);
  (**(code **)(*piVar2 + 0x14))(&fStack_b8,0);
  iStack_60 = piVar2[0x11];
  iStack_5c = piVar2[0x12];
  local_58 = piVar2[0x13];
  FUN_004357e0(piVar2 + 0x14);
  pfVar8 = (float *)(**(code **)(*piVar3 + 0x28))();
  FUN_00401f00(fStack_cc - *pfVar8,uStack_c8 - pfVar8[1],fStack_c4 - pfVar8[2]);
  fVar13 = (float10)FUN_00402000();
  if (fVar13 < (float10)_DAT_006e99c0) {
    cVar12 = (char)((uint)unaff_EBX >> 0x18);
  }
  else {
    uVar6 = __ftol();
    if (0xff < uVar6) {
      uVar6 = 0xff;
    }
    uVar7 = __ftol();
    if (0xff < uVar7) {
      uVar7 = 0xff;
    }
    uVar9 = __ftol();
    if (0xff < uVar9) {
      uVar9 = 0xff;
    }
    FUN_00494850(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + 0x4deb),(char)uVar6),
                                   (char)uVar7),(char)uVar9));
    if ((float)param_1[0x1385] < _DAT_006e92f4) {
      fVar14 = (float)param_1[0x1379];
    }
    else {
      fVar14 = (float)param_1[0x1379] * _DAT_006e99bc;
    }
    FUN_004947c0(fVar14);
    FUN_00494620(param_1[0x137b]);
    FUN_004948c0(1);
    (**(code **)(*piVar3 + 0x14))(&fStack_cc,0);
    iStack_a8 = piVar3[0x11];
    fStack_a4 = (float)piVar3[0x12];
    local_a0 = piVar3[0x13];
    local_9c = piVar3[0x14];
    local_98 = piVar3[0x15];
    local_94 = piVar3[0x16];
    cVar12 = '\x01';
  }
  iVar4 = piVar2[0x1e];
  uVar10 = FUN_004948a0();
  FUN_00583630(auStack_90,&iStack_60,(short)iVar4,uVar10);
  if (cVar12 != '\0') {
    iVar4 = piVar3[0x1e];
    uVar10 = FUN_004948a0();
    FUN_00583630(auStack_78,&iStack_a8,(short)iVar4,uVar10);
  }
  return;
}

