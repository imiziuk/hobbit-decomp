
void FUN_005750e0(uint param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  char *pcStack_a8;
  char *pcStack_a4;
  undefined1 auStack_90 [4];
  undefined1 *local_8c;
  char local_78;
  undefined4 local_77;
  undefined4 auStack_38 [11];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dba71;
  local_c = ExceptionList;
  pcStack_a4 = s_event_mgr__GeneratePain_0074011c;
  pcStack_a8 = (char *)0x575111;
  ExceptionList = &local_c;
  FUN_00649600();
  local_78 = '\0';
  puVar5 = &local_77;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  pcStack_a4 = s_obj_mgr__LockObject_Guid__0071cef0;
  local_4 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  pcStack_a8 = (char *)0x57513f;
  FUN_00649600();
  iVar2 = (int)*(short *)(&DAT_0076cd88 + ((param_1 ^ param_2) * -0xfb & 0xfff) * 2);
  for (iVar3 = iVar2; iVar3 != -1; iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe)) {
  }
  do {
    if (iVar2 == -1) {
LAB_005751bf:
      local_4 = (uint)local_4._1_3_ << 8;
      pcStack_a4 = (char *)0x5751d0;
      FUN_00649720();
LAB_005751d0:
      if ((0 < param_3) && (param_3 < 0x1d)) {
        pcStack_a4 = (&PTR_DAT_0073fa70)[param_3];
        pcStack_a8 = &local_78;
        puStack_ac = (undefined1 *)0x5751f2;
        FUN_00647d10();
      }
LAB_005751f5:
      pcStack_a4 = &local_78;
      pcStack_a8 = (char *)0x5751ff;
      iVar3 = FUN_00647cf0();
      iVar2 = 0;
      if (0 < iVar3) {
        do {
          if ((&local_78)[iVar2] == ' ') {
            (&local_78)[iVar2] = '_';
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar3);
      }
      pcStack_a4 = (char *)param_7;
      pcStack_a8 = (char *)param_6;
      puStack_ac = (undefined1 *)param_5;
      local_8c = auStack_b8;
      FUN_004357e0(param_4);
      FUN_00572ce0(&local_78,param_1,param_2);
      local_4 = 0xffffffff;
      pcStack_a4 = (char *)0x57526b;
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
    iVar3 = *(int *)(DAT_0076f648 + iVar2 * 0x14);
    if (((iVar3 != 0) && (*(uint *)(iVar3 + 8) == param_1)) && (*(uint *)(iVar3 + 0xc) == param_2))
    {
      if (iVar2 != -1) {
        uVar1 = *(uint *)(DAT_0076f648 + iVar2 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        piVar4 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
        pcStack_a4 = (char *)0x5752ab;
        FUN_00649720();
        if (piVar4 == (int *)0x0) goto LAB_005751d0;
        pcStack_a4 = (char *)0x5752ba;
        iVar3 = (**(code **)(*piVar4 + 0x24))();
        if (iVar3 == 0) goto LAB_005751d0;
        pcStack_a4 = (char *)piVar4[0x6c];
        pcStack_a8 = (char *)auStack_38;
        puStack_ac = (undefined1 *)0x5752d5;
        FUN_004675a0();
        pcStack_a4 = (char *)auStack_38[0];
        pcStack_a8 = &local_78;
        local_4._0_1_ = 2;
        puStack_ac = (undefined1 *)0x5752ed;
        FUN_00647d10();
        if ((char)piVar4[0x1f] == '\x12') {
          pcStack_a4 = (char *)0x575300;
          FUN_0041bcc0();
          pcStack_a8 = &local_78;
          pcStack_a4 = s_BILBO_STONE_THROW__00740108;
          puStack_ac = (undefined1 *)0x575311;
          FUN_00647d10();
          if (param_3 == 0x1a) {
            pcStack_a4 = &DAT_00740100;
            goto LAB_00575416;
          }
          if (param_3 == 0x1b) {
            pcStack_a4 = s_EXPLODE_007400f8;
            goto LAB_00575416;
          }
          if (param_3 == 0x1c) {
            pcStack_a4 = s_FREEZE_007400f0;
            goto LAB_00575416;
          }
          if (param_3 == 0x19) {
            pcStack_a4 = (char *)0x57535e;
            FUN_00427300();
            pcStack_a4 = (char *)0x575363;
            pcStack_a4 = (char *)__ftol();
            puStack_ac = auStack_90;
            pcStack_a8 = &DAT_007328e4;
            uStack_b0 = 0x575373;
            FUN_00649920();
            local_4._0_1_ = 3;
            pcStack_a4 = (char *)0x575385;
            pcStack_a4 = (char *)FUN_00649940();
            pcStack_a8 = &local_78;
            puStack_ac = (undefined1 *)0x575390;
            FUN_00647dc0();
            local_4._0_1_ = 2;
            pcStack_a4 = (char *)0x5753a3;
            FUN_00649950();
          }
          else if ((param_3 == 0x17) || (param_3 == 0x18)) {
            pcStack_a4 = (&PTR_DAT_0073fa70)[param_3];
            pcStack_a8 = &local_78;
            puStack_ac = (undefined1 *)0x5753c1;
            FUN_00647d10();
          }
        }
        else {
          pcStack_a8 = auStack_90;
          pcStack_a4 = &DAT_0073fe00;
          puStack_ac = (undefined1 *)0x5753d2;
          FUN_00649920();
          local_4._0_1_ = 4;
          pcStack_a4 = (char *)0x5753e4;
          pcStack_a4 = (char *)FUN_00649940();
          pcStack_a8 = &local_78;
          puStack_ac = (undefined1 *)0x5753ef;
          FUN_00647dc0();
          local_4._0_1_ = 2;
          pcStack_a4 = (char *)0x575402;
          FUN_00649950();
          pcStack_a4 = (&PTR_DAT_0073fa70)[param_3];
LAB_00575416:
          pcStack_a8 = &local_78;
          puStack_ac = (undefined1 *)0x57541b;
          FUN_00647dc0();
        }
        local_4 = (uint)local_4._1_3_ << 8;
        pcStack_a4 = (char *)0x57542f;
        FUN_00649ba0();
        goto LAB_005751f5;
      }
      goto LAB_005751bf;
    }
    iVar2 = (int)*(short *)(DAT_0076f648 + iVar2 * 0x14 + 0xe);
  } while( true );
}

