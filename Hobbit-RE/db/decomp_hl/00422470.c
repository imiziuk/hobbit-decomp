
char __fastcall FUN_00422470(int param_1)

{
  if (*(int *)(param_1 + 0x3b0) != 0) {
    return '\x03';
  }
  if (*(int *)(param_1 + 0x3c0) != 0) {
    return '\0';
  }
  return (*(int *)(param_1 + 0x3d0) == 0) + '\x01';
}

