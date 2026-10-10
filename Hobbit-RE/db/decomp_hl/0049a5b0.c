
void FUN_0049a5b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d34e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004ab4e0(param_1);
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_4 = 0;
  local_34 = 0x7f7fffff;
  local_30 = 0x7f7fffff;
  local_2c = 0x7f7fffff;
  FUN_00401f00(0x800000,0x800000,0x800000);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Scale_00725a04);
    *(undefined4 *)(iVar1 + 0x80) = 8;
    *(undefined4 *)(iVar1 + 0xc0) = local_40;
    *(undefined4 *)(iVar1 + 0xc4) = local_3c;
    *(undefined4 *)(iVar1 + 200) = local_38;
    FUN_004357e0(&local_34);
    *(undefined4 *)(iVar1 + 0x84) = 3;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Scale_00725a04);
    FUN_00647dc0(iVar1,&DAT_00724e78);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_40;
    *(undefined4 *)(iVar1 + 0xfc) = local_34;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Scale_00725a04);
    FUN_00647dc0(iVar1,&DAT_00724e74);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_3c;
    *(undefined4 *)(iVar1 + 0xfc) = local_30;
    *(undefined4 *)(iVar1 + 0x84) = 0x16;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Scale_00725a04);
    FUN_00647dc0(iVar1,&DAT_00724e70);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = local_38;
    *(undefined4 *)(iVar1 + 0xfc) = local_2c;
    *(undefined4 *)(iVar1 + 0x84) = 0x16;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar3 = 0;
    do {
      iVar2 = FUN_00647e40(*(int *)(param_1 + 0xc) + iVar3,s_Position_Z_00728be8);
      iVar1 = iVar1 + 1;
      if (iVar2 == 0) {
        FUN_0049ab20(iVar1,&local_28);
        break;
      }
      iVar3 = iVar3 + 0x108;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 4;
    FUN_00647d10(iVar1,&DAT_00729f78);
    *(undefined4 *)(iVar1 + 0x84) = 2;
  }
  if (local_14 != 2) {
    FUN_006bf840(local_1c);
  }
  ExceptionList = local_c;
  return;
}

