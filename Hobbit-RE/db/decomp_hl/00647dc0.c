
void FUN_00647dc0(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_0074c278;
  }
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  do {
    cVar2 = *param_2;
    *param_1 = cVar2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (cVar2 != '\0');
  return;
}

