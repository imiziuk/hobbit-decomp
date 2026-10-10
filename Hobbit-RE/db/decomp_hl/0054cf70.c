
undefined4 FUN_0054cf70(int param_1,int *param_2)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9838;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_ApplyPainSelectFunc_0073d040);
  local_4 = 0;
  if (((*(int *)(param_1 + 0x48) != param_2[2]) || (*(int *)(param_1 + 0x4c) != param_2[3])) &&
     ((*(uint *)(param_1 + 0x44) == 0 ||
      ((uint)*(byte *)(param_2 + 0x1f) != *(uint *)(param_1 + 0x44))))) {
    iVar1 = (**(code **)(*param_2 + 0x78))
                      (*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x4c),param_1 + 0x24,
                       *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                       *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x54));
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return 1;
}

