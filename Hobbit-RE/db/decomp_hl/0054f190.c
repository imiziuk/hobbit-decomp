
void __fastcall FUN_0054f190(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_4;
  
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x10) < 0) goto LAB_0054f1e9;
    do {
      iVar3 = local_4;
      iVar1 = *(int *)(param_1 + 0x24);
      if ((iVar1 != 0) &&
         (iVar2 = local_4 >> (*(byte *)(param_1 + 0x1e) & 0x1f), uVar4 = __allshl(),
         (*(uint *)(iVar1 + iVar2 * 0x18) & (uint)uVar4) == 0 &&
         (*(uint *)(iVar1 + 4 + iVar2 * 0x18) & (uint)((ulonglong)uVar4 >> 0x20)) == 0)) {
        FUN_0054f7c0(&local_4);
        iVar3 = local_4;
      }
LAB_0054f1e9:
      local_4 = iVar3 + 1;
    } while (local_4 < *(int *)(param_1 + 0x10));
  }
  FUN_005c9070();
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

