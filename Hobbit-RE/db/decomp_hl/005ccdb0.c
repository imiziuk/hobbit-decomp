
undefined4 * __thiscall FUN_005ccdb0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_718 [4];
  undefined4 local_714;
  undefined4 local_70c [128];
  undefined1 local_50c [12];
  undefined1 local_500 [12];
  undefined1 local_4f4 [4];
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined1 local_4e4 [16];
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined1 local_4b4 [580];
  undefined4 local_270;
  undefined4 local_26c;
  int local_268;
  undefined4 local_264;
  undefined1 local_25c [588];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dfad7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_718,s_AIManager_Actions_Action__d_Exec_007466b4,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_26c = *(undefined4 *)(param_1 + 0x10);
    local_4bc = 2;
    *param_2 = 2;
    FUN_00424770(local_4b4);
  }
  else {
    FUN_00649920(local_718,s_AIManager_Actions_Action__d_Exec_00746684,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_268 = (*(int *)(param_1 + 0x14) << 0x1f) >> 0x1f;
      local_4bc = 3;
      *param_2 = 3;
      FUN_00424770(local_4b4);
    }
    else {
      FUN_00649920(local_718,s_AIManager_Actions_Action__d_Curr_00746650,
                   *(undefined4 *)(param_1 + 4));
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00406a80();
        local_26c = *(undefined4 *)(param_1 + 0xc);
        local_4bc = 2;
        *param_2 = 2;
        FUN_00424770(local_4b4);
      }
      else {
        FUN_00649920(local_718,s_AIManager_Actions_Action__d_Time_00746624,
                     *(undefined4 *)(param_1 + 4));
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00406a80();
          local_270 = *(undefined4 *)(param_1 + 8);
          local_4bc = 1;
          *param_2 = 1;
          FUN_00424770(local_4b4);
        }
        else {
          FUN_00649920(local_718,s_AIManager_Actions_Action__d_Tryi_007465f4,
                       *(undefined4 *)(param_1 + 4));
          local_4 = 4;
          uVar1 = FUN_00649940();
          iVar2 = FUN_00647e40(param_3,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar2 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_10 = (*(int *)(param_1 + 0x14) << 0x1e) >> 0x1f;
            local_264 = 3;
            *param_2 = 3;
            FUN_00424770(local_25c);
          }
          else {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_714 = 0;
            *param_2 = 0;
            puVar3 = local_70c;
            puVar4 = param_2 + 2;
            for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            FUN_004357e0(local_50c);
            FUN_004357e0(local_500);
            FUN_00425250(local_4f4);
            param_2[0x89] = local_4f0;
            param_2[0x8b] = local_4e8;
            param_2[0x8a] = local_4ec;
            FUN_004357e0(local_4e4);
            param_2[0x90] = local_4d4;
            param_2[0x91] = local_4d0;
            param_2[0x92] = local_4cc;
            param_2[0x93] = local_4c8;
            param_2[0x94] = local_4c4;
            param_2[0x95] = local_4c0;
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
}

