
void __fastcall FUN_00549860(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0073c8cc;
  uVar2 = DAT_0073c8c8;
  iVar3 = DAT_0073c8cc + 1;
  FUN_0064f0d0(DAT_0073c8c8,DAT_0073c8cc,s__________________________________0073cb84);
  FUN_0064f0d0(uVar2,iVar3,s_RSCMGR_Max_Used___d_0073cb6c,*(undefined4 *)(param_1 + 0x54));
  FUN_0064f0d0(uVar2,iVar1 + 2,s_RSCMGR_Cur_Used___d_0073cb54,*(undefined4 *)(param_1 + 0x50));
  FUN_0064f0d0(uVar2,iVar1 + 3,s_RSCMGR_nInstances___d_0073cb3c,*(undefined4 *)(param_1 + 0x4c));
  FUN_0064f0d0(uVar2,iVar1 + 4,s__________________________________0073cb84);
  iVar3 = iVar1 + 5;
  for (iVar1 = DAT_0076cd70; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    FUN_0064f0d0(uVar2,iVar3,s___4d____8d___s_0073cb2c,*(undefined4 *)(iVar1 + 0x14),
                 *(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 8));
    iVar3 = iVar3 + 1;
  }
  FUN_0064f0d0(uVar2,iVar3,s__________________________________0073cb84);
  return;
}

