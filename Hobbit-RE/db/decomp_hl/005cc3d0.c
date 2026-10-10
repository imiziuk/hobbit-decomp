
void __fastcall FUN_005cc3d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df9e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_10,s_Action_dExecuteDelay_007465dc,*(undefined4 *)(param_1 + 4));
  iVar2 = param_1 + 0x10;
  local_4 = 0;
  uVar1 = FUN_00649940(iVar2);
  FUN_00640420(uVar1,iVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  local_14 = 0;
  FUN_00649920(&stack0x00000004,s_Action_dExecuteImmediately_007465c0,*(undefined4 *)(param_1 + 4));
  puVar3 = &local_14;
  local_4 = 1;
  uVar1 = FUN_00649940(puVar3);
  FUN_006405b0(uVar1,puVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  *(uint *)(param_1 + 0x14) = (*(uint *)(param_1 + 0x14) ^ local_14) & 1 ^ *(uint *)(param_1 + 0x14)
  ;
  ExceptionList = local_c;
  return;
}

