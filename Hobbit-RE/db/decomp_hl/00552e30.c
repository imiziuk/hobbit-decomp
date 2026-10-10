
void __fastcall FUN_00552e30(int param_1)

{
  undefined4 local_4;
  
  local_4 = 0x3f800000;
  if (*(int *)(param_1 + 0x84) == 0) {
    local_4 = 0;
  }
  FUN_0063d930(*(undefined4 *)(param_1 + 0x58));
  FUN_0063d930(*(byte *)(param_1 + 0x54) & 1);
  FUN_0063cee0(*(undefined4 *)(param_1 + 0x14));
  FUN_0063cee0(local_4);
  FUN_0063cee0(*(undefined4 *)(param_1 + 0xa4));
  return;
}

