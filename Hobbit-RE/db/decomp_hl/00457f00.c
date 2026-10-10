
void __fastcall FUN_00457f00(int param_1)

{
  undefined4 uVar1;
  
  FUN_00457d60(param_1 + 0x114);
  uVar1 = FUN_00659630(**(undefined4 **)(param_1 + 0xf8),param_1 + 0x114,1);
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  FUN_0065a050(uVar1,*(undefined4 *)(param_1 + 0x134));
  FUN_004576c0();
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
  return;
}

