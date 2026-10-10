
void FUN_006908b9(ushort *param_1)

{
  byte *in_EAX;
  
  *param_1 = (ushort)(((uint)(in_EAX[2] >> 3) << 6 | (uint)(in_EAX[1] >> 2)) << 5) |
             (ushort)(*in_EAX >> 3);
  return;
}

