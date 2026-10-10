
void __fastcall FUN_005b6ab0(int param_1)

{
  undefined4 *puVar1;
  void **ppvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006debd1;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 2;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x10) + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = iVar3 + 1;
      ppvVar2 = (void **)ExceptionList;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  ExceptionList = ppvVar2;
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_005b7050();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00649ba0();
  if (*(int *)(param_1 + 0x34) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x18) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x10));
  }
  ExceptionList = local_c;
  return;
}

