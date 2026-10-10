
void __thiscall FUN_005af820(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x130);
  *(uint *)(param_1 + 0x130) = uVar1 | 0x40;
  *(int *)(param_1 + 0x134) = param_2;
  if (param_2 == 1) {
    *(uint *)(param_1 + 0x130) = uVar1 | 0x240;
    if (0 < *(int *)(param_1 + 0x118)) {
      *(undefined4 *)(param_1 + 300) = **(undefined4 **)(param_1 + 0x11c);
    }
    iVar2 = FUN_00567b20(2);
    *(undefined4 *)(iVar2 + 0xc) = 1;
    *(undefined4 *)(iVar2 + 0x54) = 0x44268000;
    if (*(int *)(param_1 + 0x124) == 0) {
      FUN_006bf840(*(undefined4 *)(param_1 + 0x11c));
      *(undefined4 *)(param_1 + 0x11c) = 0;
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    *(undefined4 *)(param_1 + 0x118) = 0;
    FUN_005af9f0(iVar2);
  }
  return;
}

