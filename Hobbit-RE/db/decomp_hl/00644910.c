
undefined4 __fastcall FUN_00644910(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = param_1[2];
LAB_00644917:
  do {
    if (*param_1 <= iVar3) {
      return 1;
    }
    if (param_1[0x15d] == 0) {
      cVar2 = *(char *)(param_1[1] + param_1[2]);
    }
    else if ((iVar3 < param_1[0x15e]) || (param_1[0x15f] < iVar3)) {
      cVar2 = FUN_006436b0(iVar3);
    }
    else {
      cVar2 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar3);
    }
    if (cVar2 < '!') {
      if (*param_1 <= iVar3) {
        return 1;
      }
      do {
        if (param_1[0x15d] == 0) {
          cVar2 = *(char *)(param_1[1] + param_1[2]);
        }
        else if ((iVar3 < param_1[0x15e]) || (param_1[0x15f] < iVar3)) {
          cVar2 = FUN_006436b0(iVar3);
        }
        else {
          cVar2 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar3);
        }
        if (' ' < cVar2) break;
        if (param_1[0x15d] == 0) {
          cVar2 = *(char *)(param_1[1] + param_1[2]);
        }
        else if ((iVar3 < param_1[0x15e]) || (param_1[0x15f] < iVar3)) {
          cVar2 = FUN_006436b0(iVar3);
        }
        else {
          cVar2 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar3);
        }
        if (cVar2 == '\n') {
          return 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *param_1);
      goto LAB_00644917;
    }
    if (param_1[0x15d] == 0) {
      cVar2 = *(char *)(param_1[1] + param_1[2]);
    }
    else if ((iVar3 < param_1[0x15e]) || (param_1[0x15f] < iVar3)) {
      cVar2 = FUN_006436b0(iVar3);
    }
    else {
      cVar2 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar3);
    }
    if (cVar2 != '/') {
LAB_00644b29:
      if (param_1[0x15d] == 0) {
        cVar2 = *(char *)(param_1[1] + param_1[2]);
      }
      else if ((iVar3 < param_1[0x15e]) || (param_1[0x15f] < iVar3)) {
        cVar2 = FUN_006436b0(iVar3);
      }
      else {
        cVar2 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar3);
      }
      if (cVar2 == '/') {
        iVar1 = iVar3 + 1;
        if (param_1[0x15d] == 0) {
          cVar2 = *(char *)(param_1[1] + param_1[2]);
        }
        else if ((iVar1 < param_1[0x15e]) || (param_1[0x15f] < iVar1)) {
          cVar2 = FUN_006436b0(iVar1);
        }
        else {
          cVar2 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar1);
        }
        if (cVar2 == '*') {
          iVar3 = iVar3 + 2;
          if (iVar3 <= *param_1 + -1) {
            do {
              cVar2 = FUN_00644c10(iVar3);
              if ((cVar2 == '*') && (cVar2 = FUN_00644c10(iVar3 + 1), cVar2 == '/')) {
                iVar3 = iVar3 + 2;
                break;
              }
              cVar2 = FUN_00644c10(iVar3);
              if (cVar2 == '\n') {
                return 1;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 <= *param_1 + -1);
          }
          goto LAB_00644917;
        }
      }
      return 0;
    }
    iVar1 = iVar3 + 1;
    if (param_1[0x15d] == 0) {
      cVar2 = *(char *)(param_1[1] + param_1[2]);
    }
    else if ((iVar1 < param_1[0x15e]) || (param_1[0x15f] < iVar1)) {
      cVar2 = FUN_006436b0(iVar1);
    }
    else {
      cVar2 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar1);
    }
    if (cVar2 != '/') goto LAB_00644b29;
    iVar3 = iVar3 + 2;
    while( true ) {
      if (param_1[0x15d] == 0) {
        cVar2 = *(char *)(param_1[1] + param_1[2]);
      }
      else if ((iVar3 < param_1[0x15e]) || (param_1[0x15f] < iVar3)) {
        cVar2 = FUN_006436b0(iVar3);
      }
      else {
        cVar2 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar3);
      }
      if ((cVar2 == '\n') || (*param_1 <= iVar3)) break;
      iVar3 = iVar3 + 1;
    }
    if (param_1[0x15d] == 0) {
      cVar2 = *(char *)(param_1[1] + param_1[2]);
    }
    else if ((iVar3 < param_1[0x15e]) || (param_1[0x15f] < iVar3)) {
      cVar2 = FUN_006436b0(iVar3);
    }
    else {
      cVar2 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar3);
    }
    if (cVar2 == '\n') {
      return 1;
    }
  } while( true );
}

