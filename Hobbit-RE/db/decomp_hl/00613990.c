
void __fastcall FUN_00613990(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 400);
  iVar1 = 5;
  do {
    if (-1 < *piVar2) {
      FUN_00659c80(*piVar2,0x3f800000);
    }
    *piVar2 = -1;
    piVar2 = piVar2 + 0x32;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x598)) {
    do {
      FUN_0054be30(*(undefined4 *)(*(int *)(param_1 + 0x59c) + iVar1 * 8),
                   *(undefined4 *)(*(int *)(param_1 + 0x59c) + 4 + iVar1 * 8));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x598));
  }
  if (*(int *)(param_1 + 0x5a4) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x59c));
    *(undefined4 *)(param_1 + 0x59c) = 0;
    *(undefined4 *)(param_1 + 0x5a0) = 0;
  }
  *(undefined4 *)(param_1 + 0x598) = 0;
  return;
}

