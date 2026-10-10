
undefined4 __thiscall FUN_006860aa(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = param_4;
  if ((((param_4 & 0xffff) == 0) || (5 < (param_4 & 0xffff))) || ((param_4 & 0xfff00000) != 0)) {
    return 0x8876086c;
  }
  *(uint *)(param_2 + 0x40) = param_4 & 0x80000;
  iVar1 = FUN_0068bd6a(param_2);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_0068bd6a(param_3);
    *param_1 = iVar1;
    if (((iVar1 != 0) && (*(int *)(param_1[1] + 8) == *(int *)(iVar1 + 8))) &&
       (((iVar1 = FUN_00684a2e(), -1 < iVar1 ||
         ((iVar1 = FUN_00684b60(), -1 < iVar1 || (iVar1 = FUN_00684c02(), -1 < iVar1)))) ||
        ((iVar1 = FUN_00684d77(), -1 < iVar1 ||
         (((((iVar1 = FUN_00684f0d(), -1 < iVar1 || (iVar1 = FUN_006852a2(), -1 < iVar1)) ||
            (iVar1 = FUN_0068571c(), -1 < iVar1)) ||
           ((iVar1 = FUN_00685a5d(), -1 < iVar1 || (iVar1 = FUN_00683185(), -1 < iVar1)))) ||
          (iVar1 = FUN_0068353b(), -1 < iVar1)))))))) {
      uVar2 = 0;
      goto LAB_0068618e;
    }
  }
  uVar2 = 0x80004005;
LAB_0068618e:
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return uVar2;
}

