
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00583930(undefined4 *param_1,byte *param_2,float param_3,undefined4 param_4)

{
  int iVar1;
  float *pfVar2;
  float local_68 [4];
  float local_58;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  pfVar2 = local_68;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = 0.0;
    pfVar2 = pfVar2 + 1;
  }
  local_68[1] = (float)param_2[2] * param_3 * _DAT_006ed3a4;
  local_68[0] = 4.2039e-45;
  local_28 = *param_1;
  local_68[2] = (float)param_2[1] * param_3 * _DAT_006ed3a4;
  local_24 = param_1[1];
  local_20 = param_1[2];
  local_68[3] = (float)*param_2 * param_3 * _DAT_006ed3a4;
  local_58 = (float)param_2[3] * param_3 * _DAT_006ed3a4;
  (**(code **)(*DAT_007f1000 + 0xb0))(DAT_007f1000,param_4,local_68);
  (**(code **)(*DAT_007f1000 + 0xb8))(DAT_007f1000,param_4,1);
  return;
}

