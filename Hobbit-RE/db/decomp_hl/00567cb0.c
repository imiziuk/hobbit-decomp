
void __thiscall FUN_00567cb0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db1d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_GoalFace__EnumerateProperties_0073f604);
  iVar2 = param_4;
  iVar8 = param_3;
  local_4 = 0;
  FUN_00567080(param_2,param_3,param_4);
  if (DAT_007723a0 <= *(uint *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x18) = 0x2f;
  }
  FUN_00649920(&param_3,s_AI_Tweaks_Goal_List__d_Goal__d_T_0073f5d8,param_2,iVar8);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_4 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0xc;
    FUN_00647d10(iVar3,param_4);
    *(undefined4 *)(iVar3 + 0x84) = 0x10;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = DAT_007723bc;
    *(undefined **)(iVar3 + 0x100) = &DAT_007723b4;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649950();
  uVar1 = *(undefined4 *)(DAT_007723a4 + *(int *)(param_1 + 0x18) * 4);
  FUN_00649920(local_14,s_AI_Tweaks_Goal_List__d_Goal__d_T_0073f5b0,param_2,iVar8);
  local_4._0_1_ = 2;
  uVar4 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar8 = *(int *)(iVar2 + 8);
    if (*(int *)(iVar2 + 0x10) < iVar8 + 1) {
      if (*(int *)(iVar2 + 0x18) == 0) {
        iVar5 = *(int *)(iVar2 + 0x10) / 2;
        iVar3 = 1;
        if (0 < iVar5) {
          iVar3 = iVar5;
        }
        if (iVar3 + iVar8 < 1) {
          iVar8 = 1;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          iVar8 = iVar8 + iVar5;
        }
      }
      else {
        iVar8 = *(int *)(iVar2 + 0x18) + iVar8;
      }
      param_4 = iVar8;
      puVar6 = (undefined1 *)operator_new(iVar8 * 0x108);
      local_4._0_1_ = 3;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        iVar3 = iVar8;
        if (-1 < iVar8 + -1) {
          do {
            FUN_00406a80();
            FUN_00406a80();
            FUN_0041def0();
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_4._0_1_ = 2;
      param_3 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        param_2 = 0;
        puVar9 = puVar6;
        do {
          iVar3 = *(int *)(iVar2 + 0xc) + param_2;
          iVar8 = 0x80;
          puVar7 = puVar9;
          do {
            *puVar7 = puVar7[iVar3 - (int)puVar9];
            puVar7 = puVar7 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          *(undefined4 *)(puVar9 + 0x80) = *(undefined4 *)(iVar3 + 0x80);
          *(undefined4 *)(puVar9 + 0x84) = *(undefined4 *)(iVar3 + 0x84);
          FUN_00480df0(iVar3 + 0x88);
          *(undefined4 *)(puVar9 + 0x100) = *(undefined4 *)(iVar3 + 0x100);
          *(undefined4 *)(puVar9 + 0x104) = *(undefined4 *)(iVar3 + 0x104);
          param_3 = param_3 + 1;
          param_2 = param_2 + 0x108;
          puVar9 = puVar9 + 0x108;
          iVar8 = param_4;
        } while (param_3 < *(int *)(iVar2 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar2 + 0xc));
      *(undefined1 **)(iVar2 + 0xc) = puVar6;
      *(int *)(iVar2 + 0x10) = iVar8;
    }
    iVar8 = *(int *)(iVar2 + 8) + 1;
    *(int *)(iVar2 + 8) = iVar8;
    iVar8 = iVar8 * 0x108 + -0x108 + *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar8 + 0x80) = 0xf;
    FUN_00647d10(iVar8,uVar4);
    *(undefined4 *)(iVar8 + 0x84) = 0;
    *(undefined4 *)(iVar8 + 0x100) = uVar1;
    *(undefined4 *)(iVar8 + 0x104) = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

