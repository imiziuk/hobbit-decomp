
void __thiscall FUN_00425e90(int param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  void *local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006cf588;
  local_c = ExceptionList;
  local_3c = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_34 = 0;
  local_48 = 0;
  local_44 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  pvVar1 = operator_new(4);
  iVar2 = 0;
  if (0 < local_40) {
    do {
      *(undefined4 *)((int)pvVar1 + iVar2 * 4) = *(undefined4 *)((int)local_3c + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_40);
  }
  FUN_006bf840();
  local_38 = 1;
  *(undefined4 *)((int)pvVar1 + local_40 * 4) = 0x1c;
  local_24 = *(undefined4 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0xc);
  local_40 = local_40 + 1;
  local_1c = *(undefined4 *)(param_1 + 0x46d8 + *(int *)(param_1 + 0x46d4) * 8);
  local_18 = *(undefined4 *)(param_1 + 0x46dc + *(int *)(param_1 + 0x46d4) * 8);
  local_14 = param_2;
  local_2c = 2;
  local_3c = pvVar1;
  FUN_0042a610(&local_48);
  FUN_0054e3f0();
  if (local_34 != 2) {
    FUN_006bf840();
  }
  ExceptionList = local_c;
  return;
}

