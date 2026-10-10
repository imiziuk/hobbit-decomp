
undefined4 __fastcall FUN_00684c02(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_c;
  uint local_8;
  
  if ((char)param_1[2] == '\x01') {
    iVar5 = param_1[1];
    iVar1 = *param_1;
    uVar4 = *(uint *)(iVar1 + 0x1050);
    if (*(uint *)(iVar1 + 0x1050) < *(uint *)(iVar5 + 0x1050)) {
      uVar4 = *(uint *)(iVar5 + 0x1050);
    }
    local_c = *(uint *)(iVar5 + 0x1054);
    if (*(uint *)(iVar1 + 0x1054) <= *(uint *)(iVar5 + 0x1054)) {
      local_c = *(uint *)(iVar1 + 0x1054);
    }
    local_8 = *(uint *)(iVar5 + 0x1058);
    if (*(uint *)(iVar1 + 0x1058) <= *(uint *)(iVar5 + 0x1058)) {
      local_8 = *(uint *)(iVar1 + 0x1058);
    }
    puVar2 = (undefined4 *)operator_new(uVar4 << 4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)operator_new(*(int *)(param_1[1] + 0x1050) << 4);
      if (puVar3 == (undefined4 *)0x0) {
        FUN_006bf840(puVar2);
        return 0x80004005;
      }
      puVar7 = puVar2;
      for (uVar4 = (uVar4 << 4) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar7 = puVar3;
      for (uVar4 = (uint)(*(int *)(param_1[1] + 0x1050) << 4) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      uVar4 = 0;
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      if (local_8 != 0) {
        do {
          uVar8 = 0;
          uVar9 = local_c;
          if (local_c != 0) {
            do {
              (**(code **)(*(int *)*param_1 + 4))(uVar8,uVar4,puVar2);
              (**(code **)(*(int *)param_1[1] + 8))(uVar8,uVar4,puVar2);
              uVar8 = uVar8 + 1;
            } while (uVar8 < local_c);
          }
          for (; uVar9 < (uint)((int *)param_1[1])[0x415]; uVar9 = uVar9 + 1) {
            (**(code **)(*(int *)param_1[1] + 8))(uVar9,uVar4,puVar3);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_8);
      }
      piVar6 = (int *)param_1[1];
      if (local_8 < (uint)piVar6[0x416]) {
        uVar4 = piVar6[0x415];
        do {
          uVar9 = 0;
          if (uVar4 != 0) {
            do {
              (**(code **)(*piVar6 + 8))(uVar9,local_8,puVar3);
              piVar6 = (int *)param_1[1];
              uVar4 = piVar6[0x415];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar4);
          }
          piVar6 = (int *)param_1[1];
          local_8 = local_8 + 1;
        } while (local_8 < (uint)piVar6[0x416]);
      }
      FUN_006bf840(puVar2);
      FUN_006bf840(puVar3);
      return 0;
    }
  }
  return 0x80004005;
}

