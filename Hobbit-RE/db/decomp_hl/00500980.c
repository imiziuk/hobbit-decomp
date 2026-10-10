
void FUN_00500980(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = __ftol();
  uVar2 = (**(code **)(&DAT_00760828 + iVar1 * 0x30))(*(undefined4 *)(&DAT_0076082c + iVar1 * 0x30))
  ;
  iVar1 = __ftol();
  *(undefined4 *)(&DAT_00760834 + iVar1 * 0x30) = uVar2;
  return;
}

