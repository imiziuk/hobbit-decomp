
int * FUN_00588a30(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00588a80();
  iVar2 = iVar1 * 0x18;
  *(undefined4 *)(iVar2 + 4 + DAT_007780ac) = 0xffffffff;
  *(undefined4 *)(iVar2 + 8 + DAT_007780ac) = 0;
  *(undefined4 *)(iVar2 + 0x10 + DAT_007780ac) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x14 + DAT_007780ac) = 0xffffffff;
  *param_1 = iVar1;
  return param_1;
}

