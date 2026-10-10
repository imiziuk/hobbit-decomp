
void FUN_006bfb82(void)

{
  exception *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_006c27f8();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_006fd458;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0054a060(1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}

