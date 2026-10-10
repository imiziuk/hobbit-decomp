
void FUN_006c6a6b(void)

{
  if ((DAT_00815d90 == 1) || ((DAT_00815d90 == 0 && (DAT_00757e78 == 1)))) {
    FUN_006c6aa4(0xfc);
    if (DAT_00815f18 != (code *)0x0) {
      (*DAT_00815f18)();
    }
    FUN_006c6aa4(0xff);
  }
  return;
}

