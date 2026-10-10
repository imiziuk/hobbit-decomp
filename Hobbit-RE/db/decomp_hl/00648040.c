
char * FUN_00648040(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (param_1 != (char *)0x0) {
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    while (pcVar2 = pcVar2 + -1, pcVar2 != param_1) {
      if (*pcVar2 == param_2) {
        return pcVar2;
      }
    }
    if (*pcVar2 == param_2) {
      return pcVar2;
    }
  }
  return (char *)0x0;
}

