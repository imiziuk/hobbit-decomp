
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041e230(int param_1)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  if ((DAT_00777238 != 5) && (DAT_00777238 != 7)) {
    uStack_10 = 0x428c0000;
    if (DAT_00777238 != 1) {
      uStack_10 = 0x42480000;
    }
    FUN_005784a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    uStack_c = *(undefined4 *)(param_1 + 0x14);
    fStack_8 = *(float *)(param_1 + 0x18) + _DAT_006e998c;
    uStack_4 = *(undefined4 *)(param_1 + 0x1c);
    FUN_005799d0(&uStack_c,uStack_10,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0);
    uStack_c = *(undefined4 *)(param_1 + 0x14);
    fStack_8 = *(float *)(param_1 + 0x18) + _DAT_006e9988;
    uStack_4 = *(undefined4 *)(param_1 + 0x1c);
    FUN_005799d0(&uStack_c,uStack_10,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0);
    uStack_c = *(undefined4 *)(param_1 + 0x14);
    fStack_8 = *(float *)(param_1 + 0x18) + _DAT_006e9984;
    uStack_4 = *(undefined4 *)(param_1 + 0x1c);
    FUN_005799d0(&uStack_c,uStack_10,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0);
    FUN_005785b0();
    return;
  }
  FUN_005784a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  FUN_00579ce0(param_1 + 0x44,0,0,0);
  FUN_005785b0();
  return;
}

