
void __fastcall FUN_00647660(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + -4);
  FUN_00646960();
  **(undefined4 **)(param_1 + 0x7c) = uVar1;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 4;
  return;
}

