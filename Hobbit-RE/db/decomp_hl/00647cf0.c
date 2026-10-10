
char * FUN_00647cf0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_0074c278;
    pcVar2 = param_1;
  }
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return param_1 + (-1 - (int)pcVar2);
}

