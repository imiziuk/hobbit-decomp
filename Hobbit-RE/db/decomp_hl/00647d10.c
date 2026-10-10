
void FUN_00647d10(char *param_1,char *param_2)

{
  char cVar1;
  
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_0074c278;
  }
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}

