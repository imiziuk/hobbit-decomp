
void FUN_005787c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  short *psVar1;
  int iVar2;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_60[0] = *param_1;
  local_60[1] = param_1[1];
  local_60[2] = param_1[2];
  local_30 = param_1[3];
  local_44 = param_1[4];
  local_4c = param_1[5];
  iVar2 = 0;
  psVar1 = &DAT_007401d2;
  local_60[3] = local_60[0];
  local_50 = local_60[1];
  local_48 = local_60[0];
  local_40 = local_60[2];
  local_3c = local_60[0];
  local_38 = local_44;
  local_34 = local_4c;
  local_2c = local_60[1];
  local_28 = local_60[2];
  local_24 = local_30;
  local_20 = local_60[1];
  local_1c = local_4c;
  local_18 = local_30;
  local_14 = local_44;
  local_10 = local_60[2];
  local_c = local_30;
  local_8 = local_44;
  local_4 = local_4c;
  do {
    FUN_005785c0(local_60 + psVar1[-1] * 3,local_60 + *psVar1 * 3,local_60 + psVar1[1] * 3,iVar2,0,
                 param_2,param_3);
    psVar1 = psVar1 + 3;
    iVar2 = iVar2 + 1;
  } while ((int)psVar1 < 0x74021a);
  return;
}

