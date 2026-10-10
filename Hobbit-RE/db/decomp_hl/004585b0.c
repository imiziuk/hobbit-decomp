
float10 __fastcall FUN_004585b0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 0:
  case 1:
    return (float10)*(float *)(param_1 + 0xac);
  case 2:
    return (float10)*(float *)(param_1 + 0xb4);
  case 3:
    return (float10)*(float *)(param_1 + 0xb0);
  case 4:
    return (float10)*(float *)(param_1 + 0xb8);
  default:
    return (float10)DAT_006e92e4;
  }
}

