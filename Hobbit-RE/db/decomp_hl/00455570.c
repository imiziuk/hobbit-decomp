
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00455570(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x100) = 0x3f000000;
  uVar1 = FUN_005310a0();
  if ((*(int *)(param_1 + 0x128) == 0) || (*(int *)(param_1 + 0x120) == 0)) {
    *(undefined4 *)(param_1 + 0x128) = 1;
    FUN_00452eb0();
    if ((*(int *)(param_1 + 0x1b8) == 2) || (_DAT_006e9360 < *(float *)(param_1 + 0x2b8))) {
      FUN_00647ed0(uVar1,*(undefined4 *)(param_1 + 0x224));
    }
    if (*(int *)(param_1 + 0x2ac) == 0) {
      FUN_00453740(param_1 + 0x224,*(undefined4 *)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 0x2b0)
                   ,*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x2b8));
    }
    else if (*(int *)(param_1 + 0x2ac) == 6) {
      FUN_00453630(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x2b8),
                   *(undefined4 *)(param_1 + 0x2c8));
      return;
    }
  }
  return;
}

