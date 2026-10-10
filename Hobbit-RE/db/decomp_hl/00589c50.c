
void __fastcall FUN_00589c50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00648600(param_1[2],0,*param_1 * 0x68);
  iVar1 = 0;
  param_1[1] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  if (0 < *param_1) {
    iVar2 = 0;
    do {
      *(short *)(param_1[2] + 0x48 + iVar2) = (short)iVar1 + 1;
      *(short *)(param_1[2] + 0x4a + iVar2) = (short)iVar1 + -1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x68;
    } while (iVar1 < *param_1);
  }
  *(undefined2 *)(*param_1 * 0x68 + -0x20 + param_1[2]) = 0xffff;
  *(undefined2 *)(param_1[2] + 0x4a) = 0xffff;
  return;
}

