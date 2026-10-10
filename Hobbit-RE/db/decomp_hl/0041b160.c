
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041b160(int *param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  int *piVar5;
  float fStack_98;
  float fStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float afStack_70 [3];
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = FUN_00424ba0();
  if ((iVar2 != 0) && (iVar2 = (**(code **)(*param_1 + 0x154))(), iVar2 != 0)) {
    fVar1 = *(float *)(iVar2 + 0x20) + _DAT_006e9368;
    afStack_70[1] = 20.0;
    afStack_70[2] = -_DAT_0075b808;
    uStack_60 = 0x41a00000;
    uStack_54 = 0x41a00000;
    uStack_48 = 0x41a00000;
    afStack_70[0] = -_DAT_0075b800;
    fStack_5c = _DAT_0075b808;
    fStack_58 = _DAT_0075b800;
    fStack_50 = _DAT_0075b808;
    fStack_4c = _DAT_0075b800;
    fStack_64 = afStack_70[0];
    fStack_44 = afStack_70[2];
    FUN_0064c8e0();
    FUN_0064c8e0(fVar1,&fStack_94,&fStack_98);
    FUN_0064c8e0(0,&fStack_8c,&fStack_84);
    fStack_40 = fStack_84 * fStack_98 + fStack_8c * fStack_80 * fStack_94;
    fStack_3c = fStack_8c * fStack_88;
    fStack_38 = fStack_8c * fStack_80 * fStack_98 - fStack_84 * fStack_94;
    fStack_30 = fStack_94 * fStack_84 * fStack_80 - fStack_8c * fStack_98;
    fStack_2c = fStack_84 * fStack_88;
    uStack_10 = *param_2;
    uStack_c = param_2[1];
    uStack_8 = param_2[2];
    fStack_28 = fStack_84 * fStack_80 * fStack_98 + fStack_8c * fStack_94;
    uStack_34 = 0;
    uStack_24 = 0;
    uStack_14 = 0;
    uStack_4 = 0x3f800000;
    fStack_20 = fStack_94 * fStack_88;
    pfVar4 = afStack_70;
    iVar2 = 4;
    fStack_1c = -fStack_80;
    fStack_18 = fStack_98 * fStack_88;
    do {
      FUN_0041b9f0();
      *pfVar4 = fStack_7c;
      pfVar4[1] = fStack_78;
      pfVar4[2] = fStack_74;
      pfVar4 = pfVar4 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uStack_8e = __ftol();
    uStack_8f = __ftol();
    uStack_90 = __ftol();
    uStack_8d = 0xff;
    uVar3 = FUN_0054f5b0();
    piVar5 = param_1 + 0x165d;
    if (param_3 == 0) {
      piVar5 = param_1 + 0x165e;
    }
    FUN_00425250();
    FUN_00469af0(piVar5);
    FUN_0054fc60(uVar3,afStack_70,0x42480000);
  }
  return;
}

