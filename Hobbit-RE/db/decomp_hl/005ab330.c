
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005ab330(int param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ddfa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_SenseController__OnAdvanceLogic_007449ac);
  local_4 = 0;
  *(float *)(param_1 + 0x10) = param_2 + *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x14) = param_2 + *(float *)(param_1 + 0x14);
  iVar2 = FUN_005aa750();
  iVar3 = FUN_004a1060();
  if (iVar3 != 0) {
    if (*(int *)(iVar2 + 0x1a4) == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      bVar1 = _DAT_006f4268 <= *(float *)(param_1 + 0x14);
      if (bVar1) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      FUN_005aaad0(param_2,bVar1);
      FUN_005aae10(param_2,bVar1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

