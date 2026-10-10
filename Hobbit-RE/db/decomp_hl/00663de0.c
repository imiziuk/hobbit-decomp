
void __fastcall FUN_00663de0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *DAT_007f1000;
  uVar2 = FUN_00663fd0(param_1 + 0x14);
  uVar2 = FUN_00663fc0(0,uVar2);
  (**(code **)(iVar1 + 0x5c))(DAT_007f1000,*(undefined4 *)(param_1 + 0x34c),uVar2);
  iVar1 = *DAT_007f1000;
  uVar2 = FUN_00663fd0(param_1 + 0x18);
  (**(code **)(iVar1 + 0x60))(DAT_007f1000,*(int *)(param_1 + 0x1c) << 1,0x208,0x65,uVar2);
  return;
}

