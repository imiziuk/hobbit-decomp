
void __thiscall FUN_0040fba0(int param_1,float param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    *(float *)(param_1 + 0x2c) = param_2 + *(float *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar1 = FUN_0040f0e0();
      if (iVar1 != 0) {
        iVar1 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
        FUN_004c7660(0);
        FUN_004c74d0(0x3f800000);
        FUN_004c77d0(0);
        *(ushort *)(iVar1 + 0x15a) = *(ushort *)(iVar1 + 0x15a) & 0xbfff ^ 0x4000;
        FUN_0040f1b0(0);
        *(undefined4 *)(param_1 + 0x28) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
    if (*(int *)(param_1 + 0x28) == 1) {
      iVar1 = FUN_0040f100();
      if (iVar1 != 0) {
        FUN_0040f1d0(1);
        *(undefined4 *)(param_1 + 0x28) = 2;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
    if (*(int *)(param_1 + 0x28) == 2) {
      iVar1 = FUN_0040f1f0();
      if (iVar1 != 0) {
        FUN_0040f250(2,2);
        FUN_0040f360();
        *(undefined4 *)(param_1 + 0x28) = 3;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0xac) = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        *(undefined4 *)(param_1 + 0xb4) = 0;
        *(undefined4 *)(param_1 + 0xb8) = 0;
        *(undefined4 *)(param_1 + 0xbc) = 0;
        *(undefined4 *)(param_1 + 0xc0) = 0;
        *(undefined4 *)(param_1 + 0xc4) = 0;
        *(undefined4 *)(param_1 + 200) = 0;
        *(undefined4 *)(param_1 + 0xcc) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 0;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        FUN_0064cc30();
        FUN_0064cc00();
      }
    }
    if (*(int *)(param_1 + 0x28) == 3) {
      FUN_0040f1b0(0);
      FUN_0040ff00(param_2);
      iVar1 = FUN_0040f3a0();
      if (iVar1 != 0) {
        FUN_0040f380();
        FUN_0040f1d0(0);
        FUN_0056b6b0(1);
        *(undefined4 *)(param_1 + 0x28) = 4;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
    if (*(int *)(param_1 + 0x28) == 4) {
      iVar1 = FUN_0040f220();
      if (iVar1 != 0) {
        FUN_0040f150();
        iVar1 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
        FUN_004c75f0(1);
        *(ushort *)(iVar1 + 0x15a) = *(ushort *)(iVar1 + 0x15a) & 0xbfff ^ 0x4000;
        FUN_004c74d0(0xbf800000);
        *(undefined4 *)(param_1 + 0x28) = 5;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
    if (*(int *)(param_1 + 0x28) == 5) {
      iVar1 = FUN_0040f100();
      if (iVar1 != 0) {
        FUN_0040f1b0(1);
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
  }
  return;
}

