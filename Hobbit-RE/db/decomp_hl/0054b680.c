
void __fastcall FUN_0054b680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28d8)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x28c0));
      if (iVar1 != 0) {
        FUN_0054be30(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < *(int *)(param_1 + 0x28d8));
  }
  FUN_0064ff40(*(undefined4 *)(param_1 + 0x28c0),s__tHC__projects_meridian_Support__0073ccc1 + 3,
               0x7f);
  *(undefined4 *)(param_1 + 0x28c0) = 0;
  return;
}

