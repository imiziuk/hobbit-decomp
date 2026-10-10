
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005837f0(undefined4 *param_1,byte *param_2,float param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte *pbVar1;
  byte bVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  float local_68 [4];
  float local_58;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_14;
  float local_10;
  uint local_c;
  
  pfVar3 = local_68;
  for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar3 = 0.0;
    pfVar3 = pfVar3 + 1;
  }
  pbVar1 = param_2 + 1;
  bVar2 = *param_2;
  local_68[1] = (float)param_2[2] * param_3 * _DAT_006ed3a4;
  param_2 = (byte *)(uint)param_2[3];
  local_68[0] = 1.4013e-45;
  local_68[2] = (float)*pbVar1 * param_3 * _DAT_006ed3a4;
  local_34 = *param_1;
  local_30 = param_1[1];
  local_2c = param_1[2];
  local_68[3] = (float)bVar2 * param_3 * _DAT_006ed3a4;
  local_1c = param_4;
  local_58 = (float)(int)param_2 * param_3 * _DAT_006ed3a4;
  FUN_00582b40(param_3,param_4,&param_4,&param_3,&param_2);
  uVar4 = param_5;
  local_14 = param_4;
  if (param_3 <= DAT_006e92e4) {
    local_10 = 0.0;
  }
  else {
    local_10 = param_3;
  }
  local_c = (uint)param_2;
  (**(code **)(*DAT_007f1000 + 0xb0))(DAT_007f1000,param_5,local_68);
  (**(code **)(*DAT_007f1000 + 0xb8))(DAT_007f1000,uVar4,1);
  return;
}

