
void __fastcall FUN_00549fe0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 4) == 0) ||
      (cVar1 = *(char *)(*(int *)(param_1 + 4) + -1), cVar1 == '\0')) || (cVar1 == -1))
  goto LAB_0054a049;
  uVar2 = *(uint *)(param_1 + 8);
  if (0xfffffffd < uVar2) {
    FUN_006bf8fc();
  }
  iVar3 = *(int *)(param_1 + 4);
  if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      if (iVar3 != 0) {
        FUN_0054a2f0(0);
      }
      goto LAB_0054a049;
    }
    if (uVar2 <= *(uint *)(param_1 + 0xc)) goto LAB_0054a049;
  }
  else if (uVar2 == 0) {
    *(char *)(iVar3 + -1) = cVar1 + -1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    goto LAB_0054a049;
  }
  FUN_0054ac10(uVar2);
LAB_0054a049:
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 4) + -1) = 0xff;
  }
  return;
}

