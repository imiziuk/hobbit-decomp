
void FUN_0052fd90(uint param_1,uint param_2)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 local_15c [160];
  uint local_bc;
  int local_b8;
  undefined4 local_3c [10];
  uint local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8622;
  local_c = ExceptionList;
  iVar3 = (int)(param_2 - param_1) / 0xa8;
  uVar5 = param_1;
  uVar4 = param_2;
  ppvVar1 = &local_c;
  if (iVar3 < 0x11) {
    if (param_1 != param_2) {
      ExceptionList = &local_c;
      for (uVar5 = param_1 + 0xa8; uVar5 != param_2; uVar5 = uVar5 + 0xa8) {
        FUN_00530bb0();
        local_4 = 0;
        if ((*(int *)(param_1 + 0xa4) < local_b8) ||
           ((*(int *)(param_1 + 0xa4) <= local_b8 && (*(uint *)(param_1 + 0xa0) < local_bc)))) {
          FUN_00530170();
          FUN_00530c10();
        }
        else {
          FUN_00530bb0();
          FUN_005304a0();
        }
        local_4 = 0xffffffff;
        FUN_00530c40();
      }
    }
  }
  else {
    while (ExceptionList = ppvVar1, 0x10 < iVar3) {
      FUN_00530bb0();
      local_4 = 1;
      FUN_00530bb0();
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_00530bb0(uVar5);
      local_4 = 0xffffffff;
      FUN_005307b0(local_15c);
      local_4 = 3;
      uVar6 = uVar5;
      uVar9 = uVar4;
      while( true ) {
        for (; (local_b8 <= *(int *)(uVar6 + 0xa4) &&
               ((local_b8 < *(int *)(uVar6 + 0xa4) || (local_bc < *(uint *)(uVar6 + 0xa0)))));
            uVar6 = uVar6 + 0xa8) {
        }
        do {
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 - 0xa8;
          } while (*(int *)(uVar8 - 4) < local_b8);
        } while ((*(int *)(uVar8 - 4) <= local_b8) && (*(uint *)(uVar8 - 8) < local_bc));
        if (uVar9 <= uVar6) break;
        FUN_00530990();
        uVar6 = uVar6 + 0xa8;
      }
      local_4 = 0xffffffff;
      FUN_00530c40();
      if ((int)(uVar6 - uVar5) / 0xa8 < (int)(uVar4 - uVar6) / 0xa8) {
        FUN_00530210();
      }
      else {
        FUN_00530210();
        uVar4 = uVar6;
        uVar6 = uVar5;
      }
      iVar3 = (int)(uVar4 - uVar6) / 0xa8;
      uVar5 = uVar6;
      ppvVar1 = (void **)ExceptionList;
    }
    param_1 = param_1 + 0xa80;
    FUN_00530570();
    for (; param_1 != param_2; param_1 = param_1 + 0xa8) {
      FUN_00530bb0();
      local_4 = 4;
      iVar3 = param_1 + 0x2c;
      uVar5 = param_1;
      while( true ) {
        if ((local_10 < *(int *)(iVar3 + -0x30)) ||
           ((local_10 <= *(int *)(iVar3 + -0x30) && (local_14 <= *(uint *)(iVar3 + -0x34))))) break;
        FUN_0064a320();
        FUN_0064b7f0();
        puVar7 = (undefined4 *)(iVar3 + -0x5c);
        puVar10 = (undefined4 *)(uVar5 + 0x78);
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar5 = iVar3 - 0xd4;
        iVar3 = iVar3 + -0xa8;
      }
      FUN_0064a320();
      FUN_0064b7f0();
      puVar7 = local_3c;
      puVar10 = (undefined4 *)(uVar5 + 0x78);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      local_4 = 5;
      FUN_0064b190();
      local_4 = 0xffffffff;
      FUN_00649ba0();
    }
  }
  ExceptionList = local_c;
  return;
}

