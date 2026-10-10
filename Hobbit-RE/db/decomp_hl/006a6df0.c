
void __fastcall FUN_006a6df0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2c) ^ 0x200;
  *(uint *)(param_1 + 0x2c) = uVar1;
  if (((uVar1 & 0x200) != 0) && (*(int **)(param_1 + 0xc) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x006a6e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc) + 0x70))();
    return;
  }
  return;
}

