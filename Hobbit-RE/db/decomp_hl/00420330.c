
void __fastcall FUN_00420330(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x5958) = 0;
  *(undefined4 *)(param_1 + 0x595c) = 0;
  if (*(int *)(param_1 + 0xa8) != 0 || *(int *)(param_1 + 0xac) != 0) {
    iVar1 = FUN_004021c0(*(int *)(param_1 + 0xa8),*(int *)(param_1 + 0xac));
    if (((iVar1 != 0) && (*(char *)(iVar1 + 0x7c) == '\x05')) &&
       ((*(byte *)(iVar1 + 0x15a) & 8) != 0)) {
      *(undefined4 *)(param_1 + 0x5958) = *(undefined4 *)(param_1 + 0xa8);
      *(undefined4 *)(param_1 + 0x595c) = *(undefined4 *)(param_1 + 0xac);
    }
  }
  iVar1 = *(int *)(param_1 + 0x5960);
  *(undefined4 *)(param_1 + 0x5960) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x1b4) =
       *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x1b0);
  if (*(int *)(param_1 + 0xa8) != 0 || *(int *)(param_1 + 0xac) != 0) {
    iVar2 = FUN_004021c0(*(int *)(param_1 + 0xa8),*(int *)(param_1 + 0xac));
    if (iVar2 != 0) {
      if (*(char *)(iVar2 + 0x7c) == '\x05') {
        iVar3 = FUN_004ac4d0();
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x5960) = 1;
          *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x1b4) = 0x42c80000;
        }
      }
      if (*(char *)(iVar2 + 0x7c) == '\x06') {
        iVar2 = FUN_004ac4d0();
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x5960) = 1;
          *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x1b4) = 0x42c80000;
        }
      }
    }
  }
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x5960) == 0)) && (*(int *)(param_1 + 0x8d4) == 5)) {
    *(undefined4 *)(param_1 + 0x5960) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x1b4) = 0x42c80000;
  }
  return;
}

