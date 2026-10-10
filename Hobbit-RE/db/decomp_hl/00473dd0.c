
int __fastcall FUN_00473dd0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d162b;
  local_c = ExceptionList;
  local_18 = *(int *)(param_1 + 8);
  if (local_18 + 1 <= *(int *)(param_1 + 0x10)) goto LAB_00473f17;
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
      goto LAB_00473e44;
    }
    local_18 = 1;
  }
  else {
LAB_00473e44:
    local_18 = local_18 + iVar1;
  }
  ExceptionList = &local_c;
  piVar2 = (int *)operator_new(local_18 * 0x3c + 4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    local_14 = (int *)0x0;
  }
  else {
    local_14 = piVar2 + 1;
    *piVar2 = local_18;
    FUN_006c043b(local_14,0x3c,local_18,FUN_00474180,thunk_FUN_00649ba0);
  }
  local_4 = 0xffffffff;
  if (0 < *(int *)(param_1 + 8)) {
    piVar2 = local_14 + 0xc;
    do {
      iVar1 = (int)piVar2 + *(int *)(param_1 + 0xc) + (-0x30 - (int)local_14);
      FUN_0064a320(iVar1);
      piVar2[-1] = *(int *)(iVar1 + 0x2c);
      *piVar2 = *(int *)(iVar1 + 0x30);
      piVar2[1] = *(int *)(iVar1 + 0x34);
      piVar2[2] = *(int *)(iVar1 + 0x38);
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 0xf;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_006c026a(iVar1,0x3c,*(undefined4 *)(iVar1 + -4),thunk_FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  *(int *)(param_1 + 0x10) = local_18;
  *(int **)(param_1 + 0xc) = local_14;
LAB_00473f17:
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  ExceptionList = local_c;
  return iVar1 * 0x3c + -0x3c + *(int *)(param_1 + 0xc);
}

