
void FUN_00553af0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  undefined4 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9bc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_material_mgr__GetSortedIndicesBy_0073d408);
  iVar4 = 0;
  iVar3 = 0;
  local_4 = 0;
  local_20 = 0;
  if (0 < param_1) {
    local_1c = param_3;
    param_2 = param_3 + param_1 + -1;
    do {
      iVar2 = FUN_00558c40();
      if (iVar2 == 0) {
        *local_1c = *(undefined4 *)(iVar1 + iVar4 * 4);
        local_1c = local_1c + 1;
        local_20 = local_20 + 1;
      }
      else {
        *param_2 = *(undefined4 *)(iVar1 + iVar4 * 4);
        param_2 = param_2 + -1;
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1);
    if (1 < local_20) {
      FUN_00647700(param_3,local_20,4,&LAB_00553a20);
    }
  }
  if (1 < iVar3) {
    FUN_00647700(param_3 + (param_1 - iVar3),iVar3,4,&LAB_00553a20);
  }
  iVar3 = 0;
  if (0 < param_1) {
    do {
      iVar4 = 0;
      do {
        if (param_3[iVar3] == *(int *)(iVar1 + iVar4 * 4)) {
          param_3[iVar3] = iVar4;
          *(undefined4 *)(iVar1 + iVar4 * 4) = 0xffffffff;
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

