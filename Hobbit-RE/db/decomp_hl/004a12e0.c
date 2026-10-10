
undefined4 __fastcall FUN_004a12e0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1[0x9a] & 0x400U) == 0) {
    lVar2 = FUN_004a4160();
    lVar3 = FUN_0041bcd0();
    if (lVar2 == lVar3) {
      param_1[0x9a] = param_1[0x9a] | 0x400;
    }
    if ((param_1[0x9a] & 0x400U) == 0) goto LAB_004a1349;
  }
  if ((*(int **)(param_1[0xc0] + 0xbc) != (int *)0x0) &&
     ((iVar1 = (**(code **)(**(int **)(param_1[0xc0] + 0xbc) + 0x24))(), iVar1 == 0 ||
      ((param_1[0x9a] & 0x80000U) != 0)))) {
    param_1[0x9a] = param_1[0x9a] & 0xfffffbff;
  }
LAB_004a1349:
  iVar1 = (**(code **)(*param_1 + 0x108))(0);
  if (((iVar1 != 0) && ((*(byte *)((int)param_1 + 0x7f) & 0x10) != 0)) &&
     ((param_1[0x9a] & 0x400U) != 0)) {
    return 1;
  }
  return 0;
}

