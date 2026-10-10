
void __fastcall FUN_00524760(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d7af8;
  local_c = ExceptionList;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0042b9b0(6,&local_28);
  iVar3 = 0;
  if (0 < local_20) {
    do {
      uVar4 = 0;
      uVar1 = FUN_0042b100(*(undefined4 *)(local_1c + iVar3 * 4));
      iVar2 = FUN_00670ef0(uVar1,uVar4);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x70))(param_1[0x7c]);
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_20);
  }
  if (local_14 != 2) {
    FUN_006bf840(local_1c);
  }
  ExceptionList = local_c;
  return;
}

