
undefined * __thiscall FUN_006aabe0(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_40 [64];
  
  iVar4 = *(int *)(param_1 + 4);
  FUN_00647d10(local_40,param_2);
  uVar2 = FUN_00648080(local_40);
  uVar2 = FUN_006aaa50(uVar2);
  iVar5 = *(int *)(param_1 + 8);
  param_2 = 0;
  bVar1 = false;
  if (-1 < iVar5) {
    do {
      iVar6 = (param_2 + iVar5) / 2;
      iVar7 = *(int *)(iVar4 + 4 + iVar6 * 4) + 4 + *(int *)(param_1 + 8) * 4 +
              *(int *)(param_1 + 4);
      if (iVar5 == param_2 + 1) {
        iVar3 = FUN_00648280(iVar7,uVar2);
        if (iVar3 != 0) break;
        bVar1 = true;
      }
      iVar3 = FUN_00648280(iVar7,uVar2);
      if (iVar3 == 0) {
LAB_006aac9a:
        iVar4 = FUN_006480e0(iVar7);
        iVar4 = iVar7 + 2 + iVar4 * 2;
        iVar5 = FUN_006480e0(iVar4);
        return (undefined *)(iVar4 + 2 + iVar5 * 2);
      }
      if (0 < iVar3) {
        iVar5 = iVar6;
        iVar6 = param_2;
      }
      param_2 = iVar6;
      if (bVar1) goto LAB_006aac9a;
    } while (param_2 <= iVar5);
  }
  return &DAT_006fd324;
}

