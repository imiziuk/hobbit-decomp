
undefined4 * __thiscall FUN_0042a610(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  param_1[5] = 0;
  iVar2 = *(int *)(param_2 + 8);
  param_1[4] = iVar2;
  param_1[2] = iVar2;
  param_1[6] = 0;
  pvVar1 = operator_new(iVar2 << 2);
  param_1[3] = pvVar1;
  iVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)param_1[2]) {
    do {
      *(undefined4 *)(param_1[3] + iVar2 * 4) = *(undefined4 *)(*(int *)(param_2 + 0xc) + iVar2 * 4)
      ;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[2]);
  }
  return param_1;
}

