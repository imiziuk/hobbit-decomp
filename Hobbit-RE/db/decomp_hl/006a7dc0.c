
void FUN_006a7dc0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EBX;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_ac;
  undefined4 local_a8;
  undefined1 local_a4 [148];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7cfe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_font__TextSize_00755ee4);
  piVar4 = (int *)0x0;
  local_4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_3 == -1) {
    FUN_006a8620(param_2);
  }
  else {
    puVar1 = (undefined4 *)FUN_0064b0a0(param_3,param_2);
    local_4._0_1_ = 1;
    FUN_006a8620(*puVar1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0064b190();
  }
  FUN_0064afa0();
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar5 = 0;
  local_a8 = 0;
  iVar2 = (**(code **)(*local_cc + 0xc))(local_a4);
  iVar6 = 0;
  while (iVar2 != 4) {
    if (iVar2 == 3) {
      iVar2 = param_1[3];
      piVar3 = (int *)*param_1;
      if ((int)piVar4 <= (int)*param_1) {
        piVar3 = piVar4;
      }
      *param_1 = piVar3;
      iVar7 = iVar5 + iVar2;
      if ((int)param_1[1] < iVar5 + iVar2) {
        iVar7 = param_1[1];
      }
      param_1[1] = iVar7;
      if (iVar6 < (int)param_1[2]) {
        iVar6 = param_1[2];
      }
      param_1[2] = iVar6;
      if (iVar2 <= iStack_ac + iVar2) {
        iVar2 = iStack_ac + iVar2;
      }
      iVar7 = 0;
      piVar4 = (int *)0x0;
      param_1[3] = iVar2;
      iVar5 = 0;
      iStack_ac = 0;
    }
    else {
      local_cc = (int *)0x0;
      iStack_c8 = 0;
      iStack_c4 = 0;
      iStack_c0 = 0;
      (**(code **)(*unaff_EBX + 0x10))(&local_cc,iVar2,&local_a8);
      local_cc = (int *)((int)local_cc + iVar6);
      iStack_c4 = iStack_c4 + iVar6;
      if ((int)local_cc <= (int)piVar4) {
        piVar4 = local_cc;
      }
      if (iStack_c8 <= iVar5) {
        iVar5 = iStack_c8;
      }
      iVar7 = iStack_c4;
      if (iStack_c4 < iVar6) {
        iVar7 = iVar6;
      }
      if (iStack_ac <= iStack_c0) {
        iStack_ac = iStack_c0;
      }
    }
    iVar2 = (**(code **)(*unaff_EBX + 0xc))(&local_a8);
    iVar6 = iVar7;
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_0064b190();
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_10;
  return;
}

