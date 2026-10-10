
void FUN_00423ec0(undefined4 param_1)

{
  int iVar1;
  
  FUN_004ab4e0(param_1);
  FUN_00434fc0(param_1);
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_IsRingEquipped_007207c8);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_ForcedVisibility_007207b4);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_m_bUsingSting_007207a4);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_m_bUsingStaff_00720794);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_m_bUsingStone_00720784);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_IsPoisoned_00720778);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 2;
  FUN_00647d10(iVar1,s_PoisonTime_0072076c);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
  *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 2;
  FUN_00647d10(iVar1,s_PoisonDelay_00720760);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
  *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_m_bAttachedToPlatform_00720748);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_LevelReset_0072073c);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  return;
}

