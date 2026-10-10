
void __fastcall FUN_00643c30(int *param_1)

{
  char cVar1;
  int iVar2;
  
LAB_00643c40:
  do {
    iVar2 = param_1[2];
    if (*param_1 <= iVar2) {
      return;
    }
    if (param_1[0x15d] == 0) {
      cVar1 = *(char *)(iVar2 + param_1[1]);
    }
    else if ((iVar2 < param_1[0x15e]) || (param_1[0x15f] < iVar2)) {
      cVar1 = FUN_006436b0(iVar2);
    }
    else {
      cVar1 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar2);
    }
    if (cVar1 < '!') {
      if (param_1[2] < *param_1) {
        do {
          iVar2 = param_1[2];
          if (param_1[0x15d] == 0) {
            cVar1 = *(char *)(iVar2 + param_1[1]);
          }
          else if ((iVar2 < param_1[0x15e]) || (param_1[0x15f] < iVar2)) {
            cVar1 = FUN_006436b0(iVar2);
          }
          else {
            cVar1 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar2);
          }
          if (' ' < cVar1) break;
          iVar2 = param_1[2];
          if (param_1[0x15d] == 0) {
            cVar1 = *(char *)(iVar2 + param_1[1]);
          }
          else if ((iVar2 < param_1[0x15e]) || (param_1[0x15f] < iVar2)) {
            cVar1 = FUN_006436b0(iVar2);
          }
          else {
            cVar1 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar2);
          }
          if (cVar1 == '\n') {
            param_1[3] = param_1[3] + 1;
          }
          iVar2 = param_1[2];
          param_1[2] = iVar2 + 1;
        } while (iVar2 + 1 < *param_1);
      }
      goto LAB_00643c40;
    }
    iVar2 = param_1[2];
    if (param_1[0x15d] == 0) {
      cVar1 = *(char *)(iVar2 + param_1[1]);
    }
    else if ((iVar2 < param_1[0x15e]) || (param_1[0x15f] < iVar2)) {
      cVar1 = FUN_006436b0(iVar2);
    }
    else {
      cVar1 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar2);
    }
    if (cVar1 == '/') {
      iVar2 = param_1[2] + 1;
      if (param_1[0x15d] == 0) {
        cVar1 = *(char *)(param_1[2] + param_1[1]);
      }
      else if ((iVar2 < param_1[0x15e]) || (param_1[0x15f] < iVar2)) {
        cVar1 = FUN_006436b0(iVar2);
      }
      else {
        cVar1 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar2);
      }
      if (cVar1 != '/') goto LAB_00643e63;
      iVar2 = param_1[2] + 2;
      while( true ) {
        param_1[2] = iVar2;
        if (param_1[0x15d] == 0) {
          cVar1 = *(char *)(iVar2 + param_1[1]);
        }
        else if ((iVar2 < param_1[0x15e]) || (param_1[0x15f] < iVar2)) {
          cVar1 = FUN_006436b0(iVar2);
        }
        else {
          cVar1 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar2);
        }
        if ((cVar1 == '\n') || (*param_1 <= param_1[2])) break;
        iVar2 = param_1[2] + 1;
      }
      iVar2 = param_1[2];
      if (param_1[0x15d] == 0) {
        cVar1 = *(char *)(iVar2 + param_1[1]);
      }
      else if ((iVar2 < param_1[0x15e]) || (param_1[0x15f] < iVar2)) {
        cVar1 = FUN_006436b0(iVar2);
      }
      else {
        cVar1 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar2);
      }
      if (cVar1 == '\n') {
        param_1[3] = param_1[3] + 1;
        param_1[2] = param_1[2] + 1;
      }
    }
    else {
LAB_00643e63:
      iVar2 = param_1[2];
      if (param_1[0x15d] == 0) {
        cVar1 = *(char *)(iVar2 + param_1[1]);
      }
      else if ((iVar2 < param_1[0x15e]) || (param_1[0x15f] < iVar2)) {
        cVar1 = FUN_006436b0(iVar2);
      }
      else {
        cVar1 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar2);
      }
      if (cVar1 != '/') {
        return;
      }
      iVar2 = param_1[2] + 1;
      if (param_1[0x15d] == 0) {
        cVar1 = *(char *)(param_1[2] + param_1[1]);
      }
      else if ((iVar2 < param_1[0x15e]) || (param_1[0x15f] < iVar2)) {
        cVar1 = FUN_006436b0(iVar2);
      }
      else {
        cVar1 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar2);
      }
      if (cVar1 != '*') {
        return;
      }
      iVar2 = param_1[2];
      param_1[2] = iVar2 + 2;
      if (iVar2 + 2 <= *param_1 + -1) {
        do {
          cVar1 = FUN_00644c10(param_1[2]);
          if ((cVar1 == '*') && (cVar1 = FUN_00644c10(param_1[2] + 1), cVar1 == '/')) {
            param_1[2] = param_1[2] + 2;
            break;
          }
          cVar1 = FUN_00644c10(param_1[2]);
          if (cVar1 == '\n') {
            param_1[3] = param_1[3] + 1;
          }
          iVar2 = param_1[2];
          param_1[2] = iVar2 + 1;
        } while (iVar2 + 1 <= *param_1 + -1);
      }
    }
  } while( true );
}

