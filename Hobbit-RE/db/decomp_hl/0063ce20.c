
void FUN_0063ce20(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = param_3 - param_2; uVar1 != 0; uVar1 = uVar1 >> 1) {
    iVar2 = iVar2 + 1;
  }
  FUN_0063cd60(param_1,iVar2);
  *param_1 = *param_1 + param_2;
  return;
}

