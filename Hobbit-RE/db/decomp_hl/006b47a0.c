
undefined4 __thiscall FUN_006b47a0(int *param_1,int param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  int *piVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 *local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8337;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006af3f0();
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else if (param_2 < param_1[0xb]) {
    if (*param_1 < 1) {
      param_3[1] = 0;
      *param_3 = 0;
    }
    else {
      pvVar2 = operator_new(*param_1 * 0x130);
      param_3[1] = (int)pvVar2;
      iVar12 = *param_1;
      *param_3 = iVar12;
      FUN_00648480(pvVar2,param_1[1],iVar12 * 0x130);
    }
    if (param_1[0xd] < 1) {
      param_3[0xe] = 0;
      param_3[0xd] = 0;
    }
    else {
      pvVar2 = operator_new(param_1[0xd] * 0x2c);
      param_3[0xe] = (int)pvVar2;
      param_3[0xd] = param_1[0xd];
      FUN_00648480(pvVar2,param_1[0xe],param_3[7] * 0x2c);
    }
    pvVar2 = operator_new(0x40c);
    param_3[0xc] = (int)pvVar2;
    param_3[0xb] = 1;
    FUN_00648480(pvVar2,param_2 * 0x40c + param_1[0xc],0x40c);
    iVar12 = param_1[9];
    if (iVar12 < 1) {
      param_3[10] = 0;
      param_3[9] = 0;
    }
    else {
      pvVar2 = operator_new(iVar12 * 0x338);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else if (-1 < iVar12 + -1) {
        iVar15 = (int)pvVar2 + 0x138;
        do {
          FUN_00401080(iVar15,0x40,8,FUN_0041def0);
          iVar15 = iVar15 + 0x338;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      param_3[10] = (int)pvVar2;
      iVar12 = param_1[9];
      param_3[9] = iVar12;
      local_4 = 0xffffffff;
      FUN_00648480(pvVar2,param_1[10],iVar12 * 0x338);
    }
    iVar12 = param_1[7];
    iVar15 = 0;
    if (iVar12 < 1) {
      param_3[8] = 0;
      param_3[7] = 0;
    }
    else {
      param_3[7] = iVar12;
      pvVar2 = operator_new(iVar12 << 8);
      param_3[8] = (int)pvVar2;
      if (0 < param_1[7]) {
        FUN_00648480(pvVar2,param_1[8],param_1[7] << 8);
      }
    }
    iVar12 = param_1[5];
    if (0 < iVar12) {
      piVar7 = (int *)param_1[6];
      do {
        if (*piVar7 == param_2) {
          iVar15 = iVar15 + 1;
        }
        piVar7 = piVar7 + 0x17;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    local_20 = (undefined4 *)(iVar15 * 3);
    param_3[3] = (int)local_20;
    pvVar2 = operator_new(iVar15 * 0x420);
    local_4 = 1;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else if (-1 < (int)local_20 + -1) {
      iVar12 = (int)pvVar2 + 0x60;
      do {
        FUN_00401080(iVar12 + -0x40,8,8,FUN_0041def0);
        FUN_00401080(iVar12,0xc,8,FUN_0041def0);
        FUN_00401080(iVar12 + 0x60,4,8,FUN_0041def0);
        iVar12 = iVar12 + 0x160;
        local_20 = (undefined4 *)((int)local_20 + -1);
      } while (local_20 != (undefined4 *)0x0);
    }
    param_3[5] = iVar15;
    local_4 = 0xffffffff;
    param_3[4] = (int)pvVar2;
    pvVar2 = operator_new(iVar15 * 0x5c);
    puVar8 = (undefined4 *)param_3[4];
    param_3[6] = (int)pvVar2;
    local_18 = 0;
    if (0 < param_1[5]) {
      local_2c = puVar8 + 0x38;
      local_30 = (undefined1 *)((int)puVar8 + 0xc3);
      local_34 = puVar8 + 0x19;
      local_28 = puVar8 + 9;
      local_24 = 0;
      iVar12 = 2;
      piVar7 = (int *)((int)pvVar2 + 0x54);
      do {
        piVar3 = (int *)(param_1[6] + local_24);
        if (*piVar3 == param_2) {
          piVar7[-0x15] = *piVar3;
          piVar7[-0x14] = piVar3[1];
          piVar13 = piVar7 + -0x13;
          local_20 = (undefined4 *)0x10;
          do {
            *piVar13 = *(int *)((int)piVar13 + ((int)piVar3 - (int)(piVar7 + -0x15)));
            piVar13 = piVar13 + 1;
            local_20 = (undefined4 *)((int)local_20 + -1);
          } while (local_20 != (undefined4 *)0x0);
          piVar7[-3] = piVar3[0x12];
          piVar7[-2] = piVar3[0x13];
          piVar7[-1] = piVar3[0x14];
          *piVar7 = piVar3[0x15];
          piVar7[1] = piVar3[0x16];
          piVar7[-0x11] = iVar12;
          piVar7[-0x13] = iVar12 + -2;
          piVar7[-0x15] = 0;
          piVar7[-0x12] = iVar12 + -1;
          iVar12 = iVar12 + 3;
          iVar15 = *(int *)(local_24 + 8 + param_1[6]) * 0x160;
          iVar4 = iVar15 + param_1[4];
          *puVar8 = *(undefined4 *)(iVar15 + param_1[4]);
          puVar8[1] = *(undefined4 *)(iVar4 + 4);
          puVar8[2] = *(undefined4 *)(iVar4 + 8);
          puVar8[3] = *(undefined4 *)(iVar4 + 0xc);
          puVar8[4] = *(undefined4 *)(iVar4 + 0x10);
          puVar8[5] = *(undefined4 *)(iVar4 + 0x14);
          puVar8[6] = *(undefined4 *)(iVar4 + 0x18);
          puVar8[7] = *(undefined4 *)(iVar4 + 0x1c);
          puVar5 = (undefined4 *)(iVar4 + 0x20);
          iVar15 = iVar4 - (int)puVar8;
          local_20 = (undefined4 *)0x8;
          puVar6 = local_28;
          do {
            puVar6[-1] = *puVar5;
            *puVar6 = *(undefined4 *)(iVar15 + (int)puVar6);
            puVar5 = puVar5 + 2;
            puVar6 = puVar6 + 2;
            local_20 = (undefined4 *)((int)local_20 + -1);
          } while (local_20 != (undefined4 *)0x0);
          puVar5 = (undefined4 *)(iVar4 + 0x60);
          local_20 = (undefined4 *)0x8;
          puVar6 = local_34;
          do {
            puVar6[-1] = *puVar5;
            *puVar6 = *(undefined4 *)((int)puVar6 + iVar15);
            puVar6[1] = puVar5[2];
            puVar5 = puVar5 + 3;
            puVar6 = puVar6 + 3;
            local_20 = (undefined4 *)((int)local_20 + -1);
          } while (local_20 != (undefined4 *)0x0);
          puVar11 = (undefined1 *)(iVar4 + 0xc1);
          iVar4 = 8;
          puVar14 = local_30;
          do {
            *puVar14 = puVar14[iVar15];
            puVar14[-1] = puVar11[1];
            puVar14[-2] = *puVar11;
            puVar14[-3] = puVar11[-1];
            puVar11 = puVar11 + 4;
            puVar14 = puVar14 + 4;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iVar4 = 0x10;
          puVar5 = local_2c;
          do {
            *puVar5 = *(undefined4 *)(iVar15 + (int)puVar5);
            puVar5[1] = *(undefined4 *)(iVar15 + 4 + (int)puVar5);
            puVar5 = puVar5 + 2;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          puVar10 = local_34 + 0x58;
          puVar6 = local_2c + 0x58;
          puVar9 = local_28 + 0x58;
          puVar11 = local_30 + 0x160;
          puVar5 = (undefined4 *)(*(int *)(local_24 + 0xc + param_1[6]) * 0x160 + param_1[4]);
          puVar8[0x58] = *puVar5;
          puVar8[0x59] = puVar5[1];
          puVar8[0x5a] = puVar5[2];
          puVar8[0x5b] = puVar5[3];
          puVar8[0x5c] = puVar5[4];
          puVar8[0x5d] = puVar5[5];
          puVar8[0x5e] = puVar5[6];
          puVar8[0x5f] = puVar5[7];
          local_20 = puVar5 + 8;
          iVar15 = (int)puVar5 - (int)(puVar8 + 0x58);
          local_1c = 8;
          do {
            puVar9[-1] = *local_20;
            *puVar9 = *(undefined4 *)(iVar15 + (int)puVar9);
            local_20 = local_20 + 2;
            puVar9 = puVar9 + 2;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
          local_20 = puVar5 + 0x18;
          local_1c = 8;
          do {
            puVar10[-1] = *local_20;
            *puVar10 = *(undefined4 *)((int)puVar10 + iVar15);
            puVar10[1] = local_20[2];
            local_20 = local_20 + 3;
            puVar10 = puVar10 + 3;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
          puVar14 = (undefined1 *)((int)puVar5 + 0xc1);
          local_1c = 8;
          do {
            *puVar11 = puVar11[iVar15];
            puVar11[-1] = puVar14[1];
            puVar11[-2] = *puVar14;
            puVar11[-3] = puVar14[-1];
            puVar14 = puVar14 + 4;
            puVar11 = puVar11 + 4;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
          iVar4 = 0x10;
          do {
            *puVar6 = *(undefined4 *)((int)puVar6 + iVar15);
            puVar6[1] = *(undefined4 *)((int)puVar6 + iVar15 + 4);
            puVar6 = puVar6 + 2;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          puVar11 = local_30 + 0x2c0;
          puVar10 = local_34 + 0xb0;
          puVar9 = local_28 + 0xb0;
          puVar6 = local_2c + 0xb0;
          puVar5 = (undefined4 *)(*(int *)(local_24 + 0x10 + param_1[6]) * 0x160 + param_1[4]);
          puVar8[0xb0] = *puVar5;
          puVar8[0xb1] = puVar5[1];
          puVar8[0xb2] = puVar5[2];
          puVar8[0xb3] = puVar5[3];
          puVar8[0xb4] = puVar5[4];
          puVar8[0xb5] = puVar5[5];
          puVar8[0xb6] = puVar5[6];
          puVar8[0xb7] = puVar5[7];
          local_20 = puVar5 + 8;
          iVar15 = (int)puVar5 - (int)(puVar8 + 0xb0);
          local_1c = 8;
          do {
            puVar9[-1] = *local_20;
            *puVar9 = *(undefined4 *)(iVar15 + (int)puVar9);
            local_20 = local_20 + 2;
            puVar9 = puVar9 + 2;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
          local_20 = puVar5 + 0x18;
          local_1c = 8;
          do {
            puVar10[-1] = *local_20;
            *puVar10 = *(undefined4 *)(iVar15 + (int)puVar10);
            puVar10[1] = local_20[2];
            local_20 = local_20 + 3;
            puVar10 = puVar10 + 3;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
          puVar14 = (undefined1 *)((int)puVar5 + 0xc1);
          local_1c = 8;
          do {
            *puVar11 = puVar11[iVar15];
            puVar11[-1] = puVar14[1];
            puVar11[-2] = *puVar14;
            puVar11[-3] = puVar14[-1];
            puVar14 = puVar14 + 4;
            puVar11 = puVar11 + 4;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
          iVar4 = 0x10;
          do {
            *puVar6 = *(undefined4 *)(iVar15 + (int)puVar6);
            puVar6[1] = *(undefined4 *)(iVar15 + 4 + (int)puVar6);
            puVar6 = puVar6 + 2;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          local_28 = local_28 + 0x108;
          local_34 = local_34 + 0x108;
          local_2c = local_2c + 0x108;
          local_30 = local_30 + 0x420;
          puVar8 = puVar8 + 0x108;
          piVar7 = piVar7 + 0x17;
        }
        local_24 = local_24 + 0x5c;
        local_18 = local_18 + 1;
      } while (local_18 < param_1[5]);
    }
    FUN_006b26f0(0xffffffff);
    if (param_4 != 0) {
      FUN_006b26f0(param_2);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  ExceptionList = local_c;
  return uVar1;
}

