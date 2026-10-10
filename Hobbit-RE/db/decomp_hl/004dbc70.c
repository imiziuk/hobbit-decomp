
void FUN_004dbc70(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_0054c0f0(param_1,1);
  if (iVar1 != 0) {
    pcVar2 = &DAT_0071d3b4;
    if (param_2 == 0) {
      pcVar2 = s_FALSE_0071d3ac;
    }
    FUN_0064e870(3,s_Trigger__Trigger_Enabled__s__s_0072e0f8,param_1,pcVar2);
    FUN_004de6b0(param_2);
    return;
  }
  FUN_0064e870(3,s_Lock_Object__s_failed__0072e0b8,param_1);
  return;
}

