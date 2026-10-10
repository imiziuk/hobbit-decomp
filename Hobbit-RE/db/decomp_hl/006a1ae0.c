
void __fastcall FUN_006a1ae0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_4;
  
  piVar1 = (int *)(param_1 + 0x370);
  FUN_0065f8a0(piVar1,param_1 + 0x374);
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + local_4 * 4);
      if (0 < *(int *)(iVar2 + 0x5c8)) {
        iVar5 = 0;
        do {
          iVar6 = *(int *)(*(int *)(iVar2 + 0x5cc) + iVar5 * 4);
          if ((*(int *)(iVar6 + 0x118) != *piVar1) ||
             (*(int *)(iVar6 + 0x11c) != *(int *)(param_1 + 0x374))) {
            *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(iVar6 + 0x34);
            *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar6 + 0x38);
            *(undefined4 *)(iVar6 + 0x4c) = *(undefined4 *)(iVar6 + 0x3c);
            *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(iVar6 + 0x40);
            iVar6 = *(int *)(param_1 + 0x374);
            iVar3 = *piVar1;
            iVar4 = *(int *)(*(int *)(iVar2 + 0x5cc) + iVar5 * 4);
            *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + iVar3 / 2;
            *(int *)(iVar4 + 0x4c) = *(int *)(iVar4 + 0x4c) + iVar3 / 2;
            iVar6 = iVar6 / 2;
            *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + iVar6;
            *(int *)(iVar4 + 0x48) = *(int *)(iVar4 + 0x48) + iVar6;
            *(int *)(*(int *)(*(int *)(iVar2 + 0x5cc) + iVar5 * 4) + 0x118) = *piVar1;
            *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x5cc) + iVar5 * 4) + 0x11c) =
                 *(undefined4 *)(param_1 + 0x374);
            (**(code **)(**(int **)(*(int *)(iVar2 + 0x5cc) + iVar5 * 4) + 0x88))();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar2 + 0x5c8));
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0x10));
  }
  return;
}

