
void __thiscall FUN_00446e20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (((*(int *)(param_1 + 0x4ce8) == 0) || (param_2 != *(int *)(param_1 + 0x4cf0))) ||
     (param_3 != *(int *)(param_1 + 0x4cf4))) {
    *(int *)(param_1 + 0x4cf0) = param_2;
    *(undefined4 *)(param_1 + 0x4ce8) = 1;
    *(int *)(param_1 + 0x4cf4) = param_3;
    piVar2 = (int *)FUN_004021c0(param_2,param_3);
    if (piVar2 != (int *)0x0) {
      if ((char)piVar2[0x1f] == '\x0e') {
        (**(code **)(*piVar2 + 0x34))(param_1 + 0x4cf8);
        return;
      }
      if ((char)piVar2[0x1f] == '\x05') {
        iVar1 = *piVar2;
        uVar3 = (**(code **)(iVar1 + 0x11c))();
        (**(code **)(iVar1 + 0x114))(param_1 + 0x4cf8,uVar3);
      }
    }
  }
  return;
}

