
/* WARNING: Removing unreachable block (ram,0x0065a895) */

void __fastcall FUN_0065a6a0(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_58;
  int local_54;
  int local_3c;
  void *local_38;
  int local_34;
  int local_20;
  void *local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6633;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_mgr__MergeIdentifierTables_0074e1f0);
  iVar7 = 0;
  local_4 = 2;
  if (*(int *)(param_1 + 0x2258) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x2250));
    *(undefined4 *)(param_1 + 0x2250) = 0;
    *(undefined4 *)(param_1 + 0x224c) = 0;
    *(undefined4 *)(param_1 + 0x2254) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x224c) = 0;
  }
  FUN_006bf840(0);
  local_34 = 0;
  local_38 = (void *)0x0;
  local_3c = 0;
  FUN_006bf840(0);
  local_18 = 0;
  local_1c = (void *)0x0;
  iVar8 = 0;
  iVar5 = *(int *)(param_1 + 0x2264);
  local_20 = 0;
  iVar3 = *(int *)(iVar5 + 8);
  pvVar1 = local_38;
  pvVar2 = local_1c;
  while (iVar3 != 0) {
    local_38 = pvVar1;
    local_1c = pvVar2;
    if (*(int *)(iVar3 + 0x138) != 0) {
      if (local_34 < iVar8 + 1) {
        local_34 = local_34 / 2;
        iVar3 = 1;
        if (0 < local_34) {
          iVar3 = local_34;
        }
        if (iVar3 + iVar8 < 1) {
          local_34 = 1;
        }
        else {
          if (local_34 < 1) {
            local_34 = 1;
          }
          local_34 = iVar8 + local_34;
        }
        local_38 = operator_new(local_34 * 4);
        iVar3 = 0;
        if (0 < local_3c) {
          do {
            *(undefined4 *)((int)local_38 + iVar3 * 4) = *(undefined4 *)((int)pvVar1 + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_3c);
        }
        FUN_006bf840(pvVar1);
        iVar8 = local_3c;
      }
      iVar8 = iVar8 + 1;
      *(undefined4 *)((int)local_38 + iVar8 * 4 + -4) = *(undefined4 *)(iVar5 + 8);
      if (local_18 < local_20 + 1) {
        local_18 = local_18 / 2;
        iVar3 = 1;
        if (0 < local_18) {
          iVar3 = local_18;
        }
        if (iVar3 + local_20 < 1) {
          local_18 = 1;
        }
        else {
          if (local_18 < 1) {
            local_18 = 1;
          }
          local_18 = local_18 + local_20;
        }
        local_1c = operator_new(local_18 * 4);
        iVar3 = 0;
        if (0 < local_20) {
          do {
            *(undefined4 *)((int)local_1c + iVar3 * 4) = *(undefined4 *)((int)pvVar2 + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_20);
        }
        FUN_006bf840(pvVar2);
      }
      local_20 = local_20 + 1;
      *(undefined4 *)((int)local_1c + local_20 * 4 + -4) = 0;
      iVar7 = iVar7 + *(int *)(*(int *)(iVar5 + 8) + 0xf0);
      local_3c = iVar8;
    }
    iVar5 = *(int *)(iVar5 + 4);
    pvVar1 = local_38;
    pvVar2 = local_1c;
    iVar3 = *(int *)(iVar5 + 8);
  }
  if (iVar7 != *(int *)(param_1 + 0x2254)) {
    pvVar4 = operator_new(iVar7 * 4);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x224c)) {
      do {
        *(undefined4 *)((int)pvVar4 + iVar5 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x2250) + iVar5 * 4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x224c));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x2250));
    *(void **)(param_1 + 0x2250) = pvVar4;
    *(int *)(param_1 + 0x2254) = iVar7;
    iVar8 = local_3c;
  }
  while (iVar8 != 0) {
    local_54 = 0;
    local_58 = 1;
    iVar7 = 0;
    if (1 < iVar8) {
      iVar5 = 0;
      do {
        iVar7 = local_58 * 4;
        iVar3 = FUN_00647e40(*(int *)(*(int *)(iVar7 + (int)pvVar1) + 0x198) +
                             (uint)*(ushort *)
                                    (*(int *)(*(int *)(iVar7 + (int)pvVar1) + 0x194) +
                                    *(int *)(iVar7 + (int)pvVar2) * 8),
                             *(int *)(*(int *)((int)pvVar1 + iVar5) + 0x198) +
                             (uint)*(ushort *)
                                    (*(int *)(*(int *)((int)pvVar1 + iVar5) + 0x194) +
                                    *(int *)((int)pvVar2 + iVar5) * 8));
        if (iVar3 < 0) {
          local_54 = local_58;
          iVar5 = iVar7;
        }
        local_58 = local_58 + 1;
        iVar7 = local_54;
      } while (local_58 < local_3c);
    }
    piVar6 = (int *)FUN_006a20c0();
    *piVar6 = *(int *)(*(int *)((int)pvVar1 + iVar7 * 4) + 0x194) +
              *(int *)((int)pvVar2 + iVar7 * 4) * 8;
    piVar6 = (int *)((int)pvVar2 + iVar7 * 4);
    *piVar6 = *piVar6 + 1;
    iVar8 = local_3c;
    if (*(int *)(*(int *)((int)pvVar1 + iVar7 * 4) + 0xf0) <= *(int *)((int)pvVar2 + iVar7 * 4)) {
      FUN_00451c10(iVar7,1);
      FUN_00451c10(iVar7,1);
    }
  }
  DAT_007edad0 = DAT_007edad0 + 1;
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_006bf840(pvVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005c8440();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

