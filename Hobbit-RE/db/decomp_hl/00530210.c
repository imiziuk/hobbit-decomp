
void FUN_00530210(uint param_1,uint param_2)

{
  void **ppvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *local_168;
  undefined1 local_15c [160];
  uint local_bc;
  int local_b8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8667;
  iVar2 = param_2 - param_1;
  ppvVar1 = &local_c;
  local_c = ExceptionList;
  uVar5 = param_1;
  uVar4 = param_2;
  while (ExceptionList = ppvVar1, 0x10 < iVar2 / 0xa8) {
    FUN_00530bb0();
    local_4 = 0;
    FUN_00530bb0();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00530bb0(uVar5);
    local_4 = 0xffffffff;
    FUN_005307b0(local_15c);
    local_168 = (undefined4 *)(uVar5 + 0x78);
    local_4 = 2;
    uVar9 = uVar4;
    uVar7 = uVar5;
    while( true ) {
      for (; (local_b8 <= *(int *)(uVar5 + 0xa4) &&
             ((local_b8 < *(int *)(uVar5 + 0xa4) || (local_bc < *(uint *)(uVar5 + 0xa0)))));
          uVar5 = uVar5 + 0xa8) {
        local_168 = local_168 + 0x2a;
      }
      do {
        do {
          uVar3 = uVar4;
          uVar4 = uVar3 - 0xa8;
        } while (*(int *)(uVar3 - 4) < local_b8);
      } while ((*(int *)(uVar3 - 4) <= local_b8) && (*(uint *)(uVar3 - 8) < local_bc));
      if (uVar4 <= uVar5) break;
      FUN_00530bb0();
      local_4._0_1_ = 4;
      FUN_00530b80();
      puVar6 = (undefined4 *)(uVar3 - 0x30);
      puVar8 = local_168;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_00530c10();
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_00530c40();
      uVar5 = uVar5 + 0xa8;
      local_168 = local_168 + 0x2a;
      uVar9 = param_2;
      uVar7 = param_1;
    }
    local_4 = 3;
    FUN_0064b190();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    if ((int)(uVar5 - uVar7) / 0xa8 < (int)(uVar9 - uVar5) / 0xa8) {
      FUN_00530210();
      uVar7 = uVar5;
      param_1 = uVar5;
    }
    else {
      FUN_00530210();
      uVar9 = uVar5;
      param_2 = uVar5;
    }
    ppvVar1 = (void **)ExceptionList;
    uVar5 = uVar7;
    uVar4 = uVar9;
    iVar2 = uVar9 - uVar7;
  }
  ExceptionList = local_c;
  return;
}

