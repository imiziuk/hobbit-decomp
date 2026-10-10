
void __thiscall FUN_006a5e90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10c);
  if (param_2 < iVar1) {
    param_2 = iVar1;
  }
  iVar2 = *(int *)(param_1 + 0x110);
  if (iVar2 <= param_2) {
    param_2 = iVar2;
  }
  if (param_2 != *(int *)(param_1 + 0x120)) {
    *(int *)(param_1 + 0x120) = param_2;
    if (iVar1 < iVar2) {
      *(float *)(param_1 + 0x128) = (float)(param_2 - iVar1) / (float)(iVar2 - iVar1);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x3c))(*(int **)(param_1 + 0xc),param_1,2,param_2);
      return;
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x3c))(*(int **)(param_1 + 0xc),param_1,2,param_2);
  }
  return;
}

