
void __thiscall FUN_006a3400(int param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = *param_2 + *(int *)(param_1 + 0x44);
  param_2[2] = param_2[2] + *(int *)(param_1 + 0x44);
  param_2[1] = param_2[1] + *(int *)(param_1 + 0x48);
  param_2[3] = param_2[3] + *(int *)(param_1 + 0x48);
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    *param_2 = *param_2 + *(int *)(iVar1 + 0x44);
    param_2[2] = param_2[2] + *(int *)(iVar1 + 0x44);
    param_2[1] = param_2[1] + *(int *)(iVar1 + 0x48);
    param_2[3] = param_2[3] + *(int *)(iVar1 + 0x48);
  }
  return;
}

