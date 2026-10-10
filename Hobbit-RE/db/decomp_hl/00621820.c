
undefined4 __fastcall FUN_00621820(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  FUN_005af120();
  FUN_004a4130();
  FUN_005af120();
  FUN_004a4140();
  iVar2 = __ftol();
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      if (iVar2 <= iVar5) {
        return 1;
      }
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x54) + iVar5 * 4);
      if (((puVar1 != (undefined4 *)0x0) &&
          (piVar3 = (int *)FUN_004021c0(*puVar1,puVar1[1]), piVar3 != (int *)0x0)) &&
         (iVar4 = (**(code **)(*piVar3 + 0x108))(1), iVar4 != 0)) {
        return 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x50));
  }
  return 1;
}

