
void __thiscall FUN_004a68b0(int param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_NPCObject__BuildMatrices_0072b284);
  local_4 = 0;
  if (*(int *)(param_1 + 0x47c) == 0) {
    FUN_0059a310((int *)(param_1 + 0x47c),param_1 + 0x480,
                 (*(int *)(param_1 + 0x268) << 0x13) >> 0x1f);
  }
  iVar1 = *(int *)(param_1 + 0x47c);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x480) != 0)) {
    FUN_00581420(iVar1,*(int *)(param_1 + 0x480),param_2);
    FUN_005814b0(0);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

