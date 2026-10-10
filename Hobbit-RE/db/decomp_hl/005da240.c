
void __thiscall FUN_005da240(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [4];
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e0b58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x2c) == 0) {
    ExceptionList = &pvStack_c;
    FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_005cc3d0(param_2);
  iStack_20 = 0;
  FUN_00649920(&iStack_1c,s_Action_dNPCCount_007472d4,*(undefined4 *)(param_1 + 4));
  piVar6 = &iStack_20;
  uStack_4 = 0;
  uVar1 = FUN_00649940(piVar6);
  FUN_00640450(uVar1,piVar6);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  if (0x80 < iStack_20) {
    iStack_20 = 0x80;
  }
  iStack_1c = 0;
  if (0 < iStack_20) {
    do {
      iVar5 = iStack_1c;
      iStack_14 = 0;
      iStack_10 = 0;
      FUN_00649920(auStack_18,s_Action_dNPCGuid_d_00746f14,*(undefined4 *)(param_1 + 4),iStack_1c);
      piVar6 = &iStack_14;
      uStack_4 = 1;
      uVar1 = FUN_00649940(piVar6);
      FUN_006405e0(uVar1,piVar6);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      if (iStack_14 != 0 || iStack_10 != 0) {
        iVar5 = *(int *)(param_1 + 0x20);
        if (*(int *)(param_1 + 0x28) < iVar5 + 1) {
          if (*(int *)(param_1 + 0x30) == 0) {
            iVar2 = *(int *)(param_1 + 0x28) / 2;
            iVar4 = 1;
            if (0 < iVar2) {
              iVar4 = iVar2;
            }
            if (iVar5 + iVar4 < 1) {
              iVar5 = 1;
            }
            else {
              if (iVar2 < 1) {
                iVar2 = 1;
              }
              iVar5 = iVar5 + iVar2;
            }
          }
          else {
            iVar5 = *(int *)(param_1 + 0x30) + iVar5;
          }
          pvVar3 = operator_new(iVar5 * 8);
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x20)) {
            do {
              iVar2 = *(int *)(param_1 + 0x24);
              *(undefined4 *)((int)pvVar3 + iVar4 * 8) = *(undefined4 *)(iVar2 + iVar4 * 8);
              *(undefined4 *)((int)pvVar3 + iVar4 * 8 + 4) = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(param_1 + 0x20));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x24));
          *(int *)(param_1 + 0x28) = iVar5;
          *(void **)(param_1 + 0x24) = pvVar3;
        }
        iVar5 = *(int *)(param_1 + 0x20);
        iVar4 = *(int *)(param_1 + 0x24);
        *(int *)(iVar4 + iVar5 * 8) = iStack_14;
        *(int *)(iVar4 + 4 + iVar5 * 8) = iStack_10;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        iVar5 = iStack_1c;
      }
      iStack_1c = iVar5 + 1;
    } while (iStack_1c < iStack_20);
  }
  FUN_00649920(&param_2,s_Action_dHealth_007472c4,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0x34;
  uStack_4 = 2;
  uVar1 = FUN_00649940(param_1);
  FUN_00640450(uVar1,param_1);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = pvStack_c;
  return;
}

