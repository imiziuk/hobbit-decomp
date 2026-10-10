
undefined4 __fastcall FUN_006a8790(int param_1)

{
  short sVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int extraout_ECX;
  short *psVar5;
  undefined2 *extraout_EDX;
  int extraout_EDX_00;
  undefined2 *puVar6;
  short *extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int extraout_EDX_03;
  int iVar7;
  undefined1 local_a4 [76];
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7e40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_ui_font__RenderText_00755f2c);
  iVar2 = *(int *)(param_1 + 0x48);
  local_4 = 0;
  if (iVar2 == 0) {
    local_4 = 0xffffffff;
    FUN_006501e0();
    uVar4 = 4;
  }
  else {
    sVar1 = **(short **)(param_1 + 4);
    cVar3 = FUN_006a7c30(sVar1);
    if (cVar3 == '\0') {
      cVar3 = FUN_006a7c10(sVar1);
      if (cVar3 == '\0') {
        if (sVar1 == 0x3c) {
          iVar7 = 0;
          psVar5 = extraout_EDX_01;
          if (0 < iVar2) {
            do {
              iVar7 = iVar7 + 1;
              if (*psVar5 == 0x3e) break;
              psVar5 = psVar5 + 1;
            } while (iVar7 < iVar2);
          }
          uVar4 = FUN_0064b270(local_a4,iVar7);
          local_4._0_1_ = 5;
          FUN_0064b7f0(uVar4);
          local_4._0_1_ = 0;
          FUN_0064b190();
          uVar4 = FUN_0064b240(local_a4,iVar7,iVar2 - iVar7);
          local_4._0_1_ = 6;
          FUN_0064b7f0(uVar4);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_0064b190();
          local_4 = 0xffffffff;
          FUN_006501e0();
          uVar4 = 1;
        }
        else {
          iVar7 = 0;
          psVar5 = extraout_EDX_01;
          if (0 < iVar2) {
            do {
              cVar3 = FUN_006a7c30(*psVar5);
              if (((cVar3 != '\0') || (cVar3 = FUN_006a7c10(extraout_EDX_02), cVar3 != '\0')) ||
                 (extraout_EDX_03 == 0x3c)) {
                uVar4 = FUN_0064b270(local_a4,iVar7);
                local_4._0_1_ = 7;
                FUN_0064b7f0(uVar4);
                local_4._0_1_ = 0;
                FUN_0064b190();
                uVar4 = FUN_0064b240(local_58,iVar7,iVar2 - iVar7);
                local_4._0_1_ = 8;
                FUN_0064b7f0(uVar4);
                local_4 = (uint)local_4._1_3_ << 8;
                FUN_0064b190();
                goto LAB_006a8a56;
              }
              iVar7 = iVar7 + 1;
              psVar5 = psVar5 + 1;
            } while (iVar7 < iVar2);
          }
          FUN_0064b7f0(param_1 + 4);
          FUN_0064b1c0();
LAB_006a8a56:
          local_4 = 0xffffffff;
          FUN_006501e0();
          uVar4 = 0;
        }
      }
      else {
        iVar7 = 0;
        psVar5 = extraout_EDX_01;
        if (0 < iVar2) {
          do {
            cVar3 = FUN_006a7c10(*psVar5);
            if (cVar3 == '\0') break;
            iVar7 = iVar7 + 1;
            psVar5 = (short *)(extraout_ECX + 2);
          } while (iVar7 < iVar2);
        }
        uVar4 = FUN_0064b270(local_a4,iVar7);
        local_4._0_1_ = 3;
        FUN_0064b7f0(uVar4);
        local_4._0_1_ = 0;
        FUN_0064b190();
        uVar4 = FUN_0064b240(local_a4,iVar7,iVar2 - iVar7);
        local_4._0_1_ = 4;
        FUN_0064b7f0(uVar4);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0064b190();
        local_4 = 0xffffffff;
        FUN_006501e0();
        uVar4 = 3;
      }
    }
    else {
      iVar7 = 0;
      puVar6 = extraout_EDX;
      if (0 < iVar2) {
        do {
          cVar3 = FUN_006a7c30(*puVar6);
          if (cVar3 == '\0') break;
          iVar7 = iVar7 + 1;
          puVar6 = (undefined2 *)(extraout_EDX_00 + 2);
        } while (iVar7 < iVar2);
      }
      uVar4 = FUN_0064b270(local_a4,iVar7);
      local_4._0_1_ = 1;
      FUN_0064b7f0(uVar4);
      local_4._0_1_ = 0;
      FUN_0064b190();
      uVar4 = FUN_0064b240(local_a4,iVar7,iVar2 - iVar7);
      local_4._0_1_ = 2;
      FUN_0064b7f0(uVar4);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0064b190();
      local_4 = 0xffffffff;
      FUN_006501e0();
      uVar4 = 2;
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

