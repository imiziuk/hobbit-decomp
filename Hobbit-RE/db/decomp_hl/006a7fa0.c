
undefined4 __fastcall FUN_006a7fa0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int unaff_EDI;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  int local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  undefined1 local_1e4 [4];
  undefined1 auStack_1e0 [64];
  int iStack_1a0;
  undefined1 auStack_198 [76];
  undefined1 auStack_14c [16];
  undefined1 local_13c [60];
  undefined1 auStack_100 [76];
  undefined1 auStack_b4 [76];
  undefined1 auStack_68 [76];
  void *pvStack_1c;
  int iStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  int *piStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  piStack_8 = (int *)&LAB_006e7d5a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_font__ClipEllipsis_00755efc);
  local_4 = 0;
  FUN_0064b130(&DAT_00755ef8);
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(*param_1 + 0x10))(local_1e4,0,local_13c);
  FUN_006a8620(piStack_8);
  iStack_200 = 0;
  iStack_1fc = 0;
  local_1f8 = 0;
  iStack_1f4 = 0;
  FUN_0064afa0();
  uStack_10 = 2;
  FUN_0064afa0();
  uStack_10 = 3;
  iVar6 = 0;
  iStack_228 = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))(auStack_1e0);
  iVar4 = 0;
  while (iVar1 != 4) {
    if (iVar1 == 3) {
      if (unaff_EDI <= iStack_204) {
        iStack_204 = unaff_EDI;
      }
      iVar1 = iVar6 + local_1f8;
      if (iStack_200 < iVar6 + local_1f8) {
        iVar1 = iStack_200;
      }
      if (iVar4 < iStack_1fc) {
        iVar4 = iStack_1fc;
      }
      iVar2 = local_1f8;
      if (local_1f8 <= unaff_EBX + local_1f8) {
        iVar2 = unaff_EBX + local_1f8;
      }
      unaff_EDI = 0;
      iVar6 = 0;
      iVar5 = 0;
      iStack_200 = iVar1;
      iStack_1fc = iVar4;
      local_1f8 = iVar2;
      FUN_0064bcb0(local_1e4);
      unaff_EBX = 0;
      if (piStack_8[3] - piStack_8[1] <= iVar2) break;
    }
    else if ((iVar1 == 0) || (iVar1 == 2)) {
      FUN_0064b170(local_1e4);
      iStack_228 = 0;
      iStack_220 = 0;
      iStack_14._0_1_ = 4;
      iStack_224 = 0;
      iStack_21c = 0;
      while (iStack_1a0 != 0) {
        iStack_228 = 0;
        iStack_224 = 0;
        iStack_220 = 0;
        iStack_21c = 0;
        (**(code **)(*param_1 + 0x10))(&iStack_228,iVar1,auStack_100);
        if (iVar4 + iStack_220 <= piStack_8[2] - *piStack_8) break;
        uVar3 = FUN_0064b270(auStack_b4,iStack_1a0 + -1);
        iStack_14._0_1_ = 5;
        FUN_0064b7f0(uVar3);
        iStack_14._0_1_ = 4;
        FUN_0064b190();
        uVar3 = FUN_0064bb70(auStack_68,local_1e4,auStack_14c);
        iStack_14._0_1_ = 6;
        FUN_0064b7f0(uVar3);
        iStack_14._0_1_ = 4;
        FUN_0064b190();
      }
      iStack_228 = iStack_228 + iVar4;
      iStack_220 = iStack_220 + iVar4;
      if (iStack_228 <= unaff_EDI) {
        unaff_EDI = iStack_228;
      }
      if (iStack_224 <= iVar6) {
        iVar6 = iStack_224;
      }
      iVar5 = iStack_220;
      if (iStack_220 < iVar4) {
        iVar5 = iVar4;
      }
      if (unaff_EBX <= iStack_21c) {
        unaff_EBX = iStack_21c;
      }
      FUN_0064bcb0(auStack_100);
      iStack_14 = CONCAT31(iStack_14._1_3_,3);
      FUN_0064b190();
    }
    else {
      iStack_218 = 0;
      iStack_214 = 0;
      iStack_210 = 0;
      iStack_20c = 0;
      (**(code **)(*param_1 + 0x10))(&iStack_218,iVar1,local_1e4);
      if (piStack_8[2] - *piStack_8 < iStack_210 + iVar4) {
        FUN_0064bcb0(auStack_14c);
        iStack_214 = iStack_1f0;
        iStack_20c = iStack_1e8;
        iStack_218 = iStack_1f4;
        iStack_210 = iStack_1ec;
      }
      else {
        FUN_0064bcb0(local_1e4);
      }
      iStack_218 = iStack_218 + iVar4;
      iStack_210 = iStack_210 + iVar4;
      if (iStack_218 <= unaff_EDI) {
        unaff_EDI = iStack_218;
      }
      if (iStack_214 <= iVar6) {
        iVar6 = iStack_214;
      }
      iVar5 = iStack_210;
      if (iStack_210 < iVar4) {
        iVar5 = iVar4;
      }
      if (unaff_EBX <= iStack_20c) {
        unaff_EBX = iStack_20c;
      }
    }
    iVar1 = (**(code **)(*param_1 + 0xc))(local_1e4);
    iVar4 = iVar5;
  }
  uVar3 = FUN_006a7c70(auStack_198);
  iStack_14._0_1_ = 2;
  FUN_0064b190();
  iStack_14._0_1_ = 1;
  FUN_0064b190();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  FUN_0064b190();
  iStack_14 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_1c;
  return uVar3;
}

