
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0057da20(float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10,float param_11,float param_12,
            float param_13,float param_14,float param_15,float param_16,float param_17,
            float param_18,float param_19)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float local_1c;
  float local_18;
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_RecordCollision_00740528);
  local_4 = 0;
  if ((param_19 == 0.0) && (param_1[0x10b4] != 0.0)) {
    FUN_0041b9f0(&local_1c,&param_3);
    param_3 = local_1c;
    param_4 = local_18;
    param_5 = local_14;
    pfVar3 = (float *)FUN_004e3b20(&local_1c,param_1 + 0x10b8,&param_6);
    param_6 = *pfVar3;
    param_7 = pfVar3[1];
    param_8 = pfVar3[2];
    param_9 = pfVar3[3];
    pfVar3 = (float *)FUN_004e3b20(&local_1c,param_1 + 0x10b8,&param_10);
    param_10 = *pfVar3;
    param_11 = pfVar3[1];
    param_12 = pfVar3[2];
    param_13 = pfVar3[3];
  }
  fVar2 = param_1[0x120];
  if ((fVar2 == param_1[0x121]) && (0 < (int)param_1[0x121])) {
    iVar5 = -1;
    iVar4 = 0;
    pfVar3 = param_1;
    fVar1 = _DAT_006e9370;
    if (0 < (int)fVar2) {
      do {
        if (fVar1 < *pfVar3 != (fVar1 == *pfVar3)) {
          fVar1 = *pfVar3;
          iVar5 = iVar4;
        }
        iVar4 = iVar4 + 1;
        pfVar3 = pfVar3 + 0x12;
      } while (iVar4 < (int)fVar2);
    }
    if (param_2 < fVar1) {
      param_1 = param_1 + iVar5 * 0x12;
      *param_1 = param_2;
      param_1[1] = param_3;
      param_1[2] = param_4;
      param_1[3] = param_5;
      param_1[4] = param_6;
      param_1[5] = param_7;
      param_1[6] = param_8;
      param_1[7] = param_9;
      param_1[8] = param_10;
      param_1[9] = param_11;
      param_1[10] = param_12;
      param_1[0xb] = param_13;
      param_1[0xc] = param_14;
      param_1[0xd] = param_15;
      param_1[0xe] = param_16;
      param_1[0xf] = param_17;
      param_1[0x10] = param_18;
      param_1[0x11] = param_19;
    }
  }
  else if (fVar2 != 2.24208e-44) {
    pfVar3 = param_1 + (int)fVar2 * 0x12;
    *pfVar3 = param_2;
    pfVar3[1] = param_3;
    pfVar3[2] = param_4;
    pfVar3[3] = param_5;
    FUN_004357e0(&param_6);
    pfVar3[7] = param_9;
    FUN_004357e0(&param_10);
    pfVar3[0xb] = param_13;
    pfVar3[0xc] = param_14;
    pfVar3[0xd] = param_15;
    pfVar3[0xe] = param_16;
    pfVar3[0xf] = param_17;
    pfVar3[0x10] = param_18;
    pfVar3[0x11] = param_19;
    param_1[0x120] = (float)((int)param_1[0x120] + 1);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

