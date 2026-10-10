
undefined4 * __thiscall FUN_006c2cd2(undefined4 *param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_006fd578;
  iVar1 = *(int *)(param_2 + 8);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    param_1[1] = *(undefined4 *)(param_2 + 4);
  }
  else {
    sVar2 = _strlen(*(char **)(param_2 + 4));
    pvVar3 = operator_new(sVar2 + 1);
    param_1[1] = pvVar3;
    if (pvVar3 != (void *)0x0) {
      FUN_006c9dd0(pvVar3,*(undefined4 *)(param_2 + 4));
    }
  }
  return param_1;
}

