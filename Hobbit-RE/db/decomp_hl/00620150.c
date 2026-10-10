
void __thiscall FUN_00620150(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_64;
  int *local_60;
  int local_5c;
  int *local_58;
  int local_54;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [48];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e49d3;
  local_c = ExceptionList;
  local_5c = 0;
  local_4c = 0;
  local_48 = 0;
  ExceptionList = &local_c;
  FUN_006499d0();
  local_4 = 0;
  FUN_0064a2e0(&DAT_00720670);
  local_14 = 0;
  local_10 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00640450(s_GuardElfCount_00749edc,&local_5c);
  local_54 = 0;
  if (0 < local_5c) {
    do {
      iVar2 = local_54;
      FUN_00649920(local_50,s_GuardElf_d_00749ed0,local_54);
      puVar5 = &local_4c;
      local_4._0_1_ = 2;
      uVar1 = FUN_00649940(puVar5);
      FUN_006405e0(uVar1,puVar5);
      local_4._0_1_ = 1;
      FUN_00649950();
      local_10 = local_48;
      local_64 = *(int *)(param_1 + 0x94);
      local_14 = local_4c;
      if (*(int *)(param_1 + 0x9c) < local_64 + 1) {
        iVar2 = *(int *)(param_1 + 0xa4);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x9c) / 2;
          iVar4 = 1;
          if (0 < iVar2) {
            iVar4 = iVar2;
          }
          if (0 < iVar4 + local_64) {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            goto LAB_00620278;
          }
          local_64 = 1;
        }
        else {
LAB_00620278:
          local_64 = local_64 + iVar2;
        }
        local_58 = (int *)operator_new(local_64 * 0x38 + 4);
        local_4._0_1_ = 3;
        if (local_58 == (int *)0x0) {
          local_60 = (int *)0x0;
        }
        else {
          local_60 = local_58 + 1;
          *local_58 = local_64;
          FUN_006c043b(local_60,0x38,local_64,FUN_006204a0,thunk_FUN_00649ba0);
        }
        local_4._0_1_ = 1;
        local_58 = (int *)0x0;
        if (0 < *(int *)(param_1 + 0x94)) {
          iVar2 = 0;
          piVar3 = local_60;
          do {
            iVar4 = *(int *)(param_1 + 0x98) + iVar2;
            FUN_0064a320(iVar4);
            piVar3[0xc] = *(int *)(iVar4 + 0x30);
            piVar3[0xd] = *(int *)(iVar4 + 0x34);
            local_58 = (int *)((int)local_58 + 1);
            iVar2 = iVar2 + 0x38;
            piVar3 = piVar3 + 0xe;
          } while ((int)local_58 < *(int *)(param_1 + 0x94));
        }
        iVar2 = *(int *)(param_1 + 0x98);
        if (iVar2 != 0) {
          FUN_006c026a(iVar2,0x38,*(undefined4 *)(iVar2 + -4),thunk_FUN_00649ba0);
          FUN_006bf840(iVar2 + -4);
        }
        *(int *)(param_1 + 0x9c) = local_64;
        *(int **)(param_1 + 0x98) = local_60;
        iVar2 = local_54;
      }
      iVar4 = *(int *)(param_1 + 0x94) * 0x38 + *(int *)(param_1 + 0x98);
      FUN_0064a320(local_44);
      *(undefined4 *)(iVar4 + 0x30) = local_14;
      *(undefined4 *)(iVar4 + 0x34) = local_10;
      local_54 = iVar2 + 1;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
    } while (local_54 < local_5c);
  }
  FUN_00640420(s_AttackDelay_00749ec4,param_1 + 0x5c);
  FUN_00640420(s_AttackRadius_00749eb4,param_1 + 100);
  FUN_00640420(s_AttackIdleRadius_00749ea0,param_1 + 0x68);
  FUN_00640420(s_AttackHeight_00749e90,param_1 + 0x6c);
  FUN_00640450(s_DoJumpAttack_00749e80,param_1 + 0x70);
  FUN_00640420(s_JumpAttackRadius_00749e6c,param_1 + 0x74);
  FUN_00640420(s_MinJumpAttackRadius_00749e58,param_1 + 0x78);
  FUN_00640420(s_AttackTimeoutDuration_00749e40,param_1 + 0x80);
  FUN_005bf550(param_2);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

