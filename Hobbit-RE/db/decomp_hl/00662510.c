
void FUN_00662510(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int local_8;
  int local_4;
  
  puVar2 = param_1;
  param_1 = (uint *)*param_1;
  if (param_1 != (uint *)0x0) {
    local_8 = FUN_006699c0(&param_1);
    if ((local_8 == DAT_007f049c) || (param_1 < *(uint *)(local_8 + 0xc))) {
      local_4 = DAT_007f049c;
      piVar3 = &local_4;
    }
    else {
      piVar3 = &local_8;
    }
    iVar1 = *piVar3;
    if (iVar1 != DAT_007f049c) {
      (**(code **)(**(int **)(iVar1 + 0x10) + 8))(*(int **)(iVar1 + 0x10));
      FUN_00667b90(&param_1,iVar1);
    }
    piVar3 = (int *)*puVar2;
    (**(code **)(*piVar3 + 8))(piVar3);
    *puVar2 = 0;
  }
  return;
}

