
uint __thiscall FUN_005c9400(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  sVar1 = *(short *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_005c9490();
  }
  iVar6 = 0;
  iVar8 = *(int *)(param_1 + 0x20) + -1;
  if (-1 < iVar8) {
    iVar3 = *(int *)(param_1 + 0x24);
    do {
      iVar7 = iVar8 + iVar6 >> 1;
      iVar4 = *(int *)(iVar3 + 0x14 + iVar7 * 0x18);
      uVar5 = *(uint *)(iVar3 + 8 + iVar4 * 0x18);
      if (param_2 < uVar5) {
        iVar8 = iVar7 + -1;
      }
      else {
        if (param_2 <= uVar5 + sVar1 * iVar2) {
          return (int)(param_2 - *(int *)(iVar3 + 8 + iVar4 * 0x18)) / *(int *)(param_1 + 8) |
                 iVar4 << (*(byte *)(param_1 + 0x1e) & 0x1f);
        }
        iVar6 = iVar7 + 1;
      }
    } while (iVar6 <= iVar8);
  }
  return 0xffffffff;
}

