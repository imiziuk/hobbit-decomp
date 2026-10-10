
int __thiscall FUN_006aaa90(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_40 [64];
  
  iVar4 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 4) + 4;
  iVar1 = FUN_00647cf0(param_2);
  if (iVar1 < 0x41) {
    FUN_00647d70(local_40,param_2,0x40);
  }
  uVar2 = FUN_00648080(local_40);
  uVar2 = FUN_006aaa50(uVar2);
  iVar1 = *(int *)(param_1 + 8);
  iVar5 = 0;
  if (-1 < iVar1) {
    do {
      iVar6 = iVar1 + iVar5 >> 1;
      iVar8 = *(int *)(iVar7 + iVar6 * 4) + iVar7 + iVar4 * 4;
      if (iVar1 == iVar5 + 1) {
        iVar4 = FUN_00648280(iVar8,uVar2);
        if (iVar4 != 0) {
          return 0;
        }
LAB_006aab35:
        iVar4 = FUN_006480e0(iVar8);
        return iVar8 + 2 + iVar4 * 2;
      }
      iVar3 = FUN_00648280(iVar8,uVar2);
      if (iVar3 == 0) goto LAB_006aab35;
      if (0 < iVar3) {
        iVar1 = iVar6;
        iVar6 = iVar5;
      }
      iVar5 = iVar6;
    } while (iVar6 <= iVar1);
  }
  return 0;
}

