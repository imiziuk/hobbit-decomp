
void __thiscall FUN_005dced0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e0e68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005cc3d0(param_2);
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_00649920(&iStack_20,s_Action_dcinemaCount_00747454,*(undefined4 *)(param_1 + 4));
  piVar6 = &iStack_1c;
  uStack_4 = 0;
  uVar1 = FUN_00649940(piVar6);
  FUN_00640450(uVar1,piVar6);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  uStack_24 = 0;
  FUN_00649920(&iStack_20,s_Action_dcinemaSelect_0074743c,*(undefined4 *)(param_1 + 4));
  puVar7 = &uStack_24;
  uStack_4 = 1;
  uVar1 = FUN_00649940(puVar7);
  FUN_00640450(uVar1,puVar7);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  *(undefined4 *)(param_1 + 0x34) = uStack_24;
  iStack_20 = 0;
  if (0 < iStack_1c) {
    do {
      iVar4 = iStack_20;
      uStack_14 = 0;
      uStack_10 = 0;
      FUN_00649920(auStack_18,s_Action_dcinema_dGuid_00747424,*(undefined4 *)(param_1 + 4),iStack_20
                  );
      puVar7 = &uStack_14;
      uStack_4 = 2;
      uVar1 = FUN_00649940(puVar7);
      FUN_006405e0(uVar1,puVar7);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar5 = *(int *)(param_1 + 0x44);
      if (*(int *)(param_1 + 0x4c) < iVar5 + 1) {
        if (*(int *)(param_1 + 0x54) == 0) {
          iVar2 = *(int *)(param_1 + 0x4c) / 2;
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
          iVar5 = *(int *)(param_1 + 0x54) + iVar5;
        }
        pvVar3 = operator_new(iVar5 * 8);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x44)) {
          do {
            iVar2 = *(int *)(param_1 + 0x48);
            *(undefined4 *)((int)pvVar3 + iVar4 * 8) = *(undefined4 *)(iVar2 + iVar4 * 8);
            *(undefined4 *)((int)pvVar3 + iVar4 * 8 + 4) = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x44));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x48));
        *(void **)(param_1 + 0x48) = pvVar3;
        *(int *)(param_1 + 0x4c) = iVar5;
        iVar4 = iStack_20;
      }
      iVar5 = *(int *)(param_1 + 0x44);
      iVar2 = *(int *)(param_1 + 0x48);
      *(undefined4 *)(iVar2 + iVar5 * 8) = uStack_14;
      *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uStack_10;
      iStack_20 = iVar4 + 1;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    } while (iStack_20 < iStack_1c);
  }
  ExceptionList = pvStack_c;
  return;
}

