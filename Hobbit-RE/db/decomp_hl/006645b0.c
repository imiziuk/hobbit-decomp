
void __fastcall FUN_006645b0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_ESI;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 local_c [12];
  
  piVar3 = *(int **)(param_1 + 0x364);
  *(undefined4 *)(param_1 + 0x344) = 0;
  if (piVar3 != *(int **)(param_1 + 0x368)) {
    do {
      iVar8 = *piVar3;
      *(undefined4 *)(iVar8 + 0x10) = DAT_007edb20;
      iVar1 = FUN_00664540(iVar8);
      if (*(int *)(iVar8 + 0x24) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar8 + 0x28) - *(int *)(iVar8 + 0x24) >> 1;
      }
      if (*(int *)(iVar8 + 0x34) == 5) {
        iVar2 = iVar2 + 2;
      }
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + iVar2;
      iVar2 = *(int *)(iVar8 + 0xc) / *(int *)(iVar8 + 0x18);
      iVar8 = *(int *)(iVar8 + 0x14) + iVar2;
      if (iVar2 < *(int *)(iVar1 + 0xc)) {
        *(int *)(iVar1 + 0xc) = iVar2;
      }
      if (*(int *)(iVar1 + 0x10) < iVar8) {
        *(int *)(iVar1 + 0x10) = iVar8;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 0x368));
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x344)) {
    piVar3 = (int *)(param_1 + 0x40);
    do {
      iVar1 = *piVar3;
      if (0 < iVar1) {
        if (piVar3[-6] == 5) {
          *piVar3 = iVar1 + -2;
          piVar3[1] = iVar1 + -4;
        }
        else if (piVar3[-6] == 4) {
          piVar3[1] = iVar1 / 3;
        }
      }
      iVar8 = iVar8 + 1;
      piVar3 = piVar3 + 10;
    } while (iVar8 < *(int *)(param_1 + 0x344));
  }
  iVar8 = *(int *)(param_1 + 0x344);
  iVar1 = 0;
  if (0 < iVar8) {
    piVar3 = (int *)(param_1 + 0x40);
    do {
      iVar1 = iVar1 + *piVar3;
      piVar3 = piVar3 + 10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar6 = (*(int *)(param_1 + 0x1c) < (int)(*(uint *)(param_1 + 0x20) + iVar1)) - 1 &
          *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar6 + iVar1;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x2c))
            (*(int **)(param_1 + 0x18),uVar6 * 2,iVar1 * 2,local_c,
             (-(uint)(uVar6 != 0) & 0xfffff000) + 0x2000);
  iVar8 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x344)) {
    piVar3 = (int *)(param_1 + 0x3c);
    do {
      piVar3[-1] = iVar8 + uVar6;
      *piVar3 = unaff_ESI + iVar8 * 2;
      iVar8 = iVar8 + piVar3[1];
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 10;
    } while (iVar1 < *(int *)(param_1 + 0x344));
  }
  piVar3 = *(int **)(param_1 + 0x364);
  if (piVar3 != *(int **)(param_1 + 0x368)) {
    do {
      iVar8 = *piVar3;
      puVar5 = *(undefined4 **)(iVar8 + 0x24);
      if (puVar5 == (undefined4 *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar8 + 0x28) - (int)puVar5 >> 1;
      }
      uVar6 = iVar1 * 2;
      iVar1 = FUN_00664540(iVar8);
      if ((*(int *)(iVar8 + 0x34) == 5) && (0 < *(int *)(iVar1 + 0x24))) {
        **(undefined2 **)(iVar1 + 0x18) = (*(undefined2 **)(iVar1 + 0x18))[-1];
        *(undefined2 *)(*(int *)(iVar1 + 0x18) + 2) = **(undefined2 **)(iVar8 + 0x24);
        *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 4;
      }
      *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
      puVar7 = *(undefined4 **)(iVar1 + 0x18);
      uVar10 = uVar6;
      if (0x3f < (int)uVar6) {
        uVar4 = uVar6 >> 6;
        uVar10 = uVar6 + uVar4 * -0x40;
        do {
          puVar9 = puVar5;
          puVar11 = puVar7;
          for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar7 = puVar7 + 0x10;
          puVar5 = puVar5 + 0x10;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      for (uVar4 = uVar10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(uint *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + uVar6;
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 0x368));
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 0x30))(*(int **)(param_1 + 0x18));
  return;
}

