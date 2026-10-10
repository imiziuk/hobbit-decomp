
void __thiscall FUN_006796d0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != param_1; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(int *)(iVar1 + 8) == param_2) {
      *(uint *)(iVar1 + 0xdc) = *(uint *)(iVar1 + 0xdc) | param_3;
    }
  }
  return;
}

