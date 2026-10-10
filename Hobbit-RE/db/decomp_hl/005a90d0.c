
uint __thiscall FUN_005a90d0(int param_1,undefined4 param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dde88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_occluder_mgr__IsBBoxOccludedWith_00744844);
  if ((*(int *)(param_1 + 0x8888) == 0) || (*(int *)(param_1 + 0x8844) == 0)) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = *(byte *)((int)param_3 + 1) - 1;
  bVar1 = false;
  local_1c = 0;
  if (iVar2 < 0) {
    if ((((int)*param_3 < 0) &&
        (iVar2 = (*param_3 & 0xff) * 0x1b4 + param_1, *(int *)(iVar2 + 0x1a8) != 0)) &&
       (iVar3 = FUN_005a8f30(iVar2,param_2), iVar3 != 0)) {
      *(int *)(iVar2 + 0x1a4) = *(int *)(iVar2 + 0x1a4) + 1;
      local_1c = 1;
      *(int *)(param_1 + 0x89e0) = *(int *)(param_1 + 0x89e0) + 1;
      goto LAB_005a9163;
    }
    uVar4 = 0;
    if (0 < *(int *)(param_1 + 0x8888)) {
      piVar5 = (int *)(param_1 + 0x888c);
      do {
        iVar3 = *piVar5 * 0x1b4 + param_1;
        iVar2 = FUN_005a8f30(iVar3,param_2);
        if (iVar2 != 0) {
          *(int *)(iVar3 + 0x1a4) = *(int *)(iVar3 + 0x1a4) + 1;
          local_1c = 1;
          *param_3 = uVar4 | 0x80000000;
          break;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 1;
      } while ((int)uVar4 < *(int *)(param_1 + 0x8888));
    }
    if (uVar4 == *(uint *)(param_1 + 0x8888)) {
      *param_3 = *(int *)(&DAT_00744778 + *(int *)(param_1 + 0x89cc) * 4) << 8;
      *(uint *)(param_1 + 0x89cc) = *(int *)(param_1 + 0x89cc) + 1U & 0xf;
    }
    if (local_1c != 0) {
      *(int *)(param_1 + 0x89e0) = *(int *)(param_1 + 0x89e0) + 1;
      goto LAB_005a9163;
    }
  }
  else {
    *param_3 = *param_3 & 0xffff00ff | iVar2 * 0x100;
    bVar1 = true;
  }
  *(int *)(param_1 + 0x89e4) = *(int *)(param_1 + 0x89e4) + 1;
  if (bVar1) {
    *(int *)(param_1 + 0x89e8) = *(int *)(param_1 + 0x89e8) + 1;
  }
LAB_005a9163:
  if (DAT_007b1b70 != 0) {
    local_1c = local_1c ^ 1;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return local_1c;
}

