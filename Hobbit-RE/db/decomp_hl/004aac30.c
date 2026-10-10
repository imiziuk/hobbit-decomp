
uint __fastcall FUN_004aac30(int param_1)

{
  uint in_EAX;
  
  if (*(byte *)(param_1 + 0x7e) != 0) {
    in_EAX = 0;
    do {
      if (((uint)*(byte *)(param_1 + 0x7e) & 1 << ((byte)in_EAX & 0x1f)) != 0) {
        return in_EAX;
      }
      in_EAX = in_EAX + 1;
    } while ((int)in_EAX < 8);
  }
  return in_EAX & 0xffffff00;
}

