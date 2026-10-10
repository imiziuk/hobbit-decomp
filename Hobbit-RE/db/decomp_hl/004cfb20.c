
void FUN_004cfb20(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_004c3f80(param_1);
  uStack_18 = 0x7f7fffff;
  uStack_14 = 0x7f7fffff;
  uStack_10 = 0x7f7fffff;
  FUN_00401f00(0x800000,0x800000,0x800000);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Position0_0072d650);
    *(undefined4 *)(iVar1 + 0x80) = 8;
    FUN_004357e0(&uStack_c);
    FUN_004357e0(&uStack_18);
    *(undefined4 *)(iVar1 + 0x84) = 3;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Position0_0072d650);
    FUN_00647dc0(iVar1,&DAT_00724e78);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_c;
    *(undefined4 *)(iVar1 + 0xfc) = uStack_18;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Position0_0072d650);
    FUN_00647dc0(iVar1,&DAT_00724e74);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_8;
    *(undefined4 *)(iVar1 + 0xfc) = uStack_14;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Position0_0072d650);
    FUN_00647dc0(iVar1,&DAT_00724e70);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_4;
    *(undefined4 *)(iVar1 + 0xfc) = uStack_10;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 10;
      FUN_00647d10(iVar1,&DAT_0072d63c);
      *(undefined4 *)(iVar1 + 0x84) = 2;
      *(undefined4 *)(iVar1 + 0xf8) = 0;
      *(undefined4 *)(iVar1 + 0xfc) = 0x40c90fdb;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 10;
        FUN_00647d10(iVar1,s_Pitch0_0072d61c);
        *(undefined4 *)(iVar1 + 0x84) = 2;
        *(undefined4 *)(iVar1 + 0xf8) = 0;
        *(undefined4 *)(iVar1 + 0xfc) = 0x40c90fdb;
      }
    }
  }
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(param_1,s_Position1_0072d644,2);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 10;
    FUN_00647d10(iVar1,&DAT_0072d634);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = 0;
    *(undefined4 *)(iVar1 + 0xfc) = 0x40c90fdb;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 10;
      FUN_00647d10(iVar1,s_Pitch1_0072d614);
      *(undefined4 *)(iVar1 + 0x84) = 2;
      *(undefined4 *)(iVar1 + 0xf8) = 0;
      *(undefined4 *)(iVar1 + 0xfc) = 0x40c90fdb;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 2;
        FUN_00647d10(iVar1,&DAT_00729908);
        *(undefined4 *)(iVar1 + 0x84) = 2;
        *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
        *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
      }
    }
  }
  FUN_005669e0(param_1,s_Yaw_Increasing_0072d684,2);
  FUN_005669e0(param_1,s_Pitch_Increasing_0072d670,2);
  return;
}

