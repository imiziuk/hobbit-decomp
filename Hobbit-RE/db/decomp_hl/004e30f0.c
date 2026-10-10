
void FUN_004e30f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 3;
    FUN_00647d10(iVar1,s_Using_Only_BBox_0072e90c);
    *(undefined4 *)(iVar1 + 0x84) = 8;
  }
  local_c = 0x7f7fffff;
  local_8 = 0x7f7fffff;
  local_4 = 0x7f7fffff;
  FUN_00401f00(0x800000,0x800000,0x800000);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Half_Dimensions_0072e8fc);
    *(undefined4 *)(iVar1 + 0x80) = 8;
    *(undefined4 *)(iVar1 + 0xc0) = local_18;
    *(undefined4 *)(iVar1 + 0xc4) = local_14;
    *(undefined4 *)(iVar1 + 200) = local_10;
    FUN_004357e0(&local_c);
    *(undefined4 *)(iVar1 + 0x84) = 9;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Half_Dimensions_0072e8fc);
    FUN_00647dc0(iVar1,&DAT_00724e78);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_18;
    *(undefined4 *)(iVar1 + 0xfc) = local_c;
    *(undefined4 *)(iVar1 + 0x84) = 0x18;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Half_Dimensions_0072e8fc);
    FUN_00647dc0(iVar1,&DAT_00724e74);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_14;
    *(undefined4 *)(iVar1 + 0xfc) = local_8;
    *(undefined4 *)(iVar1 + 0x84) = 0x18;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Half_Dimensions_0072e8fc);
    FUN_00647dc0(iVar1,&DAT_00724e70);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_10;
    *(undefined4 *)(iVar1 + 0xfc) = local_4;
    *(undefined4 *)(iVar1 + 0x84) = 0x18;
  }
  FUN_004ab4e0(param_1);
  iVar1 = FUN_00572cd0();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xd;
    FUN_00647d10(iVar2,&DAT_0072e8c4);
    *(undefined4 *)(iVar2 + 0x84) = 0x82;
    *(undefined4 *)(iVar2 + 0xf0) = 0;
    *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(iVar1 + 8);
    *(int *)(iVar2 + 0x100) = iVar1;
  }
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(param_1,s_Dimensions_0072e8f0,0x12);
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(param_1,s_Scale_00725a04,0x18);
  return;
}

