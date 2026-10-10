
void __thiscall FUN_0051d140(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_12 = 200;
  local_13 = 200;
  local_14 = 200;
  local_11 = 0xff;
  FUN_006a2880(param_2,param_3);
  uVar1 = FUN_006a22a0(0x50);
  uVar2 = FUN_006a2260(0x280);
  uVar3 = FUN_006a22a0(0);
  local_10 = FUN_006a2260(0);
  local_c = uVar3;
  local_8 = uVar2;
  local_4 = uVar1;
  uVar1 = FUN_006ab1a0(&DAT_0071ceb4,*(undefined4 *)(param_1 + 0x1c4));
  puVar5 = &local_14;
  uVar3 = 0x12;
  puVar4 = &local_10;
  uVar2 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar2,puVar4,uVar3,puVar5,uVar1);
  return;
}

