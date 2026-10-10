
/* WARNING: Removing unreachable block (ram,0x004d5fe2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d5bd0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *local_124;
  int local_120;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d51dd;
  local_c = ExceptionList;
  iVar5 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x230) != 0) goto LAB_004d5e14;
  ExceptionList = &local_c;
  FUN_006499d0();
  local_4 = 0;
  FUN_006499d0();
  local_4._0_1_ = 1;
  FUN_0064b130();
  local_4._0_1_ = 2;
  FUN_0064a360();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0064b190();
  FUN_0064a2e0();
  local_4 = 3;
  FUN_0064a360();
  FUN_0064a320();
  local_120 = *(int *)(param_1 + 0x230);
  if (*(int *)(param_1 + 0x238) < local_120 + 1) {
    iVar1 = *(int *)(param_1 + 0x240);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x238) / 2;
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      if (0 < iVar4 + local_120) {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        goto LAB_004d5d21;
      }
      local_120 = 1;
    }
    else {
LAB_004d5d21:
      local_120 = local_120 + iVar1;
    }
    piVar2 = (int *)operator_new(local_120 * 0x78 + 4);
    local_4._0_1_ = 4;
    if (piVar2 == (int *)0x0) {
      local_124 = (int *)0x0;
    }
    else {
      local_124 = piVar2 + 1;
      *piVar2 = local_120;
      FUN_006c043b();
    }
    iVar1 = 0;
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0 < *(int *)(param_1 + 0x230)) {
      do {
        FUN_004d8c10();
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x230));
    }
    if (*(int *)(param_1 + 0x234) != 0) {
      FUN_004d8bb0();
    }
    *(int **)(param_1 + 0x234) = local_124;
    *(int *)(param_1 + 0x238) = local_120;
  }
  FUN_004d8c10();
  *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
  local_4 = 5;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
LAB_004d5e14:
  *(undefined4 *)(param_1 + 0x160) = 1;
  FUN_0053b700();
  if (0 < *(int *)(param_1 + 0x230)) {
    do {
      FUN_00434eb0();
      FUN_004d5ac0();
      FUN_00428790();
      FUN_004286f0();
      FUN_00428740();
      FUN_004357e0();
      FUN_004357e0(param_1 + 0x254);
      FUN_004b3180();
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x230));
  }
  if (*(int *)(param_1 + 0x180) != 0 || *(int *)(param_1 + 0x184) != 0) {
    FUN_0054be30();
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  FUN_00659600();
  FUN_00434d10();
  local_4 = 6;
  puVar3 = (undefined4 *)operator_new(4);
  FUN_006bf840();
  *puVar3 = 0x30;
  FUN_0042a610();
  FUN_0054e3f0();
  local_4 = 0xffffffff;
  FUN_005c8440();
  ExceptionList = local_c;
  return;
}

