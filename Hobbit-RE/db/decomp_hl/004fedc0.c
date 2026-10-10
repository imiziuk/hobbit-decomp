
void FUN_004fedc0(void)

{
  FUN_004f8fb0();
  FUN_00429100();
  FUN_00502cf0();
  FUN_00473380(0);
  if (DAT_0075fc00 != (int *)0x0) {
    (**(code **)(*DAT_0075fc00 + 0xc))();
    FUN_00419ff0(DAT_0075fc00);
    DAT_0075fc00 = (int *)0x0;
  }
  FUN_00429100();
  FUN_0058eb00();
  FUN_004fbf00();
  FUN_004f7350();
  FUN_004f20c0();
  FUN_004fe2a0();
  if (DAT_0076034c != 0) {
    FUN_004fe050();
  }
  FUN_00525db0();
  FUN_00436d00();
  FUN_00572800();
  FUN_004fce90(&DAT_0075b6e0);
  FUN_00662b90();
  FUN_00675fa0(&DAT_0075f968);
  return;
}

