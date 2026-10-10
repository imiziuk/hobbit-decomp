
void __thiscall FUN_006a3380(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  *param_2 = *param_2 + *(int *)(param_1 + 0x44);
  *param_3 = *param_3 + *(int *)(param_1 + 0x48);
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    *param_2 = *param_2 + *(int *)(iVar1 + 0x44);
    *param_3 = *param_3 + *(int *)(iVar1 + 0x48);
  }
  return;
}

