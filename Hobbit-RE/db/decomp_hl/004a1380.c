
void __thiscall FUN_004a1380(int param_1,undefined4 param_2,int param_3)

{
  FUN_005af820(param_2);
  if ((*(uint *)(param_1 + 0x268) & 0x20000) == 0) {
    FUN_004a6630(1);
  }
  else {
    FUN_004a57e0();
  }
  if (param_3 != 0) {
    *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) & 0xfffffffe;
  }
  *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + 1;
  return;
}

