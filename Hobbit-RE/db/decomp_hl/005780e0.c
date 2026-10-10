
void __thiscall
FUN_005780e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,float *param_5)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbc38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_StartApply_L2W__00740298);
  *(undefined4 *)(param_1 + 0x42dc) = param_3;
  *(undefined4 *)(param_1 + 0x42c8) = 1;
  *(undefined4 *)(param_1 + 0x42d0) = 1;
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x42d8) = param_2;
  if (((undefined4 *)(param_1 + 0x42e0) != param_4) && (puVar3 = param_4 + 0x10, param_4 != puVar3))
  {
    puVar2 = (undefined4 *)(param_1 + 0x42e8);
    iVar6 = (int)param_4 - (param_1 + 0x42e0);
    do {
      puVar2[-2] = *param_4;
      puVar2[-1] = param_4[1];
      *puVar2 = *(undefined4 *)(iVar6 + (int)puVar2);
      puVar2[1] = param_4[3];
      param_4 = param_4 + 4;
      puVar2 = puVar2 + 4;
    } while (param_4 != puVar3);
  }
  if (((float *)(param_1 + 0x4320) != param_5) && (param_5 != param_5 + 0x10)) {
    puVar3 = (undefined4 *)(param_1 + 0x4328);
    pfVar5 = param_5;
    do {
      puVar3[-2] = *pfVar5;
      puVar3[-1] = pfVar5[1];
      *puVar3 = *(undefined4 *)(((int)param_5 - (param_1 + 0x4320)) + (int)puVar3);
      puVar3[1] = pfVar5[3];
      pfVar5 = pfVar5 + 4;
      puVar3 = puVar3 + 4;
    } while (pfVar5 != param_5 + 0x10);
  }
  switch(*(undefined4 *)(param_1 + 0x3d48)) {
  case 1:
    FUN_0041b9f0(&local_64,(float *)(param_1 + 0x3dc4));
    *(undefined4 *)(param_1 + 0x3f28) = local_64;
    *(undefined4 *)(param_1 + 0x3f2c) = local_60;
    *(undefined4 *)(param_1 + 0x3f30) = local_5c;
    fVar1 = *(float *)(param_1 + 0x3dc4);
    fVar1 = SQRT(*(float *)(param_1 + 0x3dcc) * *(float *)(param_1 + 0x3dcc) +
                 *(float *)(param_1 + 0x3dc8) * *(float *)(param_1 + 0x3dc8) + fVar1 * fVar1);
    *(float *)(param_1 + 0x3f40) = fVar1;
    fVar1 = DAT_006e92e8 / fVar1;
    *(float *)(param_1 + 0x3f34) = fVar1 * *(float *)(param_1 + 0x3f28);
    *(float *)(param_1 + 0x3f38) = fVar1 * *(float *)(param_1 + 0x3f2c);
    *(float *)(param_1 + 0x3f3c) = fVar1 * *(float *)(param_1 + 0x3f30);
    break;
  case 2:
  case 3:
    FUN_0041b9f0(&local_58,param_1 + 0x4054);
    *(undefined4 *)(param_1 + 0x4070) = local_58;
    *(undefined4 *)(param_1 + 0x4074) = local_54;
    *(undefined4 *)(param_1 + 0x4078) = local_50;
    FUN_0041b9f0(&local_4c,param_1 + 0x4060);
    *(undefined4 *)(param_1 + 0x407c) = local_4c;
    *(undefined4 *)(param_1 + 0x4080) = local_48;
    *(undefined4 *)(param_1 + 0x4084) = local_44;
    local_40 = SQRT(param_5[2] * param_5[2] + param_5[1] * param_5[1] + *param_5 * *param_5);
    local_3c = SQRT(param_5[6] * param_5[6] + param_5[5] * param_5[5] + param_5[4] * param_5[4]);
    local_38 = SQRT(param_5[10] * param_5[10] + param_5[9] * param_5[9] + param_5[8] * param_5[8]);
    FUN_004357e0(&local_40);
    *(float *)(param_1 + 0x4088) = local_1c[0] * *(float *)(param_1 + 0x406c);
    break;
  case 4:
  case 5:
  case 6:
    FUN_0041b9f0(&local_34,param_1 + 0x408c);
    *(undefined4 *)(param_1 + 0x40a4) = local_34;
    *(undefined4 *)(param_1 + 0x40a8) = local_30;
    *(undefined4 *)(param_1 + 0x40ac) = local_2c;
    FUN_0041b9f0(&local_28,param_1 + 0x4098);
    *(undefined4 *)(param_1 + 0x40b0) = local_28;
    *(undefined4 *)(param_1 + 0x40b4) = local_24;
    *(undefined4 *)(param_1 + 0x40b8) = local_20;
    break;
  case 7:
    iVar6 = 0;
    *(int *)(param_1 + 0x42c0) = *(int *)(param_1 + 0x41bc);
    if (0 < *(int *)(param_1 + 0x41bc)) {
      iVar7 = param_1 + 0x41c0;
      do {
        FUN_004357e0(iVar7 + -0x104);
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar7 + -0xf8);
        uVar4 = FUN_004e3b20(local_1c,param_5,iVar7);
        FUN_0042fda0(uVar4);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x10;
      } while (iVar6 < *(int *)(param_1 + 0x42c0));
    }
  }
  FUN_004357e0(param_1 + 0x3d4c);
  FUN_004357e0(param_1 + 0x3d58);
  FUN_004936f0(param_5);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

