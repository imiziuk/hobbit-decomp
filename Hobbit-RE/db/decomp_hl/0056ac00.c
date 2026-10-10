
void FUN_0056ac00(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0056ac12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)();
    return;
  }
  return;
}

