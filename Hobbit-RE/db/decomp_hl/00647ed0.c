
int FUN_00647ed0(byte *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  
  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_0074c278;
  }
  if (param_2 == (byte *)0x0) {
    param_2 = &DAT_0074c278;
  }
  do {
    bVar1 = *param_2;
    cVar2 = (&DAT_0074c290)[*param_1];
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (cVar2 != (&DAT_0074c290)[bVar1]) break;
  } while (cVar2 != '\0');
  return (int)cVar2 - (int)(char)(&DAT_0074c290)[bVar1];
}

