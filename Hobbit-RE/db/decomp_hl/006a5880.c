
void __thiscall FUN_006a5880(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (param_2 == param_1) {
    uVar2 = *(uint *)(param_1 + 0x2c) ^ 0x200;
    *(uint *)(param_1 + 0x2c) = uVar2;
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x3c))(piVar1,param_1,3,uVar2 & 0x200);
    }
    FUN_00659600(s_OptionSelect_00723150,1);
  }
  return;
}

