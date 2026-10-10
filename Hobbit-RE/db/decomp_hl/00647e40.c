
void FUN_00647e40(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_0074c278;
  }
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_0074c278;
  }
  cVar2 = *param_1;
  if (cVar2 == *param_2) {
    do {
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = param_1[1];
      pcVar1 = param_2 + 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (cVar2 == *pcVar1);
  }
  return;
}

