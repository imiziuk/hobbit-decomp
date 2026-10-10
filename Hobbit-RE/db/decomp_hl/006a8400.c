
undefined4 __thiscall FUN_006a8400(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_ac;
  undefined4 local_a8;
  undefined1 local_a4 [72];
  undefined1 auStack_5c [76];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7d8e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_font__TextWrap_00755f18);
  iVar5 = 0;
  local_4 = 0;
  FUN_006a8620(param_2);
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  FUN_0064afa0();
  local_4._0_1_ = 1;
  FUN_0064afa0();
  iVar4 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar3 = 0;
  local_a8 = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))(local_a4);
  do {
    if (iVar1 == 4) {
      uVar2 = FUN_006a7c70(auStack_5c);
      puStack_8._0_1_ = 1;
      FUN_0064b190();
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      FUN_0064b190();
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_006501e0();
      ExceptionList = pvStack_10;
      return uVar2;
    }
    if (iVar1 == 3) {
      if (iVar3 <= unaff_EBX) {
        unaff_EBX = iVar3;
      }
      iVar1 = iVar4 + local_d0;
      if (local_d8 < iVar4 + local_d0) {
        iVar1 = local_d8;
      }
      iVar6 = iVar5;
      if (iVar5 < local_d4) {
        iVar6 = local_d4;
      }
      if (local_d0 <= iStack_ac + local_d0) {
        local_d0 = iStack_ac + local_d0;
      }
      iVar5 = 0;
      iVar3 = 0;
      iVar4 = 0;
      iStack_ac = 0;
      local_d8 = iVar1;
      local_d4 = iVar6;
      iVar1 = iStack_ac;
LAB_006a8589:
      iStack_ac = iVar1;
      FUN_0064bcb0(&local_a8);
    }
    else {
      local_cc = 0;
      iStack_c8 = 0;
      iStack_c4 = 0;
      iStack_c0 = 0;
      (**(code **)(*param_1 + 0x10))(&local_cc,iVar1,&local_a8);
      iVar1 = iVar5 + iStack_c4;
      if (((iVar1 <= param_2[2] - *param_2) || (iVar5 <= iVar3)) || (iStack_ac <= iVar4)) {
        local_cc = local_cc + iVar5;
        if (local_cc <= iVar3) {
          iVar3 = local_cc;
        }
        if (iStack_c8 <= iVar4) {
          iVar4 = iStack_c8;
        }
        if (iVar5 <= iVar1) {
          iVar5 = iVar1;
        }
        iStack_c4 = iVar1;
        iVar1 = iStack_c0;
        if (iStack_c0 < iStack_ac) {
          iVar1 = iStack_ac;
        }
        goto LAB_006a8589;
      }
      FUN_006a86f0(local_a8);
      FUN_006a86f0(&DAT_00755f14);
    }
    iVar1 = (**(code **)(*param_1 + 0xc))(&local_a8);
  } while( true );
}

