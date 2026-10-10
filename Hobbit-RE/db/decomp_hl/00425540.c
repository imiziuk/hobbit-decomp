
void __thiscall FUN_00425540(int param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  undefined4 uStack_64;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  pfVar1 = param_2 + 2;
  param_2[0xc] = 0.0;
  param_2[8] = 0.0;
  param_2[4] = 0.0;
  param_2[0xd] = 0.0;
  param_2[9] = 0.0;
  param_2[1] = 0.0;
  param_2[0xe] = 0.0;
  param_2[6] = 0.0;
  *pfVar1 = 0.0;
  param_2[0xb] = 0.0;
  param_2[7] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 1.0;
  param_2[5] = 1.0;
  param_2[10] = 1.0;
  param_2[0xf] = 1.0;
  FUN_00425720(param_1 + 0x68);
  uStack_74 = 0;
  uStack_64 = 0;
  uStack_54 = 0;
  uStack_44 = 0x3f800000;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  pfVar3 = (float *)FUN_0064e040(auStack_40,auStack_80,param_2);
  if ((param_2 != pfVar3) && (pfVar2 = pfVar3 + 0x10, pfVar3 != pfVar2)) {
    iVar5 = (int)pfVar3 - (int)param_2;
    pfVar4 = pfVar1;
    do {
      pfVar4[-2] = *pfVar3;
      pfVar4[-1] = pfVar3[1];
      *pfVar4 = *(float *)(iVar5 + (int)pfVar4);
      pfVar4[1] = pfVar3[3];
      pfVar3 = pfVar3 + 4;
      pfVar4 = pfVar4 + 4;
    } while (pfVar3 != pfVar2);
  }
  if (((((NAN(param_2[3]) || NAN(DAT_006e92e4)) != (param_2[3] == DAT_006e92e4)) &&
       ((NAN(param_2[7]) || NAN(DAT_006e92e4)) != (param_2[7] == DAT_006e92e4))) &&
      ((NAN(param_2[0xb]) || NAN(DAT_006e92e4)) != (param_2[0xb] == DAT_006e92e4))) &&
     (param_2[0xf] == 1.0)) {
    param_2[0xc] = *(float *)(param_1 + 0x14) + param_2[0xc];
    param_2[0xd] = *(float *)(param_1 + 0x18) + param_2[0xd];
    param_2[0xe] = *(float *)(param_1 + 0x1c) + param_2[0xe];
    return;
  }
  *param_2 = param_2[3] * *(float *)(param_1 + 0x14) + *param_2;
  param_2[4] = *(float *)(param_1 + 0x14) * param_2[7] + param_2[4];
  param_2[8] = param_2[0xb] * *(float *)(param_1 + 0x14) + param_2[8];
  param_2[0xc] = *(float *)(param_1 + 0x14) * param_2[0xf] + param_2[0xc];
  param_2[1] = *(float *)(param_1 + 0x18) * param_2[3] + param_2[1];
  param_2[5] = *(float *)(param_1 + 0x18) * param_2[7] + param_2[5];
  param_2[9] = *(float *)(param_1 + 0x18) * param_2[0xb] + param_2[9];
  param_2[0xd] = *(float *)(param_1 + 0x18) * param_2[0xf] + param_2[0xd];
  *pfVar1 = param_2[3] * *(float *)(param_1 + 0x1c) + *pfVar1;
  param_2[6] = param_2[7] * *(float *)(param_1 + 0x1c) + param_2[6];
  param_2[10] = param_2[0xb] * *(float *)(param_1 + 0x1c) + param_2[10];
  param_2[0xe] = param_2[0xf] * *(float *)(param_1 + 0x1c) + param_2[0xe];
  return;
}

