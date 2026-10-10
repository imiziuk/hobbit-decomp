
/* WARNING: Removing unreachable block (ram,0x0046a668) */
/* WARNING: Removing unreachable block (ram,0x0046a676) */
/* WARNING: Removing unreachable block (ram,0x0046a699) */

void __fastcall FUN_0046a550(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = *(uint *)(param_1 + 0x194);
  if ((uVar1 & 4) != 0) {
    FUN_0064e870(6,s_Attempted_to_start_a_cinema_that_00726e14);
    return;
  }
  if (((uVar1 & 2) != 0) && ((uVar1 & 1) == 0)) {
    FUN_0064e870(6,s_Attempted_to_restart_a_finished__00726dd8);
    return;
  }
  piVar2 = (int *)FUN_0041bcc0();
  iVar3 = (**(code **)(*piVar2 + 0x108))(1);
  if (iVar3 == 0) {
    FUN_0064e870(6,s_Attempted_to_start_a_cinema_when_00726da4);
    FUN_0064e870(6,s_Deleting_Cinema_Queue____00726d88);
    if (DAT_0075ccf0 == 0) {
      FUN_006bf840(DAT_0075cce8);
      DAT_0075cce8 = (int *)0x0;
      DAT_0075ccec = 0;
    }
    DAT_0075cce4 = 0;
    FUN_0064e870(6,s_Clearing_Cinema_Queue_due_to_dea_00726d5c);
    return;
  }
  FUN_00473410();
  *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) & 0xffdbffff | 0xa0000;
  iVar3 = FUN_00472ec0();
  if (iVar3 != 0) {
    return;
  }
  if (((*(uint *)(param_1 + 0x194) & 0x100000) != 0) && (0 < DAT_0075cce4)) {
    if (1 < DAT_0075cce4) {
      DAT_0075cce4 = 1;
      FUN_0064e870(6,s_BYPASS_QUEUE_CINEMA__Deleting_al_00726d24);
    }
    FUN_004021c0(*DAT_0075cce8,DAT_0075cce8[1]);
    FUN_0064e870(6,s_BYPASS_QUEUE_CINEMA__Skipping_cu_00726cf4);
    thunk_FUN_00473020();
  }
  if (((*(byte *)(param_1 + 0x197) & 1) != 0) && (iVar3 = FUN_00472df0(), iVar3 != 0)) {
    return;
  }
  iVar3 = FUN_00472f00();
  if (iVar3 != 0) {
    iVar3 = FUN_004021c0(DAT_0075cd00,DAT_0075cd04);
    FUN_0064e870(6,s_LOW_PRIORITY_CINEMA__Skipping___00726cd0);
    if (iVar3 != 0) {
      thunk_FUN_00473020();
    }
  }
  iVar3 = *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = 0;
  if (0 < DAT_0075cce4) {
    do {
      if ((DAT_0075cce8[iVar4 * 2] == iVar5) && (DAT_0075cce8[iVar4 * 2 + 1] == iVar3)) {
        if (iVar4 != -1) goto LAB_0046a874;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_0075cce4);
  }
  iStack_1c = iVar5;
  iStack_18 = iVar3;
  if (DAT_0075ccec < DAT_0075cce4 + 1) {
    if (DAT_0075ccf4 == 0) {
      iVar3 = DAT_0075ccec / 2;
      iVar5 = 1;
      if (0 < iVar3) {
        iVar5 = iVar3;
      }
      if (iVar5 + DAT_0075cce4 < 1) {
        iVar3 = 1;
      }
      else {
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        iVar3 = iVar3 + DAT_0075cce4;
      }
    }
    else {
      iVar3 = DAT_0075cce4 + DAT_0075ccf4;
    }
    piVar2 = (int *)operator_new(iVar3 * 8);
    iVar5 = 0;
    if (0 < DAT_0075cce4) {
      do {
        piVar2[iVar5 * 2] = DAT_0075cce8[iVar5 * 2];
        piVar2[iVar5 * 2 + 1] = DAT_0075cce8[iVar5 * 2 + 1];
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_0075cce4);
    }
    FUN_006bf840(DAT_0075cce8);
    DAT_0075cce8 = piVar2;
    DAT_0075ccec = iVar3;
  }
  DAT_0075cce8[DAT_0075cce4 * 2] = iStack_1c;
  DAT_0075cce8[DAT_0075cce4 * 2 + 1] = iStack_18;
  DAT_0075cce4 = DAT_0075cce4 + 1;
LAB_0046a874:
  if (*DAT_0075cce8 != *(int *)(param_1 + 8)) {
    return;
  }
  if (DAT_0075cce8[1] != *(int *)(param_1 + 0xc)) {
    return;
  }
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xf7;
  FUN_0064e870(6,s__________________________________00726c88);
  *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) | 4;
  DAT_0075cd00 = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x18e) = *(undefined2 *)(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  DAT_0075cd04 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  if ((*(byte *)(param_1 + 0x194) & 0x10) != 0) {
    FUN_0041bcc0();
    iVar3 = FUN_00423c80();
    *(uint *)(param_1 + 0x194) =
         (iVar3 << 10 ^ *(uint *)(param_1 + 0x194)) & 0x400 ^ *(uint *)(param_1 + 0x194);
  }
  FUN_0041bcc0();
  FUN_00423e20();
  uVar1 = *(uint *)(param_1 + 0x194);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x2000) != 0) {
      FUN_0041bcc0();
      FUN_00422c40();
      goto LAB_0046a95c;
    }
    if ((uVar1 & 0x4000) != 0) {
      FUN_0041bcc0();
      FUN_00422be0();
      goto LAB_0046a95c;
    }
    if ((uVar1 & 0x1000) == 0) goto LAB_0046a95c;
  }
  FUN_0041bcc0();
  FUN_00422b80();
LAB_0046a95c:
  FUN_0065b0f0();
  FUN_0046add0(1);
  iVar3 = *(int *)(param_1 + 0xe8);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0xec) + iVar5 * 4) + 0x30);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x30))();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x118) + 0x30))();
  (**(code **)(*(int *)(param_1 + 0x150) + 0x30))();
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xb0)) {
    do {
      FUN_00472b20(iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xb0));
  }
  if (DAT_0075cf1c != 0) {
    uStack_14 = *(undefined4 *)(param_1 + 8);
    uStack_10 = *(undefined4 *)(param_1 + 0xc);
    iStack_1c = 0x12;
    FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),&iStack_1c);
  }
  return;
}

