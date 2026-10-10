
undefined4 FUN_0048c090(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_4;
  
  iVar4 = 0;
  uStack_4 = 0;
  if (*param_1 == 0x13) {
    if (0 < DAT_00772060) {
      do {
        puVar1 = *(undefined4 **)(DAT_00772064 + iVar4 * 4);
        if (puVar1[0x16] == 0x16) {
          iVar3 = FUN_00647e40(param_1[4],*puVar1);
          if (iVar3 == 0) {
            iVar3 = (**(code **)(**(int **)(*(int *)(DAT_00772064 + iVar4 * 4) + 0x5c) + 8))
                              (param_1);
            if (iVar3 != 0) {
              uStack_4 = 1;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_00772060);
      return uStack_4;
    }
  }
  else if (0 < DAT_00772060) {
    do {
      piVar2 = *(int **)(*(int *)(DAT_00772064 + iVar4 * 4) + 0x5c);
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 8))(param_1);
        if (iVar3 != 0) {
          uStack_4 = 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00772060);
  }
  return uStack_4;
}

