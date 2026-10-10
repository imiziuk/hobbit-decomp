
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051c160(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x1b4) != 0) {
    FUN_00671130(0x98,0);
    uVar1 = __ftol();
    FUN_00671130(0x97,0,uVar1);
    uVar2 = __ftol();
    FUN_006a03c0(*(undefined4 *)(param_1 + 8),uVar2,uVar1);
    *(undefined4 *)(param_1 + 0x1b4) = 0;
  }
  iVar3 = FUN_00670ef0(0x60,0);
  if (iVar3 != 0) {
    iVar3 = FUN_006772e0();
    if (iVar3 == 0) {
      FUN_00659600(s_Inventory_ZButton_00734a14,1);
      if (*(int *)(param_1 + 0x160) == 0) {
        *(undefined4 *)(param_1 + 0x160) = 1;
        *(undefined4 *)(param_1 + 0x164) = 0;
        *(undefined4 *)(param_1 + 0x168) = 0x1a;
        *(undefined4 *)(param_1 + 0x16c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x160) = 0;
      }
    }
  }
  if ((*(int *)(param_1 + 0x160) != 0) &&
     (iVar3 = *(int *)(param_1 + 0x164) + 1, *(int *)(param_1 + 0x164) = iVar3, 0x19 < iVar3)) {
    *(undefined4 *)(param_1 + 0x164) = 0;
    _DAT_00734984 = DAT_00734920;
    puVar7 = &DAT_00734924;
    puVar4 = &DAT_00734920;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar4 = &DAT_00734920;
    puVar7 = (undefined4 *)(param_1 + 0x170);
    do {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    } while ((int)puVar4 < 0x73495c);
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    uVar5 = FUN_006a3230();
    if ((uVar5 & 0x400) != 0) {
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x1ac) + 0x10))();
      iStack_10 = *piVar6 + 0x10;
      iStack_c = piVar6[1] + 0x10;
      iStack_4 = piVar6[3] + 0x10;
      iStack_8 = piVar6[2] + 0x10;
      FUN_006a0430(*(undefined4 *)(*(int *)(param_1 + 0x1ac) + 8),&iStack_10,0);
      return;
    }
  }
  if (*(int *)(param_1 + 0x1b0) != 0) {
    uVar5 = FUN_006a3230();
    if ((uVar5 & 0x400) != 0) {
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x1b0) + 0x10))();
      iStack_10 = *piVar6 + 0x10;
      iStack_4 = piVar6[3] + 0x10;
      iStack_c = piVar6[1] + 0x10;
      iStack_8 = piVar6[2] + 0x10;
      FUN_006a0430(*(undefined4 *)(*(int *)(param_1 + 0x1b0) + 8),&iStack_10,0);
    }
  }
  return;
}

