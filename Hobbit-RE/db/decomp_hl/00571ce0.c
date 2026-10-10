
void __fastcall FUN_00571ce0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_18 [4];
  int local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006db729;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  local_14 = param_1;
  if (*(int *)(param_1 + 0x94) != 2) {
    ExceptionList = &local_c;
    FUN_006bf840(*(undefined4 *)(param_1 + 0x8c));
  }
  if ((*(int *)(param_1 + 0x78) != 2) && (iVar1 = *(int *)(param_1 + 0x70), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  local_4 = CONCAT31(local_4._1_3_,2);
  puVar3 = (undefined4 *)FUN_005b8370(local_18);
  FUN_00576c70(local_10,*puVar3,uVar2);
  FUN_006bf840(*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_006bf84b();
  iVar1 = DAT_00772ce8;
  DAT_00772ce4 = DAT_00772ce4 + -1;
  iVar4 = 0;
  if (DAT_00772ce4 == 0) {
    DAT_00772ce8 = 0;
    iVar4 = iVar1;
  }
  FUN_006bf8e7();
  if (iVar4 != 0) {
    FUN_006bf840(iVar4);
  }
  if (*(int *)(param_1 + 0x4c) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x30) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x14) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
  }
  ExceptionList = local_c;
  return;
}

