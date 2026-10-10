
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066a920(int param_1,undefined4 param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [2];
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_006720e0(&param_1,&local_68,&local_64,&local_6c);
  FUN_00673930(&local_3c,&local_48,(float)param_1,(float)local_68,1);
  FUN_00673930(&local_30,&local_48,(float)param_1,(float)local_6c,1);
  FUN_00673930(&local_24,&local_48,(float)local_64,(float)local_6c,1);
  FUN_00673930(&local_18,&local_48,(float)local_64,(float)local_68,1);
  puVar3 = (undefined4 *)FUN_00672260(local_54);
  local_48 = *puVar3;
  local_44 = puVar3[1];
  local_40 = puVar3[2];
  pfVar6 = &local_34;
  iVar5 = 4;
  do {
    pfVar1 = pfVar6 + -2;
    fVar2 = param_3 / *pfVar6;
    *pfVar1 = fVar2 * *pfVar1;
    pfVar6[-1] = fVar2 * pfVar6[-1];
    *pfVar6 = fVar2 * *pfVar6;
    pfVar4 = (float *)FUN_006727a0(local_54,pfVar1);
    *pfVar1 = *pfVar4;
    pfVar6[-1] = pfVar4[1];
    *pfVar6 = pfVar4[2];
    pfVar6 = pfVar6 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_58 = local_28 + local_34;
  local_54[0] = local_24 + local_30 + local_3c;
  local_60 = local_18 + local_54[0];
  local_5c = local_14 + local_20 + local_2c + local_38;
  local_c = local_60 * _DAT_006e9550;
  local_8 = local_5c * _DAT_006e9550;
  local_4c = (local_10 + local_1c + local_58) * _DAT_006e9550;
  local_4 = local_4c;
  FUN_0066c3a0(1,0);
  FUN_0066ddd0(param_2);
  FUN_0066e180(&local_48,5,0xc);
  FUN_0066e550(&DAT_007502f0,0x10);
  FUN_0066ddd0(0xff808080);
  FUN_0066de80(&local_48);
  FUN_0066de80(&local_c);
  FUN_0066d9a0();
  return;
}

