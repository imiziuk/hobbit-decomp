
int * __fastcall FUN_006446d0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_00643c30();
  iVar4 = 0;
  if (param_1[2] < *param_1) {
    do {
      iVar5 = 0;
      if (iVar4 == 0x3ff) break;
      iVar1 = param_1[2];
      if (param_1[0x15d] == 0) {
        cVar2 = *(char *)(iVar1 + param_1[1]);
      }
      else if ((iVar1 < param_1[0x15e]) || (param_1[0x15f] < iVar1)) {
        cVar2 = FUN_006436b0(iVar1);
      }
      else {
        cVar2 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar1);
      }
      if (cVar2 < '!') break;
      cVar2 = (char)param_1[0x14];
      while (cVar2 != '\0') {
        iVar1 = param_1[2];
        if (param_1[0x15d] == 0) {
          cVar2 = *(char *)(iVar1 + param_1[1]);
        }
        else if ((iVar1 < param_1[0x15e]) || (param_1[0x15f] < iVar1)) {
          cVar2 = FUN_006436b0(iVar1);
        }
        else {
          cVar2 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar1);
        }
        if (cVar2 == *(char *)((int)param_1 + iVar5 + 0x50)) break;
        iVar1 = iVar5 + 0x51;
        iVar5 = iVar5 + 1;
        cVar2 = *(char *)((int)param_1 + iVar1);
      }
      if (*(char *)((int)param_1 + iVar5 + 0x50) != '\0') break;
      iVar5 = param_1[2];
      if (param_1[0x15d] == 0) {
        uVar3 = *(undefined1 *)(iVar5 + param_1[1]);
      }
      else if ((iVar5 < param_1[0x15e]) || (param_1[0x15f] < iVar5)) {
        uVar3 = FUN_006436b0(iVar5);
      }
      else {
        uVar3 = *(undefined1 *)((param_1[0x160] - param_1[0x15e]) + iVar5);
      }
      *(undefined1 *)(iVar4 + 0x164 + (int)param_1) = uVar3;
      iVar5 = param_1[2];
      iVar4 = iVar4 + 1;
      param_1[2] = iVar5 + 1;
    } while (iVar5 + 1 < *param_1);
  }
  *(undefined1 *)(iVar4 + 0x164 + (int)param_1) = 0;
  param_1[0x58] = 3;
  return param_1 + 0x59;
}

