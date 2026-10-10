
void FUN_004ce710(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_004c3f80(param_1);
  FUN_00401f00(0x800000,0x800000,0x800000);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Offset_Scaling_0072d5a4);
    *(undefined4 *)(iVar1 + 0x80) = 8;
    *(undefined4 *)(iVar1 + 0xc0) = uStack_18;
    *(undefined4 *)(iVar1 + 0xc4) = uStack_14;
    *(undefined4 *)(iVar1 + 200) = uStack_10;
    *(undefined4 *)(iVar1 + 0xcc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0xd0) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0xd4) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 3;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Offset_Scaling_0072d5a4);
    FUN_00647dc0(iVar1,&DAT_00724e78);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_18;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Offset_Scaling_0072d5a4);
    FUN_00647dc0(iVar1,&DAT_00724e74);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_14;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Offset_Scaling_0072d5a4);
    FUN_00647dc0(iVar1,&DAT_00724e70);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_10;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
  }
  uStack_18 = 0x7f7fffff;
  uStack_14 = 0x7f7fffff;
  uStack_10 = 0x7f7fffff;
  FUN_00401f00(0x800000,0x800000,0x800000);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Center_0072d570);
    *(undefined4 *)(iVar1 + 0x80) = 8;
    FUN_004357e0(&uStack_c);
    FUN_004357e0(&uStack_18);
    *(undefined4 *)(iVar1 + 0x84) = 3;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Center_0072d570);
    FUN_00647dc0(iVar1,&DAT_00724e78);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_c;
    *(undefined4 *)(iVar1 + 0xfc) = uStack_18;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Center_0072d570);
    FUN_00647dc0(iVar1,&DAT_00724e74);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_8;
    *(undefined4 *)(iVar1 + 0xfc) = uStack_14;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Center_0072d570);
    FUN_00647dc0(iVar1,&DAT_00724e70);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_4;
    *(undefined4 *)(iVar1 + 0xfc) = uStack_10;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
  }
  FUN_00537ff0(param_1,s_Anim_Speed_0072d598,2,0x800000,0x7f7fffff);
  return;
}

