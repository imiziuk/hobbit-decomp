
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004a2410(int *param_1,float *param_2,undefined4 param_3,float *param_4,int *param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  int iVar6;
  float local_18;
  float local_14;
  float local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3a78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_NPCObject__SpiderFindGround_0072af4c);
  piVar1 = param_1 + 0x2a;
  *piVar1 = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0xf;
  local_14 = -**(float **)(param_1[0xc1] + 0x34);
  local_4 = 0;
  local_18 = 0.0;
  local_10 = 0.0;
  iVar6 = (**(code **)(*param_1 + 0x154))();
  fVar2 = local_10 * *(float *)(iVar6 + 0x70);
  fVar3 = local_10 * *(float *)(iVar6 + 0x6c);
  fVar4 = local_14 * *(float *)(iVar6 + 0x5c);
  local_10 = local_18 * *(float *)(iVar6 + 0x54) +
             local_14 * *(float *)(iVar6 + 100) + local_10 * *(float *)(iVar6 + 0x74) +
             *(float *)(iVar6 + 0x84) + param_2[2];
  local_14 = local_18 * *(float *)(iVar6 + 0x50) + local_14 * *(float *)(iVar6 + 0x60) + fVar2 +
             *(float *)(iVar6 + 0x80) + param_2[1];
  local_18 = local_18 * *(float *)(iVar6 + 0x4c) + fVar4 + fVar3 + *(float *)(iVar6 + 0x7c) +
             *param_2;
  FUN_00579460(param_1[2],param_1[3],param_2,&local_18,
               *(float *)(*(int *)(param_1[0xc1] + 0x34) + 4) * _DAT_006e936c,1);
  FUN_005798f0(8);
  FUN_00577e70();
  if (DAT_00773970 == 0) {
    FUN_00579460(param_1[2],param_1[3],param_2,&local_18,**(undefined4 **)(param_1[0xc1] + 0x34),1);
    FUN_005798f0(8);
    FUN_00577e70();
    if (DAT_00773970 == 0) {
      *piVar1 = 0;
      param_1[0x2b] = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0xf;
      *(undefined1 *)((int)param_1 + 0xb1) = 0;
      fVar4 = **(float **)(param_1[0xc1] + 0x34) + DAT_006e92e8;
      local_4 = 0xffffffff;
      fVar2 = param_2[2];
      fVar3 = param_2[1];
      *param_4 = *param_2;
      param_4[1] = -fVar4 + fVar3;
      param_4[2] = fVar2;
      param_5[1] = 0x3f800000;
      param_5[2] = 0;
      *param_5 = 0;
      param_5[3] = (int)-(*param_4 * DAT_006e92e4 + param_4[2] * DAT_006e92e4 + param_4[1]);
      param_1[0x2d] = 0;
      param_1[0x2e] = param_5[1];
      param_1[0x2f] = param_5[2];
      param_1[0x30] = param_5[3];
      FUN_00649720();
      ExceptionList = pvStack_c;
      return 0;
    }
    *param_4 = DAT_007734f4;
    param_4[1] = DAT_007734f8;
    param_4[2] = DAT_007734fc;
    *param_5 = DAT_00773500;
    param_5[1] = DAT_00773504;
    param_5[2] = DAT_00773508;
    param_5[3] = DAT_0077350c;
    *piVar1 = DAT_00773520;
    param_1[0x2b] = DAT_00773524;
    uVar5 = FUN_0057dd10(piVar1,DAT_00773528);
    *(undefined1 *)(param_1 + 0x2c) = uVar5;
    uVar5 = FUN_0057dcc0(piVar1,DAT_00773528);
    *(undefined1 *)((int)param_1 + 0xb1) = uVar5;
    param_1[0x2d] = DAT_00773500;
    param_1[0x2e] = DAT_00773504;
    param_1[0x2f] = DAT_00773508;
    param_1[0x30] = DAT_0077350c;
  }
  else {
    *param_4 = DAT_007734f4;
    param_4[1] = DAT_007734f8;
    param_4[2] = DAT_007734fc;
    FUN_004357e0(&DAT_00773500);
    param_5[3] = DAT_0077350c;
    *piVar1 = DAT_00773520;
    param_1[0x2b] = DAT_00773524;
    uVar5 = FUN_0057dd10(piVar1,DAT_00773528);
    *(undefined1 *)(param_1 + 0x2c) = uVar5;
    uVar5 = FUN_0057dcc0(piVar1,DAT_00773528);
    *(undefined1 *)((int)param_1 + 0xb1) = uVar5;
    FUN_004357e0(&DAT_00773500);
    param_1[0x30] = DAT_0077350c;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return 1;
}

