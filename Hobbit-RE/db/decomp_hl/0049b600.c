
void FUN_0049b600(uint *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054c120(*param_1,1);
  if (iVar1 == 0) {
    FUN_0064e870(3,s_xsc_IsSwitchOn_____Object_name_n_0072a1f8);
    *param_1 = 0;
    return;
  }
  if (*(char *)(iVar1 + 0x7c) != '3') {
    FUN_0064e870(3,s_xsc_IsSwitchOn_____Object_found__0072a1c0);
    *param_1 = 0;
    return;
  }
  iVar1 = FUN_004d2f10();
  *param_1 = (uint)(iVar1 != 0);
  return;
}

