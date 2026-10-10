
void __thiscall FUN_004a28c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3abb;
  local_c = ExceptionList;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x260) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x260) + 0x20) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x260) == 0) {
      ExceptionList = &local_c;
      puVar1 = (undefined4 *)operator_new(0x70);
      local_4 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        FUN_0064afa0();
        puVar1[8] = 1;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
      }
      *(undefined4 **)(param_1 + 0x260) = puVar1;
    }
    *(int *)(*(int *)(param_1 + 0x260) + 0x20) = param_2;
  }
  ExceptionList = local_c;
  return;
}

