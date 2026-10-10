
void __thiscall FUN_005d1700(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0100;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc3d0(param_2);
  FUN_00649920(local_54,s_Action_dDialogName_00746b20,*(undefined4 *)(param_1 + 4));
  puVar2 = local_4c;
  local_4 = 0;
  uVar1 = FUN_00649940(puVar2);
  FUN_00640480(uVar1,puVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_0064a2e0(local_4c);
  FUN_00649920(local_54,s_Action_dSpeaker_00746b10,*(undefined4 *)(param_1 + 4));
  iVar3 = param_1 + 0x48;
  local_4 = 1;
  uVar1 = FUN_00649940(iVar3);
  FUN_006405e0(uVar1,iVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  param_2 = 0;
  FUN_00649920(local_54,s_Action_dAtLocation_00746afc,*(undefined4 *)(param_1 + 4));
  puVar4 = &param_2;
  local_4 = 2;
  uVar1 = FUN_00649940(puVar4);
  FUN_006405b0(uVar1,puVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  *(uint *)(param_1 + 0x6c) = (*(uint *)(param_1 + 0x6c) ^ param_2) & 1 ^ *(uint *)(param_1 + 0x6c);
  FUN_00649920(local_50,s_Action_dBilboDialog_00746ae8,*(undefined4 *)(param_1 + 4));
  puVar4 = &param_2;
  local_4 = 3;
  uVar1 = FUN_00649940(puVar4);
  FUN_006405b0(uVar1,puVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  *(uint *)(param_1 + 0x6c) =
       (param_2 * 2 ^ *(uint *)(param_1 + 0x6c)) & 2 ^ *(uint *)(param_1 + 0x6c);
  ExceptionList = local_c;
  return;
}

