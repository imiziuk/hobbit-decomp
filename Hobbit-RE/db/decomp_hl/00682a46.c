
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00682a46(int *param_1,int *param_2,int *param_3,int param_4,uint param_5)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  undefined4 uStack_b4;
  float afStack_b0 [3];
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  float fStack_4c;
  float fStack_48;
  int aiStack_44 [6];
  uint uStack_2c;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  uint uStack_14;
  uint uStack_10;
  float fStack_c;
  float fStack_8;
  
  if (param_2 == (int *)0x0) {
    return -0x7789f794;
  }
  (**(code **)(*param_2 + 0x38))(param_2,0,aiStack_44);
  if (param_3 == (int *)0x0) {
    fStack_1c = 0.0;
    iStack_18 = 0;
    uStack_14 = uStack_2c;
    uStack_10 = uStack_28;
  }
  else {
    fStack_1c = (float)*param_3;
    iStack_18 = param_3[1];
    uStack_14 = param_3[2];
    uStack_10 = param_3[3];
    if ((int)fStack_1c < 0) {
      return -0x7789f794;
    }
    if ((int)uStack_14 < (int)fStack_1c) {
      return -0x7789f794;
    }
    if ((int)uStack_2c < (int)fStack_1c) {
      return -0x7789f794;
    }
    if (iStack_18 < 0) {
      return -0x7789f794;
    }
    if ((int)uStack_10 < iStack_18) {
      return -0x7789f794;
    }
    if ((int)uStack_28 < iStack_18) {
      return -0x7789f794;
    }
  }
  fStack_7c = (float)(int)(uStack_14 - (int)fStack_1c);
  fStack_a0 = (float)(int)fStack_1c * (DAT_006e92e8 / (float)uStack_2c);
  fStack_24 = (float)(int)uStack_14 * (DAT_006e92e8 / (float)uStack_2c);
  fStack_20 = (float)iStack_18 * (DAT_006e92e8 / (float)uStack_28);
  fStack_80 = (float)(int)uStack_10 * (DAT_006e92e8 / (float)uStack_28);
  uStack_b4 = 0;
  afStack_b0[0] = 0.0;
  afStack_b0[1] = 0.0;
  afStack_b0[2] = 1.0;
  fStack_9c = fStack_20;
  uStack_a4 = param_5;
  uStack_98 = 0;
  fStack_94 = (float)(int)(uStack_10 - iStack_18);
  uStack_90 = 0;
  uStack_8c = 0x3f800000;
  fStack_84 = fStack_a0;
  uStack_88 = param_5;
  fStack_78 = (float)(int)(uStack_10 - iStack_18);
  uStack_74 = 0;
  uStack_70 = 0x3f800000;
  fStack_1c = fStack_7c;
  iStack_18 = 0;
  uStack_14 = 0;
  fStack_68 = fStack_24;
  fStack_64 = fStack_80;
  uStack_10 = 0x3f800000;
  uStack_6c = param_5;
  fStack_60 = fStack_7c;
  fStack_c = fStack_24;
  uStack_5c = 0;
  uStack_58 = 0;
  fStack_8 = fStack_20;
  uStack_54 = 0x3f800000;
  fStack_4c = fStack_24;
  uStack_50 = param_5;
  fStack_48 = fStack_20;
  if (param_4 != 0) {
    puVar3 = &uStack_b4;
    iVar4 = 4;
    do {
      FUN_00688764(puVar3,puVar3,param_4);
      puVar3 = puVar3 + 7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 4;
  pfVar1 = afStack_b0;
  do {
    pfVar1[-1] = pfVar1[-1] - pfVar1[2] * _DAT_006e936c;
    *pfVar1 = *pfVar1 - pfVar1[2] * _DAT_006e936c;
    iVar4 = iVar4 + -1;
    pfVar1[2] = 1.0 / pfVar1[2];
    pfVar1 = pfVar1 + 7;
  } while (iVar4 != 0);
  iVar4 = param_1[3];
  bVar5 = (param_5 & 0xff000000) != 0xff000000;
  if (!bVar5) {
    if (aiStack_44[0] < 0x35) {
      if (((aiStack_44[0] < 0x33) && (aiStack_44[0] != 0x15)) &&
         ((aiStack_44[0] < 0x19 ||
          ((0x1a < aiStack_44[0] &&
           ((aiStack_44[0] < 0x1c ||
            ((0x1d < aiStack_44[0] && ((aiStack_44[0] < 0x28 || (0x29 < aiStack_44[0]))))))))))))
      goto LAB_00682ca7;
    }
    else if ((((aiStack_44[0] != 0x32545844) && (aiStack_44[0] != 0x33545844)) &&
             (aiStack_44[0] != 0x34545844)) && (aiStack_44[0] != 0x35545844)) goto LAB_00682ca7;
    bVar5 = true;
  }
LAB_00682ca7:
  if ((iVar4 != 0) || (iVar2 = (**(code **)(*param_1 + 0x10))(param_1), -1 < iVar2)) {
    (**(code **)(*(int *)param_1[2] + 0xf4))((int *)param_1[2],0,param_2);
    (**(code **)(*(int *)param_1[2] + 200))((int *)param_1[2],0x1b,bVar5);
    (**(code **)(*(int *)param_1[2] + 0x120))((int *)param_1[2],6,2,&uStack_b4,0x1c);
    if ((iVar4 != 0) || (iVar2 = (**(code **)(*param_1 + 0x1c))(param_1), -1 < iVar2)) {
      iVar2 = 0;
    }
  }
  return iVar2;
}

