
void __fastcall FUN_004d4740(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uStack_58;
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
  
  uStack_58._0_3_ = CONCAT12((char)(DAT_0075dd10 >> 0x10),(undefined2)uStack_58);
  uStack_58 = (float)CONCAT13((char)(DAT_0075dd10 >> 0x18),(undefined3)uStack_58);
  uVar1 = DAT_0075dd10 >> 8;
  uVar5 = (undefined1)(DAT_0075dd10 >> 8);
  uStack_58 = (float)CONCAT31(uStack_58._1_3_,(char)DAT_0075dd10);
  iVar2 = FUN_004d57a0();
  if (iVar2 == 0) {
    fStack_44 = (float)param_1[0x98];
    FUN_0064c8d0(fStack_44);
    iVar2 = __ftol();
    iVar4 = ((uint)uStack_58 >> 0x10 & 0xff) + iVar2;
    iVar6 = (uVar1 & 0xff) + iVar2;
    iVar2 = ((uint)uStack_58 & 0xff) + iVar2;
    if (iVar4 < 0x100) {
      if (iVar4 < 0) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0xff;
    }
    if (iVar6 < 0x100) {
      if (iVar6 < 0) {
        iVar6 = 0;
      }
    }
    else {
      iVar6 = 0xff;
    }
    uVar5 = (undefined1)iVar6;
    if (iVar2 < 0x100) {
      if (iVar2 < 0) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0xff;
    }
    uStack_58._0_3_ = CONCAT12((char)iVar4,(undefined2)uStack_58);
    uStack_58 = (float)CONCAT13(0xff,(undefined3)uStack_58);
    uStack_58 = (float)CONCAT31(uStack_58._1_3_,(char)iVar2);
  }
  *(undefined1 *)((int)param_1 + 0x85) = uStack_58._3_1_;
  *(undefined1 *)(param_1 + 0x21) = uStack_58._2_1_;
  *(undefined1 *)((int)param_1 + 0x83) = uVar5;
  *(undefined1 *)((int)param_1 + 0x82) = (undefined1)uStack_58;
  FUN_0064c8e0(param_1[0x1a],&fStack_44,&fStack_48);
  FUN_0064c8e0(param_1[0x1b],&uStack_58,&fStack_54);
  FUN_0064c8e0(param_1[0x1c],&fStack_4c,&fStack_50);
  fStack_40 = (fStack_50 * fStack_54 + fStack_4c * fStack_44 * uStack_58) * (float)param_1[0x4c];
  fStack_3c = fStack_4c * fStack_48 * (float)param_1[0x4c];
  fStack_38 = (fStack_4c * fStack_44 * fStack_54 - fStack_50 * uStack_58) * (float)param_1[0x4c];
  fStack_30 = (uStack_58 * fStack_50 * fStack_44 - fStack_4c * fStack_54) * (float)param_1[0x4d];
  fStack_2c = fStack_50 * fStack_48 * (float)param_1[0x4d];
  fStack_28 = (fStack_4c * uStack_58 + fStack_50 * fStack_44 * fStack_54) * (float)param_1[0x4d];
  fStack_20 = uStack_58 * fStack_48 * (float)param_1[0x4e];
  iStack_c = param_1[6];
  iStack_10 = param_1[5];
  iStack_8 = param_1[7];
  fStack_1c = -fStack_44 * (float)param_1[0x4e];
  fStack_18 = fStack_54 * fStack_48 * (float)param_1[0x4e];
  uStack_34 = 0;
  uStack_24 = 0;
  uStack_14 = 0;
  uStack_4 = 0x3f800000;
  piVar3 = (int *)(**(code **)(*param_1 + 0x128))(&fStack_40,1);
  (**(code **)(*piVar3 + 4))(param_1);
  return;
}

