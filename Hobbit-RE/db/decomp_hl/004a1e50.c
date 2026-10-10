
void __fastcall FUN_004a1e50(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3a18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_NPCObject__AdvanceHealthMeter_0072aef0);
  uVar5 = 0;
  local_4 = 0;
  iVar2 = FUN_004a2340();
  if (((iVar2 == 0) || ((*(byte *)(param_1 + 0x268) & 8) == 0)) ||
     (piVar1 = *(int **)(*(int *)(param_1 + 0x300) + 0xbc), piVar1 == (int *)0x0)) {
LAB_004a1ec5:
    *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x478) & 0xffffffdf;
    FUN_004f8a50(0xffffffff,5,0);
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x24))();
    if ((iVar2 == 0) || ((*(uint *)(param_1 + 0x268) & 0x80000) != 0)) goto LAB_004a1ec5;
    *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x478) | 0x20;
  }
  if (((*(uint *)(param_1 + 0x268) & 0x2000000) == 0) && ((*(byte *)(param_1 + 0x478) & 0x20) == 0))
  {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = pvStack_c;
    return;
  }
  uVar4 = 1;
  FUN_004a6970();
  uVar3 = __ftol();
  if (*(int *)(param_1 + 0x1b0) == 0x61) {
    uVar4 = 0;
    goto LAB_004a1fb8;
  }
  if (*(int *)(param_1 + 0x1b0) == 0x5f) {
    uVar4 = 3;
    goto LAB_004a1fb8;
  }
  if ((*(byte *)(param_1 + 0x478) & 0x20) == 0) goto LAB_004a1fb8;
  piVar1 = *(int **)(*(int *)(param_1 + 0x300) + 0xbc);
  uVar4 = 5;
  if (piVar1 == (int *)0x0) {
LAB_004a1f7e:
    uVar5 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x60))();
    if (iVar2 == 0) goto LAB_004a1f7e;
    uVar5 = 1;
  }
  if ((*(byte *)(param_1 + 0x268) & 8) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x300) + 0xbc);
    if (piVar1 == (int *)0x0) goto LAB_004a1fb8;
    iVar2 = (**(code **)(*piVar1 + 0x24))();
    if (iVar2 != 0) goto LAB_004a1fb8;
  }
  uVar3 = 0xffffffff;
  uVar5 = 0;
  *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x478) & 0xffffffdf;
LAB_004a1fb8:
  FUN_004f8a50(uVar3,uVar4,uVar5);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

