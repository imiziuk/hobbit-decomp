
void __thiscall FUN_006b7250(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + param_2 * 4);
  *(undefined4 *)(param_1 + param_2 * 4) = 0;
  *(int *)(*(int *)(iVar1 + 0xa0) + 0x1c) = *(int *)(*(int *)(iVar1 + 0xa0) + 0x1c) + -1;
  if ((*(byte *)(iVar1 + 0x94) & 1) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x18);
    FUN_006ba380();
    iVar3 = FUN_006ba390();
    if (iVar3 == 0) {
      FUN_006b7250(uVar2);
    }
  }
  FUN_0064ff40(iVar1,s_C__projects_meridian_xCore_Auxil_00757b78,0x325);
  return;
}

