
void __fastcall FUN_005c9490(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  iVar6 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      iVar4 = 0;
      do {
        *(int *)(*(int *)(param_1 + 0x24) + 0x14 + iVar4) = iVar3;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x18;
      } while (iVar3 < *(int *)(param_1 + 0x20));
    }
    iVar3 = *(int *)(param_1 + 0x20);
    local_8 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = local_8 + 1;
        if (iVar4 < iVar3) {
          iVar1 = *(int *)(param_1 + 0x24);
          local_10 = (int *)(iVar6 + 0x2c + iVar1);
          iVar5 = iVar4;
          local_c = iVar6;
          local_14 = iVar6;
          do {
            local_14 = local_14 + 0x18;
            if (*(uint *)(iVar1 + 8 + *local_10 * 0x18) <
                *(uint *)(iVar1 + 8 + *(int *)(local_c + 0x14 + iVar1) * 0x18)) {
              local_c = local_14;
              local_8 = iVar5;
            }
            iVar5 = iVar5 + 1;
            local_10 = local_10 + 6;
          } while (iVar5 < iVar3);
        }
        iVar3 = *(int *)(param_1 + 0x24);
        uVar2 = *(undefined4 *)(iVar6 + 0x14 + iVar3);
        *(undefined4 *)(iVar6 + 0x14 + iVar3) = *(undefined4 *)(local_8 * 0x18 + 0x14 + iVar3);
        *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x14 + local_8 * 0x18) = uVar2;
        iVar3 = *(int *)(param_1 + 0x20);
        iVar6 = iVar6 + 0x18;
        local_8 = iVar4;
      } while (iVar4 < iVar3);
    }
  }
  return;
}

