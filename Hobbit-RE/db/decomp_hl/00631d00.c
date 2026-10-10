
void __fastcall FUN_00631d00(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5488;
  local_c = ExceptionList;
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 0:
    ExceptionList = &local_c;
    break;
  default:
    ExceptionList = &local_c;
    break;
  case 5:
    ExceptionList = &local_c;
    FUN_005af120();
    lVar4 = FUN_00467700();
    if (lVar4 != 0) {
      *(int *)(param_1 + 0x70) = (int)*(short *)(param_1 + 0x42);
      uVar2 = FUN_005af960();
      *(undefined4 *)(param_1 + 0x74) = uVar2;
    }
    if (((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) &&
       (iVar3 = FUN_005af220(), iVar3 != 0)) {
      FUN_005ac560();
      local_4 = 0;
      FUN_0064a320();
      local_4 = 0xffffffff;
      FUN_00649ba0();
      iVar3 = FUN_005af160();
      if ((iVar3 != 0) && (iVar3 = FUN_005af160(), iVar3 != 0)) {
        FUN_00649b60(&DAT_007cc7a4);
        FUN_005bed00();
      }
    }
    break;
  case 6:
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x130);
    goto joined_r0x00631e29;
  case 7:
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x130);
joined_r0x00631e29:
    ExceptionList = &local_c;
    if ((bVar1 & 1) == 0) {
      ExceptionList = &local_c;
    }
  }
  FUN_005be370();
  ExceptionList = local_c;
  return;
}

