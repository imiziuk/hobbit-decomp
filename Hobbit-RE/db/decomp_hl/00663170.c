
/* WARNING: Removing unreachable block (ram,0x006633f6) */
/* WARNING: Removing unreachable block (ram,0x00663412) */
/* WARNING: Removing unreachable block (ram,0x00663427) */
/* WARNING: Removing unreachable block (ram,0x0066342c) */
/* WARNING: Removing unreachable block (ram,0x00663435) */

void __fastcall FUN_00663170(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int local_34;
  int local_28;
  int local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  local_10 = *(undefined4 *)(param_1 + 0x1c);
  iVar8 = *(int *)(param_1 + 0x20);
  iVar10 = *(int *)(param_1 + 0x24);
  iVar7 = *(int *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x2c);
  local_20 = *puVar1;
  local_1c = *(int **)(param_1 + 0x30);
  local_14 = *(undefined4 **)(param_1 + 0x38);
  if (iVar10 != *(int *)(param_1 + 0x34)) {
    do {
      FUN_00664500();
      iVar10 = iVar10 + 4;
      if (iVar10 == iVar8) {
        iVar10 = *(int *)(iVar7 + 4);
        iVar7 = iVar7 + 4;
        iVar8 = iVar10 + 0x1000;
      }
      local_20 = *puVar1;
      local_1c = *(int **)(param_1 + 0x30);
      local_14 = *(undefined4 **)(param_1 + 0x38);
    } while (iVar10 != *(int *)(param_1 + 0x34));
  }
  if (DAT_007f0ef8 != 0) {
    local_20 = *(undefined4 *)(param_1 + 0x1c);
    local_1c = *(int **)(param_1 + 0x20);
    local_18 = *(int **)(param_1 + 0x24);
    local_14 = *(undefined4 **)(param_1 + 0x28);
    local_10 = *puVar1;
    local_c = *(undefined4 *)(param_1 + 0x30);
    local_4 = *(undefined4 *)(param_1 + 0x38);
    piVar5 = DAT_007f0fec;
    piVar4 = DAT_007f0fe8;
    if (local_18 != *(int **)(param_1 + 0x34)) {
      do {
        iVar8 = *local_18;
        local_34 = 0;
        if (0 < *(int *)(iVar8 + 0x344)) {
          piVar9 = (int *)(iVar8 + 0x24);
          do {
            bVar3 = false;
            bVar2 = false;
            piVar6 = piVar4;
            if (piVar4 == piVar5) {
LAB_006632a5:
              local_28 = *piVar9;
              local_24 = piVar9[1];
              if ((int)DAT_007f0ff0 - (int)piVar5 >> 3 == 0) {
                if ((piVar4 == (int *)0x0) || ((uint)((int)piVar5 - (int)piVar4 >> 3) < 2)) {
                  iVar10 = 1;
                }
                else {
                  iVar10 = (int)piVar5 - (int)piVar4 >> 3;
                }
                if (piVar4 == (int *)0x0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = (int)piVar5 - (int)piVar4 >> 3;
                }
                iVar7 = iVar7 + iVar10;
                iVar10 = iVar7;
                if (iVar7 < 0) {
                  iVar10 = 0;
                }
                piVar4 = (int *)operator_new(iVar10 << 3);
                iVar10 = FUN_006696f0(DAT_007f0fe8,piVar5,piVar4);
                FUN_00669720(iVar10,1,&local_28);
                FUN_006696f0(piVar5,DAT_007f0fec,iVar10 + 8);
                FUN_005b8840(DAT_007f0fe8,DAT_007f0fec);
                FUN_006bf840(DAT_007f0fe8);
                DAT_007f0ff0 = piVar4 + iVar7 * 2;
                iVar10 = FUN_006696d0();
                piVar5 = piVar4 + iVar10 * 2 + 2;
                DAT_007f0fe8 = piVar4;
                DAT_007f0fec = piVar5;
              }
              else {
                FUN_006696f0(piVar5,piVar5,piVar5 + 2);
                FUN_00669720(DAT_007f0fec,1 - ((int)DAT_007f0fec - (int)piVar5 >> 3),&local_28);
                piVar6 = DAT_007f0fec;
                piVar4 = DAT_007f0fe8;
                for (; DAT_007f0fe8 = piVar4, piVar5 != piVar6; piVar5 = piVar5 + 2) {
                  *piVar5 = local_28;
                  piVar5[1] = local_24;
                  piVar4 = DAT_007f0fe8;
                }
                piVar5 = DAT_007f0fec + 2;
                DAT_007f0fec = piVar5;
              }
            }
            else {
              do {
                if (bVar2) goto LAB_0066345c;
                if ((piVar9[1] == piVar6[1]) && (bVar3 = true, *piVar9 == *piVar6)) {
                  bVar2 = true;
                }
                piVar6 = piVar6 + 2;
              } while (piVar6 != piVar5);
              if (!bVar2) {
                if (bVar3) {
                  DAT_007edb24 = DAT_007edb24 + 1;
                }
                goto LAB_006632a5;
              }
            }
LAB_0066345c:
            local_34 = local_34 + 1;
            piVar9 = piVar9 + 10;
          } while (local_34 < *(int *)(iVar8 + 0x344));
        }
        local_18 = local_18 + 1;
        if (local_18 == local_1c) {
          local_14 = local_14 + 1;
          local_18 = (int *)*local_14;
          local_1c = local_18 + 0x400;
        }
        local_10 = *puVar1;
        local_c = *(undefined4 *)(param_1 + 0x30);
        local_4 = *(undefined4 *)(param_1 + 0x38);
      } while (local_18 != *(int **)(param_1 + 0x34));
    }
  }
  return;
}

