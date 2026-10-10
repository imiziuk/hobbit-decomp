
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00619e30(int param_1,int *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float *pfStack_12c;
  float *pfStack_118;
  float fStack_114;
  float *pfStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int iStack_dc;
  float afStack_d8 [19];
  undefined1 auStack_8c [60];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [64];
  
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0xb8) == 0) {
    return;
  }
  pfStack_12c = (float *)0x619e5f;
  iStack_dc = iVar2;
  iVar3 = (**(code **)(*param_2 + 8))();
  if (iVar3 != 0) {
    return;
  }
  pfStack_12c = (float *)0x619e6d;
  fVar8 = (float10)(**(code **)*param_2)();
  if ((float10)*(float *)(iVar2 + 0x7c) < fVar8) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if ((*(byte *)(iVar2 + 0x84) & 1) != 0) {
    pfStack_12c = &fStack_114;
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x18),&pfStack_118);
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x1c),&fStack_f8,&fStack_f4);
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x20),&fStack_ec,&fStack_f0);
    afStack_d8[0] =
         (fStack_f0 * fStack_f4 + fStack_ec * (float)pfStack_118 * fStack_f8) *
         *(float *)(param_1 + 0xc);
    afStack_d8[1] = fStack_ec * fStack_114 * *(float *)(param_1 + 0xc);
    afStack_d8[2] =
         (fStack_ec * (float)pfStack_118 * fStack_f4 - fStack_f0 * fStack_f8) *
         *(float *)(param_1 + 0xc);
    afStack_d8[4] =
         (fStack_f8 * fStack_f0 * (float)pfStack_118 - fStack_ec * fStack_f4) *
         *(float *)(param_1 + 0x10);
    afStack_d8[5] = fStack_f0 * fStack_114 * *(float *)(param_1 + 0x10);
    afStack_d8[6] =
         (fStack_f0 * (float)pfStack_118 * fStack_f4 + fStack_ec * fStack_f8) *
         *(float *)(param_1 + 0x10);
    afStack_d8[8] = fStack_f8 * fStack_114 * *(float *)(param_1 + 0x14);
    afStack_d8[9] = -(float)pfStack_118 * *(float *)(param_1 + 0x14);
    afStack_d8[0xc] = *(float *)(param_1 + 0x24);
    afStack_d8[10] = fStack_f4 * fStack_114 * *(float *)(param_1 + 0x14);
    afStack_d8[0xd] = *(float *)(param_1 + 0x28);
    afStack_d8[0xe] = *(float *)(param_1 + 0x2c);
    pfStack_12c = afStack_d8;
    afStack_d8[3] = 0.0;
    afStack_d8[7] = 0.0;
    afStack_d8[0xb] = 0.0;
    afStack_d8[0xf] = 1.0;
    uVar4 = FUN_006ba140();
    pfVar5 = (float *)FUN_0064e040(auStack_40,uVar4);
    if ((afStack_d8 != pfVar5) && (pfVar6 = pfVar5 + 0x10, pfVar5 != pfVar6)) {
      pfVar7 = afStack_d8 + 2;
      iVar3 = (int)pfVar5 - (int)afStack_d8;
      do {
        pfVar7[-2] = *pfVar5;
        pfVar7[-1] = pfVar5[1];
        *pfVar7 = *(float *)(iVar3 + (int)pfVar7);
        pfVar7[1] = pfVar5[3];
        pfVar5 = pfVar5 + 4;
        pfVar7 = pfVar7 + 4;
      } while (pfVar5 != pfVar6);
    }
    pfVar5 = afStack_d8;
    iVar3 = -(int)&pfStack_12c;
    do {
      *(float *)((int)afStack_d8 + iVar3 + 4 + (int)pfVar5) = *pfVar5;
      *(float *)((int)afStack_d8 + iVar3 + 8 + (int)pfVar5) = pfVar5[1];
      *(float *)((int)afStack_d8 + iVar3 + 0xc + (int)pfVar5) = pfVar5[2];
      *(float *)((int)afStack_d8 + iVar3 + 0x10 + (int)pfVar5) = pfVar5[3];
      pfVar5 = pfVar5 + 4;
    } while (pfVar5 != afStack_d8 + 0x10);
    uStack_48 = 0;
    uStack_4c = 0;
    uStack_50 = 0;
  }
  fStack_104 = 0.0;
  fStack_100 = 0.0;
  fStack_fc = 0.0;
  if (DAT_007cc708 == 0) goto LAB_0061a1e7;
  if ((*(uint *)(DAT_007cc708 + 0xb4) & 1) == 0) {
    if ((*(uint *)(DAT_007cc708 + 0xb4) & 2) == 0) goto LAB_0061a1e7;
    pfStack_12c = (float *)(DAT_007cc708 + 0xb8);
    FUN_004357e0();
    pfStack_12c = (float *)0x61a140;
    pfVar5 = (float *)FUN_006ba280();
    pfStack_12c = (float *)(fStack_e0 - pfVar5[2]);
    FUN_00401f00(fStack_e8 - *pfVar5,fStack_e4 - pfVar5[1]);
    pfStack_12c = (float *)(DAT_006e92e8 /
                           SQRT((float)pfStack_110 * (float)pfStack_110 + fStack_108 * fStack_108));
    pfStack_118 = pfStack_12c;
    iVar3 = FUN_0064cf30();
    if (iVar3 == 0) goto LAB_0061a1cf;
    fStack_fc = (float)pfStack_118 * param_3 * _DAT_006ec0cc;
  }
  else {
    pfStack_12c = (float *)(DAT_007cc708 + 0xb8);
    FUN_004357e0();
    pfStack_12c = (float *)0x61a0c7;
    pfVar5 = (float *)FUN_006ba280();
    pfStack_110 = (float *)(fStack_e8 - *pfVar5);
    fStack_108 = fStack_e0 - pfVar5[2];
    pfStack_12c = (float *)(DAT_006e92e8 /
                           SQRT((float)pfStack_110 * (float)pfStack_110 + fStack_108 * fStack_108));
    pfStack_118 = pfStack_12c;
    iVar3 = FUN_0064cf30();
    if (iVar3 == 0) {
LAB_0061a1cf:
      fStack_104 = 0.0;
      fStack_100 = 0.0;
      fStack_fc = 0.0;
      goto LAB_0061a1e7;
    }
    fStack_fc = (float)pfStack_118 * param_3 * _DAT_006e9994;
  }
  fStack_104 = (float)pfStack_110 * fStack_fc;
  fStack_100 = DAT_006e92e4 * fStack_fc;
  fStack_fc = fStack_108 * fStack_fc;
LAB_0061a1e7:
  iVar3 = *(int *)(param_1 + 0xb8);
  *(float *)(param_1 + 0xac) = param_3 + *(float *)(param_1 + 0xac);
  while( true ) {
    if (iVar3 == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x104) * 0x44;
    fVar1 = *(float *)(iVar3 + 0x10c + param_1);
    iVar3 = iVar3 + 0x10c + param_1;
    if (fVar1 < *(float *)(param_1 + 0xac) == (NAN(fVar1) || NAN(*(float *)(param_1 + 0xac))))
    break;
    fStack_e8 = *(float *)(iVar2 + 0x9c);
    fStack_e4 = *(float *)(iVar2 + 0xa0);
    fStack_e0 = *(float *)(iVar2 + 0xa4);
    pfStack_110 = *(float **)(iVar2 + 0xa8);
    uStack_10c = *(undefined4 *)(iVar2 + 0xac);
    fStack_108 = *(float *)(iVar2 + 0xb0);
    if (*(int *)(iVar3 + 4) != 0) {
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
    }
    *(undefined4 *)(iVar3 + 4) = 1;
    pfStack_12c = *(float **)(iVar2 + 0x98);
    fVar8 = (float10)FUN_00647b30(*(undefined4 *)(iVar2 + 0x94));
    *(float *)(iVar3 + 0x40) = (float)fVar8;
    *(float *)(iVar3 + 8) =
         *(float *)(param_1 + 0xac) - *(float *)(*(int *)(param_1 + 0x104) * 0x44 + 0x10c + param_1)
    ;
    if ((*(byte *)(iVar2 + 0x84) & 4) == 0) {
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    else {
      pfStack_12c = (float *)0x3f000000;
      fVar8 = (float10)FUN_00647b30(0xbf000000);
      fStack_114 = (float)fVar8;
      fVar8 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
      pfStack_118 = (float *)(float)fVar8;
      fVar8 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
      *(float *)(iVar3 + 0xc) = (float)fVar8;
      *(float **)(iVar3 + 0x10) = pfStack_118;
      *(float *)(iVar3 + 0x14) = fStack_114;
    }
    pfStack_12c = pfStack_110;
    pfVar5 = (float *)(iVar3 + 0x18);
    fVar8 = (float10)FUN_00647b30(fStack_e8);
    *pfVar5 = (float)fVar8;
    fVar8 = (float10)FUN_00647b30(fStack_e4,uStack_10c);
    *(float *)(iVar3 + 0x1c) = (float)fVar8;
    fVar8 = (float10)FUN_00647b30(fStack_e0,fStack_108);
    iVar2 = iStack_dc;
    *(float *)(iVar3 + 0x20) = (float)fVar8;
    if ((*(byte *)(iStack_dc + 0x84) & 1) != 0) {
      pfStack_12c = pfVar5;
      pfVar6 = (float *)FUN_0041b9f0(auStack_8c);
      *pfVar5 = *pfVar6;
      *(float *)(iVar3 + 0x1c) = pfVar6[1];
      *(float *)(iVar3 + 0x20) = pfVar6[2];
      pfStack_12c = (float *)(iVar3 + 0xc);
      pfVar6 = (float *)FUN_0041b9f0(afStack_d8 + 0x10);
      *(float *)(iVar3 + 0xc) = *pfVar6;
      *(float *)(iVar3 + 0x10) = pfVar6[1];
      *(float *)(iVar3 + 0x14) = pfVar6[2];
    }
    *pfVar5 = fStack_104 + *pfVar5;
    *(float *)(iVar3 + 0x1c) = fStack_100 + *(float *)(iVar3 + 0x1c);
    *(float *)(iVar3 + 0x20) = fStack_fc + *(float *)(iVar3 + 0x20);
    iVar3 = *(int *)(param_1 + 0x104) + 1;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    *(int *)(param_1 + 0x104) = iVar3;
    if (*(int *)(iVar2 + 0x88) <= iVar3) {
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xb0);
      if ((*(byte *)(iVar2 + 0x84) & 8) != 0) {
        *(undefined4 *)(param_1 + 0xb8) = 0;
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 0xb8);
    iVar2 = iStack_dc;
  }
  return;
}

