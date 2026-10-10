
void __thiscall FUN_00489a90(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xd;
    FUN_00647d10(iVar1,s_FX_Resource_00729380);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = DAT_0075ce8c;
    *(undefined **)(iVar1 + 0x100) = &DAT_0075ce84;
  }
  uStack_c = 0x7f7fffff;
  uStack_8 = 0x7f7fffff;
  uStack_4 = 0x7f7fffff;
  FUN_00401f00(0x800000,0x800000,0x800000);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_FX_Scale_00729374);
    *(undefined4 *)(iVar1 + 0x80) = 8;
    *(undefined4 *)(iVar1 + 0xc0) = uStack_18;
    *(undefined4 *)(iVar1 + 0xc4) = uStack_14;
    *(undefined4 *)(iVar1 + 200) = uStack_10;
    FUN_004357e0(&uStack_c);
    *(undefined4 *)(iVar1 + 0x84) = 3;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_FX_Scale_00729374);
    FUN_00647dc0(iVar1,&DAT_00724e78);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_18;
    *(undefined4 *)(iVar1 + 0xfc) = uStack_c;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_FX_Scale_00729374);
    FUN_00647dc0(iVar1,&DAT_00724e74);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_14;
    *(undefined4 *)(iVar1 + 0xfc) = uStack_8;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_FX_Scale_00729374);
    FUN_00647dc0(iVar1,&DAT_00724e70);
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = uStack_10;
    *(undefined4 *)(iVar1 + 0xfc) = uStack_4;
    *(undefined4 *)(iVar1 + 0x84) = 0x12;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 2;
      FUN_00647d10(iVar1,s_FX_Playback_Rate_00729360);
      *(undefined4 *)(iVar1 + 0x84) = 2;
      *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
      *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 3;
        FUN_00647d10(iVar1,s_FX_Start_On_Init_0072934c);
        *(undefined4 *)(iVar1 + 0x84) = 2;
      }
    }
  }
  FUN_0048b8e0(param_2,s_FX_Color_00729340,2);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xf;
    FUN_00647d10(iVar1,s_Host_Object_00729334);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0x100) = 0;
    *(undefined4 *)(iVar1 + 0x104) = 1;
  }
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xd;
    FUN_00647d10(iVar1,s_Host_Part_Name_00729324);
    *(undefined4 *)(iVar1 + 0x84) = 0x82;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(param_1 + 0x168);
    *(int *)(iVar1 + 0x100) = param_1 + 0x160;
  }
  FUN_004ab4e0(param_2);
  return;
}

