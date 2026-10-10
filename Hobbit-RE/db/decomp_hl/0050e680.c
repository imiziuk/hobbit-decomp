
void __thiscall thunk_FUN_00509410(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d6c2f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(uint *)(param_1 + 0x1f58) = ((int)param_2 < 1) - 1 & param_2;
  uVar2 = *(int *)(param_1 + 0x1f5c) - 1;
  if ((int)uVar2 <= (int)param_2) {
    param_2 = uVar2;
  }
  iVar4 = 0;
  *(uint *)(param_1 + 0x1f58) = param_2;
  iVar3 = 0;
  piVar5 = (int *)(param_1 + 0x198);
  do {
    if (*(int *)(param_1 + 0x1f60) <= (int)(param_2 * 5 + iVar4)) {
      if (iVar4 < 5) {
        piVar5 = (int *)(param_1 + (iVar4 * 3 + 0x66) * 4);
        iVar4 = 5 - iVar4;
        do {
          if (piVar5[-1] != 0) {
            uVar1 = FUN_0064b130(&DAT_0075b6e0);
            uStack_4 = 3;
            (**(code **)(*(int *)piVar5[-1] + 0x20))(uVar1);
            uStack_4 = 0xffffffff;
            FUN_0064b190();
          }
          if (*piVar5 != 0) {
            uVar1 = FUN_0064b130(&DAT_0075b6e0);
            uStack_4 = 4;
            (**(code **)(*(int *)*piVar5 + 0x20))(uVar1);
            uStack_4 = 0xffffffff;
            FUN_0064b190();
            FUN_006a3240(0x100,1);
            FUN_006a3240(1,0);
          }
          if (piVar5[1] != 0) {
            uVar1 = FUN_0064b130(&DAT_0075b6e0);
            uStack_4 = 5;
            (**(code **)(*(int *)piVar5[1] + 0x20))(uVar1);
            uStack_4 = 0xffffffff;
            FUN_0064b190();
            FUN_006a3240(0x100,1);
            FUN_006a3240(1,0);
          }
          piVar5 = piVar5 + 3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      break;
    }
    if (piVar5[-1] != 0) {
      uVar1 = FUN_0064b170(*(int *)(param_1 + 0x1f58) * 0x4ec + iVar3 + 0x1d0 + param_1);
      uStack_4 = 0;
      (**(code **)(*(int *)piVar5[-1] + 0x20))(uVar1);
      uStack_4 = 0xffffffff;
      FUN_0064b190();
    }
    if (*piVar5 != 0) {
      uVar1 = FUN_0064b170(*(int *)(param_1 + 0x1f58) * 0x4ec + iVar3 + 0x21c + param_1);
      uStack_4 = 1;
      (**(code **)(*(int *)*piVar5 + 0x20))(uVar1);
      uStack_4 = 0xffffffff;
      FUN_0064b190();
      FUN_006a3240(0x100,*(int *)(param_1 + 0x694 + (*(int *)(param_1 + 0x1f58) * 0x13b + iVar4) * 4
                                 ) == 0);
      FUN_006a3240(1,1);
    }
    if (piVar5[1] != 0) {
      uVar1 = FUN_0064b170(*(int *)(param_1 + 0x1f58) * 0x4ec + iVar3 + 0x268 + param_1);
      uStack_4 = 2;
      (**(code **)(*(int *)piVar5[1] + 0x20))(uVar1);
      uStack_4 = 0xffffffff;
      FUN_0064b190();
      FUN_006a3240(0x100,*(int *)(param_1 + 0x6a8 + (*(int *)(param_1 + 0x1f58) * 0x13b + iVar4) * 4
                                 ) == 0);
      FUN_006a3240(1,1);
    }
    iVar3 = iVar3 + 0xe4;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 3;
  } while (iVar3 < 0x474);
  if (*(int *)(param_1 + 0x174) != 0) {
    FUN_006a3240(0x200,0);
  }
  *(undefined4 *)(param_1 + 0x174) = 0;
  FUN_006a3240(0x100,0);
  if (*(int *)(param_1 + 0x1f58) == 0) {
    FUN_006a3240(0x100,1);
  }
  FUN_006a3240(0x100,0);
  if (*(int *)(param_1 + 0x1f58) == *(int *)(param_1 + 0x1f5c) + -1) {
    FUN_006a3240(0x100,1);
  }
  ExceptionList = pvStack_c;
  return;
}

