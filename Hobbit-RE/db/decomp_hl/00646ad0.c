
void __fastcall FUN_00646ad0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x7c) + -4);
  *(undefined4 **)(param_1 + 0x7c) = puVar2;
  uVar1 = __ftol();
  *puVar2 = uVar1;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 4;
  return;
}

