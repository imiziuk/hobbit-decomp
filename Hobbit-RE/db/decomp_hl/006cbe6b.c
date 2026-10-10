
undefined4 FUN_006cbe6b(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  LPCSTR lpName;
  int *piVar5;
  bool bVar6;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  pcVar1 = (char *)FUN_006ccec1(param_1,0x3d);
  if (pcVar1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == pcVar1) {
    return 0xffffffff;
  }
  bVar6 = pcVar1[1] == '\0';
  if (DAT_00815d4c == DAT_00815d50) {
    DAT_00815d4c = (int *)FUN_006cc04a(DAT_00815d4c);
  }
  if (DAT_00815d4c == (int *)0x0) {
    if ((param_2 == 0) || (DAT_00815d54 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_00815d4c = (int *)_malloc(4);
      if (DAT_00815d4c == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_00815d4c = 0;
      if (DAT_00815d54 == (undefined4 *)0x0) {
        DAT_00815d54 = (undefined4 *)_malloc(4);
        if (DAT_00815d54 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_00815d54 = 0;
      }
    }
    else {
      iVar2 = FUN_006c7fca();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_00815d4c;
  iVar2 = FUN_006cbff2(param_1,(int)pcVar1 - (int)param_1);
  if ((iVar2 < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar3 = (int *)FUN_006c1f76(piVar3,iVar2 * 4 + 8);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[iVar2] = (int)param_1;
    piVar3[iVar2 + 1] = 0;
  }
  else {
    if (!bVar6) {
      piVar3[iVar2] = (int)param_1;
      goto LAB_006cbf9f;
    }
    piVar5 = piVar3 + iVar2;
    FUN_006c1d53(piVar3[iVar2]);
    for (; *piVar5 != 0; piVar5 = piVar5 + 1) {
      iVar2 = iVar2 + 1;
      *piVar5 = piVar5[1];
    }
    piVar3 = (int *)FUN_006c1f76(piVar3,iVar2 << 2);
    if (piVar3 == (int *)0x0) goto LAB_006cbf9f;
  }
  DAT_00815d4c = piVar3;
LAB_006cbf9f:
  if (param_2 != 0) {
    sVar4 = _strlen(param_1);
    lpName = (LPCSTR)_malloc(sVar4 + 2);
    if (lpName != (LPCSTR)0x0) {
      FUN_006c9dd0(lpName,param_1);
      pcVar1[(int)lpName - (int)param_1] = '\0';
      SetEnvironmentVariableA
                (lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(pcVar1 + ((int)lpName - (int)param_1) + 1)))
      ;
      FUN_006c1d53(lpName);
    }
  }
  return 0;
}

