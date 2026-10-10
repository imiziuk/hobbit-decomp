
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005c0600(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *local_b28;
  int local_b24;
  int *local_b20;
  undefined1 local_b10 [512];
  undefined4 local_910;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df3ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_geom__Load_00745d08);
  local_4 = 0;
  FUN_006501d0(s_geom__Load_00745d08);
  local_4._0_1_ = 1;
  local_b24 = 0;
  if (param_2 == 0) {
    local_b24 = 1;
    param_2 = FUN_0064f210(param_3,&DAT_00720db8);
    if (param_2 == 0) {
      FUN_00649920(&local_b28,s_Unable_to_open_geometry__s_00745cec,param_3);
      local_4._0_1_ = 2;
      uVar2 = FUN_00649940();
      FUN_00647d10(&DAT_007ba7a8,uVar2);
      local_4._0_1_ = 1;
      FUN_00649950();
    }
  }
  FUN_0064f350((uint *)(param_1 + 0x3c),1,4,param_2);
  local_b28 = *(int **)(param_1 + 0x3c);
  if (local_b28 != (int *)0x7d1) {
    if ((((int)local_b28 << 0x10 | (uint)local_b28 & 0xff00) << 8 | (uint)*(byte *)(param_1 + 0x3f)
        | ((uint)local_b28 >> 0x10 & 0xff) << 8) == 0x7d1) {
      FUN_00649920(&local_b28,s_Loading_geometry_<_s>_with_wrong_00745cc0,param_3);
      local_4._0_1_ = 3;
    }
    else {
      FUN_00649920(&local_b28,s_Loading_geometry_<_s>_with_wrong_00745c8c,param_3,local_b28,0x7d1);
      local_4._0_1_ = 4;
    }
    uVar2 = FUN_00649940();
    FUN_00647d10(&DAT_007ba7a8,uVar2);
    local_4._0_1_ = 1;
    FUN_00649950();
  }
  FUN_0064f350(param_1 + 0x40,1,4,param_2);
  FUN_0064f350(param_1 + 0x44,1,0x18,param_2);
  piVar1 = (int *)(param_1 + 0x5c);
  FUN_0064f350(piVar1,1,4,param_2);
  piVar5 = (int *)(param_1 + 100);
  FUN_0064f350(piVar5,1,4,param_2);
  FUN_0064f350(param_1 + 0x6c,1,4,param_2);
  FUN_0064f350(param_1 + 0x74,1,4,param_2);
  FUN_0064f350(param_1 + 0x7c,1,4,param_2);
  FUN_0064f350(param_1 + 0x88,1,4,param_2);
  FUN_0064f350(param_1 + 0x90,1,4,param_2);
  FUN_0064f350(param_1 + 0x98,1,4,param_2);
  DAT_007ba8a8 = DAT_007ba8a8 + 1;
  DAT_007ba8ac = DAT_007ba8ac + *piVar1 * 0x18;
  DAT_007ba8b0 = DAT_007ba8b0 + *piVar5 * 0x2c;
  DAT_007ba8b4 = DAT_007ba8b4 + *(int *)(param_1 + 0x6c) * 0x20;
  DAT_007ba8b8 = DAT_007ba8b8 + *(int *)(param_1 + 0x74) * 0x34;
  DAT_007ba8bc = DAT_007ba8bc + *(int *)(param_1 + 0x7c) * 4;
  DAT_007ba8c0 = DAT_007ba8c0 + *(int *)(param_1 + 0x90) * 0x30;
  DAT_007ba8c4 = DAT_007ba8c4 + *(int *)(param_1 + 0x98) * 4;
  DAT_007ba8c8 = DAT_007ba8c8 + *(int *)(param_1 + 0x88);
  pvVar3 = operator_new(*piVar1 * 0x18);
  *(void **)(param_1 + 0x60) = pvVar3;
  FUN_00648600(pvVar3,0,*piVar1 * 0x18);
  local_b28 = (int *)*piVar5;
  local_b20 = (int *)operator_new((int)local_b28 * 0x2c + 4);
  piVar4 = local_b28;
  local_4._0_1_ = 5;
  if (local_b20 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *local_b20 = (int)local_b28;
    local_b28 = local_b20 + 1;
    FUN_006c043b(local_b28,0x2c,piVar4,&LAB_005c0d70,FUN_00429100);
    piVar4 = local_b28;
  }
  local_4._0_1_ = 1;
  *(int **)(param_1 + 0x68) = piVar4;
  FUN_00648600(piVar4,0,*piVar5 * 0x2c);
  iVar6 = *(int *)(param_1 + 0x6c);
  local_b20 = (int *)operator_new(iVar6 * 0x20 + 4);
  local_4._0_1_ = 6;
  if (local_b20 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *local_b20 = iVar6;
    local_b28 = local_b20 + 1;
    FUN_006c043b(local_b28,0x20,iVar6,&LAB_005c0f60,FUN_005c0f70);
    piVar5 = local_b28;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(int **)(param_1 + 0x70) = piVar5;
  FUN_00648600(piVar5,0,*(int *)(param_1 + 0x6c) << 5);
  pvVar3 = operator_new(*(int *)(param_1 + 0x74) * 0x34);
  *(void **)(param_1 + 0x78) = pvVar3;
  FUN_00648600(pvVar3,0,*(int *)(param_1 + 0x74) * 0x34);
  pvVar3 = operator_new(*(int *)(param_1 + 0x7c) << 2);
  *(void **)(param_1 + 0x84) = pvVar3;
  pvVar3 = operator_new(*(int *)(param_1 + 0x90) * 0x30);
  *(void **)(param_1 + 0x94) = pvVar3;
  pvVar3 = operator_new(*(int *)(param_1 + 0x98) << 2);
  *(void **)(param_1 + 0x9c) = pvVar3;
  local_b10[0] = 0;
  if ((param_3 != 0) && (iVar6 = FUN_00647cf0(param_3), 0 < iVar6)) {
    FUN_006489b0(param_3,local_b10);
    FUN_00647dc0(local_b10,&DAT_00731054);
  }
  iVar6 = 0;
  if (0 < *piVar1) {
    local_b28 = (int *)0x0;
    do {
      FUN_005c0d30(param_2);
      iVar6 = iVar6 + 1;
      local_b28 = local_b28 + 6;
    } while (iVar6 < *piVar1);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar7 = (undefined4 *)(param_1 + 8);
  puVar9 = (undefined4 *)(param_1 + 0x10);
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar6 = *(int *)(param_1 + 0x5c);
  iVar8 = 0;
  if (0 < iVar6) {
    iVar10 = 0;
    do {
      FUN_005c04d0(*(int *)(param_1 + 0x60) + iVar10,iVar8);
      iVar6 = *(int *)(param_1 + 0x5c);
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 0x18;
    } while (iVar8 < iVar6);
  }
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 1;
    pvVar3 = operator_new(0x18);
    *(void **)(param_1 + 0x60) = pvVar3;
    *(undefined4 *)((int)pvVar3 + 0x14) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x10) = *(undefined4 *)(param_1 + 100);
    FUN_00647d10(*(undefined4 *)(param_1 + 0x60),s_UNKNOWN_0073ce10);
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    do {
      FUN_005c0d80(param_2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 100));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x6c)) {
    do {
      FUN_005c0f90(param_2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x6c));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x74)) {
    do {
      FUN_005c0e70(param_2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x74));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    do {
      FUN_00557e00();
      local_4._0_1_ = 7;
      FUN_005582b0(param_2,local_b10);
      *(undefined4 *)(*(int *)(param_1 + 0x84) + iVar6 * 4) = local_910;
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00557f20();
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x7c));
  }
  if (*(uint *)(param_1 + 0x88) == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    pvVar3 = operator_new(*(uint *)(param_1 + 0x88));
    *(void **)(param_1 + 0x8c) = pvVar3;
    FUN_0064f350(pvVar3,1,*(undefined4 *)(param_1 + 0x88),param_2);
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    do {
      FUN_005c0cd0(param_2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x90));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    do {
      FUN_005c1040(param_2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x98));
  }
  if (local_b24 != 0) {
    FUN_0064f2b0(param_2);
  }
  FUN_00647f90(param_3,&DAT_00745c88);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x6c)) {
    iVar8 = 0;
    do {
      iVar10 = *(int *)(iVar8 + 8 + *(int *)(param_1 + 0x70));
      if (iVar10 != 0) {
        _DAT_007ba8d4 = _DAT_007ba8d4 + *(int *)(iVar8 + *(int *)(param_1 + 0x70) + 0x14) / iVar10;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x20;
    } while (iVar6 < *(int *)(param_1 + 0x6c));
  }
  local_4 = local_4 & 0xffffff00;
  FUN_006501e0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

