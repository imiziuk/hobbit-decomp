
void __thiscall FUN_005f2f60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e25b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_14,s_Volume_d_00748204,*(undefined4 *)(param_1 + 4));
  iVar3 = param_1 + 0x18;
  local_4 = 0;
  uVar2 = FUN_00649940(iVar3);
  uVar1 = param_2;
  FUN_006405e0(uVar2,iVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_Character_d_007481f8,*(undefined4 *)(param_1 + 4));
  iVar3 = param_1 + 0x10;
  local_4 = 1;
  uVar2 = FUN_00649940(iVar3);
  FUN_006405e0(uVar2,iVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_TriggersOnce_d_007481e8,*(undefined4 *)(param_1 + 4));
  iVar3 = param_1 + 0x20;
  local_4 = 2;
  uVar2 = FUN_00649940(iVar3);
  FUN_006405b0(uVar2,iVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_10,s_AllNPCs_d_007481dc,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0xc;
  local_4 = 3;
  uVar2 = FUN_00649940(param_1);
  FUN_006405b0(uVar2,param_1);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_005f1cf0(uVar1);
  ExceptionList = local_c;
  return;
}

