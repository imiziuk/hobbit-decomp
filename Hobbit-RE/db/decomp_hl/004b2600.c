
void FUN_004b2600(char *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  
  if (0 < param_3) {
    do {
      bVar4 = false;
      iVar5 = 0;
      bVar2 = false;
      bVar1 = false;
      bVar3 = false;
      if (param_2 == 0x32) {
        bVar4 = true;
      }
      else if (param_2 == 0x19) {
        bVar3 = true;
      }
      else if (param_2 == 10) {
        bVar2 = true;
      }
      else {
        if (param_2 != 5) goto joined_r0x004b265a;
        bVar1 = true;
      }
      do {
        if ((param_2 < 5) || (bVar1)) {
          *param_1 = *param_1 + '\x01';
          iVar5 = 1;
        }
        if ((((4 < param_2) && (param_2 < 10)) && (!bVar1)) || (bVar2)) {
          param_1[1] = param_1[1] + '\x01';
          iVar5 = 5;
        }
        else if (((9 < param_2) && (param_2 < 0x19)) || (bVar3)) {
          param_1[2] = param_1[2] + '\x01';
          iVar5 = 10;
        }
        else if (((0x18 < param_2) && (param_2 < 0x32)) || (bVar4)) {
          param_1[3] = param_1[3] + '\x01';
          iVar5 = 0x19;
        }
        else if (0x31 < param_2) {
          param_1[4] = param_1[4] + '\x01';
          iVar5 = 0x32;
        }
        param_2 = param_2 - iVar5;
        param_3 = param_3 + -1;
joined_r0x004b265a:
      } while (0 < param_2);
      if (0 < param_3) {
        if (param_1[4] == '\0') {
          if (param_1[3] == '\0') {
            if (param_1[2] == '\0') {
              if (param_1[1] == '\0') {
                return;
              }
              param_2 = 5;
              param_1[1] = param_1[1] + -1;
            }
            else {
              param_2 = 10;
              param_1[2] = param_1[2] + -1;
            }
          }
          else {
            param_2 = 0x19;
            param_1[3] = param_1[3] + -1;
          }
        }
        else {
          param_2 = 0x32;
          param_1[4] = param_1[4] + -1;
        }
      }
    } while (0 < param_3);
  }
  return;
}

