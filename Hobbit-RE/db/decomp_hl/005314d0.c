
void __thiscall FUN_005314d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_74;
  int local_70;
  undefined1 local_6c [8];
  undefined4 local_64;
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d89ac;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00649920(local_6c,s_music_mgr__UnLoadPackage__s_00736eb0,param_2);
  local_4._0_1_ = 1;
  uVar1 = FUN_00649940();
  FUN_006501d0(uVar1);
  local_4._0_1_ = 3;
  FUN_00649950();
  FUN_00649b60(&param_2);
  local_4._0_1_ = 4;
  uVar1 = FUN_005496c0(local_64,s_Audio_0071ce88);
  FUN_00649b20(uVar1);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_006581c0(local_38);
  FUN_00649bd0();
  local_74 = 0;
  if (0 < *(int *)(param_1 + 0xbc)) {
    do {
      iVar3 = local_74 * 4;
      iVar2 = FUN_00647ed0(*(undefined4 *)(*(int *)(iVar3 + *(int *)(param_1 + 0xc0)) + 4),local_64)
      ;
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar3 + *(int *)(param_1 + 0xc0));
        iVar4 = (*(int *)(param_1 + 0xbc) - local_74) + -1;
        if (0 < iVar4) {
          do {
            *(undefined4 *)(iVar3 + *(int *)(param_1 + 0xc0)) =
                 *(undefined4 *)(iVar3 + 4 + *(int *)(param_1 + 0xc0));
            iVar3 = iVar3 + 4;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + -1;
        iVar3 = *(int *)(iVar2 + 100);
        while (0 < iVar3) {
          iVar3 = 0;
          iVar4 = **(int **)(iVar2 + 0x68);
          local_70 = *(int *)(iVar2 + 100) + -1;
          if (0 < local_70) {
            do {
              *(undefined4 *)(iVar3 + *(int *)(iVar2 + 0x68)) =
                   *(undefined4 *)(iVar3 + 4 + *(int *)(iVar2 + 0x68));
              iVar3 = iVar3 + 4;
              local_70 = local_70 + -1;
            } while (local_70 != 0);
          }
          *(int *)(iVar2 + 100) = *(int *)(iVar2 + 100) + -1;
          if (iVar4 != 0) {
            local_4._1_3_ = (uint3)((uint)local_4 >> 8);
            local_4._0_1_ = 7;
            FUN_005c8440();
            local_4._0_1_ = 6;
            FUN_005c8440();
            local_4 = CONCAT31(local_4._1_3_,5);
            FUN_00649ba0();
            FUN_006bf840(iVar4);
          }
          iVar3 = *(int *)(iVar2 + 100);
        }
        if (*(int *)(iVar2 + 0x70) == 0) {
          FUN_006bf840(*(undefined4 *)(iVar2 + 0x68));
          *(undefined4 *)(iVar2 + 0x68) = 0;
          *(undefined4 *)(iVar2 + 0x6c) = 0;
        }
        *(undefined4 *)(iVar2 + 100) = 0;
        FUN_0064e870(7,s_UnLoaded_Package___s__00736e98,*(undefined4 *)(iVar2 + 4));
        local_4._0_1_ = 10;
        FUN_005b6470();
        local_4._0_1_ = 9;
        FUN_005c8440();
        local_4._0_1_ = 8;
        FUN_00649ba0();
        local_4 = CONCAT31(local_4._1_3_,5);
        FUN_00649ba0();
        FUN_006bf840(iVar2);
        local_74 = local_74 + -1;
      }
      local_74 = local_74 + 1;
    } while (local_74 < *(int *)(param_1 + 0xbc));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      iVar2 = iVar3 * 4;
      iVar4 = FUN_00647ed0(**(undefined4 **)(iVar2 + *(int *)(param_1 + 0xdc)),local_64);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar2 + *(int *)(param_1 + 0xdc));
        iVar5 = (*(int *)(param_1 + 0xd8) - iVar3) + -1;
        if (0 < iVar5) {
          do {
            *(undefined4 *)(iVar2 + *(int *)(param_1 + 0xdc)) =
                 *(undefined4 *)(iVar2 + 4 + *(int *)(param_1 + 0xdc));
            iVar2 = iVar2 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + -1;
        if (iVar4 != 0) {
          FUN_00649ba0();
          FUN_006bf840(iVar4);
        }
        iVar3 = iVar3 + -1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xd8));
  }
  FUN_005321f0();
  local_4._0_1_ = 4;
  FUN_00649ba0();
  local_4._0_1_ = 3;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006501e0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

