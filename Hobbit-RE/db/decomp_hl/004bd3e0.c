
void __fastcall FUN_004bd3e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x20;
  do {
    iVar1 = *(int *)(param_1 + 0x2a0);
    iVar2 = iVar2 + -1;
    if (*(int *)(param_1 + 0x2a4) != iVar1) {
      if (iVar1 == 0) {
        FUN_00429100();
      }
      else if (iVar1 == 1) {
        FUN_00429100();
      }
      else if (iVar1 == 2) {
        FUN_00429100();
      }
      *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_1 + 0x2a0);
      iVar1 = *(int *)(param_1 + 0x2a4);
      *(int *)(param_1 + 0x2a0) = iVar1;
      if (iVar1 == 0) {
        FUN_004bd4d0();
      }
      else if (iVar1 == 1) {
        FUN_00429100();
      }
      else if (iVar1 == 2) {
        FUN_004be300();
      }
      *(undefined4 *)(param_1 + 0x2ac) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x2a0);
    *(float *)(param_1 + 0x2ac) = *(float *)(param_1 + 0x2ac) + *(float *)(param_1 + 0x2b0);
    if (iVar1 == 0) {
      FUN_00429100();
    }
    else if (iVar1 == 1) {
      FUN_00429100();
    }
    else if (iVar1 == 2) {
      FUN_004be320();
    }
  } while ((*(int *)(param_1 + 0x2a4) != *(int *)(param_1 + 0x2a0)) && (iVar2 != 0));
  return;
}

