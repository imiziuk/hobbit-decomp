
void __thiscall FUN_005fc200(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iStack_1c;
  undefined4 *puStack_18;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e2fa0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x20) == 0) {
    ExceptionList = &pvStack_c;
    FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_00649920(&puStack_18,s_And_d_007486b8,*(undefined4 *)(param_1 + 4));
  iVar7 = param_1 + 0x28;
  uStack_4 = 0;
  uVar1 = FUN_00649940(iVar7);
  FUN_006405b0(uVar1,iVar7);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  iStack_1c = 0;
  FUN_00649920(&puStack_18,s_Count_d_007486b0,*(undefined4 *)(param_1 + 4));
  piVar8 = &iStack_1c;
  uStack_4 = 1;
  uVar1 = FUN_00649940(piVar8);
  FUN_00640450(uVar1,piVar8);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  iVar7 = 0;
  if (0 < iStack_1c) {
    do {
      puStack_18 = (undefined4 *)operator_new(0x10);
      if (puStack_18 == (undefined4 *)0x0) {
        puStack_18 = (undefined4 *)0x0;
      }
      else {
        *puStack_18 = 0;
        puStack_18[1] = 0;
        puStack_18[2] = 0;
      }
      iVar6 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x1c) < iVar6 + 1) {
        if (*(int *)(param_1 + 0x24) == 0) {
          iVar2 = *(int *)(param_1 + 0x1c) / 2;
          iVar4 = 1;
          if (0 < iVar2) {
            iVar4 = iVar2;
          }
          if (iVar4 + iVar6 < 1) {
            iVar6 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar6 = iVar6 + iVar2;
          }
        }
        else {
          iVar6 = iVar6 + *(int *)(param_1 + 0x24);
        }
        pvVar3 = operator_new(iVar6 * 4);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x14)) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x14));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
        *(void **)(param_1 + 0x18) = pvVar3;
        *(int *)(param_1 + 0x1c) = iVar6;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14) * 4) = puStack_18;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      FUN_00649920(auStack_14,s_Trigger_dNPC_d_0074840c,*(undefined4 *)(param_1 + 4),iVar7);
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar7 * 4);
      uStack_4 = 2;
      uVar5 = FUN_00649940(uVar1);
      FUN_006405e0(uVar5,uVar1);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_10,s_Trigger_dState_d_0074869c,*(undefined4 *)(param_1 + 4),iVar7);
      iVar6 = *(int *)(*(int *)(param_1 + 0x18) + iVar7 * 4) + 8;
      uStack_4 = 3;
      uVar1 = FUN_00649940(iVar6);
      FUN_00640450(uVar1,iVar6);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar7 = iVar7 + 1;
    } while (iVar7 < iStack_1c);
  }
  FUN_005f1cf0(param_2);
  ExceptionList = pvStack_c;
  return;
}

