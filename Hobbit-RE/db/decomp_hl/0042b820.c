
void FUN_0042b820(undefined4 param_1,undefined4 *param_2)

{
  int extraout_EDX;
  
  FUN_0042b120(param_1);
  if (0x9d < extraout_EDX) {
    *param_2 = 0;
    return;
  }
  if (0x93 < extraout_EDX) {
    *param_2 = 2;
    return;
  }
  if (0x8a < extraout_EDX) {
    *param_2 = 1;
    return;
  }
  if (0x7f < extraout_EDX) {
    *param_2 = 4;
    return;
  }
  if (0x5a < extraout_EDX) {
    *param_2 = 3;
  }
  return;
}

