
void __thiscall FUN_0046add0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x1c8);
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      piVar4 = (int *)FUN_00406bf0(*(undefined4 *)(*(int *)(param_1 + 0x1cc) + iVar6 * 8),
                                   *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 4 + iVar6 * 8));
      if (piVar4 != (int *)0x0) {
        if (param_2 == 0) {
          (**(code **)(*piVar4 + 0x100))();
          (**(code **)(*piVar4 + 0xf8))(1);
          uVar5 = (**(code **)(*piVar4 + 0x4c))();
          FUN_0064e870(6,s_Ending__s_conversation_mode__00726fcc,uVar5);
        }
        else {
          (**(code **)(*piVar4 + 0xf4))(*(uint *)(param_1 + 0x194) >> 4 & 1,1);
          uVar5 = (**(code **)(*piVar4 + 0x4c))();
          FUN_0064e870(6,s_Starting__s_conversation_mode__0072703c,uVar5);
          uVar2 = *(uint *)(param_1 + 0x194);
          if ((uVar2 & 0x10) == 0) {
            if (((char)piVar4[0x1f] == '\x12') && ((*(byte *)(param_1 + 0x196) & 1) != 0)) {
              FUN_0041c2b0(0);
              FUN_0064e870(6,s_CINEMA__Bilbo_Input_set_FALSE__n_00726ff0);
            }
          }
          else if ((char)piVar4[0x1f] == '\x12') {
            FUN_00423c90(uVar2 >> 6 & 1,1);
          }
          else if (piVar4[0x6c] < 0x10) {
            FUN_004a99a0(uVar2 >> 6 & 1);
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  if (((*(byte *)(param_1 + 0x194) & 0x10) == 0) && ((*(byte *)(param_1 + 0x196) & 1) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (param_2 == 0) {
    piVar4 = (int *)FUN_0041bcc0();
    (**(code **)(*piVar4 + 0xf8))(1);
    if (bVar3) {
      FUN_0064e870(6,s_Ending_bilbo_conversation_mode__s_00726f98);
      piVar4 = (int *)FUN_0041bcc0();
                    /* WARNING: Could not recover jumptable at 0x0046af39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar4 + 0x13c))();
      return;
    }
  }
  else if (bVar3) {
    piVar4 = (int *)FUN_0041bcc0();
    (**(code **)(*piVar4 + 0x13c))(0);
    FUN_0064e870(6,s_CINEMA__Setting_bilbo_to_team_0__00726f74);
  }
  return;
}

