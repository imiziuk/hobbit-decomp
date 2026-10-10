
int __thiscall FUN_00544b30(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_info__GetPropChannel_0073804c);
  iVar2 = 0;
  local_4 = 0;
  if (0 < *(short *)(param_1 + 0x2a)) {
    do {
      iVar1 = FUN_00647ed0(*(int *)(*(int *)(param_1 + 0x20) + 0x60) +
                           (*(short *)(param_1 + 0x2c) + iVar2) * 0x24,param_2);
      if (iVar1 == 0) {
        local_4 = 0xffffffff;
        FUN_00649720();
        ExceptionList = local_c;
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)(param_1 + 0x2a));
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return -1;
}

