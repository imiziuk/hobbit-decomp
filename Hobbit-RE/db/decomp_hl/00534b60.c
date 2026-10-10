
bool FUN_00534b60(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0041bcc0();
  iVar2 = (**(code **)(*piVar1 + 0x108))(1);
  return iVar2 == 0;
}

