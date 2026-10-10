
undefined4 __thiscall FUN_006a2bd0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int local_4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    piVar2 = *(int **)(param_1 + 0x1c);
    do {
      if (*piVar2 == param_2) break;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  local_4 = param_1;
  uVar1 = FUN_006a3230();
  if (((uVar1 & 2) == 0) && (uVar1 = FUN_006a3230(), (uVar1 & 0x100) == 0)) {
    local_4 = FUN_006a3180();
    local_4 = local_4 / 2;
    param_2 = FUN_006a3190();
    param_2 = param_2 / 2;
    FUN_006a3380(&local_4,&param_2);
    FUN_006a03c0(*(undefined4 *)(param_1 + 8),local_4,param_2);
    piVar2 = (int *)FUN_006aa830();
    *(int *)(param_1 + 0xe8) = (piVar2[2] - *piVar2) / 2 + *piVar2;
    *(int *)(param_1 + 0xec) = (piVar2[3] - piVar2[1]) / 2 + piVar2[1];
    *(int *)(param_1 + 0x128) = iVar3;
    return 1;
  }
  return 0;
}

