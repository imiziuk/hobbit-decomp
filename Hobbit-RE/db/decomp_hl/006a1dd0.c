
int __fastcall FUN_006a1dd0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e775b;
  local_c = ExceptionList;
  local_18 = *(int *)(param_1 + 8);
  if (local_18 + 1 <= *(int *)(param_1 + 0x10)) goto LAB_006a1eff;
  iVar1 = *(int *)(param_1 + 0x18);
  iVar4 = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10) / 2;
    iVar3 = 1;
    if (0 < iVar1) {
      iVar3 = iVar1;
    }
    if (0 < local_18 + iVar3) {
      if (iVar1 < 1) {
        iVar1 = 1;
      }
      goto LAB_006a1e44;
    }
    local_18 = 1;
  }
  else {
LAB_006a1e44:
    local_18 = local_18 + iVar1;
  }
  ExceptionList = &local_c;
  piVar2 = (int *)operator_new(local_18 * 0x30 + 4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    local_14 = (int *)0x0;
  }
  else {
    local_14 = piVar2 + 1;
    *piVar2 = local_18;
    FUN_006c043b(local_14,0x30,local_18,FUN_00474180,thunk_FUN_00649ba0);
  }
  local_4 = 0xffffffff;
  local_10 = 0;
  piVar2 = local_14;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(param_1 + 0xc) + iVar4;
      FUN_0064a320(iVar1);
      piVar2[0xb] = *(int *)(iVar1 + 0x2c);
      local_10 = local_10 + 1;
      iVar4 = iVar4 + 0x30;
      piVar2 = piVar2 + 0xc;
    } while (local_10 < *(int *)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_006c026a(iVar1,0x30,*(undefined4 *)(iVar1 + -4),thunk_FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  *(int *)(param_1 + 0x10) = local_18;
  *(int **)(param_1 + 0xc) = local_14;
LAB_006a1eff:
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  ExceptionList = local_c;
  return iVar1 * 0x30 + -0x30 + *(int *)(param_1 + 0xc);
}

