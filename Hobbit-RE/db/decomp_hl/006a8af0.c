
void __thiscall
FUN_006a8af0(int *param_1,undefined4 *param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int unaff_EBX;
  undefined1 *puVar7;
  byte unaff_retaddr;
  undefined4 *puStack_168;
  undefined1 *puStack_164;
  undefined4 *puStack_160;
  char *pcStack_15c;
  undefined1 *local_148;
  undefined1 *local_144;
  undefined1 *puStack_140;
  undefined1 *local_13c;
  undefined1 *local_138;
  undefined1 *local_134;
  undefined1 *local_130;
  int local_12c;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  int iStack_114;
  undefined4 local_110;
  undefined1 auStack_10c [4];
  int local_108;
  float local_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [4];
  undefined4 uStack_f4;
  undefined1 local_f0 [68];
  undefined4 auStack_ac [19];
  undefined1 auStack_60 [80];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_006e7e79;
  pvStack_c = ExceptionList;
  pcStack_15c = s_ui_font__RenderText_00755f2c;
  puStack_160 = (undefined4 *)0x6a8b1f;
  ExceptionList = &pvStack_c;
  FUN_006501d0();
  local_13c = (undefined1 *)*param_2;
  local_144 = (undefined1 *)param_2[1];
  local_4 = (int *)0x0;
  if ((param_3 & 0x200) != 0) {
    pcStack_15c = (char *)param_2;
    puStack_160 = (undefined4 *)param_5;
    puStack_164 = (undefined1 *)0x6a8b7b;
    param_5 = FUN_006a7fa0();
  }
  pcStack_15c = (char *)0xffffffff;
  puStack_164 = (undefined1 *)0x6a8b90;
  puStack_160 = (undefined4 *)param_5;
  iVar2 = FUN_006a7d90();
  if ((param_3 & 0x10) == 0) {
    if ((param_3 & 0x20) != 0) {
      local_144 = local_144 + ((param_2[3] - param_2[1]) - iVar2);
    }
  }
  else {
    local_144 = local_144 + (((param_2[3] - param_2[1]) - iVar2) + 4) / 2;
  }
  puStack_160 = (undefined4 *)0x6a8bdb;
  pcStack_15c = (char *)param_5;
  FUN_006a8620();
  local_138 = (undefined1 *)0x0;
  local_134 = (undefined1 *)0x0;
  local_130 = (undefined1 *)0x0;
  local_12c = 0;
  pcStack_15c = (char *)0x6a8bf4;
  FUN_0064afa0();
  pcStack_15c = local_f0;
  local_4 = (int *)CONCAT31(local_4._1_3_,1);
  local_110 = 0;
  local_108 = 0;
  puStack_160 = (undefined4 *)0x6a8c12;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 != 4) {
    local_104 = (float)((uint)param_2 & 2);
    do {
      puVar5 = (undefined1 *)0x0;
      puStack_160 = (undefined4 *)uStack_f4;
      puStack_164 = (undefined1 *)0x6a8c3c;
      FUN_006a86f0();
      puStack_160 = (undefined4 *)0x6a8c48;
      FUN_0064afa0();
      puStack_160 = &uStack_f4;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
      puStack_164 = (undefined1 *)0x6a8c5c;
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
      puVar7 = (undefined1 *)0x0;
      while (puVar3 != (undefined4 *)0x3) {
        puStack_164 = auStack_f8;
        puStack_168 = (undefined4 *)0x6a8c78;
        FUN_0064bcb0();
        puStack_164 = auStack_f8;
        local_12c = 0;
        uStack_128 = 0;
        puStack_124 = (undefined1 *)0x0;
        uStack_120 = 0;
        puStack_168 = puVar3;
        (**(code **)(*param_1 + 0x10))(&local_12c);
        local_138 = local_138 + (int)puVar7;
        local_130 = local_130 + (int)puVar7;
        if ((int)local_138 <= (int)puVar5) {
          puVar5 = local_138;
        }
        puVar4 = local_134;
        if ((int)puStack_124 < (int)local_134) {
          puVar4 = puStack_124;
        }
        puVar6 = local_130;
        if ((int)local_130 < (int)puVar7) {
          puVar6 = puVar7;
        }
        iVar2 = local_12c;
        if (local_12c < iStack_11c) {
          iVar2 = iStack_11c;
        }
        puStack_124 = puVar4;
        iStack_11c = iVar2;
        puVar3 = (undefined4 *)(**(code **)(*param_1 + 0xc))(&local_104);
        puVar7 = puVar6;
      }
      puStack_164 = &DAT_00755f14;
      puStack_168 = auStack_ac;
      puVar3 = (undefined4 *)FUN_0064b9d0(auStack_60);
      puStack_164 = (undefined1 *)*puVar3;
      pvStack_c._0_1_ = 3;
      puStack_168 = (undefined4 *)0x6a8d28;
      FUN_006a86f0();
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
      puStack_164 = (undefined1 *)0x6a8d3c;
      FUN_0064b190();
      if (local_108 == 0) {
        if ((unaff_retaddr & 4) == 0) {
          local_148 = local_144;
        }
        else {
          local_148 = puVar5 + ((local_4[2] - *local_4) - (int)puVar7) + (int)local_144;
        }
      }
      else {
        local_148 = local_144 + (int)(puVar5 + ((local_4[2] - *local_4) - (int)puVar7)) / 2;
      }
      local_130 = local_134 + unaff_EBX + 2;
      fStack_100 = (float)(int)local_130;
      puStack_164 = auStack_f8;
      local_104 = (float)(int)local_148;
      uStack_fc = 0;
      puStack_168 = (undefined4 *)0x6a8dcb;
      iVar2 = (**(code **)(*param_1 + 0xc))();
      puVar4 = local_134;
      while (iVar2 != 3) {
        local_134 = (undefined1 *)&puStack_168;
        (**(code **)(*param_1 + 0x14))(&local_108,iVar2,&uStack_fc);
        iVar2 = (**(code **)(*param_1 + 0xc))(auStack_10c);
        puVar4 = local_138;
      }
      if ((int)puVar5 <= (int)local_144) {
        local_144 = puVar5;
      }
      puVar5 = puVar4 + iStack_11c;
      if ((int)puStack_140 < (int)(puVar4 + iStack_11c)) {
        puVar5 = puStack_140;
      }
      if ((int)puVar7 < (int)local_13c) {
        puVar7 = local_13c;
      }
      local_138 = puVar4;
      if ((int)puVar4 <= (int)(puVar4 + iStack_114)) {
        local_138 = puVar4 + iStack_114;
      }
      iStack_11c = 0;
      iStack_114 = 0;
      uVar1 = (uint)pvStack_10 >> 8;
      pvStack_10 = (void *)CONCAT31((int3)uVar1,1);
      puStack_168 = (undefined4 *)0x6a8e79;
      FUN_0064b190();
      puStack_168 = &uStack_fc;
      iVar2 = (**(code **)(*param_1 + 0xc))();
      puStack_140 = puVar5;
      local_13c = puVar7;
    } while (iVar2 != 4);
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  puStack_160 = (undefined4 *)0x6a8e9f;
  FUN_0064b190();
  puStack_8 = (undefined1 *)0xffffffff;
  puStack_160 = (undefined4 *)0x6a8eb3;
  FUN_006501e0();
  ExceptionList = pvStack_10;
  return;
}

