
void FUN_005712d0(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 5;
    FUN_00647d10(iVar1,s_CameraMgr_0073fa54);
    *(undefined4 *)(iVar1 + 0x84) = 0x17;
    *(undefined4 *)(iVar1 + 0x100) = 0;
  }
  FUN_00401f00(0x800000,0x800000,0x800000);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_CameraMgr_ChaseOffset_0073fa3c);
    *(undefined4 *)(iVar1 + 0x80) = 8;
    *(undefined4 *)(iVar1 + 0xc0) = local_c;
    *(undefined4 *)(iVar1 + 0xc4) = local_8;
    *(undefined4 *)(iVar1 + 200) = local_4;
    *(undefined4 *)(iVar1 + 0xcc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0xd0) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0xd4) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 1;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_CameraMgr_ChaseOffset_0073fa3c);
    FUN_00647dc0(iVar1,&DAT_00724e78);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_c;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 0x10;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_CameraMgr_ChaseOffset_0073fa3c);
    FUN_00647dc0(iVar1,&DAT_00724e74);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_8;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 0x10;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_CameraMgr_ChaseOffset_0073fa3c);
    FUN_00647dc0(iVar1,&DAT_00724e70);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0xf8) = local_4;
    *(undefined4 *)(iVar1 + 0x84) = 0x10;
  }
  return;
}

