
void __fastcall FUN_005af8c0(int param_1)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0x130) & 0x300) != 0) {
    if (*(int *)(param_1 + 300) != 0) {
      if (*(int *)(param_1 + 0x124) == 0) {
        FUN_006bf840(*(undefined4 *)(param_1 + 0x11c));
        *(undefined4 *)(param_1 + 0x11c) = 0;
        *(undefined4 *)(param_1 + 0x120) = 0;
      }
      *(undefined4 *)(param_1 + 0x118) = 0;
      FUN_005af9f0(*(undefined4 *)(param_1 + 300));
      uVar1 = *(uint *)(param_1 + 0x130);
      *(undefined4 *)(param_1 + 300) = 0;
      *(uint *)(param_1 + 0x130) = uVar1 | 8;
      *(uint *)(param_1 + 0x130) = uVar1 & 0xfffffcbf | 8;
      return;
    }
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 1;
  }
  *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffcbf;
  return;
}

