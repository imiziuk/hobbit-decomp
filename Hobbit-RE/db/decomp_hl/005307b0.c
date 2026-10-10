
int FUN_005307b0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint in_stack_000000a8;
  int in_stack_000000ac;
  uint in_stack_00000150;
  int in_stack_00000154;
  uint in_stack_000001f8;
  int in_stack_000001fc;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d8769;
  local_c = ExceptionList;
  local_4 = 3;
  if ((in_stack_000000ac < in_stack_00000154) ||
     ((in_stack_000000ac <= in_stack_00000154 && (in_stack_000000a8 <= in_stack_00000150)))) {
    if ((in_stack_000000ac < in_stack_000001fc) ||
       ((in_stack_000000ac <= in_stack_000001fc && (in_stack_000000a8 <= in_stack_000001f8)))) {
      if ((in_stack_00000154 < in_stack_000001fc) ||
         ((in_stack_00000154 <= in_stack_000001fc && (in_stack_00000150 <= in_stack_000001f8)))) {
        puVar2 = &stack0x000000b0;
      }
      else {
        puVar2 = &stack0x00000158;
      }
    }
    else {
      puVar2 = &stack0x00000008;
    }
    ExceptionList = &local_c;
    FUN_00649b60(puVar2);
    local_4._0_1_ = 7;
    FUN_0064b170(puVar2 + 0x2c);
    puVar3 = (undefined4 *)(puVar2 + 0x78);
    puVar4 = (undefined4 *)(param_1 + 0x78);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_4._0_1_ = 8;
    FUN_0064b190();
    local_4._0_1_ = 2;
    FUN_00649ba0();
    local_4._0_1_ = 9;
    FUN_0064b190();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00649ba0();
    local_4 = 10;
  }
  else {
    if ((in_stack_00000154 < in_stack_000001fc) ||
       ((in_stack_00000154 <= in_stack_000001fc && (in_stack_00000150 <= in_stack_000001f8)))) {
      if ((in_stack_000000ac < in_stack_000001fc) ||
         ((in_stack_000000ac <= in_stack_000001fc && (in_stack_000000a8 <= in_stack_000001f8)))) {
        puVar2 = &stack0x00000008;
      }
      else {
        puVar2 = &stack0x00000158;
      }
    }
    else {
      puVar2 = &stack0x000000b0;
    }
    ExceptionList = &local_c;
    FUN_00530b20(puVar2);
    puVar3 = (undefined4 *)(puVar2 + 0x78);
    puVar4 = (undefined4 *)(param_1 + 0x78);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_4._0_1_ = 4;
    FUN_0064b190();
    local_4._0_1_ = 2;
    FUN_00649ba0();
    local_4._0_1_ = 5;
    FUN_0064b190();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00649ba0();
    local_4 = 6;
  }
  FUN_0064b190();
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  ExceptionList = local_c;
  return param_1;
}

