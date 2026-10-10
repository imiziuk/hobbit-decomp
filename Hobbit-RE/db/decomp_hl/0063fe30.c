
void __thiscall FUN_0063fe30(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5cbe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bin_in__FileRead_0074b29c);
  local_4 = 0;
  if (0 < param_3) {
    do {
      iVar2 = *(int *)(param_1 + 0x44);
      if ((iVar2 < *(int *)(param_1 + 0x3c)) ||
         (*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x3c) <= iVar2)) {
        iVar1 = *(int *)(param_1 + 0x30) - iVar2;
        *(int *)(param_1 + 0x3c) = iVar2;
        if (*(int *)(param_1 + 0x38) < iVar1) {
          iVar1 = *(int *)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x40) = iVar1;
        FUN_0064f650(*(undefined4 *)(param_1 + 4),iVar2,0);
        FUN_0064f350(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x40),1,
                     *(undefined4 *)(param_1 + 4));
      }
      iVar2 = *(int *)(param_1 + 0x40) + (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x44));
      if (param_3 < iVar2) {
        iVar2 = param_3;
      }
      FUN_00648480(param_2,(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c)) +
                           *(int *)(param_1 + 0x34),iVar2);
      param_3 = param_3 - iVar2;
      param_2 = param_2 + iVar2;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar2;
    } while (0 < param_3);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

