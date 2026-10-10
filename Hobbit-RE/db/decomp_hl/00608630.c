
undefined4
FUN_00608630(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4,
            undefined4 *param_5,float *param_6,float *param_7)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  float *pfVar7;
  float10 fVar8;
  float *local_2a0;
  int local_29c;
  int local_298;
  undefined1 local_294 [12];
  undefined1 local_288 [12];
  float local_27c [6];
  undefined1 local_264 [12];
  undefined1 local_258 [8];
  undefined4 local_250 [16];
  float local_210 [24];
  undefined1 local_1b0 [28];
  float local_194 [101];
  
  FUN_00607f20(param_1,local_1b0);
  local_2a0 = local_27c;
  local_29c = 0;
  pfVar4 = local_210;
  puVar6 = local_258;
  pfVar7 = local_194;
  local_298 = 0xc;
  do {
    pfVar1 = pfVar7 + -7;
    iVar2 = FUN_00607990(pfVar1,param_2,param_3,local_2a0,puVar6);
    if (iVar2 != 0) {
      FUN_00401f00(pfVar7[-1] - *pfVar1,*pfVar7 - pfVar7[-6],pfVar7[1] - pfVar7[-5]);
      FUN_00401f00(pfVar7[-4] - *pfVar1,pfVar7[-3] - pfVar7[-6],pfVar7[-2] - pfVar7[-5]);
      pfVar3 = (float *)FUN_0042eb90(local_264,local_294,local_288);
      *pfVar4 = *pfVar3;
      pfVar4[1] = pfVar3[1];
      pfVar4[2] = pfVar3[2];
      FUN_0042e1f0();
      fVar8 = (float10)FUN_00402020(pfVar1);
      pfVar4[3] = (float)-fVar8;
      local_29c = local_29c + 1;
      local_2a0 = local_2a0 + 1;
      puVar6 = puVar6 + 0xc;
      pfVar4 = pfVar4 + 4;
    }
    pfVar7 = pfVar7 + 9;
    local_298 = local_298 + -1;
  } while (local_298 != 0);
  if (0 < local_29c) {
    *param_4 = 2.0;
    local_2a0 = (float *)0x0;
    pfVar4 = local_210 + 2;
    puVar5 = local_250;
    do {
      if (local_27c[(int)local_2a0] < *param_4 != (NAN(local_27c[(int)local_2a0]) || NAN(*param_4)))
      {
        *param_4 = local_27c[(int)local_2a0];
        *param_5 = puVar5[-2];
        param_5[1] = puVar5[-1];
        param_5[2] = *puVar5;
        *param_6 = pfVar4[-2];
        param_6[1] = pfVar4[-1];
        param_6[2] = *pfVar4;
        param_6[3] = pfVar4[1];
        *param_7 = pfVar4[-2];
        param_7[1] = pfVar4[-1];
        param_7[2] = *pfVar4;
        param_7[3] = pfVar4[1];
      }
      local_2a0 = (float *)((int)local_2a0 + 1);
      puVar5 = puVar5 + 3;
      pfVar4 = pfVar4 + 4;
    } while ((int)local_2a0 < local_29c);
    if ((*param_4 < DAT_006e92e4 == (NAN(*param_4) || NAN(DAT_006e92e4))) &&
       (*param_4 <= DAT_006e92e8)) {
      return 1;
    }
  }
  return 0;
}

