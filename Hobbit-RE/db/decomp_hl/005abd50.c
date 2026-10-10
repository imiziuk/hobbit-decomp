
void FUN_005abd50(void)

{
  int iVar1;
  
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 5;
    FUN_00647d10(iVar1,s_Senses_Tweaks_00744b10);
    *(undefined4 *)(iVar1 + 0x84) = 0x17;
    *(undefined4 *)(iVar1 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10(iVar1,s_Senses_Tweaks_Do_Line_of_Sight_00744af0);
      *(undefined4 *)(iVar1 + 0x84) = 2;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 2;
        FUN_00647d10(iVar1,s_Senses_Tweaks_Sight_Range_Purple_00744acc);
        *(undefined4 *)(iVar1 + 0x84) = 2;
        *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
        *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
        if (DAT_0075d338 == 0) {
          iVar1 = FUN_00425010();
          *(undefined4 *)(iVar1 + 0x80) = 2;
          FUN_00647d10(iVar1,s_Senses_Tweaks_Hearing_Range_Yell_00744aa8);
          *(undefined4 *)(iVar1 + 0x84) = 2;
          *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
          *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
          if (DAT_0075d338 == 0) {
            iVar1 = FUN_00425010();
            *(undefined4 *)(iVar1 + 0x80) = 2;
            FUN_00647d10(iVar1,s_Senses_Tweaks_Loud_Hearing_Range_00744a80);
            *(undefined4 *)(iVar1 + 0x84) = 2;
            *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
            *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
            if (DAT_0075d338 == 0) {
              iVar1 = FUN_00425010();
              *(undefined4 *)(iVar1 + 0x80) = 2;
              FUN_00647d10(iVar1,s_Senses_Tweaks_Smell_Range_Aqua__00744a60);
              *(undefined4 *)(iVar1 + 0x84) = 2;
              *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
              *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
            }
          }
        }
      }
    }
  }
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_Senses_Tweaks_ClearSenses_00744a44);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  return;
}

