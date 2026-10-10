
void FUN_00567080(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *local_20;
  int local_1c;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db0fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_AIGoal__EnumerateProperties_0073f580);
  local_4 = 0;
  FUN_00649920(local_14,s_AI_Tweaks_Goal_List__d_Goal__d_M_0073f554,param_1,param_2);
  local_4._0_1_ = 1;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    param_2 = *(int *)(param_3 + 8);
    if (*(int *)(param_3 + 0x10) < param_2 + 1) {
      if (*(int *)(param_3 + 0x18) == 0) {
        iVar2 = *(int *)(param_3 + 0x10) / 2;
        iVar4 = 1;
        if (0 < iVar2) {
          iVar4 = iVar2;
        }
        if (param_2 + iVar4 < 1) {
          param_2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          param_2 = param_2 + iVar2;
        }
      }
      else {
        param_2 = *(int *)(param_3 + 0x18) + param_2;
      }
      local_20 = (undefined1 *)operator_new(param_2 * 0x108);
      local_4._0_1_ = 2;
      if (local_20 == (undefined1 *)0x0) {
        local_20 = (undefined1 *)0x0;
      }
      else {
        iVar4 = param_2;
        if (-1 < param_2 + -1) {
          do {
            FUN_00406a80();
            FUN_00406a80();
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      local_4._0_1_ = 1;
      local_1c = 0;
      if (0 < *(int *)(param_3 + 8)) {
        param_1 = 0;
        puVar5 = local_20;
        do {
          iVar4 = *(int *)(param_3 + 0xc) + param_1;
          iVar2 = 0x80;
          puVar3 = puVar5;
          do {
            *puVar3 = puVar3[iVar4 - (int)puVar5];
            puVar3 = puVar3 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          *(undefined4 *)(puVar5 + 0x80) = *(undefined4 *)(iVar4 + 0x80);
          *(undefined4 *)(puVar5 + 0x84) = *(undefined4 *)(iVar4 + 0x84);
          FUN_00480f60(iVar4 + 0x88);
          FUN_00480f60(iVar4 + 0xa0);
          FUN_00480f20(iVar4 + 0xb8);
          FUN_00480f60(iVar4 + 0xc0);
          FUN_00480f60(iVar4 + 0xd8);
          *(undefined4 *)(puVar5 + 0xf0) = *(undefined4 *)(iVar4 + 0xf0);
          *(undefined4 *)(puVar5 + 0xf4) = *(undefined4 *)(iVar4 + 0xf4);
          *(undefined4 *)(puVar5 + 0xf8) = *(undefined4 *)(iVar4 + 0xf8);
          *(undefined4 *)(puVar5 + 0xfc) = *(undefined4 *)(iVar4 + 0xfc);
          *(undefined4 *)(puVar5 + 0x100) = *(undefined4 *)(iVar4 + 0x100);
          *(undefined4 *)(puVar5 + 0x104) = *(undefined4 *)(iVar4 + 0x104);
          param_1 = param_1 + 0x108;
          local_1c = local_1c + 1;
          puVar5 = puVar5 + 0x108;
        } while (local_1c < *(int *)(param_3 + 8));
      }
      FUN_006bf840(*(undefined4 *)(param_3 + 0xc));
      *(undefined1 **)(param_3 + 0xc) = local_20;
      *(int *)(param_3 + 0x10) = param_2;
    }
    iVar4 = *(int *)(param_3 + 8) + 1;
    *(int *)(param_3 + 8) = iVar4;
    iVar4 = iVar4 * 0x108 + -0x108 + *(int *)(param_3 + 0xc);
    *(undefined4 *)(iVar4 + 0x80) = 3;
    FUN_00647d10(iVar4,uVar1);
    *(undefined4 *)(iVar4 + 0x84) = 2;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

