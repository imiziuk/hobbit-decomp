
void __fastcall FUN_004de340(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 auStack_10 [2];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_0064e870(3,s_SelsetSendMessage_called_0072e4e4);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x128)) {
    do {
      piVar1 = (int *)FUN_00406bf0(*(undefined4 *)(*(int *)(param_1 + 300) + iVar3 * 8),
                                   *(undefined4 *)(*(int *)(param_1 + 300) + 4 + iVar3 * 8));
      if (piVar1 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar1 + 0x4c))();
        FUN_0064e870(3,s_SelsetSendMessage_found_target_o_0072e4b8,uVar2);
        uStack_8 = *(undefined4 *)(param_1 + 8);
        uStack_4 = *(undefined4 *)(param_1 + 0xc);
        auStack_10[0] = 0xe;
        (**(code **)(*piVar1 + 0xa8))(auStack_10);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x128));
  }
  return;
}

