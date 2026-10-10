
void FUN_0066f780(byte *param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_1;
  if (param_2 == '\0') {
    bVar2 = bVar1 & 0xfe;
  }
  else {
    bVar2 = bVar1 | 1;
  }
  *param_1 = bVar2;
  if (((bVar2 ^ bVar1) & 1) != 0) {
    DAT_007f23a4 = 1;
  }
  return;
}

