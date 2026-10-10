
void FUN_004dbc00(undefined4 param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)FUN_0054c0f0(param_1,1);
  if (piVar1 == (int *)0x0) {
    FUN_0064e870(3,s_Lock_Object__s_failed__0072e0b8,param_1);
    return;
  }
  pcVar2 = s_enabled_0072e0f0;
  if (param_2 == 0) {
    pcVar2 = s_disabled_0072e0e4;
  }
  FUN_0064e870(3,s_Trigger__FX__s__s_0072e0d0,param_1,pcVar2);
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004dbc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x110))();
    return;
  }
  FUN_00489010();
  return;
}

