
void FUN_0068e10e(int *param_1)

{
  int iVar1;
  int *unaff_retaddr;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 8))(param_1);
  FUN_006924e3(param_1);
  uVar2 = 1;
  FUN_006c09f2(1);
  iVar1 = *unaff_retaddr;
  if ((int)param_1 < 0) {
    if ((*(int *)(iVar1 + 0x6c) == 0) || (2 < *(int *)(iVar1 + 0x68))) {
      (**(code **)(iVar1 + 8))(unaff_retaddr);
    }
    *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 1;
    return;
  }
  if ((int)param_1 <= *(int *)(iVar1 + 0x68)) {
    (**(code **)(iVar1 + 8))(unaff_retaddr,uVar2);
  }
  return;
}

