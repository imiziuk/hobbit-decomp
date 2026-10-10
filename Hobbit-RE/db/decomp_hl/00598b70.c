
undefined4 __fastcall FUN_00598b70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00592920();
  if ((*(int *)(iVar1 + 0x128) != 0) && (iVar1 = FUN_00592920(), (*(byte *)(iVar1 + 300) & 1) != 0))
  {
    return 1;
  }
  if ((*(int *)(param_1 + 0x158) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x158) + 0x78) & 0x8000) == 0x8000)) {
    return 1;
  }
  return 0;
}

