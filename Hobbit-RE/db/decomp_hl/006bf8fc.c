
void FUN_006bf8fc(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_006c27f8();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_0054a060(0);
  sVar1 = _strlen("string too long");
  FUN_0054a250("string too long",sVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_006bf956(unaff_EBP + -0x20);
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_006fd438;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_0071a610);
}

