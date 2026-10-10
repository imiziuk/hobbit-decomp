
void __fastcall FUN_004267a0(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  int iVar17;
  float10 fVar18;
  int iStack_138;
  float local_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf5ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_bilbo__FindTargets_00720b68);
  local_4 = 0;
  FUN_00648600(local_10c,0,0x100);
  *(undefined4 *)(param_1 + 0x46d8) = 0;
  *(undefined4 *)(param_1 + 0x46dc) = 0;
  puVar12 = (undefined4 *)(param_1 + 0x46d8);
  puVar11 = (undefined4 *)(param_1 + 0x46e0);
  for (iVar13 = 0x7e; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar11 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)(param_1 + 0x4cd8) = 0;
  uVar9 = FUN_0054c5c0(0x1c,s_C__projects_meridian_Support_Obj_00720b28,0x219);
  sVar8 = FUN_0054c7c0();
  while (-1 < sVar8) {
    if (sVar8 == -1) {
      piVar16 = (int *)0x0;
    }
    else {
      uVar3 = *(uint *)(DAT_0076f648 + sVar8 * 0x14);
      if (uVar3 == 0) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
      }
    }
    iVar13 = FUN_00426a90(piVar16);
    if (iVar13 == 0) {
      iVar13 = *(int *)(param_1 + 0x4cd8);
      *(undefined4 *)(param_1 + 0x46d8 + iVar13 * 8) = 0;
      *(undefined4 *)(param_1 + 0x46dc + iVar13 * 8) = 0;
    }
    else {
      pfVar10 = (float *)(**(code **)(*piVar16 + 0x28))();
      fVar2 = *(float *)(param_1 + 0x1c) - pfVar10[2];
      fVar7 = *(float *)(param_1 + 0x18) - pfVar10[1];
      fVar6 = *(float *)(param_1 + 0x14) - *pfVar10;
      iVar13 = *(int *)(param_1 + 0x4cd8);
      local_10c[iVar13] = fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6;
      iVar17 = piVar16[3];
      *(int *)(param_1 + 0x46d8 + iVar13 * 8) = piVar16[2];
      *(int *)(param_1 + 0x46dc + iVar13 * 8) = iVar17;
      puVar11 = (undefined4 *)(**(code **)(*piVar16 + 0x28))();
      puVar12 = (undefined4 *)(param_1 + (*(int *)(param_1 + 0x4cd8) + 0x612) * 0xc);
      *puVar12 = *puVar11;
      puVar12[1] = puVar11[1];
      puVar12[2] = puVar11[2];
      fVar18 = (float10)FUN_004a6970();
      *(float *)(param_1 + 0x4bd8 + *(int *)(param_1 + 0x4cd8) * 4) = (float)fVar18;
      *(int *)(param_1 + 0x4cd8) = *(int *)(param_1 + 0x4cd8) + 1;
    }
    if (*(int *)(param_1 + 0x4cd8) == 0x40) break;
    sVar8 = FUN_0054c7c0();
  }
  FUN_0054c880(uVar9);
  iVar13 = *(int *)(param_1 + 0x4cd8);
  iVar17 = 0;
  if (0 < iVar13) {
    puVar12 = (undefined4 *)(param_1 + 0x4bd8);
    puVar11 = (undefined4 *)(param_1 + 0x46d8);
    puVar15 = (undefined4 *)(param_1 + 0x48e0);
    do {
      iVar14 = iVar17;
      if (iVar17 < iVar13) {
        iStack_138 = (-0x4bd8 - param_1) + (int)puVar12;
        iVar13 = iVar17;
        do {
          if (local_10c[iVar13] < *(float *)((int)local_10c + iStack_138) !=
              (NAN(local_10c[iVar13]) || NAN(*(float *)((int)local_10c + iStack_138)))) {
            iStack_138 = iVar13 * 4;
            iVar14 = iVar13;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(param_1 + 0x4cd8));
      }
      uVar9 = puVar11[1];
      fVar2 = local_10c[iVar17];
      uVar4 = *(undefined4 *)(param_1 + 0x46d8 + iVar14 * 8);
      local_10c[iVar17] = local_10c[iVar14];
      local_10c[iVar14] = fVar2;
      uVar5 = *puVar11;
      *puVar11 = uVar4;
      puVar11[1] = *(undefined4 *)(param_1 + 0x46dc + iVar14 * 8);
      *(undefined4 *)(param_1 + 0x46d8 + iVar14 * 8) = uVar5;
      *(undefined4 *)(param_1 + 0x46dc + iVar14 * 8) = uVar9;
      uVar9 = puVar15[-2];
      uVar5 = *puVar15;
      uVar4 = puVar15[-1];
      iVar13 = iVar14 * 3 + 0x1236;
      puVar1 = (undefined4 *)(param_1 + iVar13 * 4);
      puVar15[-2] = *(undefined4 *)(param_1 + iVar13 * 4);
      puVar15[-1] = puVar1[1];
      *puVar15 = puVar1[2];
      *puVar1 = uVar9;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      uVar9 = *puVar12;
      *puVar12 = *(undefined4 *)(param_1 + 0x4bd8 + iVar14 * 4);
      *(undefined4 *)(param_1 + 0x4bd8 + iVar14 * 4) = uVar9;
      iVar13 = *(int *)(param_1 + 0x4cd8);
      iVar17 = iVar17 + 1;
      puVar12 = puVar12 + 1;
      puVar11 = puVar11 + 2;
      puVar15 = puVar15 + 3;
    } while (iVar17 < iVar13);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

