
undefined4 __thiscall FUN_006a96b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  short sVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_18;
  int local_10;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  piVar1 = (int *)(param_1 + 0x50);
  FUN_00652870(param_2);
  if (*(char *)(param_1 + 0x6c) == '\0') {
    sVar2 = *(short *)(param_1 + 0x66);
  }
  else {
    sVar2 = *(short *)(*piVar1 + 6);
  }
  iVar9 = 0;
  *(int *)(param_1 + 0x84) = sVar2 + -1;
  FUN_00648600(param_1 + 0x88,0,0xc00);
  if (*(char *)(param_1 + 0x6c) == '\0') {
    sVar2 = *(short *)(param_1 + 100);
  }
  else {
    sVar2 = *(short *)(*piVar1 + 4);
  }
  *(int *)(param_1 + 0x70) = (int)sVar2;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    sVar2 = *(short *)(param_1 + 0x66);
  }
  else {
    sVar2 = *(short *)(*piVar1 + 6);
  }
  *(int *)(param_1 + 0x74) = (int)sVar2;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  local_18 = 0;
  piVar6 = (int *)(param_1 + 0x14c);
  do {
    iVar10 = iVar9 + 1;
    iVar7 = 0;
    local_10 = 0x10;
    do {
      iVar8 = iVar7 + 1;
      if (iVar8 < *(int *)(param_1 + 0x70)) {
        do {
          pbVar3 = (byte *)FUN_006508b0(local_8,iVar8,iVar9,0);
          if (0xf6 < *pbVar3) break;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_1 + 0x70));
      }
      iVar4 = iVar8 - iVar7;
      piVar6[-1] = iVar7;
      *piVar6 = iVar10;
      piVar6[1] = iVar4;
      if (*(int *)(param_1 + 0x7c) < iVar4) {
        *(int *)(param_1 + 0x7c) = iVar4;
      }
      piVar6 = piVar6 + 3;
      local_10 = local_10 + -1;
      iVar7 = iVar8 + 1;
    } while (local_10 != 0);
    if (local_18 < 0xe) {
      if (*(int *)(param_1 + 0x74) <= iVar10) break;
      do {
        pcVar5 = (char *)FUN_006508b0(local_4,0,iVar10,0);
        if (*pcVar5 == -1) break;
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x74));
      if ((*(int *)(param_1 + 0x74) <= iVar10) || (iVar9 = iVar10 - iVar9, iVar9 == 1)) break;
      *(int *)(param_1 + 0x78) = iVar9;
      *(int *)(param_1 + 0x84) = iVar9 + -1;
      iVar9 = iVar10;
    }
    local_18 = local_18 + 1;
  } while (local_18 < 0xf);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x630);
  FUN_00674c70(piVar1);
  return 1;
}

