
void __fastcall FUN_00592320(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  float10 fVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd000;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_PhysController__InitTweakables_00742d78);
  uVar2 = *(undefined4 *)(param_1 + 0x288);
  uVar3 = *(undefined4 *)(param_1 + 0x28c);
  local_4 = 0;
  FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
  local_4._0_1_ = 1;
  iVar4 = FUN_00406ce0(uVar2,uVar3);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar4 == -1) {
    FUN_00649720();
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(DAT_0076f648 + iVar4 * 0x14);
    FUN_00649720();
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 0x34));
  pvVar5 = operator_new(0x14);
  *(void **)(param_1 + 0x34) = pvVar5;
  piVar6[0x36] = 8;
  iVar4 = (**(code **)(*piVar6 + 0x38))();
  fVar1 = *(float *)(iVar4 + 0xc);
  iVar4 = (**(code **)(*piVar6 + 0x38))();
  if (*(float *)(iVar4 + 0x14) < fVar1 == (NAN(*(float *)(iVar4 + 0x14)) || NAN(fVar1))) {
    iVar4 = (**(code **)(*piVar6 + 0x38))();
    iVar4 = *(int *)(iVar4 + 0x14);
  }
  else {
    iVar4 = (**(code **)(*piVar6 + 0x38))();
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  piVar6[0x38] = iVar4;
  iVar4 = (**(code **)(*piVar6 + 0x38))();
  piVar6[0x39] = *(int *)(iVar4 + 0x10);
  piVar6[0x37] = 0x3f800000;
  piVar6[0x34] = 0x41a00000;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x10) = 0x3ca3d70a;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 8) = 0x447a0000;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc) = 0x42c80000;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 4) = 0x41200000;
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 0:
    **(undefined4 **)(param_1 + 0x34) = 0x41200000;
    fVar7 = (float10)FUN_0064c8d0(0x3f490fdb);
    piVar6[0x35] = (int)(float)fVar7;
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x10) = 0x3ca3d70a;
    break;
  case 1:
    **(undefined4 **)(param_1 + 0x34) = 0x42c80000;
    fVar7 = (float10)FUN_0064c8d0(0x3fc90fdb);
    piVar6[0x35] = (int)(float)fVar7;
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x10) = 0x3ca3d70a;
    break;
  case 2:
    piVar6[0x38] = 0x41a00000;
    piVar6[0x39] = 0x42200000;
    **(undefined4 **)(param_1 + 0x34) = 0x41200000;
    fVar7 = (float10)FUN_0064c8d0(0x3fc90fdb);
    piVar6[0x35] = (int)(float)fVar7;
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x10) = 0x3dcccccd;
    break;
  case 3:
    **(undefined4 **)(param_1 + 0x34) = 0x42c80000;
    fVar7 = (float10)FUN_0064c8d0(0x3f490fdb);
    piVar6[0x35] = (int)(float)fVar7;
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x10) = 0x3ca3d70a;
  }
  FUN_00592920();
  iVar4 = FUN_00587ce0();
  if (iVar4 == 6) {
    fVar7 = (float10)FUN_0064c8d0(0x3f91361e);
    piVar6[0x35] = (int)(float)fVar7;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

