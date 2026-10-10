
undefined4 FUN_006868c8(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  code *local_278 [2];
  undefined1 *local_270;
  undefined1 local_1f4 [64];
  undefined4 local_1b4;
  undefined4 *local_1b0;
  undefined4 *local_1a0;
  uint local_158;
  uint local_154;
  int local_14c;
  uint local_13c;
  undefined4 *local_c;
  int *local_8;
  
  local_1b4 = FUN_0068e202(local_278);
  local_278[0] = FUN_00686869;
  local_270 = &DAT_006979c2;
  iVar3 = __setjmp3(local_1f4,0);
  if (iVar3 == 0) {
    FUN_0068c3f4(&local_1b4,0x3d,0x1a8);
    local_1a0 = (undefined4 *)(*(code *)*local_1b0)(&local_1b4,0,0x24);
    local_1a0[8] = param_2;
    local_1a0[2] = &DAT_006979c2;
    local_1a0[3] = &LAB_006868a2;
    local_1a0[4] = &LAB_006868b7;
    local_1a0[5] = &LAB_0068df78;
    local_1a0[6] = &DAT_006979c2;
    local_1a0[1] = 0;
    *local_1a0 = 0;
    local_1a0[7] = param_1;
    FUN_0068c773(&local_1b4,1);
    local_270 = &LAB_00686885;
    FUN_0068c8fe(&local_1b4);
    if (local_14c == 1) {
      *local_8 = 0x32;
      local_8[2] = local_158;
    }
    else {
      if (local_14c != 3) goto LAB_00686913;
      *local_8 = 0x16;
      local_8[2] = local_158 << 2;
    }
    local_8[5] = local_158;
    local_8[8] = 1;
    local_8[3] = 0;
    local_8[4] = 0;
    local_8[6] = local_154;
    pvVar4 = operator_new(local_8[2] * local_154);
    local_8[1] = (int)pvVar4;
    if ((pvVar4 == (void *)0x0) ||
       (puVar5 = (undefined4 *)(*(code *)local_1b0[2])(&local_1b4,1,local_158 * local_14c,1),
       local_c = puVar5, puVar5 == (undefined4 *)0x0)) {
      uVar7 = 0x8007000e;
    }
    else {
      if (*local_8 == 0x32) {
        puVar5 = (undefined4 *)local_8[1];
        if (local_13c < local_154) {
          do {
            puVar8 = local_c;
            FUN_0068c87a(&local_1b4,local_c,1);
            puVar8 = (undefined4 *)*puVar8;
            puVar10 = puVar5;
            for (uVar6 = local_158 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar6 = local_158 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            puVar5 = (undefined4 *)((int)puVar5 + local_158);
          } while (local_13c < local_154);
        }
      }
      else if (*local_8 == 0x16) {
        puVar9 = (uint *)local_8[1];
        while (local_13c < local_154) {
          FUN_0068c87a(&local_1b4,puVar5,1);
          puVar1 = puVar9 + local_158;
          puVar2 = (undefined1 *)*puVar5;
          for (; puVar9 < puVar1; puVar9 = puVar9 + 1) {
            *puVar9 = (uint)CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]);
            puVar2 = puVar2 + 3;
          }
        }
      }
      FUN_0068c6d2(&local_1b4);
      uVar7 = 0;
    }
  }
  else {
LAB_00686913:
    uVar7 = 0x80004005;
  }
  thunk_FUN_006924e3(&local_1b4);
  return uVar7;
}

