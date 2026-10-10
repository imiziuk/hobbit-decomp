
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00659670(int param_1,int param_2,undefined4 *param_3,float param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_64;
  undefined4 local_60;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_64 = 1.0;
  local_60 = 0;
  if (DAT_007edabc == 0) {
    iVar2 = FUN_0065aac0(param_1,&param_1,local_5c,&local_60);
    if (iVar2 != 0) {
      FUN_0065abf0(&local_58,iVar2,param_1);
      iVar1 = (int)param_4;
      iVar3 = param_1;
      if (param_4 != 0.0) {
        FUN_00658ef0(*(float *)(param_1 + 0x16c) * local_24,*(float *)(param_1 + 0x178) * local_20,
                     local_1c,param_3,&local_64);
        if ((param_5 != 0) && (local_64 < _DAT_006edbfc != (local_64 == _DAT_006edbfc))) {
          DAT_007edac8 = 1;
          return 0;
        }
      }
      param_4 = local_48 * *(float *)(iVar3 + 0x148) * local_64;
      iVar3 = FUN_00678450(local_2c,param_4);
      if (iVar3 == 0) {
        DAT_007edac8 = 3;
        return 0;
      }
      iVar4 = FUN_00647f90(param_1,&DAT_0074e1c4);
      if (iVar4 != 0) {
        iVar4 = FUN_00659f30(DAT_007edacc);
        if (iVar4 != 0) {
          FUN_00659c80(DAT_007edacc,0);
        }
        DAT_007edacc = ((iVar3 - DAT_008067f8) / 0xf8 + 1U & 0xffff) +
                       *(int *)(iVar3 + 0xe0) * 0x10000;
      }
      *(undefined4 *)(iVar3 + 0x1c) = local_60;
      *(undefined4 *)(iVar3 + 0x20) = local_58;
      *(undefined4 *)(iVar3 + 0x24) = local_54;
      *(undefined4 *)(iVar3 + 0x28) = local_50;
      *(undefined4 *)(iVar3 + 0x2c) = local_4c;
      *(float *)(iVar3 + 0x30) = local_48;
      *(undefined4 *)(iVar3 + 0x34) = local_44;
      *(undefined4 *)(iVar3 + 0x38) = local_40;
      *(undefined4 *)(iVar3 + 0x3c) = local_3c;
      *(undefined4 *)(iVar3 + 0x40) = local_38;
      *(undefined4 *)(iVar3 + 0x44) = local_34;
      *(undefined4 *)(iVar3 + 0x48) = local_30;
      *(undefined4 *)(iVar3 + 0x4c) = local_2c;
      *(undefined4 *)(iVar3 + 0x50) = local_28;
      *(float *)(iVar3 + 0x54) = local_24;
      *(float *)(iVar3 + 0x58) = local_20;
      *(undefined4 *)(iVar3 + 0x5c) = local_1c;
      *(undefined4 *)(iVar3 + 0x60) = local_18;
      *(undefined4 *)(iVar3 + 100) = local_14;
      *(undefined4 *)(iVar3 + 0x68) = local_10;
      *(undefined4 *)(iVar3 + 0x6c) = local_c;
      *(undefined4 *)(iVar3 + 0x70) = local_8;
      *(undefined4 *)(iVar3 + 0x74) = local_4;
      if (iVar1 == 0) {
        FUN_006592a0(*(undefined4 *)(iVar3 + 0x48),iVar3 + 0x68);
      }
      else {
        *(undefined4 *)(iVar3 + 0xd0) = *param_3;
        *(undefined4 *)(iVar3 + 0xd4) = param_3[1];
        *(undefined4 *)(iVar3 + 0xd8) = param_3[2];
      }
      if (((*(byte *)(iVar3 + 0x20) & 8) == 0) || (iVar1 != 0)) {
        *(undefined4 *)(iVar3 + 0xc0) = 1;
      }
      else {
        *(undefined4 *)(iVar3 + 0xc0) = 0;
      }
      *(undefined4 *)(iVar3 + 0xc4) = 1;
      FUN_00679010(iVar3,0x3f800000,0x3f800000);
      FUN_006790d0(iVar3,0x3f800000,0x3f800000);
      *(int *)(iVar3 + 0xc4) = iVar1;
      FUN_00678b90(iVar3,0x3f800000);
      FUN_00678d50(iVar3,0x3f800000);
      FUN_00678e70(iVar3,0x3f800000);
      FUN_00679760(iVar3,param_1);
      *(int *)(iVar3 + 0x18) = iVar2;
      iVar2 = FUN_00658d20(0,iVar2,iVar3,param_1);
      if (iVar2 != 0) {
        if (param_2 != 0) {
          FUN_00678850(iVar3);
        }
        DAT_007edac8 = 0;
        return ((iVar3 - DAT_008067f8) / 0xf8 + 1U & 0xffff) + *(int *)(iVar3 + 0xe0) * 0x10000;
      }
      FUN_00678790(iVar3,0);
      return 0;
    }
    DAT_007edac8 = 2;
  }
  return 0;
}

