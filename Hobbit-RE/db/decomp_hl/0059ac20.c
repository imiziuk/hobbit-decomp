
void FUN_0059ac20(void)

{
  int iVar1;
  int iVar2;
  
  FUN_0059aa70();
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 5;
    FUN_00647d10(iVar1,s_PhysicalControl_0074330c);
    *(undefined4 *)(iVar1 + 0x84) = 0x17;
    *(undefined4 *)(iVar1 + 0x100) = 0;
  }
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 0xd;
  FUN_00647d10(iVar1,s_PhysicalControl_Initial_Idle_Ani_007432e8);
  *(undefined4 *)(iVar1 + 0x84) = 0x20;
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0xf4) = DAT_00798554;
  *(undefined **)(iVar1 + 0x100) = &DAT_0079854c;
  if (DAT_00798540 == 0) {
    iVar1 = FUN_0059aa60();
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 0xd;
      FUN_00647d10(iVar2,s_PhysicalControl_BodyMaskedAnim_007432c8);
      *(undefined4 *)(iVar2 + 0x84) = 2;
      *(undefined4 *)(iVar2 + 0xf0) = 0;
      *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(iVar1 + 8);
      *(int *)(iVar2 + 0x100) = iVar1;
    }
  }
  return;
}

