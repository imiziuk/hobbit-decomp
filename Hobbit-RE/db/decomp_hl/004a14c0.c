
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a14c0(int *param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_NPCObject__OnAdvanceLogic_0072adf4);
  local_4 = 0;
  iVar1 = FUN_004698c0();
  if (iVar1 != 0) goto LAB_004a1662;
  if (((param_1[0x9a] & 0x20000U) != 0) || ((param_1[0x9a] & 0x18U) == 0)) {
    (**(code **)(*param_1 + 0x154))();
    FUN_00542580();
    goto LAB_004a1662;
  }
  param_1[0x117] = (int)param_2;
  param_1[0xa0] = (int)(param_2 + (float)param_1[0xa0]);
  param_1[0xa3] = (int)(param_2 + (float)param_1[0xa3]);
  if (param_1[0x4a] != 0) {
    FUN_00467ed0(param_2);
    goto LAB_004a1662;
  }
  iVar1 = (**(code **)(*param_1 + 0x28))();
  if (*(float *)(iVar1 + 4) < _DAT_006ede84 != (*(float *)(iVar1 + 4) == _DAT_006ede84)) {
    piVar3 = param_1;
    FUN_0041bcc0(param_1);
    iVar1 = FUN_004683d0(piVar3);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
      uStack_18 = *puVar2;
      uStack_10 = puVar2[2];
      uStack_14 = 0xc7afc800;
      (**(code **)(*param_1 + 0x14))(&uStack_18,0);
    }
    else {
      param_1[0xa4] = 0;
      FUN_004a69a0();
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(0);
  if (iVar1 == 0) {
    FUN_004a1c30();
    FUN_00594be0(param_1[0x117]);
    goto LAB_004a1662;
  }
  if ((param_1[0x9a] & 0x2000000U) == 0) {
    iVar1 = FUN_004a2340();
    if (iVar1 != 0) goto LAB_004a160a;
  }
  else {
LAB_004a160a:
    FUN_004a1e50();
  }
  if ((param_1[0x9a] & 0x2000U) == 0) {
    param_1[0x9a] = param_1[0x9a] & 0xfff7ffff;
  }
  else {
    FUN_004a1ad0();
  }
  if ((param_1[0x9a] & 0x80000U) == 0) {
    FUN_004a1750();
    FUN_00467ed0(param_2);
  }
LAB_004a1662:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

