
undefined4 __thiscall FUN_00592660(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__SetDesiredPhysSt_00742d98);
  if (((param_2 != 5) && (param_2 != 7)) &&
     ((((iVar1 = *(int *)(param_1 + 0x22c), iVar1 == 9 ||
        (iVar2 = *(int *)(param_1 + 0x38), iVar2 == 9)) ||
       (((iVar1 == 8 || (iVar2 == 8)) && (param_2 != 9)))) ||
      (((((iVar1 == 3 || (iVar2 == 3)) && (param_2 != 8)) && (param_2 != 9)) ||
       (((iVar1 == 6 || (iVar2 == 6)) && (param_2 == 1)))))))) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 0;
  }
  *(int *)(param_1 + 0x22c) = param_2;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

