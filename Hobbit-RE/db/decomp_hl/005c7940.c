
undefined4 FUN_005c7940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void **ppvVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df92b;
  local_c = ExceptionList;
  iVar5 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < DAT_007bab0c) {
    do {
      ExceptionList = ppvVar1;
      lVar6 = FUN_005c7dc0();
      if (lVar6 == CONCAT44(param_4,param_3)) {
        FUN_005c7c40(param_1,param_2);
        ExceptionList = local_c;
        return *(undefined4 *)((int)DAT_007bab10 + iVar5 * 4);
      }
      iVar5 = iVar5 + 1;
      ppvVar1 = (void **)ExceptionList;
    } while (iVar5 < DAT_007bab0c);
  }
  pvVar2 = operator_new(0x40);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005c7b30(param_1,param_2,param_3,param_4);
  }
  local_4 = 0xffffffff;
  if (DAT_007bab14 < DAT_007bab0c + 1) {
    if (DAT_007bab1c == 0) {
      iVar5 = DAT_007bab14 / 2;
      iVar4 = 1;
      if (0 < iVar5) {
        iVar4 = iVar5;
      }
      if (iVar4 + DAT_007bab0c < 1) {
        iVar5 = 1;
      }
      else {
        if (iVar5 < 1) {
          iVar5 = 1;
        }
        iVar5 = iVar5 + DAT_007bab0c;
      }
    }
    else {
      iVar5 = DAT_007bab0c + DAT_007bab1c;
    }
    pvVar2 = operator_new(iVar5 * 4);
    iVar4 = 0;
    if (0 < DAT_007bab0c) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar4 * 4) = *(undefined4 *)((int)DAT_007bab10 + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_007bab0c);
    }
    FUN_006bf840(DAT_007bab10);
    DAT_007bab10 = pvVar2;
    DAT_007bab14 = iVar5;
  }
  *(undefined4 *)((int)DAT_007bab10 + DAT_007bab0c * 4) = uVar3;
  DAT_007bab0c = DAT_007bab0c + 1;
  ExceptionList = local_c;
  return uVar3;
}

