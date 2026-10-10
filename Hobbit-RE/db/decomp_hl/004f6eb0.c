
void __fastcall FUN_004f6eb0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 *local_2a0;
  undefined1 local_29c [8];
  int local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  char acStack_27c [4];
  undefined4 local_278;
  int local_274;
  undefined4 uStack_270;
  undefined4 local_264 [2];
  char acStack_25c [560];
  void *pvStack_2c;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6171;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_274 = param_1;
  FUN_006501d0(s_hud__InitHudRIPool_0072f95c);
  local_4 = 0;
  FUN_00406a80();
  local_290 = 0x7f7fffff;
  local_28c = 0x7f7fffff;
  local_288 = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  local_2a0 = (undefined4 *)(param_1 + 0xeb0);
  puVar8 = (undefined8 *)(param_1 + 0x8a8);
  local_294 = 0x4d;
  do {
    *(undefined4 *)puVar8 = 0;
    *(undefined4 *)((int)puVar8 + 4) = 0;
    local_2a0[-0xe8] = 0;
    *(undefined4 *)(puVar8 + 0x74) = 0;
    *(undefined4 *)((int)puVar8 + 0x3a4) = 0;
    *local_2a0 = 6;
    uVar9 = FUN_0054bad0(5,0,0);
    *puVar8 = uVar9;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar3 = FUN_00406ce0(uVar9);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar3 == -1) {
      FUN_00649720();
      piVar6 = (int *)0x0;
    }
    else {
      uVar2 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
      piVar6 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
      FUN_00649720();
    }
    *(byte *)((int)piVar6 + 0x7f) = *(byte *)((int)piVar6 + 0x7f) & 0xfd ^ 2;
    local_264[0] = 7;
    iVar3 = 0;
    do {
      cVar1 = s_Inst_CouragePoint_1_rgeom_007224a4[iVar3];
      acStack_25c[iVar3] = cVar1;
      iVar3 = iVar3 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*piVar6 + 0xb4))(s_Geometry_Resource_007299e4,local_264);
    local_278 = 0;
    local_274 = 0x44c80000;
    uStack_270 = 0;
    (**(code **)(*piVar6 + 0x14))(&local_278,0);
    (**(code **)(*piVar6 + 0x1c))(&stack0xfffffd44);
    (**(code **)(*piVar6 + 0x120))(0x40400000);
    uStack_2a8 = 0xc2c80000;
    uStack_2a4 = 0xc2c80000;
    local_2a0 = (undefined4 *)0xc2c80000;
    FUN_00404870(0x42c80000,0x42c80000,0x42c80000);
    FUN_004357e0(&uStack_2a8);
    FUN_004357e0(local_29c);
    FUN_004d22c0(1);
    (**(code **)(*piVar6 + 0x8c))(1,0xffffffff);
    iVar3 = local_274;
    local_2a0 = (undefined4 *)((int)local_2a0 + 4);
    puVar8 = puVar8 + 1;
    local_294 = local_294 + -1;
  } while (local_294 != 0);
  *(undefined4 *)(local_274 + 0x898) = 0;
  *(undefined4 *)(local_274 + 0x89c) = 0;
  *(undefined4 *)(local_274 + 0x890) = 0;
  *(undefined4 *)(local_274 + 0x894) = 0;
  *(undefined4 *)(local_274 + 0x8a0) = 0;
  *(undefined4 *)(local_274 + 0x8a4) = 6;
  uVar9 = FUN_0054bad0(5,0,0);
  *(undefined8 *)(iVar3 + 0x890) = uVar9;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 2;
  iVar4 = FUN_00406ce0(uVar9);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar4 == -1) {
    FUN_00649720();
    piVar6 = (int *)0x0;
  }
  else {
    uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    piVar6 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
    FUN_00649720();
  }
  *(byte *)((int)piVar6 + 0x7f) = *(byte *)((int)piVar6 + 0x7f) & 0xfd ^ 2;
  local_264[0] = 7;
  iVar4 = 0;
  do {
    cVar1 = s_Inst_CouragePoint_1_rgeom_007224a4[iVar4];
    acStack_25c[iVar4] = cVar1;
    iVar4 = iVar4 + 1;
  } while (cVar1 != '\0');
  (**(code **)(*piVar6 + 0xb4))(s_Geometry_Resource_007299e4,local_264);
  (**(code **)(*piVar6 + 0x14))(&stack0xfffffd4c,0);
  (**(code **)(*piVar6 + 0x1c))(&stack0xfffffd44);
  (**(code **)(*piVar6 + 0x120))(0x40400000);
  uStack_2a8 = 0xc2c80000;
  uStack_2a4 = 0xc2c80000;
  local_2a0 = (undefined4 *)0xc2c80000;
  FUN_00404870(0x42c80000,0x42c80000,0x42c80000);
  FUN_00480f60(&uStack_2a8);
  FUN_004d22c0(1);
  (**(code **)(*piVar6 + 0x8c))(1,0xffffffff);
  pcVar5 = (char *)FUN_005496c0(s_ConeOfPower_red_rgeom_0072f944,s_Props_00720224);
  pcVar7 = acStack_27c;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00549430(iVar3 + 0x138c,acStack_27c);
  pcVar5 = (char *)FUN_005496c0(s_ConeOfPower_yellow_rgeom_0072f928,s_Props_00720224);
  pcVar7 = acStack_27c;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00549430(iVar3 + 0x1390,acStack_27c);
  pcVar5 = (char *)FUN_005496c0(s_exclam_pulse_rgeom_0072f914,s_Props_00720224);
  pcVar7 = acStack_27c;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00549430(iVar3 + 0x1398,acStack_27c);
  uStack_24 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_2c;
  return;
}

