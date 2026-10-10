
void FUN_0063d1a0(undefined1 *param_1)

{
  undefined4 local_4;
  
  FUN_0063cd60(&local_4,0x20);
  param_1[1] = (char)((uint)local_4 >> 8);
  param_1[3] = (char)((uint)local_4 >> 0x18);
  param_1[2] = (char)((uint)local_4 >> 0x10);
  *param_1 = (char)local_4;
  return;
}

