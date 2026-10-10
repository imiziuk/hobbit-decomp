
void __fastcall FUN_006a1990(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_48c [1152];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e771b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_0065fce0(0);
  FUN_006714b0(uVar2);
  iVar4 = *(int *)(param_1 + 0xbc);
  iVar3 = *(int *)(param_1 + 0xb8) * 0x10;
  puVar1 = (undefined4 *)(iVar4 + -0x10 + iVar3);
  local_4 = 0;
  FUN_00671580(*puVar1,*(undefined4 *)(iVar4 + -0xc + iVar3),*(undefined4 *)(iVar4 + -8 + iVar3),
               puVar1[3]);
  FUN_0065f960(local_48c,0);
  FUN_0065fc10(0);
  iVar4 = *(int *)(param_1 + 0xb8) + -1;
  iVar3 = (*(int *)(param_1 + 0xb8) - iVar4) + -1;
  if (0 < iVar3) {
    iVar4 = iVar4 * 0x10;
    do {
      puVar1 = (undefined4 *)(iVar4 + 0x10 + *(int *)(param_1 + 0xbc));
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0xbc) + iVar4);
      *puVar5 = *puVar1;
      puVar5[1] = puVar1[1];
      puVar5[2] = puVar1[2];
      iVar4 = iVar4 + 0x10;
      iVar3 = iVar3 + -1;
      puVar5[3] = puVar1[3];
    } while (iVar3 != 0);
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
  local_4 = 0xffffffff;
  FUN_00671570();
  ExceptionList = local_c;
  return;
}

