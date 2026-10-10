
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00586ff0(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int **ppiVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float unaff_EBX;
  int *unaff_ESI;
  undefined1 *puVar12;
  int **ppiStack_248;
  int *piStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  int *piStack_238;
  float fStack_234;
  float fStack_230;
  int **ppiStack_22c;
  float *pfStack_228;
  int **ppiStack_224;
  float fVar13;
  float fVar14;
  float fStack_214;
  undefined4 uStack_210;
  int *local_200;
  float fStack_1fc;
  float local_1f8;
  int **ppiStack_1f4;
  undefined4 local_1ec;
  int *local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c [8];
  undefined4 local_184 [94];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dca1b;
  local_c = ExceptionList;
  ppiStack_224 = (int **)s_render_mgr__RenderStingGlow_00741d64;
  pfStack_228 = (float *)0x587022;
  ExceptionList = &local_c;
  local_200 = param_1;
  FUN_00649600();
  piVar1 = param_1 + 0x6b;
  local_4 = 0;
  _DAT_0077808c =
       _DAT_007407a0 * (((float)param_1[400] - DAT_006e92e8) * _DAT_006ec0a4 + DAT_006e92e8) +
       _DAT_0077808c;
  pfStack_228 = (float *)0x587074;
  ppiStack_224 = (int **)piVar1;
  local_1d0 = piVar1;
  iVar8 = FUN_005495d0();
  if (iVar8 == 0) {
    ppiStack_224 = (int **)&DAT_0071ef4c;
    pfStack_228 = (float *)s_StingGlowSprite_xbmp_00741d4c;
    ppiStack_22c = (int **)0x58708c;
    ppiStack_224 = (int **)FUN_005496c0();
    ppiStack_22c = (int **)0x587098;
    pfStack_228 = (float *)piVar1;
    FUN_00549430();
    pfStack_228 = (float *)0x5870a3;
    ppiStack_224 = (int **)piVar1;
    FUN_00549470();
    pfStack_228 = (float *)0x5870ae;
    ppiStack_224 = (int **)piVar1;
    FUN_00549580();
    pfStack_228 = (float *)0x5870b9;
    ppiStack_224 = (int **)piVar1;
    iVar8 = FUN_005495d0();
    if (iVar8 == 0) goto LAB_005877f5;
  }
  pfStack_228 = (float *)0x5870cc;
  ppiStack_224 = (int **)piVar1;
  uVar9 = FUN_00549470();
  param_1 = param_1 + 0x6c;
  pfStack_228 = (float *)0x5870df;
  ppiStack_224 = (int **)param_1;
  iVar8 = FUN_005495d0();
  if (iVar8 == 0) {
    ppiStack_224 = (int **)&DAT_0071ef4c;
    pfStack_228 = (float *)s_Charge_Electric_xbmp_00741d34;
    ppiStack_22c = (int **)0x5870f7;
    ppiStack_224 = (int **)FUN_005496c0();
    ppiStack_22c = (int **)0x587103;
    pfStack_228 = (float *)param_1;
    FUN_00549430();
    pfStack_228 = (float *)0x58710e;
    ppiStack_224 = (int **)param_1;
    FUN_00549470();
    pfStack_228 = (float *)0x587119;
    ppiStack_224 = (int **)param_1;
    FUN_00549580();
    pfStack_228 = (float *)0x587124;
    ppiStack_224 = (int **)param_1;
    iVar8 = FUN_005495d0();
    if (iVar8 == 0) goto LAB_005877f5;
  }
  pfStack_228 = (float *)0x587137;
  ppiStack_224 = (int **)param_1;
  local_1ec = FUN_00549470();
  ppiStack_224 = (int **)0x587140;
  iVar8 = FUN_0041bcc0();
  local_1cc = *(undefined4 *)(iVar8 + 20000);
  local_1c8 = *(undefined4 *)(iVar8 + 0x4e24);
  local_1c4 = *(undefined4 *)(iVar8 + 0x4e28);
  local_1c0 = *(undefined4 *)(iVar8 + 0x4e2c);
  local_1bc = *(undefined4 *)(iVar8 + 0x4e30);
  local_1b8 = *(undefined4 *)(iVar8 + 0x4e34);
  local_1b4 = *(undefined4 *)(iVar8 + 0x4e38);
  local_1b0 = *(undefined4 *)(iVar8 + 0x4e3c);
  local_1ac = *(undefined4 *)(iVar8 + 0x4e40);
  local_1a8 = *(undefined4 *)(iVar8 + 0x4e44);
  local_1a4 = *(undefined4 *)(iVar8 + 0x4e48);
  local_1a0 = *(undefined4 *)(iVar8 + 0x4e4c);
  local_19c = *(undefined4 *)(iVar8 + 0x4e50);
  local_198 = *(undefined4 *)(iVar8 + 0x4e54);
  local_194 = *(undefined4 *)(iVar8 + 0x4e58);
  local_190 = *(undefined4 *)(iVar8 + 0x4e5c);
  if (*(int *)(iVar8 + 0x4e60) != 0) {
    ppiStack_224 = (int **)0x587207;
    ppiStack_224 = (int **)FUN_00435870();
    pfStack_228 = (float *)0x587212;
    iVar8 = FUN_00435800();
    if (iVar8 == 3) {
      ppiStack_224 = (int **)s_StingGlow_00741d28;
      pfStack_228 = (float *)0x587225;
      iVar8 = FUN_0065f190();
      if (iVar8 == 0) {
        pfStack_228 = (float *)0x587237;
        ppiStack_224 = (int **)piVar1;
        FUN_00549580();
      }
      else {
        ppiStack_224 = (int **)0x26;
        pfStack_228 = (float *)0x7;
        ppiStack_22c = (int **)0x587245;
        FUN_0066c3a0();
        ppiStack_22c = (int **)0x58724a;
        FUN_0066dac0();
        ppiStack_22c = (int **)0x0;
        fStack_234 = 8.122534e-39;
        fStack_230 = (float)uVar9;
        FUN_0066db80();
        iVar8 = 0x10;
        puVar10 = local_184;
        fVar3 = _DAT_00740784;
        fVar4 = _DAT_00740788;
        do {
          *puVar10 = 0;
          puVar10[-2] = fVar3;
          iVar8 = iVar8 + -1;
          puVar10[-1] = fVar4;
          puVar10[3] = 0;
          puVar10[1] = -fVar3;
          puVar10[2] = fVar4;
          fVar3 = fVar3 - _DAT_00740790;
          fVar4 = _DAT_0074078c * _DAT_006f406c + fVar4;
          puVar10 = puVar10 + 6;
        } while (iVar8 != 0);
        puVar12 = local_18c;
        iVar8 = 0x20;
        do {
          pfStack_228 = &local_1f8;
          ppiStack_22c = (int **)0x5872df;
          ppiStack_224 = (int **)puVar12;
          FUN_0041b9f0();
          ppiStack_224 = (int **)&local_1f8;
          pfStack_228 = (float *)0x5872eb;
          FUN_004357e0();
          puVar12 = puVar12 + 0xc;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        ppiStack_224 = (int **)0x0;
        pfStack_228 = (float *)0xe;
        ppiStack_22c = (int **)DAT_007f1000;
        fStack_230 = 8.122782e-39;
        (**(code **)(*DAT_007f1000 + 200))();
        fStack_230 = 7.00649e-45;
        fStack_234 = 2.66247e-44;
        piStack_238 = DAT_007f1000;
        uStack_23c = 0x587315;
        (**(code **)(*DAT_007f1000 + 200))();
        uStack_23c = 2;
        uStack_240 = 0x14;
        piStack_244 = DAT_007f1000;
        ppiStack_248 = (int **)0x587327;
        (**(code **)(*DAT_007f1000 + 200))();
        ppiStack_22c = (int **)0x0;
        puVar10 = &local_1b0;
        do {
          ppiVar6 = ppiStack_22c;
          ppiStack_248 = (int **)(((float)(int)ppiStack_22c / _DAT_0074079c) * (float)pfStack_228 +
                                 _DAT_0077808c);
          ppiStack_22c = ppiStack_248;
          FUN_0064c800();
          bVar7 = __ftol();
          ppiStack_248 = (int **)((uint)bVar7 << 0x18);
          ppiStack_248 = (int **)CONCAT22(ppiStack_248._2_2_,0x5a00);
          ppiStack_248 = (int **)CONCAT31(ppiStack_248._1_3_,200);
          uVar9 = FUN_0041b9c0(DAT_007407a8,DAT_007407a8);
          FUN_0066e5a0(puVar10,uVar9);
          ppiStack_22c = (int **)((int)ppiVar6 + 1);
          puVar10 = puVar10 + 3;
        } while ((int)ppiStack_22c < 0x20);
        ppiStack_248 = (int **)0x5873b1;
        FUN_0066d9a0();
        if (_DAT_006f4068 < (float)ppiStack_224[400]) {
          ppiStack_248 = (int **)0x5873d1;
          iVar8 = FUN_00647b00();
          if (0x1999 < iVar8) {
            ppiStack_248 = (int **)0x6;
            FUN_0066c3a0(7);
            ppiStack_248 = (int **)0x0;
            (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xe);
            (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,5);
            (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,2);
            ppiStack_248 = (int **)0x587423;
            FUN_0066dac0();
            ppiStack_248 = (int **)0x0;
            FUN_0066db80(uStack_210);
            fVar3 = _DAT_0074078c * _DAT_006ebfd0;
            _DAT_00778090 = _DAT_00778090 + _DAT_007407a4 * fVar3;
            if (fVar3 < _DAT_00778090) {
              _DAT_00778090 = 0.0;
            }
            _DAT_00778094 = _DAT_007407a4 * fVar3 * _DAT_006e958c + _DAT_00778094;
            if (fVar3 < _DAT_00778094) {
              _DAT_00778094 = 0.0;
            }
            ppiStack_248 = (int **)0x0;
            fStack_230 = 0.0;
            fVar4 = _DAT_00740784 * _DAT_006e99bc;
            fVar2 = DAT_006e92e8 - (DAT_006e92e8 / fVar3) * _DAT_00778090;
            fVar3 = DAT_006e92e8 - (DAT_006e92e8 / fVar3) * _DAT_00778094;
            fStack_234 = _DAT_00778090 + _DAT_006e9448;
            piStack_238 = (int *)(_DAT_00740784 * _DAT_006e936c);
            FUN_0065fd00();
            ppiStack_248 = &piStack_238;
            FUN_0041b9f0(&stack0xfffffde4);
            ppiStack_248 = (int **)&stack0xfffffde4;
            fStack_230 = fStack_214;
            piStack_238 = unaff_ESI;
            fStack_234 = unaff_EBX;
            pfVar11 = (float *)FUN_00672260();
            pfStack_228 = (float *)(pfVar11[2] - fStack_230);
            ppiStack_22c = (int **)(pfVar11[1] - fStack_234);
            fVar13 = *pfVar11 - (float)piStack_238;
            ppiStack_248 = (int **)(DAT_006e92e8 /
                                   SQRT((float)pfStack_228 * (float)pfStack_228 +
                                        (float)ppiStack_22c * (float)ppiStack_22c + fVar13 * fVar13)
                                   );
            ppiStack_224 = ppiStack_248;
            iVar8 = FUN_0064cf30();
            if (iVar8 == 0) {
              fStack_214 = 0.0;
              fVar13 = DAT_006e92e4;
              fVar14 = DAT_006e92e4;
            }
            else {
              ppiStack_224 = (int **)((float)ppiStack_224 * _DAT_006e99a0);
              fStack_214 = (float)pfStack_228 * (float)ppiStack_224;
              fVar13 = fVar13 * (float)ppiStack_224;
              fVar14 = (float)ppiStack_22c * (float)ppiStack_224;
            }
            pfStack_228 = (float *)&ppiStack_248;
            piStack_238 = (int *)(fVar13 + (float)piStack_238);
            fStack_234 = fVar14 + fStack_234;
            fStack_230 = fStack_214 + fStack_230;
            ppiStack_248 = (int **)0x40ffffff;
            uVar9 = FUN_0041b9c0(fVar2 * fVar4,_DAT_00740784 * _DAT_006e92f4);
            FUN_0066e5a0(&piStack_238,uVar9);
            fStack_234 = _DAT_00778094 + _DAT_006e9448;
            ppiStack_248 = &piStack_238;
            piStack_238 = (int *)(_DAT_00740784 * _DAT_006e936c);
            fStack_230 = 0.0;
            FUN_0041b9f0(&local_200);
            piStack_238 = local_200;
            ppiStack_248 = &local_200;
            fStack_230 = local_1f8;
            fStack_234 = fStack_1fc;
            pfVar11 = (float *)FUN_00672260();
            fVar2 = pfVar11[2] - fStack_230;
            ppiStack_22c = (int **)(pfVar11[1] - fStack_234);
            pfStack_228 = (float *)(*pfVar11 - (float)piStack_238);
            ppiStack_248 = (int **)(DAT_006e92e8 /
                                   SQRT(fVar2 * fVar2 +
                                        (float)ppiStack_22c * (float)ppiStack_22c +
                                        (float)pfStack_228 * (float)pfStack_228));
            ppiStack_224 = ppiStack_248;
            iVar8 = FUN_0064cf30();
            if (iVar8 == 0) {
              fVar13 = 0.0;
              fVar14 = 0.0;
              fStack_214 = 0.0;
            }
            else {
              fVar5 = (float)ppiStack_224 * _DAT_006e99a0;
              fVar13 = (float)pfStack_228 * fVar5;
              fVar14 = (float)ppiStack_22c * fVar5;
              fStack_214 = fVar2 * fVar5;
            }
            piStack_238 = (int *)(fVar13 + (float)piStack_238);
            fStack_234 = fVar14 + fStack_234;
            fStack_230 = fStack_214 + fStack_230;
            ppiStack_248 = (int **)0x40ffffff;
            uVar9 = FUN_0041b9c0(fVar3 * fVar4,_DAT_00740784 * _DAT_006e92f4);
            FUN_0066e5a0(&piStack_238,uVar9);
            ppiStack_248 = (int **)0x587787;
            FUN_0066d9a0();
            piStack_238 = (int *)(fVar13 + (float)piStack_238);
            fStack_234 = fVar14 + fStack_234;
            fStack_230 = fStack_214 + fStack_230;
          }
        }
        ppiStack_248 = ppiStack_1f4;
        FUN_00549580();
        ppiStack_248 = (int **)0x1;
        (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xe);
        (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,5);
        (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,6);
        ppiStack_224 = (int **)0x5877f5;
        FUN_0065f430();
      }
    }
  }
LAB_005877f5:
  local_4 = 0xffffffff;
  ppiStack_224 = (int **)0x587809;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

