
void __fastcall FUN_0052ed30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_190 [20];
  undefined4 uStack_17c;
  int iStack_178;
  undefined *puStack_174;
  undefined1 *puStack_170;
  undefined4 *puStack_16c;
  code *pcStack_168;
  int local_154;
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  int local_140;
  undefined4 local_13c;
  int local_138;
  undefined4 local_134;
  undefined1 *local_130;
  undefined1 local_12c [44];
  undefined1 local_100 [168];
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d84ea;
  local_c = ExceptionList;
  local_140 = 0;
  local_144 = 0;
  local_13c = 0;
  local_134 = 0;
  local_138 = 0;
  local_14c = 0;
  local_148 = 0;
  pcStack_168 = (code *)0x6f39f0;
  puStack_16c = &local_14c;
  puStack_170 = (undefined1 *)(param_1 + 0x98);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  puStack_174 = (undefined *)0x52ed8e;
  ExceptionList = &local_c;
  FUN_0052f120();
  local_154 = 0;
  if (0 < local_144) {
    local_150 = 0;
    do {
      puStack_16c = (undefined4 *)0x52edb0;
      pcStack_168 = (code *)local_154;
      uVar1 = FUN_00437620();
      local_130 = auStack_190;
      FUN_00649b60(uVar1);
      iVar2 = FUN_0052ef80();
      if (iVar2 != 0) {
        pcStack_168 = (code *)(local_150 + local_140);
        puStack_16c = (undefined4 *)(param_1 + 0x98);
        puStack_170 = local_12c;
        puStack_174 = (undefined *)0x52ede7;
        piVar3 = (int *)FUN_0064a670();
        iStack_178 = *piVar3;
        puStack_174 = &DAT_00720db8;
        local_4._0_1_ = 1;
        uStack_17c = 0x52edfc;
        iVar2 = FUN_0064f210();
        local_4._0_1_ = 0;
        pcStack_168 = (code *)0x52ee11;
        FUN_00649ba0();
        if (iVar2 != 0) {
          pcStack_168 = (code *)(local_150 + local_140);
          puStack_16c = (undefined4 *)0x52ee2a;
          FUN_00649b60();
          local_4._0_1_ = 2;
          pcStack_168 = (code *)0x52ee3e;
          FUN_0064afa0();
          local_4._0_1_ = 3;
          pcStack_168 = (code *)0x52ee52;
          FUN_00530aa0();
          puStack_170 = *(undefined1 **)(param_1 + 0x10);
          pcStack_168 = (code *)local_100;
          puStack_16c = (undefined4 *)0x1;
          local_4._0_1_ = 4;
          puStack_174 = (undefined *)0x52ee6d;
          FUN_0052f9a0();
          pcStack_168 = (code *)0x52ee74;
          iVar4 = FUN_0052e130();
          puStack_16c = (undefined4 *)local_58;
          puStack_170 = (undefined1 *)0x52ee87;
          pcStack_168 = (code *)iVar2;
          pcStack_168 = (code *)FUN_0052f760();
          iVar4 = (iVar4 + -1) * 0xa8;
          local_4._0_1_ = 5;
          puStack_16c = (undefined4 *)0x52eea2;
          FUN_0064b7f0();
          local_4._0_1_ = 4;
          pcStack_168 = (code *)0x52eeb6;
          FUN_0064b190();
          puStack_16c = (undefined4 *)0x30;
          puStack_174 = (undefined *)(iVar4 + 0x78 + *(int *)(param_1 + 0xc));
          puStack_170 = (undefined1 *)0x1;
          iStack_178 = 0x52eec8;
          pcStack_168 = (code *)iVar2;
          FUN_0064f350();
          *(undefined4 *)(iVar4 + 0x80 + *(int *)(param_1 + 0xc)) = 0;
          uStack_17c = 0x52eed8;
          iStack_178 = iVar2;
          FUN_0064f2b0();
          local_4._0_1_ = 6;
          pcStack_168 = (code *)0x52eeef;
          FUN_0064b190();
          local_4._0_1_ = 0;
          pcStack_168 = (code *)0x52eeff;
          FUN_00649ba0();
        }
      }
      local_154 = local_154 + 1;
      local_150 = local_150 + 0x2c;
    } while (local_154 < local_144);
  }
  pcStack_168 = (code *)0x52ef26;
  FUN_0052f3a0();
  local_4 = 0xffffffff;
  if ((local_138 != 2) && (local_140 != 0)) {
    puStack_16c = *(undefined4 **)(local_140 + -4);
    iVar2 = local_140 + -4;
    pcStack_168 = FUN_00649ba0;
    puStack_170 = (undefined1 *)0x2c;
    puStack_174 = (undefined *)local_140;
    iStack_178 = 0x52ef54;
    FUN_006c026a();
    puStack_16c = (undefined4 *)0x52ef5a;
    pcStack_168 = (code *)iVar2;
    FUN_006bf840();
  }
  ExceptionList = local_c;
  return;
}

