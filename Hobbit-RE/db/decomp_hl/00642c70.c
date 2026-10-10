
void FUN_00642c70(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int iStack00000004;
  int iStack00000008;
  int *piStack00000010;
  int iStack00000014;
  int iStack00000018;
  undefined1 in_stack_00000020;
  
  FUN_006c04f0();
  iVar9 = *(int *)(extraout_ECX + 0x30c24) + 1;
  *(int *)(extraout_ECX + 0x30c24) = iVar9;
  *(undefined4 *)(extraout_ECX + 0x30c28) = 0;
  if ((*(int *)(extraout_ECX + 0x30c20) == 0) || (iVar9 == *(int *)(extraout_ECX + 0x30c20))) {
    in_stack_00000020 = 0;
    puVar11 = (undefined4 *)&stack0x00000021;
    for (iVar9 = 0x5db; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 0;
    *(undefined1 *)((int)puVar11 + 2) = 0;
    puVar11 = (undefined4 *)&stack0x00001791;
    for (iVar9 = 0x5db; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 0;
    *(undefined1 *)((int)puVar11 + 2) = 0;
    FUN_0064f4f0();
    iVar9 = 0;
    if (0 < *(int *)(extraout_ECX + 0x10)) {
      piVar8 = (int *)(extraout_ECX + 0x118);
      do {
        iVar4 = *piVar8;
        piVar8[0x81] = 0;
        if (0 < iVar4) {
          piVar10 = piVar8 + 0x41;
          do {
            iVar2 = *piVar10;
            piVar10 = piVar10 + 1;
            iVar4 = iVar4 + -1;
            piVar8[0x81] = piVar8[0x81] + iVar2;
          } while (iVar4 != 0);
        }
        piVar8[0x81] = piVar8[0x81] + 3;
        iVar4 = FUN_00647cf0();
        if (piVar8[0x81] < iVar4 + 1) {
          piVar8[0x81] = iVar4 + 1;
        }
        iVar4 = FUN_00647cf0();
        iVar2 = FUN_0064f190();
        uVar7 = piVar8[0x81] - iVar2;
        uVar5 = 0;
        if (0 < (int)uVar7) {
          puVar11 = (undefined4 *)(&stack0x00000020 + iVar2 + iVar4);
          for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar11 = 0x20202020;
            puVar11 = puVar11 + 1;
          }
          for (uVar6 = uVar7 & 3; uVar5 = uVar7, uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar11 = 0x20;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
        }
        (&stack0x00000020)[uVar5 + iVar2 + iVar4] = 0;
        iVar9 = iVar9 + 1;
        piVar8 = piVar8 + 0xc3;
      } while (iVar9 < *(int *)(extraout_ECX + 0x10));
    }
    iVar9 = FUN_00647cf0();
    iVar4 = 0;
    iVar2 = 0;
    if (0 < iVar9) {
      do {
        (&stack0x00001790)[iVar2] = 0x2d;
        if (iVar4 == 0) {
          if ((&stack0x00000021)[iVar2] == ' ') {
            iVar4 = 1;
LAB_00642e8e:
            if ((&stack0x00000021)[iVar2] != ' ') {
              iVar4 = 2;
              goto LAB_00642ea0;
            }
          }
        }
        else {
          if (iVar4 == 1) goto LAB_00642e8e;
          if (iVar4 != 2) goto LAB_00642eb0;
LAB_00642ea0:
          if ((&stack0x00000021)[iVar2] != '\0') {
            (&stack0x00001790)[iVar2] = 0x20;
            iVar4 = 0;
          }
        }
LAB_00642eb0:
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar9);
    }
    (&stack0x00001790)[iVar2] = 0;
    FUN_0064f4f0();
    FUN_0064f4f0();
    iStack00000014 = 0;
    iStack00000004 = 0;
    if (0 < *(int *)(extraout_ECX + 0x30c20)) {
      do {
        iStack00000008 = 0;
        if (0 < *(int *)(extraout_ECX + 0x10)) {
          piVar8 = (int *)(extraout_ECX + 0x118);
          do {
            iVar9 = 0;
            iStack00000018 = 0;
            if (0 < *piVar8) {
              iVar4 = iStack00000014 << 4;
              iVar9 = 0;
              piStack00000010 = piVar8;
              do {
                piStack00000010 = piStack00000010 + 1;
                iVar2 = *(int *)(*(int *)(extraout_ECX + 0x30c1c) + 4 + iVar4);
                piVar10 = (int *)(*(int *)(extraout_ECX + 0x30c1c) + iVar4);
                iVar12 = 0;
                if (((*(short *)((int)piVar10 + 0xe) != 0) && (*piStack00000010 != 0)) &&
                   (*(char *)(*(int *)(extraout_ECX + 4) + *piVar10) != '-')) {
                  iVar12 = FUN_0064f420();
                }
                iVar3 = FUN_0064f420();
                iVar12 = iVar12 + iVar3;
                if (iVar12 < piVar8[iVar2 + 0x41]) {
                  iVar2 = FUN_0064f420();
                  iVar12 = iVar12 + iVar2;
                }
                iVar9 = iVar9 + iVar12;
                iStack00000018 = iStack00000018 + 1;
                iStack00000014 = iStack00000014 + 1;
                iVar4 = iVar4 + 0x10;
              } while (iStack00000018 < *piVar8);
            }
            if (iVar9 < piVar8[0x81]) {
              FUN_0064f420();
            }
            iStack00000008 = iStack00000008 + 1;
            piVar8 = piVar8 + 0xc3;
          } while (iStack00000008 < *(int *)(extraout_ECX + 0x10));
        }
        iVar9 = iStack00000004 + 1;
        if ((iVar9 % 0x50 == 0) && (10 < *(int *)(extraout_ECX + 0x30c20) - iStack00000004)) {
          FUN_0064f4f0();
          FUN_0064f4f0();
          FUN_0064f4f0();
          FUN_0064f4f0();
        }
        else {
          FUN_0064f4f0();
        }
        iStack00000004 = iVar9;
      } while (iVar9 < *(int *)(extraout_ECX + 0x30c20));
    }
    FUN_0064f4f0();
    FUN_0064ff40();
    FUN_0064ff40();
    *(undefined4 *)(extraout_ECX + 4) = 0;
    *(undefined4 *)(extraout_ECX + 0x30c1c) = 0;
  }
  else if (iVar9 == 1) {
    *(undefined4 *)(extraout_ECX + 0x30c14) = *(undefined4 *)(extraout_ECX + 0x30c18);
    uVar1 = thunk_FUN_0064ffa0();
    *(undefined4 *)(extraout_ECX + 0x30c1c) = uVar1;
    *(int *)(extraout_ECX + 8) =
         *(int *)(extraout_ECX + 0x30c20) * *(int *)(extraout_ECX + 0x30c14) * 0x100;
    uVar1 = thunk_FUN_0064ffa0();
    *(undefined4 *)(extraout_ECX + 4) = uVar1;
    return;
  }
  return;
}

