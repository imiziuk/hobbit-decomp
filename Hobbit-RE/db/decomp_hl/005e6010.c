
void __fastcall FUN_005e6010(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00406bf0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005e602a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x110))();
    return;
  }
  return;
}

