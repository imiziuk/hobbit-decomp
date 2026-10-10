
undefined4 __fastcall FUN_0060a080(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x94)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x98) + iVar4 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = (int *)FUN_004021c0(*puVar1,puVar1[1]);
        if (piVar2 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar2 + 0x108))(1);
          if (iVar3 != 0) {
            iVar3 = FUN_004a1090();
            if (iVar3 != 0) {
              return 0;
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x94));
  }
  return 1;
}

