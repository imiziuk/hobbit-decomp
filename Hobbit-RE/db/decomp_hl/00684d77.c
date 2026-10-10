
undefined4 __fastcall FUN_00684d77(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint local_28;
  uint local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  uint local_8;
  
  if ((char)param_1[2] == '\x02') {
    pvVar7 = operator_new(*(int *)(*param_1 + 0x1050) << 4);
    if (pvVar7 != (void *)0x0) {
      puVar8 = (undefined4 *)operator_new(*(int *)(param_1[1] + 0x1050) << 4);
      if (puVar8 != (undefined4 *)0x0) {
        iVar1 = *param_1;
        iVar2 = *(int *)(iVar1 + 0x1050);
        iVar3 = param_1[1];
        uVar4 = *(uint *)(iVar3 + 0x1050);
        uVar12 = *(uint *)(iVar3 + 0x1054);
        uVar5 = *(uint *)(iVar3 + 0x1058);
        local_1c = 0;
        local_c = 0;
        uVar9 = (uint)(*(int *)(iVar1 + 0x1054) << 0x10) / uVar12;
        iVar1 = *(int *)(iVar1 + 0x1058);
        if (uVar5 != 0) {
          do {
            local_24 = 0xffffffff;
            local_28 = 0;
            local_8 = 0;
            if (uVar12 != 0) {
              do {
                local_14 = 0;
                local_18 = 0;
                if (((local_24 ^ local_28) & 0xffff0000) != 0) {
                  (**(code **)(*(int *)*param_1 + 4))(local_28 >> 0x10,local_1c >> 0x10,pvVar7);
                  local_24 = local_28;
                }
                puVar10 = puVar8;
                if (*(int *)(param_1[1] + 0x1050) != 0) {
                  do {
                    puVar11 = (undefined4 *)((local_14 >> 0x10) * 0x10 + (int)pvVar7);
                    local_18 = local_18 + 1;
                    *puVar10 = *puVar11;
                    puVar10[1] = puVar11[1];
                    puVar10[2] = puVar11[2];
                    puVar10[3] = puVar11[3];
                    puVar10 = puVar10 + 4;
                    local_14 = local_14 + (uint)(iVar2 << 0x10) / uVar4;
                  } while (local_18 < *(uint *)(param_1[1] + 0x1050));
                }
                (**(code **)(*(int *)param_1[1] + 8))(local_8,local_c,puVar8);
                local_28 = local_28 + uVar9;
                local_8 = local_8 + 1;
                uVar12 = *(uint *)(param_1[1] + 0x1054);
              } while (local_8 < uVar12);
            }
            local_1c = local_1c + (uint)(iVar1 << 0x10) / uVar5;
            local_c = local_c + 1;
          } while (local_c < *(uint *)(param_1[1] + 0x1058));
        }
        FUN_006bf840(pvVar7);
        FUN_006bf840(puVar8);
        return 0;
      }
      FUN_006bf840(pvVar7);
    }
    uVar6 = 0x8007000e;
  }
  else {
    uVar6 = 0x80004005;
  }
  return uVar6;
}

