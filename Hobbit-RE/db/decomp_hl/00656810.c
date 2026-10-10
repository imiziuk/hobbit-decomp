
void FUN_00656810(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_78;
  int local_70 [7];
  int local_54 [7];
  int local_38 [7];
  int local_1c [7];
  
  iVar3 = param_2[1];
  iVar1 = *param_2;
  local_78 = 0x7fffffff;
  local_70[1] = iVar1;
  while (iVar2 = local_70[1] + 1, iVar2 <= iVar3) {
    local_70[0] = iVar1;
    local_54[0] = iVar2;
    local_54[1] = iVar3;
    FUN_00656790(param_1,local_70);
    FUN_00656790(param_1,local_54);
    local_70[1] = iVar2;
    if (local_70[2] + local_54[2] < local_78) {
      piVar4 = local_70;
      piVar5 = local_38;
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      piVar4 = local_54;
      piVar5 = local_1c;
      for (iVar2 = 7; local_78 = local_70[2] + local_54[2], iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
    }
  }
  piVar4 = local_38;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_3 = *piVar4;
    piVar4 = piVar4 + 1;
    param_3 = param_3 + 1;
  }
  piVar4 = local_1c;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_4 = *piVar4;
    piVar4 = piVar4 + 1;
    param_4 = param_4 + 1;
  }
  return;
}

