
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004554a0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x100) = 0x3f000000;
  uVar1 = FUN_005310a0();
  if ((*(int *)(param_1 + 0x128) == 0) || (*(int *)(param_1 + 0x120) == 0)) {
    FUN_00452eb0();
    *(undefined4 *)(param_1 + 0x128) = 1;
    if ((*(int *)(param_1 + 0x1b8) == 2) || (_DAT_006e9360 < *(float *)(param_1 + 0x1c0))) {
      FUN_00647ed0(uVar1,*(undefined4 *)(param_1 + 0x184));
    }
    if (*(int *)(param_1 + 0x1b4) == 0) {
      FUN_00453740(param_1 + 0x184,*(undefined4 *)(param_1 + 0x1bc),*(undefined4 *)(param_1 + 0x1b8)
                   ,*(undefined4 *)(param_1 + 0x1c4),*(undefined4 *)(param_1 + 0x1c0));
    }
    else if (*(int *)(param_1 + 0x1b4) == 6) {
      FUN_00453630(*(undefined4 *)(param_1 + 0x1c4),*(undefined4 *)(param_1 + 0x1c0),
                   *(undefined4 *)(param_1 + 0x2c4));
      return;
    }
  }
  return;
}

