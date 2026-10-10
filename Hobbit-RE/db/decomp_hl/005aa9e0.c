
void __thiscall
FUN_005aa9e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_004021c0(param_2,param_3);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x10) & 0x50) != 0)) {
    iVar3 = *(int *)(iVar1 + 0x1a4);
    iVar2 = FUN_005aa750();
    if (iVar3 == *(int *)(iVar2 + 0x1a4)) {
      return;
    }
    iVar3 = FUN_005aa750();
    if (*(int *)(iVar3 + 0x1a4) == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x1a4) == 0) {
      return;
    }
  }
  iVar1 = FUN_005aa880(param_4,param_5,param_6);
  if (iVar1 != 0) {
    piVar4 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if (piVar4 == (int *)0x0) {
      uVar5 = FUN_0054bad0(0x2f,0,0);
      *(undefined8 *)(param_1 + 8) = uVar5;
      piVar4 = (int *)FUN_004021c0(uVar5);
      if (piVar4 == (int *)0x0) {
        return;
      }
    }
    (**(code **)(*piVar4 + 0x14))(&param_4,0);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

