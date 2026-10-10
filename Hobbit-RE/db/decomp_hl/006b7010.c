
void __thiscall FUN_006b7010(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = (*(int *)(param_3 + 0xc) * 7 + *(int *)(param_3 + 8)) * 4 + 0xb8;
  if (0 < *(int *)(param_3 + 0x10)) {
    do {
      iVar1 = *(int *)(*(int *)(param_3 + 0x28) + iVar4 * 4);
      iVar1 = (**(code **)(&DAT_00813304 + *(int *)(iVar1 + 4) * 0x28))(iVar1);
      iVar3 = iVar3 + 4 + iVar1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_3 + 0x10));
  }
  uVar2 = thunk_FUN_0064ff70(iVar3,s_C__projects_meridian_xCore_Auxil_00757b78,0x293);
  FUN_006baca0(uVar2);
  FUN_006ba9a0(param_3);
  *(undefined4 *)(param_1 + param_2 * 4) = uVar2;
  *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  return;
}

