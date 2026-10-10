
void __fastcall FUN_0047f530(int param_1)

{
  int *piVar1;
  undefined4 auStack_10 [2];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_0064e870(6,s_CINEMA__Starting_animated_instan_00728720);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (piVar1 != (int *)0x0) {
    if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
      if ((*(byte *)((int)piVar1 + 0x126) & 1) != 0) {
        FUN_004d22c0(0);
        *(byte *)((int)piVar1 + 0x15b) = *(byte *)((int)piVar1 + 0x15b) & 0xbf;
        return;
      }
    }
    else {
      if ((*(byte *)((int)piVar1 + 0x126) & 1) != 0) {
        FUN_004d22c0(0);
      }
      *(ushort *)((int)piVar1 + 0x15a) = *(ushort *)((int)piVar1 + 0x15a) & 0xbfff ^ 0x4000;
      if (*(int *)(param_1 + 0x4c) != 0) {
        FUN_004c6f40(*(undefined4 *)(param_1 + 0x28));
        FUN_004c77d0((*(int *)(param_1 + 0x54) << 0x1e) >> 0x1f);
        return;
      }
      uStack_8 = 0;
      uStack_4 = 0;
      auStack_10[0] = 0xe;
      (**(code **)(*piVar1 + 0xa8))(auStack_10);
    }
  }
  return;
}

