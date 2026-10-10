
void __fastcall FUN_0058ecb0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006dcd88;
  pvStack_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &pvStack_c;
  FUN_0058ed90();
  if (*(int *)(param_1 + 0xb0) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0x94) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x8c));
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  thunk_FUN_0063c930();
  if (*(int *)(param_1 + 0x5c) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x40) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x24) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x1c));
  }
  ExceptionList = pvStack_c;
  return;
}

