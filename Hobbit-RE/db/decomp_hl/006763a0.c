
undefined4 __thiscall
FUN_006763a0(int param_1,char *param_2,undefined4 *param_3,uint *param_4,int *param_5,int param_6,
            int param_7)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x30 + param_6 * 0x50);
  iVar5 = *(int *)(iVar4 + 0x24);
  piVar1 = (int *)(*(int *)(iVar4 + 0x20) + param_7 * 0x18);
  pcVar6 = (char *)(piVar1[2] + iVar5);
  cVar2 = *(char *)(piVar1[2] + iVar5);
  while (cVar2 != '\0') {
    cVar3 = *param_2;
    pcVar6 = pcVar6 + 1;
    param_2 = param_2 + 1;
    if (cVar3 != cVar2) {
      return 0;
    }
    cVar2 = *pcVar6;
  }
  pcVar6 = (char *)(*piVar1 + iVar5);
  cVar2 = *(char *)(*piVar1 + iVar5);
  while (cVar2 != '\0') {
    cVar3 = *param_2;
    pcVar6 = pcVar6 + 1;
    param_2 = param_2 + 1;
    if (cVar3 != cVar2) {
      return 0;
    }
    cVar2 = *pcVar6;
  }
  pcVar6 = (char *)(piVar1[1] + iVar5);
  cVar2 = *(char *)(piVar1[1] + iVar5);
  while (cVar2 != '\0') {
    cVar3 = *param_2;
    pcVar6 = pcVar6 + 1;
    param_2 = param_2 + 1;
    if (cVar3 != cVar2) {
      return 0;
    }
    cVar2 = *pcVar6;
  }
  pcVar6 = (char *)(piVar1[3] + iVar5);
  cVar2 = *(char *)(piVar1[3] + iVar5);
  while (cVar2 != '\0') {
    cVar3 = *param_2;
    pcVar6 = pcVar6 + 1;
    param_2 = param_2 + 1;
    if (cVar3 != cVar2) {
      return 0;
    }
    cVar2 = *pcVar6;
  }
  if (*param_2 == *pcVar6) {
    *param_4 = piVar1[4];
    *param_5 = piVar1[5];
    iVar5 = *(int *)(iVar4 + 0x1c);
    iVar7 = 0;
    if (0 < *(int *)(iVar4 + 0x14)) {
      do {
        if (*param_4 < *(uint *)(iVar5 + iVar7 * 4)) {
          *param_3 = *(undefined4 *)
                      (*(int *)(*(int *)(param_1 + 0xc) + 0x40 + param_6 * 0x50) + iVar7 * 4);
          if (0 < iVar7) {
            *param_4 = *param_4 - *(int *)(iVar5 + -4 + iVar7 * 4);
          }
          return 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar4 + 0x14));
    }
  }
  return 0;
}

