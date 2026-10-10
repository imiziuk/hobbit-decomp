
void FUN_006a8620(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7db3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_006480e0(param_1);
  if (iVar1 == 0) {
    FUN_0064b1c0();
  }
  else if (*(short *)(param_1 + -2 + iVar1 * 2) == 10) {
    uVar2 = FUN_0064b0a0(iVar1,param_1);
    local_4 = 0;
    FUN_0064b7f0(uVar2);
    local_4 = 0xffffffff;
    FUN_0064b190();
  }
  else {
    uVar2 = FUN_0064b0a0(iVar1,param_1);
    local_4 = 1;
    FUN_0064b7f0(uVar2);
    local_4 = 0xffffffff;
    FUN_0064b190();
    FUN_0064bc30(10);
  }
  ExceptionList = local_c;
  return;
}

