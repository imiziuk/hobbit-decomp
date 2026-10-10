
char * FUN_00647f20(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return param_1;
  }
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    iVar3 = (int)param_1 - (int)param_2;
    pcVar2 = param_2;
joined_r0x00647f4c:
    do {
      if (cVar1 != '\0') {
        if (*pcVar2 == '\0') {
          return param_1;
        }
        if (pcVar2[iVar3] == *pcVar2) {
          cVar1 = pcVar2[iVar3 + 1];
          pcVar2 = pcVar2 + 1;
          goto joined_r0x00647f4c;
        }
      }
      if (*pcVar2 == '\0') {
        return param_1;
      }
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
      iVar3 = iVar3 + 1;
      pcVar2 = param_2;
    } while (cVar1 != '\0');
  }
  return (char *)0x0;
}

