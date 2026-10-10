
undefined8 __fastcall FUN_0044f030(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int local_4;
  
  iVar4 = 0;
  uVar2 = 0;
  uVar3 = 0;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0xac)) {
    do {
      iVar1 = FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar4 * 8),
                           *(undefined4 *)(*(int *)(param_1 + 0xb0) + 4 + iVar4 * 8));
      if ((iVar1 != 0) && (lVar5 = FUN_00452600(), lVar5 == 0)) {
        local_4 = local_4 + 1;
        iVar1 = FUN_00647b10(0,100);
        if (iVar1 <= (int)(100 / (longlong)local_4)) {
          uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar4 * 8);
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xb0) + 4 + iVar4 * 8);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xac));
  }
  return CONCAT44(uVar3,uVar2);
}

