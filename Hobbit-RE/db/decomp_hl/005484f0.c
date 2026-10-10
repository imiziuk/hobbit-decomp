
void __thiscall FUN_005484f0(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char local_300 [256];
  char local_200;
  char local_1ff [255];
  undefined1 local_100 [256];
  
  pcVar7 = local_300;
  cVar2 = *param_2;
  while (pcVar8 = pcVar7, cVar2 != '\0') {
    if ((cVar2 == '\\') || (cVar2 == '/')) {
      cVar2 = param_2[1];
      *pcVar7 = '/';
      pcVar8 = pcVar7 + 1;
      pcVar9 = param_2;
      while( true ) {
        if (cVar2 == '\0') goto LAB_00548522;
        param_2 = pcVar9 + 1;
        if ((cVar2 != '\\') && (cVar2 != '/')) break;
        cVar2 = pcVar9[2];
        pcVar9 = param_2;
      }
    }
    else {
      *pcVar7 = cVar2;
      param_2 = param_2 + 1;
    }
    pcVar7 = pcVar7 + 1;
    cVar2 = *param_2;
  }
LAB_00548522:
  *pcVar8 = '\0';
  FUN_00648080(pcVar8);
  if (param_4 == 0) {
    FUN_00647d10(param_3,local_300);
    return;
  }
  pcVar7 = local_300;
  iVar6 = 0x7fffffff;
  while ((local_300[0] != '\0' && ((local_300[0] == '.' || (local_300[0] == '/'))))) {
    pcVar8 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    local_300[0] = *pcVar8;
  }
  if (*pcVar7 != '\0') {
    pcVar8 = pcVar7;
    do {
      iVar5 = 4;
      pcVar9 = (char *)(param_1 + 0x60);
      do {
        if (*pcVar9 != '\0') {
          FUN_0064f190(&local_200,&DAT_0071e9bc,pcVar9,pcVar8);
          pcVar4 = &local_200;
          cVar2 = local_200;
          while ((cVar2 != '\0' && ((cVar2 == '.' || (cVar2 == '/'))))) {
            pcVar1 = pcVar4 + 1;
            pcVar4 = pcVar4 + 1;
            cVar2 = *pcVar1;
          }
          iVar3 = FUN_00647ed0(pcVar4,pcVar7);
          if ((iVar3 == 0) && (iVar3 = FUN_00647cf0(pcVar8), iVar3 < iVar6)) {
            FUN_00647d10(local_100,pcVar8);
            iVar6 = iVar3;
          }
        }
        pcVar9 = pcVar9 + 0x101;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      cVar2 = *pcVar8;
      while (cVar2 != '\0') {
        if (cVar2 == '/') goto LAB_00548652;
        pcVar9 = pcVar8 + 1;
        pcVar8 = pcVar8 + 1;
        cVar2 = *pcVar9;
      }
      if (*pcVar8 == '/') {
LAB_00548652:
        pcVar8 = pcVar8 + 1;
      }
    } while (*pcVar8 != '\0');
    if (iVar6 != 0x7fffffff) {
      FUN_00647d10(param_3,local_100);
      return;
    }
  }
  FUN_00647d10(param_3,local_300);
  return;
}

