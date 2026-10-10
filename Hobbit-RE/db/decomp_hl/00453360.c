
void __fastcall FUN_00453360(int param_1)

{
  int iVar1;
  
  FUN_0064a2e0(s_NONE_SELECTED_00724fdc);
  FUN_0064a2e0(s_NO_MUSIC_LEVEL_FILE_00724fc8);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x248) = 1;
  *(undefined4 *)(param_1 + 0x24c) = 3;
  *(undefined4 *)(param_1 + 0x254) = 0x442f0000;
  *(undefined4 *)(param_1 + 0x25c) = 0x43fa0000;
  *(undefined4 *)(param_1 + 600) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x264) = 1;
  *(undefined4 *)(param_1 + 0x250) = 1;
  *(undefined4 *)(param_1 + 0x268) = 5;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0x41700000;
  *(undefined4 *)(param_1 + 0x274) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x278) = 0x40800000;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0x43c80000;
  *(undefined4 *)(param_1 + 0x27c) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  FUN_0064a2e0(&DAT_00720670);
  *(undefined4 *)(param_1 + 0x2b8) = 0x41200000;
  *(undefined4 *)(param_1 + 0x2c0) = 0x41200000;
  *(undefined4 *)(param_1 + 700) = 0x42480000;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0x3f800000;
  if (DAT_0075c9c0 == 0) {
    if (DAT_0075c9b8 != 0) {
      iVar1 = DAT_0075c9b8 + -4;
      FUN_006c026a(DAT_0075c9b8,0x2c,*(undefined4 *)(DAT_0075c9b8 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1);
    }
    DAT_0075c9b8 = 0;
    DAT_0075c9bc = 0;
  }
  DAT_0075c9b4 = 0;
  return;
}

