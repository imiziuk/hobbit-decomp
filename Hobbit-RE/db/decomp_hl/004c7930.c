
void __fastcall FUN_004c7930(int param_1)

{
  if (*(char *)(param_1 + 0x7c) == '\x05') {
    if (((*(int *)(param_1 + 0x140) != 0) && (*(int *)(*(int *)(param_1 + 0x140) + 0x88) != 0)) ||
       ((*(byte *)(param_1 + 0x15b) & 1) != 0)) {
      *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xf7;
      return;
    }
    *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) | 8;
  }
  return;
}

