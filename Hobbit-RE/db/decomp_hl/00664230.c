
undefined4 __thiscall FUN_00664230(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6ade;
  local_c = ExceptionList;
  iVar5 = *(int *)(param_1 + 0x354);
  ExceptionList = &local_c;
  if (iVar5 != *(int *)(param_1 + 0x358)) {
    do {
      uVar3 = FUN_00664f20();
      if (0x3c < uVar3) {
        iVar5 = 0;
        if (param_2 == 0) {
          ExceptionList = local_c;
          return 1;
        }
        piVar4 = *(int **)(param_1 + 0x354);
        local_4 = 0;
        if (piVar4 != *(int **)(param_1 + 0x358)) {
          do {
            iVar1 = *piVar4;
            uVar3 = FUN_00664f20();
            if (uVar3 < 0x1e) {
              iVar2 = *(int *)(iVar1 + 0x18);
              if (iVar5 % iVar2 != 0) {
                iVar5 = iVar5 + (iVar2 - iVar5 % iVar2);
              }
              iVar5 = iVar5 + *(int *)(iVar1 + 0x14) * iVar2;
            }
            piVar4 = piVar4 + 1;
          } while (piVar4 != *(int **)(param_1 + 0x358));
        }
        iVar1 = *(int *)(param_2 + 0x18);
        if (iVar5 % iVar1 != 0) {
          iVar5 = iVar5 + (iVar1 - iVar5 % iVar1);
        }
        if (*(int *)(param_1 + 0x34c) <= *(int *)(param_2 + 0x14) * iVar1 + iVar5) {
          FUN_006bf840(0);
          ExceptionList = local_c;
          return 0;
        }
        FUN_006bf840(0);
        ExceptionList = local_c;
        return 1;
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 != *(int *)(param_1 + 0x358));
  }
  ExceptionList = local_c;
  return 0;
}

