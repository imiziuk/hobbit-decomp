
int __thiscall FUN_006516a0(int *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar4 = param_2;
  iVar3 = param_1[7];
  iVar7 = 0;
  iVar8 = param_2;
  if (-1 < (char)iVar3) {
    do {
      if ((char)param_1[7] == '\0') {
        sVar1 = (short)param_1[5];
      }
      else {
        sVar1 = *(short *)(*param_1 + 4 + iVar7 * 8);
      }
      if ((char)param_1[7] == '\0') {
        sVar2 = *(short *)((int)param_1 + 0x16);
      }
      else {
        sVar2 = *(short *)(*param_1 + 6 + iVar7 * 8);
      }
      uVar5 = (int)sVar2 + 3U >> 2;
      uVar6 = (int)sVar1 + 3U >> 2;
      param_2 = 0;
      if (uVar5 != 0) {
        do {
          uVar9 = 0;
          if (uVar6 != 0) {
            do {
              FUN_00651310(uVar9 * 4,param_2 * 4,iVar8,iVar7);
              iVar8 = iVar8 + 0x40;
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar6);
          }
          param_2 = param_2 + 1;
        } while (param_2 < uVar5);
      }
      param_2 = ((iVar8 - iVar4) + 0x1fU & 0xffffffe0) + iVar4;
      iVar7 = iVar7 + 1;
      iVar8 = param_2;
    } while (iVar7 <= (char)iVar3);
  }
  return param_2;
}

