
undefined4 * __thiscall FUN_0058cf00(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcc58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_poly_cache__BuildNewCell_007421f4);
  local_4 = 0;
  FUN_0064cbe0();
  FUN_0064cc00();
  puVar3 = (undefined4 *)FUN_0058cb60();
  sVar2 = FUN_0058cdb0(param_2,param_3,param_4);
  *(short *)(puVar3 + 5) = sVar2;
  *(short *)((int)puVar3 + 0xe) = (short)param_2;
  *(short *)(puVar3 + 4) = (short)param_3;
  *(short *)((int)puVar3 + 0x12) = (short)param_4;
  puVar1 = (undefined4 *)(param_1 + 0x1b808 + sVar2 * 4);
  *puVar3 = *puVar1;
  *puVar1 = puVar3;
  *(undefined2 *)(puVar3 + 3) = 0xffff;
  *(undefined2 *)((int)puVar3 + 0x16) = 0;
  puVar3[7] = 1;
  local_3c = 3.4028235e+38;
  local_38 = 3.4028235e+38;
  local_34 = 3.4028235e+38;
  local_30 = -3.4028235e+38;
  local_2c = -3.4028235e+38;
  local_28 = -3.4028235e+38;
  FUN_0058cae0(param_2,param_3,param_4,&local_3c);
  local_3c = local_3c - DAT_006e92e8;
  local_38 = local_38 - DAT_006e92e8;
  local_34 = local_34 - DAT_006e92e8;
  local_30 = local_30 + DAT_006e92e8;
  local_2c = local_2c + DAT_006e92e8;
  local_28 = local_28 + DAT_006e92e8;
  FUN_00578d40(&local_3c);
  *(undefined2 *)((int)puVar3 + 0x16) = (undefined2)DAT_00777218;
  if (DAT_00777218 != 0) {
    param_2 = 0;
    iVar5 = -1;
    iVar7 = DAT_00777218;
    while (iVar7 != 0) {
      iVar4 = FUN_0058cc00();
      iVar6 = iVar4 * 0x198 + param_1;
      *(undefined2 *)(iVar6 + 0x2020) = 0xffff;
      if (iVar5 == -1) {
        *(short *)(puVar3 + 3) = (short)iVar4;
      }
      else {
        *(short *)(iVar5 * 0x198 + 0x2020 + param_1) = (short)iVar4;
      }
      iVar5 = FUN_0058d800(&local_3c,iVar6 + 0x2000,param_2);
      param_2 = param_2 + iVar5;
      iVar7 = iVar7 - iVar5;
      iVar5 = iVar4;
    }
  }
  FUN_0064cc50();
  fVar8 = (float10)FUN_0064cd30();
  local_4 = 0xffffffff;
  *(float *)(param_1 + 0x1c81c) = (float)(fVar8 + (float10)*(float *)(param_1 + 0x1c81c));
  FUN_00649720();
  ExceptionList = local_c;
  return puVar3;
}

