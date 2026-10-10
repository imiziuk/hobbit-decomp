
int * FUN_00649880(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_006554a0();
  piVar2 = (int *)(*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 4));
  piVar1 = piVar2 + 1;
  iVar4 = thunk_FUN_006c2388(piVar1,param_1,param_2);
  *piVar2 = iVar4;
  *(uint *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 8 + iVar4 & 0xfffffffc;
  return piVar1;
}

