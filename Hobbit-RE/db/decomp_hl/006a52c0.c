
int __fastcall FUN_006a52c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int local_18;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e79eb;
  local_c = ExceptionList;
  local_18 = *(int *)(param_1 + 8);
  if (local_18 + 1 <= *(int *)(param_1 + 0x10)) goto LAB_006a5415;
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
      goto LAB_006a5334;
    }
    local_18 = 1;
  }
  else {
LAB_006a5334:
    local_18 = local_18 + iVar1;
  }
  ExceptionList = &local_c;
  piVar2 = (int *)operator_new(local_18 * 0x58 + 4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    local_14 = (int *)0x0;
  }
  else {
    local_14 = piVar2 + 1;
    *piVar2 = local_18;
    FUN_006c043b(local_14,0x58,local_18,FUN_006a5440,&LAB_006a5450);
  }
  local_4 = 0xffffffff;
  if (0 < *(int *)(param_1 + 8)) {
    puVar6 = (undefined1 *)((int)local_14 + 0x56);
    do {
      puVar5 = (undefined4 *)(puVar6 + *(int *)(param_1 + 0xc) + (-0x56 - (int)local_14));
      *(undefined4 *)(puVar6 + -0x56) = *puVar5;
      FUN_0064b7f0(puVar5 + 1);
      *(undefined4 *)(puVar6 + -6) = puVar5[0x14];
      puVar6[1] = *(undefined1 *)((int)puVar5 + 0x57);
      *puVar6 = *(undefined1 *)((int)puVar5 + 0x56);
      puVar6[-1] = *(undefined1 *)((int)puVar5 + 0x55);
      puVar6[-2] = *(undefined1 *)(puVar5 + 0x15);
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 0x58;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_006c026a(iVar1,0x58,*(undefined4 *)(iVar1 + -4),&LAB_006a5450);
    FUN_006bf840(iVar1 + -4);
  }
  *(int *)(param_1 + 0x10) = local_18;
  *(int **)(param_1 + 0xc) = local_14;
LAB_006a5415:
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  ExceptionList = local_c;
  return iVar1 * 0x58 + -0x58 + *(int *)(param_1 + 0xc);
}

