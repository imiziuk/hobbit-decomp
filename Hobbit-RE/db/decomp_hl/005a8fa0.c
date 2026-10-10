
uint __thiscall FUN_005a8fa0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dde68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_occluder_mgr__IsBBoxOccluded_00744824);
  iVar3 = 0;
  local_4 = 0;
  if ((*(int *)(param_1 + 0x8888) == 0) || (*(int *)(param_1 + 0x8844) == 0)) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 0;
  }
  if (param_3 == 0) {
    param_3 = 0;
    if (0 < *(int *)(param_1 + 0x8888)) {
      piVar2 = (int *)(param_1 + 0x888c);
      do {
        iVar4 = *piVar2 * 0x1b4 + param_1;
        iVar1 = FUN_005a8f30(iVar4,param_2);
        if (iVar1 != 0) {
          piVar2 = (int *)(iVar4 + 0x1a4);
          *piVar2 = *piVar2 + 1;
          param_3 = 1;
          *(int *)(param_1 + 0x89e0) = *(int *)(param_1 + 0x89e0) + 1;
          goto LAB_005a9053;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x8888));
    }
  }
  else {
    param_3 = FUN_005a9910(param_2);
    if (param_3 != 0) {
      *(int *)(param_1 + 0x89e0) = *(int *)(param_1 + 0x89e0) + 1;
      goto LAB_005a9053;
    }
  }
  *(int *)(param_1 + 0x89e4) = *(int *)(param_1 + 0x89e4) + 1;
LAB_005a9053:
  if (DAT_007b1b70 != 0) {
    param_3 = param_3 ^ 1;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return param_3;
}

