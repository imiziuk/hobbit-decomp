
undefined4 * __thiscall FUN_0053f260(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0053f1d0();
  iVar2 = FUN_0053f1c0();
  iVar3 = (iVar1 + iVar2 + param_3 * 3) * 4;
  iVar1 = FUN_00651fc0();
  iVar2 = iVar1 + *param_1 + iVar3;
  *param_2 = *(undefined4 *)(iVar1 + *param_1 + iVar3);
  param_2[1] = *(undefined4 *)(iVar2 + 4);
  param_2[2] = *(undefined4 *)(iVar2 + 8);
  return param_2;
}

