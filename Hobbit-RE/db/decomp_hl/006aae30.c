
int __thiscall FUN_006aae30(int param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e80fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_string_mgr__LoadTable_007560e4);
  local_4 = 0;
  FUN_006501d0(s_string_mgr__LoadTable_007560fc);
  local_4 = CONCAT31(local_4._1_3_,1);
  pvVar1 = operator_new(0x10);
  if (pvVar1 == (void *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = FUN_006aa8c0();
  }
  uVar3 = param_3;
  iVar2 = FUN_006aa910(param_2,param_3);
  if (iVar2 == 0) {
    if (local_1c != 0) {
      FUN_006aa8d0();
      FUN_006bf840(local_1c);
    }
  }
  else {
    FUN_00649920(&param_3,s____________s_Loaded_00756114,uVar3);
    local_4._0_1_ = 2;
    uVar3 = FUN_00649940();
    FUN_0064e870(7,uVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00649950();
    iVar6 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0x10) < iVar6 + 1) {
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar4 = *(int *)(param_1 + 0x10) / 2;
        iVar5 = 1;
        if (0 < iVar4) {
          iVar5 = iVar4;
        }
        if (iVar5 + iVar6 < 1) {
          iVar6 = 1;
        }
        else {
          if (iVar4 < 1) {
            iVar4 = 1;
          }
          iVar6 = iVar6 + iVar4;
        }
      }
      else {
        iVar6 = *(int *)(param_1 + 0x18) + iVar6;
      }
      pvVar1 = operator_new(iVar6 * 4);
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          *(undefined4 *)((int)pvVar1 + iVar5 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar5 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
      *(int *)(param_1 + 0x10) = iVar6;
      *(void **)(param_1 + 0xc) = pvVar1;
    }
    *(int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 4) = local_1c;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_006501e0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return iVar2;
}

