
void __thiscall
FUN_00650e90(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_9 == -1) {
    param_9 = param_3;
  }
  FUN_00650380();
  *param_1 = param_6;
  param_1[1] = param_8;
  if (param_10 == 0) {
    param_1[2] = *(int *)(&DAT_006f6cf0 + param_2 * 0x7c) * param_3 * param_4 >> 3;
  }
  else {
    uVar3 = param_10 * 8 + 0x27U & 0xffffffe0;
    if (-1 < param_10) {
      param_6 = param_10 + 1;
      iVar1 = param_3;
      iVar2 = param_4;
      do {
        uVar3 = uVar3 + (*(int *)(&DAT_006f6cf0 + param_2 * 0x7c) * iVar2 * iVar1 >> 3);
        iVar1 = iVar1 / 2;
        iVar2 = iVar2 / 2;
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
    param_1[2] = uVar3;
  }
  *(undefined2 *)((int)param_1 + 0x16) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 6) = (undefined2)param_9;
  *(char *)(param_1 + 7) = (char)param_10;
  param_1[3] = 0;
  *(short *)(param_1 + 5) = (short)param_3;
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 1;
  *(char *)((int)param_1 + 0x1d) = (char)param_2;
  if (param_5 != 0) {
    *(undefined2 *)((int)param_1 + 0x1a) = 3;
  }
  if ((param_8 != 0) &&
     (param_1[3] = (1 << ((byte)*(undefined4 *)(&DAT_006f6cf0 + param_2 * 0x7c) & 0x1f)) *
                   *(int *)(&DAT_006f6cf4 + param_2 * 0x7c) >> 3, param_7 != 0)) {
    *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) | 4;
  }
  return;
}

