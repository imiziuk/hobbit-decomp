
undefined4 __thiscall FUN_005097b0(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_0000005c;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d6c48;
  local_c = ExceptionList;
  iVar2 = 0;
  iVar4 = 0;
  local_4 = 0;
  local_14 = 1;
  local_10 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(param_1 + 0x1f5c)) {
    local_1c = 0;
    local_20 = 0x1aa;
    ExceptionList = &local_c;
    do {
      if (*(int *)(param_1 + 0x1f60) <= iVar2) break;
      local_24 = (undefined4 *)(param_1 + 0x19c);
      iVar5 = 0;
      iVar3 = 0;
      do {
        if (*(int *)(param_1 + 0x1f60) <= iVar2) break;
        if ((in_stack_0000005c != 2) &&
           (piVar1 = (int *)(param_1 + (local_1c + 0x86 + iVar5) * 0xc), *piVar1 == param_3)) {
          if (*(int *)(param_1 + -0x14 + (local_20 + iVar5) * 4) == 0) {
            local_14 = 0;
          }
          else {
            *piVar1 = param_4;
            FUN_0064b7f0(&stack0x00000010);
            if (iVar4 == *(int *)(param_1 + 0x1f58)) {
              (**(code **)(*(int *)local_24[-1] + 0x20))(&stack0x00000010);
            }
            *param_2 = 1;
          }
        }
        if ((in_stack_0000005c != 1) &&
           (*(int *)(param_1 + 0x64c + (local_1c + iVar5) * 0xc) == param_3)) {
          if (*(int *)(param_1 + (local_20 + iVar5) * 4) == 0) {
            local_14 = 0;
          }
          else {
            *(int *)(param_1 + 0x64c + (local_1c + iVar5) * 0xc) = param_4;
            FUN_0064b7f0(&stack0x00000010);
            if (iVar4 == *(int *)(param_1 + 0x1f58)) {
              (**(code **)(*(int *)*local_24 + 0x20))(&stack0x00000010);
            }
            *param_2 = 1;
          }
        }
        iVar2 = local_10 + 1;
        iVar3 = iVar3 + 0xe4;
        local_24 = local_24 + 3;
        iVar5 = iVar5 + 1;
        local_10 = iVar2;
      } while (iVar3 < 0x474);
      local_20 = local_20 + 0x13b;
      iVar4 = iVar4 + 1;
      local_1c = local_1c + 0x69;
    } while (iVar4 < *(int *)(param_1 + 0x1f5c));
  }
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return local_14;
}

