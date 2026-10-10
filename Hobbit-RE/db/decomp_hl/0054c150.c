
undefined8 __thiscall FUN_0054c150(int param_1,char *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*param_2 != '\0') && (0 < *(int *)(param_1 + 0x28d8))) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      piVar1 = *(int **)(iVar4 + *(int *)(param_1 + 0x28c0));
      if (piVar1 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar1 + 0x4c))(param_2);
        iVar3 = FUN_00647ed0(uVar2);
        if (iVar3 == 0) {
          iVar4 = *(int *)(iVar5 * 0x14 + *(int *)(param_1 + 0x28c0));
          if (((*(byte *)(iVar4 + 0x7f) & 0x10) == 0) && (DAT_0076fa24 != 0)) {
            uVar2 = __aullshr(*(undefined4 *)(iVar4 + 8));
            FUN_0064e7d0(s_Object_GUID___08x_08x_0073cd84,uVar2);
          }
          iVar4 = *(int *)(iVar5 * 0x14 + *(int *)(param_1 + 0x28c0));
          if ((*(byte *)(iVar4 + 0x7f) & 0x10) == 0) {
            return 0;
          }
          return *(undefined8 *)(iVar4 + 8);
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar5 < *(int *)(param_1 + 0x28d8));
  }
  return 0;
}

