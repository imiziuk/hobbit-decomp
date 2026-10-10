
void FUN_004c0a40(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d46c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0();
  local_4 = 0;
  FUN_00406b70(0xff000000);
  uVar1 = FUN_00401f00(0x3f800000,0x3f800000,0x3f800000);
  uVar2 = FUN_00401f00(0,0,0);
  uVar1 = FUN_004ace90(uVar2,uVar1);
  uVar2 = FUN_00401f00(0x3f800000,0x3f800000,0x3f800000);
  uVar3 = FUN_00401f00(0,0,0);
  uVar4 = FUN_00401f00(0,0,0);
  FUN_004c08b0(uVar4,uVar3,uVar2,uVar1);
  FUN_004d0b40();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

