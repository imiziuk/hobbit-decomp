
void __thiscall FUN_005f2df0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  piVar2 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == 0) goto LAB_005f2f0a;
  iVar1 = 0;
  if (piVar2 == (int *)0x0) {
LAB_005f2e3e:
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar3 = FUN_0054c5c0(0x1c,s_C__projects_meridian_Support_AI__007481ac,0x12a);
      lVar5 = FUN_0054c790();
      while ((lVar5 != 0 && (iVar1 == 0))) {
        piVar2 = (int *)FUN_004021c0(lVar5);
        if (piVar2 != (int *)0x0) {
          uVar4 = (**(code **)(*piVar2 + 0x28))();
          iVar1 = FUN_004e2330(uVar4);
        }
        lVar5 = FUN_0054c790();
      }
      FUN_0054c880(uVar3);
    }
  }
  else {
    uVar3 = (**(code **)(*piVar2 + 0x28))();
    iVar1 = FUN_004e2330(uVar3);
    if (iVar1 == 0) goto LAB_005f2e3e;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    if (iVar1 != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) {
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x24) = 0;
        FUN_005f11b0(param_2);
        return;
      }
      if (*(int *)(param_1 + 0x24) != 0) goto LAB_005f2f0a;
    }
    if (iVar1 != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
      *(undefined4 *)(param_1 + 0x24) = 1;
      FUN_005f11b0(param_2);
      return;
    }
  }
LAB_005f2f0a:
  FUN_005f11b0(param_2);
  return;
}

