
void FUN_0045b960(undefined4 param_1)

{
  int iVar1;
  
  FUN_004c3f80(param_1);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 2;
    FUN_00647d10(iVar1,s_CollapseDelay_00725ba4);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
  }
  return;
}

