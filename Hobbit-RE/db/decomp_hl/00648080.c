
void FUN_00648080(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_0074c278;
  }
  bVar2 = *param_1;
  while (bVar2 != 0) {
    *param_1 = (&DAT_0074c290)[bVar2];
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *pbVar1;
  }
  return;
}

