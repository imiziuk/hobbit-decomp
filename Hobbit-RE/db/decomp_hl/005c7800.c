
void FUN_005c7800(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return;
}

