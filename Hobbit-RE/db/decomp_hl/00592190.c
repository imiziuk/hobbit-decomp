
int __fastcall FUN_00592190(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00592920();
  iVar2 = (**(code **)(*piVar1 + 0x158))();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x50);
  }
  return iVar2;
}

