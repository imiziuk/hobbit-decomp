
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0049e730(int param_1,undefined4 param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = FUN_00647e40(param_2,s_Radius_0072a57c);
  if (iVar3 == 0) {
    if (*param_3 == 2) {
      fVar2 = DAT_006e92e8;
      if ((float)param_3[0x94] < DAT_006e92e8 == (NAN((float)param_3[0x94]) || NAN(DAT_006e92e8))) {
        fVar2 = (float)param_3[0x94];
      }
      *(float *)(param_1 + 0xd0) = fVar2;
      pfVar1 = (float *)(param_1 + 0x14);
      FUN_00401f00(*pfVar1 - fVar2,*(float *)(param_1 + 0x18) - fVar2,
                   *(float *)(param_1 + 0x1c) - fVar2);
      uStack_18 = uStack_3c;
      uStack_14 = uStack_38;
      uStack_10 = uStack_34;
      uVar4 = FUN_00401f00(fVar2,fVar2,fVar2);
      uVar4 = FUN_00402130(auStack_24,pfVar1,uVar4);
      FUN_004357e0(uVar4);
      *(undefined4 *)(param_1 + 0x44) = uStack_18;
      *(undefined4 *)(param_1 + 0x48) = uStack_14;
      *(undefined4 *)(param_1 + 0x4c) = uStack_10;
      *(undefined4 *)(param_1 + 0x50) = uStack_c;
      *(undefined4 *)(param_1 + 0x54) = uStack_8;
      *(undefined4 *)(param_1 + 0x58) = uStack_4;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x58);
      *(float *)(param_1 + 0x2c) = -*pfVar1 + *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x30) = -*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x30);
      *(float *)(param_1 + 0x34) = -*(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x38) = -*pfVar1 + *(float *)(param_1 + 0x38);
      *(float *)(param_1 + 0x3c) = -*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x3c);
      *(float *)(param_1 + 0x40) = -*(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x40);
      return 1;
    }
    return 0;
  }
  iVar3 = FUN_00647e40(param_2,s_Jump_To_NavPoint_0072a5c0);
  if (iVar3 == 0) {
    if (*param_3 == 0xf) {
      FUN_0049dbd0(param_3[0x90],param_3[0x91]);
      _DAT_0075d1fc = 0;
      return 1;
    }
    return 0;
  }
  iVar3 = FUN_00647e40(param_2,s_Nav_Flags_0072a5b4);
  if (iVar3 != 0) {
    uVar4 = FUN_004ab750(param_2,param_3);
    return uVar4;
  }
  if ((*param_3 != 0xc) && (*param_3 != 1)) {
    return 0;
  }
  *(char *)(param_1 + 0xd4) = (char)param_3[0x93];
  return 1;
}

