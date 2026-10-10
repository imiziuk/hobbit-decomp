
/* WARNING: Removing unreachable block (ram,0x0069ebf0) */
/* WARNING: Removing unreachable block (ram,0x0069ec02) */
/* WARNING: Removing unreachable block (ram,0x0069ec36) */
/* WARNING: Removing unreachable block (ram,0x0069ec4c) */
/* WARNING: Removing unreachable block (ram,0x0069ec60) */
/* WARNING: Removing unreachable block (ram,0x0069ec99) */

void __fastcall FUN_0069e950(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  
  FUN_006aafd0(&DAT_0071ceb4);
  iVar6 = *(int *)(param_1 + 0x10);
  while (0 < iVar6) {
    iVar6 = **(int **)(param_1 + 0x14);
    iVar5 = *(int *)(iVar6 + 0x5c8);
    while (0 < iVar5) {
      piVar1 = (int *)**(undefined4 **)(iVar6 + 0x5cc);
      (**(code **)(*piVar1 + 4))();
      (**(code **)*piVar1)(1);
      iVar5 = *(int *)(iVar6 + 0x5c8) + -1;
      if (0 < iVar5) {
        iVar3 = 0;
        do {
          *(undefined4 *)(iVar3 + *(int *)(iVar6 + 0x5cc)) =
               *(undefined4 *)(iVar3 + 4 + *(int *)(iVar6 + 0x5cc));
          iVar3 = iVar3 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar5 = *(int *)(iVar6 + 0x5c8) + -1;
      *(int *)(iVar6 + 0x5c8) = iVar5;
    }
    if (*(int *)(iVar6 + 0x5c8) < *(int *)(iVar6 + 0x5d0)) {
      pvVar4 = operator_new(*(int *)(iVar6 + 0x5c8) * 4);
      iVar5 = 0;
      if (0 < *(int *)(iVar6 + 0x5c8)) {
        do {
          *(undefined4 *)((int)pvVar4 + iVar5 * 4) =
               *(undefined4 *)(*(int *)(iVar6 + 0x5cc) + iVar5 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar6 + 0x5c8));
      }
      FUN_006bf840(*(undefined4 *)(iVar6 + 0x5cc));
      *(void **)(iVar6 + 0x5cc) = pvVar4;
      *(undefined4 *)(iVar6 + 0x5d0) = *(undefined4 *)(iVar6 + 0x5c8);
    }
    FUN_0069ed00();
    FUN_006bf840(iVar6);
    iVar6 = *(int *)(param_1 + 0x10) + -1;
    if (0 < iVar6) {
      iVar5 = 0;
      do {
        *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x14)) =
             *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + iVar5);
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar6;
  }
  iVar6 = *(int *)(param_1 + 0x9c);
  while (0 < iVar6) {
    (**(code **)(**(int **)(**(int **)(param_1 + 0xa0) + 0x2c) + 4))();
    puVar2 = *(undefined4 **)(**(int **)(param_1 + 0xa0) + 0x2c);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    iVar6 = **(int **)(param_1 + 0xa0);
    if (iVar6 != 0) {
      thunk_FUN_00649ba0();
      FUN_006bf840(iVar6);
    }
    iVar6 = *(int *)(param_1 + 0x9c) + -1;
    if (0 < iVar6) {
      iVar5 = 0;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xa0) + iVar5) =
             *(undefined4 *)(*(int *)(param_1 + 0xa0) + 4 + iVar5);
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x9c) + -1;
    *(int *)(param_1 + 0x9c) = iVar6;
  }
  iVar6 = *(int *)(param_1 + 0x80);
  while (0 < iVar6) {
    FUN_00674e10(**(int **)(param_1 + 0x84) + 0x2c);
    FUN_00650380();
    iVar6 = **(int **)(param_1 + 0x84);
    if (iVar6 != 0) {
      FUN_0069eef0();
      FUN_006bf840(iVar6);
    }
    iVar6 = *(int *)(param_1 + 0x80) + -1;
    if (0 < iVar6) {
      iVar5 = 0;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x84) + iVar5) =
             *(undefined4 *)(*(int *)(param_1 + 0x84) + 4 + iVar5);
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x80) + -1;
    *(int *)(param_1 + 0x80) = iVar6;
  }
  iVar6 = *(int *)(param_1 + 100);
  while (0 < iVar6) {
    FUN_00674e10(**(int **)(param_1 + 0x68) + 0x2c);
    FUN_00650380();
    iVar6 = **(int **)(param_1 + 0x68);
    if (iVar6 != 0) {
      FUN_0069ef50();
      FUN_006bf840(iVar6);
    }
    iVar6 = *(int *)(param_1 + 100) + -1;
    if (0 < iVar6) {
      iVar5 = 0;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x68) + iVar5) =
             *(undefined4 *)(*(int *)(param_1 + 0x68) + 4 + iVar5);
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar6;
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x48);
  iVar6 = param_1 + 0x110;
  iVar5 = 0x13;
  do {
    if (*(int *)(iVar6 + 0x10) != 0) {
      FUN_00674e10(iVar6);
    }
    FUN_00650380();
    iVar6 = iVar6 + 0x20;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_00674e10(param_1 + 0xec);
  }
  FUN_00650380();
  return;
}

