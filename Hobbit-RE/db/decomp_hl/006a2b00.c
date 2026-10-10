
undefined4 __thiscall FUN_006a2b00(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int local_4;
  
  uVar1 = param_2;
  local_4 = param_1;
  uVar2 = FUN_006a3230();
  if ((uVar2 & 2) == 0) {
    uVar2 = FUN_006a3230();
    if ((uVar2 & 0x100) == 0) {
      local_4 = FUN_006a3180();
      local_4 = local_4 / 2;
      param_2 = FUN_006a3190();
      param_2 = param_2 / 2;
      FUN_006a3380(&local_4,&param_2);
      FUN_006a03c0(*(undefined4 *)(param_1 + 8),local_4,param_2);
      piVar3 = (int *)FUN_006aa830();
      *(int *)(param_1 + 0xe8) = (piVar3[2] - *piVar3) / 2 + *piVar3;
      *(int *)(param_1 + 0xec) = (piVar3[3] - piVar3[1]) / 2 + piVar3[1];
      *(undefined4 *)(param_1 + 0x128) = uVar1;
      return 1;
    }
  }
  return 0;
}

