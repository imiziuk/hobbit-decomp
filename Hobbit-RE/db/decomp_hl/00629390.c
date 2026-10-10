
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00629390(int *param_1)

{
  float10 fVar1;
  
  param_1[0x12] = 0;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  param_1[0x1a] = 1;
  fVar1 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
  param_1[0x1b] = (int)(float)fVar1;
  param_1[0x13] = 1;
  (**(code **)(*param_1 + 0x10))(0x11);
  if (((float)param_1[0x1c] < DAT_006e92e4 != (NAN((float)param_1[0x1c]) || NAN(DAT_006e92e4))) ||
     (_DAT_006e9364 < (float)param_1[0x1c])) {
    param_1[0x1c] = 0x40400000;
  }
  FUN_005be250();
  return;
}

