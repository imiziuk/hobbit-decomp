
void __thiscall FUN_005e7090(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iStack_20;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e1980;
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
  FUN_00649920(&param_2,s_Action_dInstanceCount_0074791c,*(undefined4 *)(param_1 + 4));
  piVar6 = &iStack_20;
  uStack_4 = 0;
  uVar1 = FUN_00649940(piVar6);
  FUN_00640450(uVar1,piVar6);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  param_2 = 0;
  if (0 < iStack_20) {
    do {
      iVar4 = param_2;
      uStack_14 = 0;
      uStack_10 = 0;
      FUN_00649920(auStack_1c,s_Action_dRigidInstance_d_00747904,*(undefined4 *)(param_1 + 4),
                   param_2);
      puVar7 = &uStack_14;
      uStack_4 = 1;
      uVar1 = FUN_00649940(puVar7);
      FUN_006405e0(uVar1,puVar7);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar5 = *(int *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x28) < iVar5 + 1) {
        if (*(int *)(param_1 + 0x30) == 0) {
          iVar2 = *(int *)(param_1 + 0x28) / 2;
          iVar4 = 1;
          if (0 < iVar2) {
            iVar4 = iVar2;
          }
          if (iVar4 + iVar5 < 1) {
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
        *(void **)(param_1 + 0x24) = pvVar3;
        *(int *)(param_1 + 0x28) = iVar5;
        iVar4 = param_2;
      }
      iVar5 = *(int *)(param_1 + 0x20);
      iVar2 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar2 + iVar5 * 8) = uStack_14;
      *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uStack_10;
      param_2 = iVar4 + 1;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    } while (param_2 < iStack_20);
  }
  FUN_00649920(&param_2,s_Action_dAnimIndex_007478f0,*(undefined4 *)(param_1 + 4));
  iVar5 = param_1 + 0x34;
  uStack_4 = 2;
  uVar1 = FUN_00649940(iVar5);
  FUN_00640450(uVar1,iVar5);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(auStack_18,s_Action_dLoops_007478e0,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0x38;
  uStack_4 = 3;
  uVar1 = FUN_00649940(param_1);
  FUN_006405b0(uVar1,param_1);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = pvStack_c;
  return;
}

