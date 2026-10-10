
void FUN_0063cbf0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = param_3 - param_2; uVar1 != 0; uVar1 = uVar1 >> 1) {
    iVar2 = iVar2 + 1;
  }
  thunk_FUN_0063dbd0(param_1 - param_2,iVar2);
  return;
}

