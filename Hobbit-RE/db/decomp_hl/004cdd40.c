
void __fastcall FUN_004cdd40(int *param_1)

{
  int *piVar1;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
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
  int iStack_10;
  int iStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  FUN_0064c8e0(param_1[0x1a],&fStack_44,&fStack_48);
  FUN_0064c8e0(param_1[0x1b],&fStack_58,&fStack_54);
  FUN_0064c8e0(param_1[0x1c],&fStack_4c,&fStack_50);
  fStack_40 = (fStack_50 * fStack_54 + fStack_4c * fStack_44 * fStack_58) * (float)param_1[0x4c];
  fStack_3c = fStack_4c * fStack_48 * (float)param_1[0x4c];
  fStack_38 = (fStack_4c * fStack_44 * fStack_54 - fStack_50 * fStack_58) * (float)param_1[0x4c];
  fStack_30 = (fStack_58 * fStack_50 * fStack_44 - fStack_4c * fStack_54) * (float)param_1[0x4d];
  fStack_2c = fStack_50 * fStack_48 * (float)param_1[0x4d];
  fStack_28 = (fStack_50 * fStack_44 * fStack_54 + fStack_4c * fStack_58) * (float)param_1[0x4d];
  fStack_20 = fStack_58 * fStack_48 * (float)param_1[0x4e];
  fStack_1c = -fStack_44 * (float)param_1[0x4e];
  iStack_10 = param_1[5];
  iStack_c = param_1[6];
  iStack_8 = param_1[7];
  fStack_18 = fStack_54 * fStack_48 * (float)param_1[0x4e];
  *(undefined1 *)((int)param_1 + 0x85) = 0xff;
  *(undefined1 *)(param_1 + 0x21) = 200;
  *(undefined1 *)((int)param_1 + 0x83) = 200;
  *(undefined1 *)((int)param_1 + 0x82) = 200;
  uStack_34 = 0;
  uStack_24 = 0;
  uStack_14 = 0;
  uStack_4 = 0x3f800000;
  piVar1 = (int *)(**(code **)(*param_1 + 0x128))(&fStack_40,0);
  (**(code **)(*piVar1 + 4))(param_1);
  return;
}

