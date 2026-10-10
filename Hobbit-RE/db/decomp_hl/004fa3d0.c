
void __thiscall FUN_004fa3d0(int param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  
  *(int **)(param_1 + 0x5c) = param_2;
  if (param_2 != (int *)0x0) {
    if ((char)param_2[7] == '\0') {
      sVar1 = *(short *)((int)param_2 + 0x16);
    }
    else {
      sVar1 = *(short *)(*param_2 + 6);
    }
    if ((char)param_2[7] == '\0') {
      sVar2 = (short)param_2[5];
    }
    else {
      sVar2 = *(short *)(*param_2 + 4);
    }
    *(float *)(param_1 + 0x34) = (float)(int)sVar2;
    *(float *)(param_1 + 0x38) = (float)(int)sVar1;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x40);
  }
  return;
}

