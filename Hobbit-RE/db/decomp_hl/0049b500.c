
void FUN_0049b500(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_0054c120(*param_1,1);
  if (iVar1 == 0) {
    pcVar3 = s_xsc_GetNTriggerContents_____Obje_0072a100;
  }
  else {
    if (*(char *)(iVar1 + 0x7c) == '5') {
      uVar2 = FUN_004dd190();
      *param_1 = uVar2;
      return;
    }
    pcVar3 = s_xsc_GetNTriggerContents_____Obje_0072a0c0;
  }
  FUN_0064e870(3,pcVar3);
  *param_1 = 0;
  return;
}

