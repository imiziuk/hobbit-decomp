
void __fastcall FUN_004ce3d0(int *param_1)

{
  int iVar1;
  int *piVar2;
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
  
  iVar1 = FUN_0065fce0(0);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00672260(&fStack_4c);
    param_1[5] = *piVar2;
    param_1[6] = piVar2[1];
    fStack_44 = (float)piVar2[2];
    param_1[7] = (int)fStack_44;
    fStack_4c = ((float)param_1[5] - (float)param_1[0x5c]) * (float)param_1[0x58];
    fStack_48 = ((float)param_1[6] - (float)param_1[0x5d]) * (float)param_1[0x59];
    param_1[5] = (int)((float)param_1[5] - fStack_4c);
    param_1[6] = (int)((float)param_1[6] - fStack_48);
    param_1[7] = (int)((float)param_1[7] - (fStack_44 - (float)param_1[0x5e]) * (float)param_1[0x5a]
                      );
    FUN_0064c8e0(param_1[0x1a],&fStack_50,&fStack_54);
    FUN_0064c8e0(param_1[0x1b],&fStack_64,&fStack_60);
    FUN_0064c8e0(param_1[0x1c],&fStack_58,&fStack_5c);
    fStack_40 = (fStack_5c * fStack_60 + fStack_58 * fStack_50 * fStack_64) * (float)param_1[0x4c];
    fStack_3c = fStack_58 * fStack_54 * (float)param_1[0x4c];
    fStack_38 = (fStack_58 * fStack_50 * fStack_60 - fStack_5c * fStack_64) * (float)param_1[0x4c];
    iStack_8 = param_1[7];
    iStack_10 = param_1[5];
    iStack_c = param_1[6];
    uStack_34 = 0;
    fStack_30 = (fStack_64 * fStack_5c * fStack_50 - fStack_58 * fStack_60) * (float)param_1[0x4d];
    uStack_24 = 0;
    uStack_14 = 0;
    uStack_4 = 0x3f800000;
    fStack_2c = fStack_5c * fStack_54 * (float)param_1[0x4d];
    fStack_28 = (fStack_5c * fStack_50 * fStack_60 + fStack_58 * fStack_64) * (float)param_1[0x4d];
    fStack_20 = fStack_64 * fStack_54 * (float)param_1[0x4e];
    fStack_1c = -fStack_50 * (float)param_1[0x4e];
    fStack_18 = fStack_60 * fStack_54 * (float)param_1[0x4e];
    piVar2 = (int *)(**(code **)(*param_1 + 0x128))(&fStack_40,1);
    *(byte *)(piVar2 + 0xf) = *(byte *)(piVar2 + 0xf) & 0xf3;
    *(byte *)(piVar2 + 0x10) = *(byte *)(piVar2 + 0x10) | 4;
    (**(code **)(*piVar2 + 4))(param_1);
  }
  return;
}

