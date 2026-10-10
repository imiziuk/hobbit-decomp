
int __thiscall FUN_00643f60(int *param_1,int param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  
  if (param_2 != 0) {
    do {
      piVar7 = param_1 + 0x59;
      iVar8 = 0;
      param_2 = param_2 + -1;
      param_1[0x58] = 0;
      *(undefined1 *)(param_1 + 0x15c) = 0x20;
      param_1[0x159] = 0;
      param_1[0x15a] = 0;
      param_1[0x15b] = 0;
      *(undefined1 *)piVar7 = 0;
      FUN_00643c30();
      iVar6 = param_1[2];
      if (iVar6 < *param_1) {
        if (param_1[0x15d] == 0) {
          cVar4 = *(char *)(iVar6 + param_1[1]);
        }
        else if ((iVar6 < param_1[0x15e]) || (param_1[0x15f] < iVar6)) {
          cVar4 = FUN_006436b0(iVar6);
        }
        else {
          cVar4 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar6);
        }
        if ((((cVar4 < '0') || ('9' < cVar4)) && (cVar4 != '-')) && (cVar4 != '+')) {
          iVar6 = param_1[2];
          if (param_1[0x15d] == 0) {
            cVar4 = *(char *)(iVar6 + param_1[1]);
          }
          else if ((iVar6 < param_1[0x15e]) || (param_1[0x15f] < iVar6)) {
            cVar4 = FUN_006436b0(iVar6);
          }
          else {
            cVar4 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar6);
          }
          iVar6 = param_1[2];
          if (cVar4 == '\"') {
            while( true ) {
              iVar6 = iVar6 + 1;
              param_1[2] = iVar6;
              if (param_1[0x15d] == 0) {
                cVar4 = *(char *)(iVar6 + param_1[1]);
              }
              else if ((iVar6 < param_1[0x15e]) || (param_1[0x15f] < iVar6)) {
                cVar4 = FUN_006436b0(iVar6);
              }
              else {
                cVar4 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar6);
              }
              iVar6 = param_1[2];
              if (cVar4 == '\"') break;
              if (param_1[0x15d] == 0) {
                *(undefined1 *)((int)piVar7 + iVar8) = *(undefined1 *)(iVar6 + param_1[1]);
                iVar6 = param_1[2];
                iVar8 = iVar8 + 1;
              }
              else if ((iVar6 < param_1[0x15e]) || (param_1[0x15f] < iVar6)) {
                uVar5 = FUN_006436b0(iVar6);
                *(undefined1 *)((int)piVar7 + iVar8) = uVar5;
                iVar6 = param_1[2];
                iVar8 = iVar8 + 1;
              }
              else {
                *(undefined1 *)((int)piVar7 + iVar8) =
                     *(undefined1 *)((param_1[0x160] - param_1[0x15e]) + iVar6);
                iVar6 = param_1[2];
                iVar8 = iVar8 + 1;
              }
            }
            param_1[2] = iVar6 + 1;
            *(undefined1 *)((int)piVar7 + iVar8) = 0;
            param_1[0x58] = 4;
          }
          else {
            if (param_1[0x15d] == 0) {
              cVar4 = *(char *)(iVar6 + param_1[1]);
            }
            else if ((iVar6 < param_1[0x15e]) || (param_1[0x15f] < iVar6)) {
              cVar4 = FUN_006436b0(iVar6);
            }
            else {
              cVar4 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar6);
            }
            iVar6 = 0;
            cVar2 = (char)param_1[0x14];
            while ((cVar2 != '\0' && (cVar4 != cVar2))) {
              iVar8 = iVar6 + 0x51;
              iVar6 = iVar6 + 1;
              cVar2 = *(char *)((int)param_1 + iVar8);
            }
            if (*(char *)((int)param_1 + iVar6 + 0x50) == '\0') {
              iVar6 = 0;
              if (param_1[2] < *param_1) {
                do {
                  iVar8 = 0;
                  if (iVar6 == 0x3ff) break;
                  iVar3 = param_1[2];
                  if (param_1[0x15d] == 0) {
                    cVar4 = *(char *)(iVar3 + param_1[1]);
                  }
                  else if ((iVar3 < param_1[0x15e]) || (param_1[0x15f] < iVar3)) {
                    cVar4 = FUN_006436b0(iVar3);
                  }
                  else {
                    cVar4 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar3);
                  }
                  if (cVar4 < '!') break;
                  cVar4 = (char)param_1[0x14];
                  while (cVar4 != '\0') {
                    iVar3 = param_1[2];
                    if (param_1[0x15d] == 0) {
                      cVar4 = *(char *)(iVar3 + param_1[1]);
                    }
                    else if ((iVar3 < param_1[0x15e]) || (param_1[0x15f] < iVar3)) {
                      cVar4 = FUN_006436b0(iVar3);
                    }
                    else {
                      cVar4 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar3);
                    }
                    if (cVar4 == *(char *)((int)param_1 + iVar8 + 0x50)) break;
                    iVar3 = iVar8 + 0x51;
                    iVar8 = iVar8 + 1;
                    cVar4 = *(char *)((int)param_1 + iVar3);
                  }
                  if (*(char *)((int)param_1 + iVar8 + 0x50) != '\0') break;
                  iVar8 = param_1[2];
                  if (param_1[0x15d] == 0) {
                    uVar5 = *(undefined1 *)(iVar8 + param_1[1]);
                  }
                  else if ((iVar8 < param_1[0x15e]) || (param_1[0x15f] < iVar8)) {
                    uVar5 = FUN_006436b0(iVar8);
                  }
                  else {
                    uVar5 = *(undefined1 *)((param_1[0x160] - param_1[0x15e]) + iVar8);
                  }
                  *(undefined1 *)((int)param_1 + iVar6 + 0x164) = uVar5;
                  iVar8 = param_1[2];
                  iVar6 = iVar6 + 1;
                  param_1[2] = iVar8 + 1;
                } while (iVar8 + 1 < *param_1);
              }
              *(undefined1 *)((int)param_1 + iVar6 + 0x164) = 0;
              param_1[0x58] = 3;
            }
            else {
              param_1[2] = param_1[2] + 1;
              param_1[0x58] = 2;
              *(char *)(param_1 + 0x15c) = cVar4;
              *(char *)(param_1 + 0x59) = cVar4;
              *(undefined1 *)((int)param_1 + 0x165) = 0;
            }
          }
        }
        else {
          if (cVar4 == '0') {
            iVar6 = param_1[2] + 1;
            if (iVar6 < *param_1) {
              if (param_1[0x15d] == 0) {
                cVar4 = *(char *)(param_1[2] + param_1[1]);
              }
              else if ((iVar6 < param_1[0x15e]) || (param_1[0x15f] < iVar6)) {
                cVar4 = FUN_006436b0(iVar6);
              }
              else {
                cVar4 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar6);
              }
              if (cVar4 == 'x') {
                FUN_006445a0();
                goto LAB_006443d6;
              }
            }
          }
          param_1[0x15b] = 0;
          while( true ) {
            iVar6 = param_1[2];
            if (param_1[0x15d] == 0) {
              cVar4 = *(char *)(iVar6 + param_1[1]);
            }
            else if ((iVar6 < param_1[0x15e]) || (param_1[0x15f] < iVar6)) {
              cVar4 = FUN_006436b0(iVar6);
            }
            else {
              cVar4 = *(char *)((param_1[0x160] - param_1[0x15e]) + iVar6);
            }
            pbVar1 = (byte *)(cVar4 + 0x60 + (int)param_1);
            if (*pbVar1 == 0) break;
            *(char *)((int)piVar7 + iVar8) = cVar4;
            param_1[0x15b] = param_1[0x15b] | (uint)*pbVar1;
            param_1[2] = param_1[2] + 1;
            iVar8 = iVar8 + 1;
          }
          param_1[0x15b] = param_1[0x15b] >> 1;
          *(undefined1 *)((int)piVar7 + iVar8) = 0;
          if (param_1[0x15b] == 0) {
            iVar6 = FUN_00648730(piVar7);
            param_1[0x159] = (int)(float)iVar6;
          }
          else {
            fVar9 = (float10)FUN_006487a0();
            param_1[0x159] = (int)(float)fVar9;
            iVar6 = __ftol();
          }
          param_1[0x15a] = iVar6;
          param_1[0x58] = 1;
        }
      }
      else {
        param_1[0x58] = 0x7fffffff;
      }
LAB_006443d6:
    } while (param_2 != 0);
  }
  return param_1[0x58];
}

