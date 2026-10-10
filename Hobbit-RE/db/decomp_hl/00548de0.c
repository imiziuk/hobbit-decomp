
undefined4 __thiscall FUN_00548de0(int param_1,undefined4 param_2)

{
  short *psVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char *local_51c;
  int local_518;
  undefined1 local_514 [8];
  char local_50c;
  char local_50b [255];
  undefined1 local_40c [1024];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9617;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_rsc_mgr__Load_0073cae0);
  local_4 = 0;
  FUN_00649600(s_rsc_mgr__Load_0073cae0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005484f0(param_2,&local_50c,1);
  if ((DAT_0076cd7c != 0) &&
     (iVar5 = FUN_00647f90(&local_50c,s_INST_COURAGEPOINT_1_ENEMY_RGEOM_0073c898), iVar5 != 0)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  uVar7 = FUN_00548c90(&local_50c);
  if (uVar7 == 0xffffffff) {
    uVar7 = FUN_005488d0(&local_50c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x24);
    iVar11 = (int)uVar7 >> (*(byte *)(param_1 + 0x1e) & 0x1f);
    uVar10 = *(uint *)(param_1 + 0x18) & uVar7;
    if ((*(int *)(*(int *)(iVar5 + 8 + iVar11 * 0x18) + 100 + uVar10 * 0x7c) == 1) ||
       (*(int *)(*(int *)(iVar5 + 8 + iVar11 * 0x18) + 100 + uVar10 * 0x7c) == 2)) {
      psVar1 = (short *)(uVar10 * 0x7c + *(int *)(iVar5 + 8 + iVar11 * 0x18) + 0x6c);
      *psVar1 = *psVar1 + 1;
LAB_00549152:
      local_4 = local_4 & 0xffffff00;
      FUN_00649720();
      local_4 = 0xffffffff;
      FUN_006501e0();
      ExceptionList = local_c;
      return 1;
    }
  }
  pcVar8 = &local_50c;
  iVar5 = (*(uint *)(param_1 + 0x18) & uVar7) * 0x7c +
          *(int *)(*(int *)(param_1 + 0x24) + 8 +
                  ((int)uVar7 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18);
  *(short *)(iVar5 + 0x6c) = *(short *)(iVar5 + 0x6c) + 1;
  pcVar12 = (char *)0x0;
  local_51c = (char *)0x0;
  if (local_50c != '\0') {
    do {
      if (local_50c == '.') {
        pcVar12 = pcVar8;
        local_51c = pcVar8;
      }
      local_50c = pcVar8[1];
      pcVar8 = pcVar8 + 1;
    } while (local_50c != '\0');
    puVar4 = DAT_0076cd70;
    if (pcVar12 != (char *)0x0) {
      for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)puVar4[3]) {
        iVar11 = FUN_00647ed0(puVar4[2],pcVar12);
        if (iVar11 == 0) {
          iVar11 = param_1 + 0x60;
          local_518 = 0;
          goto LAB_00548f90;
        }
      }
      *(undefined4 *)(iVar5 + 100) = 2;
      FUN_0064e7d0(s_rsc_mgr__Load_failed__No_loader_f_0073ca84,&local_50c);
      goto LAB_005490db;
    }
  }
  *(undefined4 *)(iVar5 + 100) = 2;
  FUN_0064e7d0(s_rsc_mgr__Load_failed__No_extensi_0073cab0,&local_50c);
  goto LAB_005490db;
  while( true ) {
    local_518 = local_518 + 1;
    iVar11 = iVar11 + 0x101;
    if (3 < local_518) break;
LAB_00548f90:
    if (iVar11 != 0) {
      FUN_00649920(local_514,&DAT_0071e9bc,iVar11,&local_50c);
      local_4._0_1_ = 2;
      uVar6 = FUN_00649940();
      FUN_00647d10(local_40c,uVar6);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00649950();
    }
    iVar9 = FUN_0064f210(local_40c,&DAT_00720db8);
    if (iVar9 != 0) {
      uVar6 = FUN_00650030();
      *(undefined4 *)(iVar5 + 0x78) = uVar6;
      FUN_006501d0(local_51c);
      local_4._0_1_ = 3;
      FUN_00649600(s_Loader_0073ca50);
      local_4._0_1_ = 4;
      uVar6 = (**(code **)*puVar4)(iVar9,local_40c);
      *(undefined4 *)(iVar5 + 0x68) = uVar6;
      FUN_0064f2b0(iVar9);
      local_4._0_1_ = 3;
      FUN_00649720();
      iVar11 = FUN_00650030();
      *(int *)(iVar5 + 0x78) = iVar11 - *(int *)(iVar5 + 0x78);
      FUN_00647cf0(iVar5);
      if (*(int *)(iVar5 + 0x68) == 0) {
        *(undefined4 *)(iVar5 + 100) = 2;
        FUN_0064e7d0(s_rsc_mgr__Load_failed__Loader_fai_0073ca24,&local_50c);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_006501e0();
        goto LAB_005490db;
      }
      *(undefined4 **)(iVar5 + 0x74) = puVar4;
      *(undefined4 *)(iVar5 + 100) = 1;
      iVar11 = *(int *)(param_1 + 0x50) + *(int *)(iVar5 + 0x78);
      *(int *)(param_1 + 0x50) = iVar11;
      if (iVar11 < *(int *)(param_1 + 0x54)) {
        iVar11 = *(int *)(param_1 + 0x54);
      }
      *(int *)(param_1 + 0x54) = iVar11;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      piVar2 = (int *)(*(int *)(iVar5 + 0x74) + 0x10);
      *piVar2 = *piVar2 + *(int *)(iVar5 + 0x78);
      *(int *)(*(int *)(iVar5 + 0x74) + 0x14) = *(int *)(*(int *)(iVar5 + 0x74) + 0x14) + 1;
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_006501e0();
      goto LAB_00549152;
    }
  }
  *(undefined4 *)(iVar5 + 100) = 2;
  FUN_0064e7d0(s_rsc_mgr__Load_failed__File_not_f_0073ca58,&local_50c);
LAB_005490db:
  local_4 = local_4 & 0xffffff00;
  FUN_00649720();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return 0;
}

