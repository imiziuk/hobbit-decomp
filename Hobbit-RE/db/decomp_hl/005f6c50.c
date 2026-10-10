
void __fastcall FUN_005f6c50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 auStack_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e299b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar4 = *(int *)(param_1 + 0x50);
    ExceptionList = &local_c;
    if (iVar4 != 0) {
      ExceptionList = &local_c;
      FUN_006c026a(iVar4,0x2c,*(undefined4 *)(iVar4 + -4),FUN_00649ba0);
      FUN_006bf840(iVar4 + -4);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4 = 0;
  iVar4 = FUN_00406ce0(uVar1,uVar2);
  local_4 = 0xffffffff;
  if (iVar4 == -1) {
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  uVar3 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
  piVar6 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
  FUN_00649720();
  if (piVar6 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar6 + 0x134))();
    iStack_44 = 0;
    if (0 < *(int *)(iVar4 + 8)) {
      iStack_48 = 0;
      do {
        iVar8 = 0;
        FUN_00649b80(*(int *)(iVar4 + 0xc) + iStack_48);
        iVar7 = *(int *)(param_1 + 0x4c);
        local_4 = 1;
        if (*(int *)(param_1 + 0x54) < iVar7 + 1) {
          if (*(int *)(param_1 + 0x5c) == 0) {
            iVar5 = *(int *)(param_1 + 0x54) / 2;
            iVar9 = 1;
            if (0 < iVar5) {
              iVar9 = iVar5;
            }
            if (iVar9 + iVar7 < 1) {
              iVar7 = 1;
            }
            else {
              if (iVar5 < 1) {
                iVar5 = 1;
              }
              iVar7 = iVar7 + iVar5;
            }
          }
          else {
            iVar7 = *(int *)(param_1 + 0x5c) + iVar7;
          }
          piVar6 = (int *)operator_new(iVar7 * 0x2c + 4);
          local_4._0_1_ = 2;
          if (piVar6 == (int *)0x0) {
            piStack_4c = (int *)0x0;
          }
          else {
            piStack_4c = piVar6 + 1;
            *piVar6 = iVar7;
            FUN_006c043b(piStack_4c,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
          }
          local_4 = CONCAT31(local_4._1_3_,1);
          if (0 < *(int *)(param_1 + 0x4c)) {
            iVar9 = 0;
            do {
              FUN_0064a320(*(int *)(param_1 + 0x50) + iVar9);
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + 0x2c;
            } while (iVar8 < *(int *)(param_1 + 0x4c));
          }
          iVar8 = *(int *)(param_1 + 0x50);
          if (iVar8 != 0) {
            FUN_006c026a(iVar8,0x2c,*(undefined4 *)(iVar8 + -4),FUN_00649ba0);
            FUN_006bf840(iVar8 + -4);
          }
          *(int *)(param_1 + 0x54) = iVar7;
          *(int **)(param_1 + 0x50) = piStack_4c;
        }
        FUN_0064a320(auStack_38);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        local_4 = 0xffffffff;
        FUN_00649ba0();
        iStack_44 = iStack_44 + 1;
        iStack_48 = iStack_48 + 0x4c;
      } while (iStack_44 < *(int *)(iVar4 + 8));
    }
  }
  ExceptionList = local_c;
  return;
}

