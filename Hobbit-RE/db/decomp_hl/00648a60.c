
void FUN_00648a60(char *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,
                 undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *local_8;
  char *local_4;
  
  local_8 = (char *)0x0;
  local_4 = (char *)0x0;
  iVar2 = FUN_00647cf0(param_1);
  if ((iVar2 < 1) || (param_1[1] != ':')) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      FUN_00647d70(param_2,param_1,2);
      param_2[2] = 0;
    }
    param_1 = param_1 + 2;
  }
  cVar1 = *param_1;
  pcVar3 = param_1;
  if (cVar1 != '\0') {
    do {
      if ((cVar1 == '/') || (cVar1 == '\\')) {
        local_8 = pcVar3 + 1;
      }
      else if (cVar1 == '.') {
        local_4 = pcVar3;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (local_8 != (char *)0x0) {
      if (param_3 != (undefined1 *)0x0) {
        iVar2 = (int)local_8 - (int)param_1;
        if (0xfe < iVar2) {
          iVar2 = 0xff;
        }
        FUN_00647d70(param_3,param_1,iVar2);
        param_3[iVar2] = 0;
      }
      goto LAB_00648b19;
    }
  }
  local_8 = param_1;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
LAB_00648b19:
  if ((local_4 == (char *)0x0) || (local_4 < local_8)) {
    if (param_4 != 0) {
      iVar2 = (int)pcVar3 - (int)local_8;
      if (0xff < iVar2) {
        iVar2 = 0x100;
      }
      FUN_00647d70(param_4,local_8,iVar2);
      *(undefined1 *)(iVar2 + param_4) = 0;
    }
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    if (param_4 != 0) {
      iVar2 = (int)local_4 - (int)local_8;
      if (0xfe < iVar2) {
        iVar2 = 0xff;
      }
      FUN_00647d70(param_4,local_8,iVar2);
      *(undefined1 *)(iVar2 + param_4) = 0;
    }
    if (param_5 != (undefined1 *)0x0) {
      iVar2 = (int)pcVar3 - (int)local_4;
      if (0xfe < iVar2) {
        iVar2 = 0xff;
      }
      FUN_00647d70(param_5,local_4,iVar2);
      param_5[iVar2] = 0;
      return;
    }
  }
  return;
}

