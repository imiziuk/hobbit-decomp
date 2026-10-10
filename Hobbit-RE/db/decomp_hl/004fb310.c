
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004fb310(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  float fVar6;
  undefined1 local_550;
  undefined1 local_54f;
  undefined1 local_54e;
  undefined1 local_54d;
  undefined1 *local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  int local_53c;
  int local_538;
  undefined1 local_534 [4];
  int local_530;
  int local_52c;
  int local_528;
  int local_524;
  undefined1 local_520 [60];
  undefined1 local_4e4 [32];
  undefined4 local_4c4;
  undefined1 local_498 [1156];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006d6347;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00671410();
  uVar4 = 0;
  local_c = 0;
  FUN_00671650(0x41200000);
  FUN_00671930(0x42c80000);
  local_548 = 0x44a98000;
  local_544 = 0xc4f04000;
  local_540 = 0xc38e8000;
  FUN_00671670();
  local_548 = 0;
  local_544 = 0;
  local_540 = 0;
  FUN_006723d0(&local_548);
  FUN_00650250();
  local_c._0_1_ = 1;
  FUN_00649920(local_534,s_LegalScreen_pc__s_xbmp_00730660);
  local_c._0_1_ = 2;
  FUN_00649940();
  FUN_00649b20();
  local_c._0_1_ = 4;
  FUN_00649950();
  FUN_005496c0(local_4c4);
  iVar1 = FUN_00652870();
  if (iVar1 == 0) {
    FUN_005496c0(s_LegalScreen_pc_xbmp_00730648);
    iVar1 = FUN_00652870();
    if (iVar1 == 0) {
      FUN_00649920(&local_550);
      local_c._0_1_ = 5;
      FUN_00649940();
      local_c._0_1_ = 4;
      FUN_00649950();
    }
  }
  FUN_00674c70();
  FUN_0064cbe0();
  iVar1 = 0;
  FUN_0064cc00();
  fVar5 = (float10)FUN_0064cd90();
  if (fVar5 < (float10)_DAT_006e92f4 != (NAN(fVar5) || NAN((float10)_DAT_006e92f4))) {
    do {
      if (iVar1 != 0) break;
      FUN_0065f910();
      FUN_0065f960(local_498,0);
      FUN_0065fc10(0);
      local_54c = &stack0xfffffa9c;
      FUN_0065f940();
      FUN_006628c0();
      iVar2 = FUN_0065f190(s_Legal_0073061c);
      if (iVar2 != 0) {
        FUN_0065f8a0(&local_53c);
        FUN_0066c3a0(7,0x17);
        FUN_0066db80(local_520,0);
        local_54c = &stack0xfffffa9c;
        uVar3 = FUN_0041b9c0(0x44200000);
        iVar2 = iVar1;
        local_54c = (undefined1 *)FUN_006a22a0(0,0,uVar3);
        fVar6 = (float)(int)local_54c;
        local_54c = (undefined1 *)FUN_006a2260(0,fVar6);
        uVar3 = FUN_00401f00((float)(int)local_54c,fVar6,iVar2);
        FUN_0066e5a0(uVar3);
        FUN_0066d9a0();
        FUN_0064f190(local_4e4,&DAT_00730618,(double)_DAT_00731c00);
        local_52c = local_538 + -0x1e;
        local_530 = local_53c + -0x50;
        local_528 = local_53c;
        local_524 = local_538;
        local_54d = 0xff;
        local_54e = 0x80;
        local_54f = 0x80;
        local_550 = 0x80;
        FUN_0069fac0(0,&local_530,0,&local_550);
        FUN_0065f430();
        FUN_006a1120();
        FUN_0065f480();
      }
      fVar5 = (float10)FUN_0064cd90();
      if (((float10)_DAT_006e999c < fVar5) && (iVar2 = FUN_0066f810(), iVar2 != 0)) {
        iVar2 = FUN_006710d0(2);
        if (iVar2 != 0) {
          iVar1 = 1;
          uVar4 = 1;
        }
        iVar2 = FUN_00670ef0(0xb9);
        if (((iVar2 != 0) || (iVar2 = FUN_00670ef0(0xd6), iVar2 != 0)) ||
           (iVar2 = FUN_006710d0(0x61), iVar2 != 0)) {
          iVar1 = 1;
        }
      }
      fVar5 = (float10)FUN_0064cd90();
    } while (fVar5 < (float10)_DAT_006e92f4 != (NAN(fVar5) || NAN((float10)_DAT_006e92f4)));
  }
  FUN_00674e10();
  FUN_00650380();
  local_c._0_1_ = 1;
  FUN_00649ba0();
  local_c = (uint)local_c._1_3_ << 8;
  thunk_FUN_00650380();
  local_c = 0xffffffff;
  FUN_00671570();
  ExceptionList = local_14;
  return uVar4;
}

