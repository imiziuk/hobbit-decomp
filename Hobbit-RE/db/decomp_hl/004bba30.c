
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_004bba30(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5,
            undefined4 param_6,float *param_7)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [12];
  
  pfVar5 = param_4;
  local_48 = *param_4;
  local_44 = param_4[1] + _DAT_006e9988;
  local_40 = param_4[2];
  local_54 = *param_5;
  local_50 = param_5[1] + _DAT_006e9988;
  local_4c = param_5[2];
  local_60 = *param_5 - *param_4;
  local_5c = param_5[1] - param_4[1];
  local_58 = param_5[2] - param_4[2];
  FUN_00579460(param_2,param_3,&local_48,&local_54,*(float *)(param_1 + 0x264) - DAT_006ee73c,
               param_6);
  iVar4 = 0;
  param_4 = (float *)0x0;
  iVar2 = FUN_00577e70();
  if ((iVar2 != 0) && (0 < DAT_00773970)) {
    piVar3 = &DAT_00773520;
    do {
      if (((*piVar3 != *(int *)(param_1 + 0x250)) || (piVar3[1] != *(int *)(param_1 + 0x254))) &&
         ((*piVar3 != *(int *)(param_1 + 600) || (piVar3[1] != *(int *)(param_1 + 0x25c))))) {
        param_4 = (float *)0x1;
        FUN_004bb9b0(param_7,piVar3 + -0xc);
        if ((NAN(*param_7) || NAN(DAT_006e92e4)) != (*param_7 == DAT_006e92e4)) {
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x12;
    } while (iVar4 < DAT_00773970);
  }
  uVar1 = DAT_006ee740;
  iVar2 = FUN_004bf200(pfVar5,local_30,DAT_006ee740,DAT_006ee73c,&local_60);
  if (iVar2 != 0) {
    pfVar5 = local_30;
    param_5 = (float *)0x4;
    do {
      local_3c = local_60 + *pfVar5;
      local_38 = local_5c + pfVar5[1];
      local_34 = local_58 + pfVar5[2];
      FUN_00579460(param_2,param_3,pfVar5,&local_3c,uVar1,param_6);
      iVar2 = FUN_00577e70();
      if ((iVar2 != 0) && (iVar2 = 0, 0 < DAT_00773970)) {
        pfVar6 = (float *)&DAT_007734f0;
        do {
          if (((pfVar6[0xc] != *(float *)(param_1 + 0x250)) ||
              (pfVar6[0xd] != *(float *)(param_1 + 0x254))) &&
             ((pfVar6[0xc] != *(float *)(param_1 + 600) ||
              (pfVar6[0xd] != *(float *)(param_1 + 0x25c))))) {
            if (param_4 == (float *)0x0) {
              param_4 = (float *)0x1;
            }
            else if (*pfVar6 < *param_7 == (NAN(*pfVar6) || NAN(*param_7))) goto LAB_004bbc82;
            FUN_004bb9b0(param_7,pfVar6);
          }
LAB_004bbc82:
          iVar2 = iVar2 + 1;
          pfVar6 = pfVar6 + 0x12;
        } while (iVar2 < DAT_00773970);
      }
      pfVar5 = pfVar5 + 3;
      param_5 = (float *)((int)param_5 + -1);
    } while (param_5 != (float *)0x0);
  }
  return (int)param_4;
}

