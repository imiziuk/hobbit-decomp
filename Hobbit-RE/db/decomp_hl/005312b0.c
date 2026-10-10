
int __thiscall FUN_005312b0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_4c;
  int *local_48;
  int local_40;
  int local_3c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649b60(param_2);
  iVar4 = FUN_00531e50();
  iVar6 = 0;
  param_2 = param_3;
  if (-1 < iVar4) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + iVar4 * 4);
    iVar2 = *(int *)(**(int **)(iVar1 + 0x68) + 0x48);
    iVar1 = *(int *)(iVar1 + 100);
    local_4c = 0;
    iVar7 = 99;
    local_3c = 0;
    local_40 = 0;
    FUN_006499d0();
    iVar5 = 0;
    local_4 = 0;
    param_2 = iVar2;
    iVar3 = local_4c;
    if (0 < iVar1) {
      local_48 = *(int **)(*(int *)(*(int *)(param_1 + 0xc0) + iVar4 * 4) + 0x68);
      do {
        param_2 = *(int *)(*local_48 + 0x48);
        iVar3 = iVar5;
        if (param_3 == param_2) break;
        if (iVar6 < param_2) {
          iVar6 = param_2;
          local_3c = iVar5;
        }
        if (param_2 < iVar7) {
          iVar7 = param_2;
          local_40 = iVar5;
        }
        iVar5 = iVar5 + 1;
        local_48 = local_48 + 1;
        param_2 = iVar2;
        iVar3 = local_4c;
      } while (iVar5 < iVar1);
    }
    local_4c = iVar3;
    if (param_2 != param_3) {
      if (iVar7 < param_3) {
        if (iVar6 <= param_3) {
          local_4c = local_3c;
          param_2 = iVar6;
        }
      }
      else {
        local_4c = local_40;
        param_2 = iVar7;
      }
    }
    if ((*(int *)(param_1 + 0x60) != local_4c) || (*(int *)(param_1 + 0x2c) != iVar4)) {
      *(undefined4 *)(param_1 + 0x1d8) = param_4;
      FUN_0064a320();
      FUN_005323f0();
    }
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  ExceptionList = local_c;
  return param_2;
}

