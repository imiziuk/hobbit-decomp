
void __thiscall FUN_00606d30(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0041bcc0();
  iVar2 = (**(code **)(*piVar1 + 0x124))();
  if (iVar2 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  FUN_005f11b0(param_2);
  return;
}

