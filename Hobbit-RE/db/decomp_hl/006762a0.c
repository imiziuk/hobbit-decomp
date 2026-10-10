
int __thiscall FUN_006762a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar2 = FUN_00655490();
  param_1 = param_1 + 0x20;
  iVar6 = 0;
  iVar4 = 0;
  iVar3 = param_1;
  do {
    if (iVar6 != 0) goto LAB_0067631a;
    if (*(int *)(iVar3 + 0x134) == iVar2) {
      iVar6 = iVar3;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x150;
  } while (iVar4 < 1);
  if (iVar6 == 0) {
    uVar5 = 0xffffffff;
    iVar3 = 0x7fffffff;
    iVar4 = 0;
    do {
      if (iVar6 != 0) break;
      iVar1 = *(int *)(param_1 + 0x24);
      if ((iVar1 <= iVar3) && ((iVar1 < iVar3 || (*(uint *)(param_1 + 0x20) < uVar5)))) {
        uVar5 = *(uint *)(param_1 + 0x20);
        iVar6 = param_1;
        iVar3 = iVar1;
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 0x150;
    } while (iVar4 < 1);
  }
LAB_0067631a:
  FUN_006559a0(1);
  uVar7 = FUN_0064cb70();
  *(undefined8 *)(iVar6 + 0x20) = uVar7;
  if ((*(int *)(iVar6 + 0x134) != iVar2) ||
     (iVar3 = FUN_00647e40(iVar6 + 0x34,*(int *)(param_2 + 0x10) + 0x24), iVar3 != 0)) {
    *(undefined4 *)(iVar6 + 0x138) = 0;
    *(undefined4 *)(iVar6 + 0x28) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x2c) = 0x7fffffff;
    *(undefined4 *)(iVar6 + 0x140) = 0;
  }
  *(int *)(iVar6 + 0x134) = iVar2;
  FUN_00647d10(iVar6 + 0x34,*(int *)(param_2 + 0x10) + 0x24);
  return iVar6;
}

