
void __thiscall FUN_0054e500(int param_1,int param_2,uint param_3,uint param_4)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = (param_3 ^ param_4) * -0xfb & 0xfff;
  *(undefined2 *)(*(int *)(param_1 + 0x28c0) + 0xe + param_2 * 0x14) =
       *(undefined2 *)(param_1 + uVar2 * 2);
  *(undefined2 *)(*(int *)(param_1 + 0x28c0) + 0x10 + param_2 * 0x14) = 0xffff;
  sVar1 = *(short *)(param_1 + uVar2 * 2);
  if (sVar1 != -1) {
    *(short *)(*(int *)(param_1 + 0x28c0) + 0x10 + sVar1 * 0x14) = (short)param_2;
  }
  *(short *)(param_1 + uVar2 * 2) = (short)param_2;
  return;
}

