
void __fastcall FUN_005f1cf0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2420;
  local_c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_c;
  FUN_00649920(local_10,s_StaysTrue_d_00748120,*(undefined4 *)(param_1 + 4));
  piVar2 = &local_14;
  local_4 = 0;
  uVar1 = FUN_00649940(piVar2);
  FUN_006405b0(uVar1,piVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  *(uint *)(param_1 + 8) = (local_14 * 2 ^ *(uint *)(param_1 + 8)) & 2 ^ *(uint *)(param_1 + 8);
  FUN_00649920(&stack0x00000004,s_TriggeredOnTrue_d_0074810c,*(undefined4 *)(param_1 + 4));
  piVar2 = &local_14;
  local_4 = 1;
  uVar1 = FUN_00649940(piVar2);
  FUN_006405b0(uVar1,piVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  *(uint *)(param_1 + 8) = (local_14 * 4 ^ *(uint *)(param_1 + 8)) & 4 ^ *(uint *)(param_1 + 8);
  ExceptionList = local_c;
  return;
}

