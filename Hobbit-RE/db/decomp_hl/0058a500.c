
void __thiscall FUN_0058a500(int param_1,uint param_2)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  
  FUN_00649600(s_sdbase__FreeCell_00741f34);
  iVar4 = 0;
  if ((short)param_2 != -1) {
    iVar4 = (param_2 & 0x1ff) * 0x1c + *(int *)(param_1 + ((param_2 & 0xffff) >> 9) * 4);
  }
  sVar3 = *(short *)(iVar4 + 0x10);
  *(undefined4 *)(iVar4 + 0x12) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x16) = 0xffffffff;
  *(undefined2 *)(iVar4 + 0xe) = 0xffff;
  *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + -1;
  piVar1 = (int *)(sVar3 * 0xfb8 + 0x41c + param_1);
  *piVar1 = *piVar1 + -1;
  uVar5 = (uint)(((*(short *)(iVar4 + 8) * 0x400 + (int)*(short *)(iVar4 + 10)) * 0x400 +
                 (int)*(short *)(iVar4 + 0xc)) * 0x400) % 0x7d1;
  uVar2 = *(ushort *)(iVar4 + 4);
  if (uVar2 != 0xffff) {
    *(undefined2 *)((uVar2 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar2 >> 9) * 4) + 6) =
         *(undefined2 *)(iVar4 + 6);
  }
  uVar2 = *(ushort *)(iVar4 + 6);
  if (uVar2 != 0xffff) {
    *(undefined2 *)((uVar2 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar2 >> 9) * 4) + 4) =
         *(undefined2 *)(iVar4 + 4);
  }
  if (*(ushort *)((int)piVar1 + uVar5 * 2 + 0x14) == param_2) {
    *(undefined2 *)((int)piVar1 + uVar5 * 2 + 0x14) = *(undefined2 *)(iVar4 + 4);
  }
  *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(param_1 + 0x208);
  *(short *)(param_1 + 0x208) = (short)param_2;
  FUN_00649720();
  return;
}

