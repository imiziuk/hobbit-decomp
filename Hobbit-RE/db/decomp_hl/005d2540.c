
void __thiscall FUN_005d2540(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint *puVar9;
  int *piStack_d0;
  int iStack_cc;
  undefined1 auStack_c8 [4];
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [44];
  undefined1 auStack_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e026b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    ExceptionList = &pvStack_c;
    if (iVar3 != 0) {
      ExceptionList = &pvStack_c;
      FUN_006c026a(iVar3,0x2c,*(undefined4 *)(iVar3 + -4),FUN_00649ba0);
      FUN_006bf840(iVar3 + -4);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_005cc3d0(param_2);
  iStack_c0 = 0;
  uStack_bc = 0;
  FUN_00649920(&iStack_cc,s_Action_dDialogSelectionMethod_00746c30,*(undefined4 *)(param_1 + 4));
  puVar6 = &uStack_bc;
  uStack_4 = 0;
  uVar1 = FUN_00649940(puVar6);
  FUN_00640450(uVar1,puVar6);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  *(undefined4 *)(param_1 + 0x18) = uStack_bc;
  FUN_00649920(&iStack_cc,s_Action_dDialogCount_00746c1c,*(undefined4 *)(param_1 + 4));
  piVar7 = &iStack_c0;
  uStack_4 = 1;
  uVar1 = FUN_00649940(piVar7);
  FUN_00640450(uVar1,piVar7);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  iStack_cc = 0;
  if (0 < iStack_c0) {
    do {
      iVar4 = iStack_cc;
      FUN_00649920(auStack_c8,s_Action_dDialogName_d_00746c04,*(undefined4 *)(param_1 + 4),iStack_cc
                  );
      puVar8 = auStack_8c;
      uStack_4 = 2;
      uVar1 = FUN_00649940(puVar8);
      FUN_00640480(uVar1,puVar8);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649b20(auStack_8c);
      iVar3 = *(int *)(param_1 + 0x24);
      uStack_4 = 3;
      if (*(int *)(param_1 + 0x2c) < iVar3 + 1) {
        iVar4 = 0;
        if (*(int *)(param_1 + 0x34) == 0) {
          iVar2 = *(int *)(param_1 + 0x2c) / 2;
          iVar5 = 1;
          if (0 < iVar2) {
            iVar5 = iVar2;
          }
          if (iVar5 + iVar3 < 1) {
            iVar3 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar3 = iVar3 + iVar2;
          }
        }
        else {
          iVar3 = *(int *)(param_1 + 0x34) + iVar3;
        }
        piStack_d0 = (int *)operator_new(iVar3 * 0x2c + 4);
        uStack_4._0_1_ = 4;
        if (piStack_d0 == (int *)0x0) {
          piStack_d0 = (int *)0x0;
        }
        else {
          piVar7 = piStack_d0 + 1;
          *piStack_d0 = iVar3;
          FUN_006c043b(piVar7,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
          piStack_d0 = piVar7;
        }
        uStack_4 = CONCAT31(uStack_4._1_3_,3);
        if (0 < *(int *)(param_1 + 0x24)) {
          iVar5 = 0;
          do {
            FUN_0064a320(*(int *)(param_1 + 0x28) + iVar5);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 0x2c;
          } while (iVar4 < *(int *)(param_1 + 0x24));
        }
        iVar4 = *(int *)(param_1 + 0x28);
        if (iVar4 != 0) {
          FUN_006c026a(iVar4,0x2c,*(undefined4 *)(iVar4 + -4),FUN_00649ba0);
          FUN_006bf840(iVar4 + -4);
        }
        *(int *)(param_1 + 0x2c) = iVar3;
        *(int **)(param_1 + 0x28) = piStack_d0;
        iVar4 = iStack_cc;
      }
      FUN_0064a320(auStack_b8);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      uStack_4 = 0xffffffff;
      FUN_00649ba0();
      iStack_cc = iVar4 + 1;
    } while (iStack_cc < iStack_c0);
  }
  FUN_00649920(auStack_c8,s_Action_dSpeaker_00746b10,*(undefined4 *)(param_1 + 4));
  iVar3 = param_1 + 0x38;
  uStack_4 = 5;
  uVar1 = FUN_00649940(iVar3);
  FUN_006405e0(uVar1,iVar3);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  uStack_c4 = 0;
  FUN_00649920(auStack_c8,s_Action_dAtLocation_00746afc,*(undefined4 *)(param_1 + 4));
  puVar9 = &uStack_c4;
  uStack_4 = 6;
  uVar1 = FUN_00649940(puVar9);
  FUN_006405b0(uVar1,puVar9);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  *(uint *)(param_1 + 0x7c) =
       (*(uint *)(param_1 + 0x7c) ^ uStack_c4) & 1 ^ *(uint *)(param_1 + 0x7c);
  FUN_00649920(&piStack_d0,s_Action_dBilboDialog_00746ae8,*(undefined4 *)(param_1 + 4));
  puVar9 = &uStack_c4;
  uStack_4 = 7;
  uVar1 = FUN_00649940(puVar9);
  FUN_006405b0(uVar1,puVar9);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  *(uint *)(param_1 + 0x7c) =
       (uStack_c4 * 2 ^ *(uint *)(param_1 + 0x7c)) & 2 ^ *(uint *)(param_1 + 0x7c);
  ExceptionList = pvStack_c;
  return;
}

