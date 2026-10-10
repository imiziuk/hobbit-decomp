
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00410c80(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int local_bc;
  undefined4 *local_b8;
  uint *local_b4;
  undefined4 *local_b0;
  uint local_ac;
  uint local_a8;
  uint local_94;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cee21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053f530(0xe1000);
  FUN_00647d10(param_1 + 4,s_Ch01_Hobbiton_0071ee70);
  _DAT_0072a8f0 = 0x459c4000;
  uVar4 = FUN_005496c0(s_SFX_Pony_audiopkg_0071d738,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Wolves_audiopkg_0071d724,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Chapter01_audiopkg_0071ee58,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Hobbits_audiopkg_0071ee40,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_GUI_audiopkg_0071cde8,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Player_audiopkg_0071cdd4,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_Weapons_audiopkg_0071cdbc,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  uVar4 = FUN_005496c0(s_SFX_AMB_Chapter01_audiopkg_0071ee24,s_Audio_0071ce88);
  FUN_00658080(uVar4);
  FUN_00419620(local_8c,s_DX_CH01_PC_audiopkg_0071ee10);
  FUN_00658080(local_8c);
  FUN_0054e6d0(s_CH_01_Hobbiton_SubTitles_bin_0071edf0);
  puVar9 = (uint *)(param_1 + 0x1c8);
  uVar10 = FUN_0054c210(s_Inst_Htown_Apple_0071eddc,1);
  *(undefined8 *)puVar9 = uVar10;
  uVar10 = FUN_0054c210(s_Inst_Htown_Apple010_0071edc8,1);
  *(undefined8 *)(param_1 + 0x1d0) = uVar10;
  uVar10 = FUN_0054c210(s_Inst_Htown_Apple011_0071edb4,1);
  *(undefined8 *)(param_1 + 0x1d8) = uVar10;
  uVar10 = FUN_0054c210(s_Apple_0071edac,1);
  *(undefined8 *)(param_1 + 0x1e0) = uVar10;
  uVar10 = FUN_0054c210(s_Apple002_0071eda0,1);
  *(undefined8 *)(param_1 + 0x1e8) = uVar10;
  uVar10 = FUN_0054c210(s_Apple001_0071ed94,1);
  *(undefined8 *)(param_1 + 0x1f0) = uVar10;
  uVar10 = FUN_0054c210(s_Apple_Trigger_0071ed84,1);
  *(undefined8 *)(param_1 + 0x1f8) = uVar10;
  uVar10 = FUN_0054c210(s_Apple_Trigger2_0071ed74,1);
  *(undefined8 *)(param_1 + 0x200) = uVar10;
  uVar10 = FUN_0054c210(s_Apple_Trigger1_0071ed64,1);
  local_b0 = (undefined4 *)(param_1 + 600);
  local_b8 = (undefined4 *)(param_1 + 0x23c);
  *(undefined8 *)(param_1 + 0x208) = uVar10;
  local_bc = 3;
  do {
    uVar2 = puVar9[6];
    uVar3 = puVar9[7];
    local_b4 = puVar9;
    local_ac = uVar2;
    local_a8 = uVar3;
    FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
    iVar5 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
    for (iVar6 = iVar5; iVar6 != -1; iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe)) {
    }
    while (iVar5 != -1) {
      piVar1 = (int *)(DAT_0076f648 + iVar5 * 0x14);
      iVar6 = *piVar1;
      if (((iVar6 != 0) && (*(uint *)(iVar6 + 8) == local_ac)) &&
         (*(uint *)(iVar6 + 0xc) == local_a8)) {
        if (iVar5 != -1) {
          piVar1 = *(int **)(DAT_0076f648 + iVar5 * 0x14);
          local_4 = 0xffffffff;
          FUN_00649720();
          if (piVar1 != (int *)0x0) {
            puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
            local_b8[-2] = *puVar7;
            local_b8[-1] = puVar7[1];
            *local_b8 = puVar7[2];
            FUN_004d22c0(1);
            *(byte *)((int)piVar1 + 0x7f) = *(byte *)((int)piVar1 + 0x7f) & 0xfe ^ 1;
          }
          goto LAB_00411012;
        }
        break;
      }
      iVar5 = (int)*(short *)((int)piVar1 + 0xe);
    }
    local_4 = 0xffffffff;
    FUN_00649720();
LAB_00411012:
    uVar2 = *puVar9;
    uVar3 = puVar9[1];
    local_94 = uVar2;
    FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
    iVar5 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
    for (iVar6 = iVar5; iVar6 != -1; iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe)) {
    }
    while (iVar5 != -1) {
      piVar1 = (int *)(DAT_0076f648 + iVar5 * 0x14);
      iVar6 = *piVar1;
      if (((iVar6 != 0) && (*(uint *)(iVar6 + 8) == local_94)) && (*(uint *)(iVar6 + 0xc) == uVar3))
      {
        if (iVar5 != -1) {
          piVar1 = *(int **)(DAT_0076f648 + iVar5 * 0x14);
          local_4 = 0xffffffff;
          FUN_00649720();
          if (piVar1 != (int *)0x0) {
            puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
            local_b8[-0xb] = *puVar7;
            local_b8[-10] = puVar7[1];
            local_b8[-9] = puVar7[2];
            FUN_004d22c0(0);
            *(byte *)((int)piVar1 + 0x7f) = *(byte *)((int)piVar1 + 0x7f) & 0xfe ^ 1;
          }
          goto LAB_00411101;
        }
        break;
      }
      iVar5 = (int)*(short *)((int)piVar1 + 0xe);
    }
    local_4 = 0xffffffff;
    FUN_00649720();
LAB_00411101:
    local_b0[3] = 0;
    *local_b0 = 0;
    local_b0 = local_b0 + 1;
    puVar9 = local_b4 + 2;
    local_b8 = local_b8 + 3;
    local_bc = local_bc + -1;
    if (local_bc == 0) {
      iVar6 = 0;
      puVar8 = (undefined8 *)(param_1 + 0x120);
      puVar7 = (undefined4 *)(param_1 + 0x174);
      local_bc = 0;
      local_b4 = puVar9;
      do {
        iVar6 = iVar6 + 1;
        puVar7[0xe] = 0;
        *puVar7 = 0;
        puVar7[7] = 0;
        FUN_00649920(&local_bc,s_LilyPad00_d_0071ed58,iVar6);
        uVar11 = 1;
        local_4 = 2;
        uVar4 = FUN_00649940(1);
        uVar10 = FUN_0054c210(uVar4,uVar11);
        *puVar8 = uVar10;
        local_4 = 0xffffffff;
        FUN_00649950();
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar6 < 7);
      uVar10 = FUN_0054c210(&DAT_0071ed50,1);
      *(undefined8 *)(param_1 + 0x158) = uVar10;
      *(undefined4 *)(param_1 + 0x168) = 0;
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(undefined4 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x170) = 0;
      *(undefined4 *)(param_1 + 0x16c) = 0;
      FUN_00548de0(s_LILYPADSCRIPT_XSC_0071ed3c);
      FUN_00548de0(s_APPLE_SCRIPT_XSC_0071ed28);
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

