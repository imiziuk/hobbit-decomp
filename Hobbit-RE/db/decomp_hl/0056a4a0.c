
void FUN_0056a4a0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db49b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_GoalSendMessage__EnumerateProper_0073f84c);
  local_4 = 0;
  FUN_00567080(param_1,param_2,param_3);
  FUN_0056a120();
  FUN_00649920(local_14,s_AI_Tweaks_Goal_List__d_Goal__d_M_0073f820,param_1,param_2);
  local_4._0_1_ = 1;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar6 = *(int *)(param_3 + 8);
    if (*(int *)(param_3 + 0x10) < iVar6 + 1) {
      if (*(int *)(param_3 + 0x18) == 0) {
        iVar3 = *(int *)(param_3 + 0x10) / 2;
        iVar7 = 1;
        if (0 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar6 + iVar7 < 1) {
          iVar6 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar6 = iVar6 + iVar3;
        }
      }
      else {
        iVar6 = iVar6 + *(int *)(param_3 + 0x18);
      }
      puVar4 = (undefined1 *)operator_new(iVar6 * 0x108);
      local_4._0_1_ = 2;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        iVar7 = iVar6;
        if (-1 < iVar6 + -1) {
          do {
            FUN_00406a80();
            FUN_00406a80();
            FUN_0041def0();
            FUN_0041def0();
            FUN_0041def0();
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      local_4._0_1_ = 1;
      param_1 = 0;
      if (0 < *(int *)(param_3 + 8)) {
        param_3 = 0;
        puVar8 = puVar4;
        do {
          iVar3 = *(int *)(iVar1 + 0xc) + param_3;
          iVar7 = 0x80;
          puVar5 = puVar8;
          do {
            *puVar5 = puVar5[iVar3 - (int)puVar8];
            puVar5 = puVar5 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          *(undefined4 *)(puVar8 + 0x80) = *(undefined4 *)(iVar3 + 0x80);
          *(undefined4 *)(puVar8 + 0x84) = *(undefined4 *)(iVar3 + 0x84);
          FUN_00480df0(iVar3 + 0x88);
          *(undefined4 *)(puVar8 + 0x100) = *(undefined4 *)(iVar3 + 0x100);
          *(undefined4 *)(puVar8 + 0x104) = *(undefined4 *)(iVar3 + 0x104);
          param_1 = param_1 + 1;
          param_3 = param_3 + 0x108;
          puVar8 = puVar8 + 0x108;
        } while (param_1 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(undefined1 **)(iVar1 + 0xc) = puVar4;
      *(int *)(iVar1 + 0x10) = iVar6;
    }
    iVar6 = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 8) = iVar6;
    iVar1 = iVar6 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0x80) = 0xc;
    FUN_00647d10(iVar1,uVar2);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = DAT_007722f0;
    *(undefined **)(iVar1 + 0x100) = &DAT_007722e8;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

