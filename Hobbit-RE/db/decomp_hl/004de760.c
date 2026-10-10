
void __thiscall FUN_004de760(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d5748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iStack_10 = param_1;
  FUN_00641760(s_UsesInven_0072e5cc,*(uint *)(param_1 + 0x120) >> 6 & 1);
  FUN_00641760(s_UsesBButton_0072e5c0,*(uint *)(param_1 + 0x120) >> 7 & 1);
  FUN_00641760(s_OneDirectional_0072e5b0,*(uint *)(param_1 + 0x120) >> 9 & 1);
  FUN_00641760(s_OneTimeShot_0072e5a4,*(uint *)(param_1 + 0x120) >> 5 & 1);
  FUN_00641760(s_CallUpdateInside_0072e590,*(uint *)(param_1 + 0x120) >> 0xe & 1);
  FUN_00641760(s_OrderIrrelevant_0072e580,*(uint *)(param_1 + 0x120) >> 10 & 1);
  FUN_00641760(s_MultItemsCanActivate_0072e568,*(uint *)(param_1 + 0x120) >> 0xb & 1);
  FUN_00641760(s_DisableOnFull_0072e558,*(uint *)(param_1 + 0x120) >> 0xc & 1);
  FUN_00641760(s_PlayerOnly_0072e54c,*(uint *)(param_1 + 0x120) >> 0x12 & 1);
  FUN_00641480(s_MaxItems_0072e540,*(undefined4 *)(param_1 + 0x14c));
  FUN_00641480(s_nActivators_0072e534,*(undefined4 *)(param_1 + 0x150));
  FUN_004e2b70(param_2);
  if ((*(byte *)(param_1 + 0x120) & 0x40) != 0) {
    FUN_006412c0();
    FUN_006408e0(s_ItemList_0072e528,*(undefined4 *)(param_1 + 0x160));
    iVar2 = 0;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x160)) {
      do {
        FUN_00641480(&DAT_0072e520,*(undefined4 *)(*(int *)(param_1 + 0x164) + iVar3 * 4));
        FUN_006412c0();
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x160));
    }
    FUN_006412c0();
    FUN_006408e0(s_ValidItems_0072e514,*(undefined4 *)(param_1 + 0x14c));
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14c)) {
      do {
        FUN_00641480(s_Number_0072e50c,*(undefined4 *)(*(int *)(param_1 + 0x19c) + 8 + iVar2));
        iVar3 = 0;
        if (0 < *(int *)(*(int *)(param_1 + 0x19c) + 8 + iVar2)) {
          do {
            FUN_00649920(&iStack_10,s_ValidItem_d_0072e500,iVar3);
            uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x19c) + 0xc + iVar2) + iVar3 * 4);
            uStack_4 = 0;
            uVar1 = FUN_00649940(uVar4);
            FUN_00641480(uVar1,uVar4);
            uStack_4 = 0xffffffff;
            FUN_00649950();
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(*(int *)(param_1 + 0x19c) + 8 + iVar2));
        }
        FUN_006412c0();
        param_2 = param_2 + 1;
        iVar2 = iVar2 + 0x1c;
      } while (param_2 < *(int *)(param_1 + 0x14c));
    }
    FUN_006412c0();
  }
  ExceptionList = local_c;
  return;
}

