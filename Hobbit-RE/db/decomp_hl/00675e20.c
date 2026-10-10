
void FUN_00675e20(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (*param_2 != '.') goto LAB_00675e31;
  do {
    param_2 = param_2 + 1;
LAB_00675e31:
    cVar2 = *param_2;
  } while ((cVar2 == '\\') || (pcVar1 = param_1, cVar2 == '/'));
  while (pcVar4 = pcVar1, cVar2 != '\0') {
    if ((cVar2 == '\\') || (cVar2 == '/')) {
      *pcVar1 = '\\';
      cVar2 = param_2[1];
      pcVar4 = pcVar1 + 1;
      if (cVar2 == '\0') break;
      while ((pcVar3 = param_2 + 1, cVar2 == '\\' || (cVar2 == '/'))) {
        cVar2 = param_2[2];
        param_2 = pcVar3;
        if (cVar2 == '\0') {
          *pcVar4 = '\0';
          FUN_00648080(param_1);
          return;
        }
      }
    }
    else {
      *pcVar1 = cVar2;
      pcVar3 = param_2 + 1;
    }
    param_2 = pcVar3;
    pcVar1 = pcVar1 + 1;
    cVar2 = *pcVar3;
  }
  *pcVar4 = '\0';
  FUN_00648080(param_1);
  return;
}

