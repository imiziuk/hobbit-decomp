
void __thiscall FUN_00664fa0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  piStack_4 = param_1;
  (**(code **)(*param_1 + 0x14))();
  if (param_1[1] == 0) {
    FUN_00662bd0(param_1,param_3);
    FUN_006634e0(param_1);
  }
  piVar1 = (int *)((-(uint)(param_1[3] != 0) & 0xfffff000) + 0x2000);
  iVar2 = param_1[6] * param_1[5];
  (**(code **)(**(int **)(param_1[2] + 0x14) + 0x2c))
            (*(int **)(param_1[2] + 0x14),param_1[3],iVar2,&piStack_4);
  *piVar1 = iVar2;
  return;
}

