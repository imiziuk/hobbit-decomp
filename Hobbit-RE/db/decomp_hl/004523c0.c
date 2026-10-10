
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004523c0(int *param_1)

{
  int *piVar1;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  int iStack_44;
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
  int iStack_10;
  float fStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  iStack_4c = param_1[5];
  fStack_48 = (float)param_1[6] + _DAT_006ec34c;
  iStack_44 = param_1[7];
  FUN_0064c8e0(param_1[0x1a],&fStack_50,&fStack_54);
  FUN_0064c8e0(param_1[0x1b],&fStack_64,&fStack_60);
  FUN_0064c8e0(param_1[0x1c],&fStack_58,&fStack_5c);
  fStack_40 = (fStack_5c * fStack_60 + fStack_58 * fStack_50 * fStack_64) * (float)param_1[0x4c];
  fStack_3c = fStack_58 * fStack_54 * (float)param_1[0x4c];
  fStack_38 = (fStack_58 * fStack_50 * fStack_60 - fStack_5c * fStack_64) * (float)param_1[0x4c];
  fStack_30 = (fStack_64 * fStack_5c * fStack_50 - fStack_58 * fStack_60) * (float)param_1[0x4d];
  fStack_2c = fStack_5c * fStack_54 * (float)param_1[0x4d];
  fStack_28 = (fStack_5c * fStack_50 * fStack_60 + fStack_58 * fStack_64) * (float)param_1[0x4d];
  fStack_20 = fStack_64 * fStack_54 * (float)param_1[0x4e];
  fStack_c = fStack_48;
  iStack_10 = iStack_4c;
  fStack_1c = -fStack_50 * (float)param_1[0x4e];
  iStack_8 = iStack_44;
  uStack_34 = 0;
  uStack_24 = 0;
  uStack_14 = 0;
  uStack_4 = 0x3f800000;
  fStack_18 = fStack_60 * fStack_54 * (float)param_1[0x4e];
  piVar1 = (int *)(**(code **)(*param_1 + 0x128))(&fStack_40,0);
  *(byte *)(piVar1 + 0xf) = *(byte *)(piVar1 + 0xf) | 1;
  (**(code **)(*piVar1 + 4))(param_1);
  return;
}

