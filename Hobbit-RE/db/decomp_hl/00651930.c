
int __thiscall FUN_00651930(int *param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_18;
  
  iVar3 = param_2;
  cVar1 = (char)param_1[7];
  if (cVar1 == '\0') {
    sVar2 = (short)param_1[5];
  }
  else {
    sVar2 = *(short *)(*param_1 + 4);
  }
  local_18 = (uint)sVar2;
  if (cVar1 == '\0') {
    sVar2 = (short)param_1[5];
  }
  else {
    sVar2 = *(short *)(*param_1 + 4);
  }
  uVar4 = (uint)sVar2;
  iVar7 = 0;
  iVar8 = param_2;
  if (-1 < cVar1) {
    do {
      uVar5 = uVar4 + 7 >> 3;
      uVar6 = local_18 + 7 >> 3;
      param_2 = 0;
      if (uVar5 != 0) {
        do {
          uVar9 = 0;
          if (uVar6 != 0) {
            do {
              FUN_006515c0(uVar9 * 8,param_2 * 8,iVar8,iVar7);
              iVar8 = iVar8 + 0x20;
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar6);
          }
          param_2 = param_2 + 1;
        } while (param_2 < uVar5);
      }
      local_18 = local_18 >> 1;
      uVar4 = uVar4 >> 1;
      iVar8 = ((iVar8 - iVar3) + 0x1fU & 0xffffffe0) + iVar3;
      iVar7 = iVar7 + 1;
    } while (iVar7 <= cVar1);
  }
  return iVar8;
}

