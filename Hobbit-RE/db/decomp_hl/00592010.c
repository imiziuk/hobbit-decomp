
void __fastcall FUN_00592010(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcfdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x50) != 0) {
    ExceptionList = &local_c;
    FUN_005405d0();
    FUN_006bf840();
  }
  local_10 = operator_new(0x14c);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00540450();
  }
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  local_14 = 0x7fffffff;
  local_4 = 1;
  FUN_00549430(&local_14);
  FUN_0064a2e0();
  FUN_005492b0(&stack0xffffffdc,0);
  if (local_14 < 0) {
    FUN_00549470(&stack0xffffffdc);
  }
  uVar1 = FUN_00549620(&local_14);
  FUN_00549670(&stack0xffffffdc,uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00592190();
  FUN_00540670();
  uVar3 = 0xbf800000;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  uVar1 = FUN_00593dd0(1,1,0xffffffff);
  FUN_00592ae0(uVar1,uVar2,uVar3);
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfff7ffff;
  local_4 = 0xffffffff;
  FUN_00549580();
  FUN_00549350();
  ExceptionList = local_c;
  return;
}

