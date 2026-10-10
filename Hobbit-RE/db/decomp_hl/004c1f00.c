
void __thiscall FUN_004c1f00(int *param_1,uint param_2)

{
  undefined4 uVar1;
  uint extraout_ECX;
  uint local_20;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d47f8;
  pvStack_c = ExceptionList;
  local_10 = (void *)0x7fffffff;
  local_20 = param_2;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00549430(&local_10);
  local_20 = (extraout_ECX & 0x7fffffff ^
             ((int)local_10 * 2 ^ (uint)local_10) & 0x7fffffff ^ (int)local_10 * 2) & 0x7fffffff ^
             extraout_ECX & 0x7fffffff;
  FUN_005492b0(&local_20,0);
  if ((int)local_10 < 0) {
    FUN_00549470(&local_20);
  }
  uVar1 = FUN_00549620(&local_10);
  FUN_00549670(&local_20,uVar1);
  (**(code **)(*param_1 + 0x10c))();
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00549580(&stack0xffffffec);
  FUN_00549350(&stack0xffffffec);
  ExceptionList = local_10;
  return;
}

