
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552890(float param_1,float param_2,int param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
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
  float local_c;
  
  fVar4 = param_1;
  if ((int)param_2 < param_3 + -1) {
    pfVar1 = (float *)((int)param_1 + param_3 * 0xc);
    fVar6 = param_2;
    do {
      local_30 = *pfVar1 - *(float *)((int)fVar4 + (int)fVar6 * 0xc);
      pfVar2 = (float *)((int)fVar4 + (int)fVar6 * 0xc);
      local_2c = pfVar1[1] - pfVar2[1];
      fVar5 = (float)((param_3 - (int)fVar6) / 2 + (int)fVar6);
      local_4c = pfVar1[2] - pfVar2[2];
      local_18 = local_30 * _DAT_006e936c;
      local_14 = local_2c * _DAT_006e936c;
      local_24 = local_18 + *pfVar2;
      local_20 = local_14 + pfVar2[1];
      local_1c = local_4c * _DAT_006e936c + pfVar2[2];
      local_28 = local_4c;
      local_c = local_30;
      fVar7 = (float10)FUN_00647b30(0,0x40c90fdb);
      local_4c = (float)fVar7;
      fVar7 = (float10)FUN_0064ca10(local_2c,SQRT(local_30 * local_30 + local_28 * local_28));
      local_48 = (float)-fVar7;
      fVar7 = (float10)FUN_0064ca10(local_30,local_28);
      local_44 = (float)fVar7;
      fVar7 = (float10)FUN_00647b30(0,param_4 * _DAT_006ec06c);
      local_3c = (float)fVar7;
      FUN_0064c8e0(local_4c,&param_2,&param_1);
      local_38 = param_1 * DAT_006e92e4 + local_3c * param_2;
      local_3c = local_3c * param_1 - param_2 * DAT_006e92e4;
      FUN_0064c8e0(local_48,&local_5c,&local_58);
      local_34 = local_58 * DAT_006e92e4 + local_38 * local_5c;
      local_38 = local_38 * local_58 - local_5c * DAT_006e92e4;
      FUN_0064c8e0(local_44,&local_50,&local_54);
      fVar3 = local_54 * local_3c + local_34 * local_50;
      local_1c = (local_34 * local_54 - local_3c * local_50) + local_1c;
      pfVar2 = (float *)((int)fVar4 + (int)fVar5 * 0xc);
      *pfVar2 = fVar3 + local_24;
      pfVar2[2] = local_1c;
      pfVar2[1] = local_38 + local_20;
      local_4c = param_4 * _DAT_006e936c;
      local_3c = fVar3;
      FUN_00552890(fVar4,fVar6,fVar5,local_4c);
      param_4 = local_4c;
      fVar6 = fVar5;
    } while ((int)fVar5 < param_3 + -1);
  }
  return;
}

