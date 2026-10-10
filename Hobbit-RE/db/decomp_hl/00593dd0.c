
undefined1 * __thiscall FUN_00593dd0(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_180 [20];
  undefined4 uStack_16c;
  undefined1 **ppuStack_168;
  undefined *puStack_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  char *pcStack_158;
  undefined1 *local_13c;
  undefined1 local_138 [44];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd0ec;
  local_c = ExceptionList;
  pcStack_158 = s_PhysController__GetAnimInfoFromT_00742e1c;
  puStack_15c = (undefined1 *)0x593dff;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  if (param_4 == -2) {
    param_4 = *(int *)(param_1 + 0x10c);
  }
  if (param_2 == (undefined1 *)0x1) {
    local_13c = auStack_180;
    FUN_00649b60(param_1 + 0x110);
    local_4 = local_4 & 0xffffff00;
    FUN_00592920();
    uVar1 = FUN_0059b640();
    puVar2 = (undefined1 *)FUN_005b72f0(uVar1);
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
  }
  pcStack_158 = (char *)0x593e6f;
  iVar3 = FUN_00592920();
  puStack_160 = *(undefined1 **)(iVar3 + 0x1b0);
  puStack_15c = param_2;
  puStack_164 = (undefined *)0x593e82;
  pcStack_158 = (char *)param_4;
  puVar2 = (undefined1 *)FUN_005b73f0();
  if ((puVar2 != (undefined1 *)0x0) || (param_3 == 0)) goto LAB_005942a8;
  switch(param_2) {
  case (undefined1 *)0x1:
    puStack_160 = (undefined1 *)0x3;
    break;
  case (undefined1 *)0x2:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x1;
    puStack_164 = (undefined *)0x593ecb;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x4;
    puStack_164 = (undefined *)0x593ee0;
    puStack_15c = puVar2;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x3;
    break;
  case (undefined1 *)0x4:
  case (undefined1 *)0x5:
  case (undefined1 *)0xb:
  case (undefined1 *)0xc:
  case (undefined1 *)0xd:
  case (undefined1 *)0xe:
  case (undefined1 *)0x10:
  case (undefined1 *)0x15:
  case (undefined1 *)0x16:
  case (undefined1 *)0x17:
  case (undefined1 *)0x18:
  case (undefined1 *)0x19:
  case (undefined1 *)0x1a:
  case (undefined1 *)0x1b:
  case (undefined1 *)0x1c:
  case (undefined1 *)0x22:
  case (undefined1 *)0x23:
  case (undefined1 *)0x24:
  case (undefined1 *)0x25:
  case (undefined1 *)0x26:
  case (undefined1 *)0x27:
  case (undefined1 *)0x28:
  case (undefined1 *)0x29:
  case (undefined1 *)0x2a:
  case (undefined1 *)0x2b:
  case (undefined1 *)0x2d:
  case (undefined1 *)0x2e:
  case (undefined1 *)0x34:
  case (undefined1 *)0x37:
  case (undefined1 *)0x39:
  case (undefined1 *)0x3b:
  case (undefined1 *)0x3e:
  case (undefined1 *)0x3f:
  case (undefined1 *)0x40:
    goto switchD_00593eae_caseD_4;
  case (undefined1 *)0x6:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x7;
    puStack_164 = (undefined *)0x593f35;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x8;
    puStack_164 = (undefined *)0x593f4a;
    puStack_15c = puVar2;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x31;
    break;
  case (undefined1 *)0x7:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x8;
    puStack_164 = (undefined *)0x593f69;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x6;
    puStack_164 = (undefined *)0x593f7e;
    puStack_15c = puVar2;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x31;
    break;
  case (undefined1 *)0x8:
    goto switchD_00593eae_caseD_8;
  case (undefined1 *)0x9:
    puStack_160 = (undefined1 *)0xa;
    break;
  case (undefined1 *)0xa:
    puStack_160 = (undefined1 *)0x9;
    break;
  case (undefined1 *)0xf:
    goto switchD_00593eae_caseD_f;
  case (undefined1 *)0x11:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x13;
    puStack_164 = (undefined *)0x593f9d;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x14;
    puStack_164 = (undefined *)0x593fb2;
    puStack_15c = puVar2;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x12;
    break;
  case (undefined1 *)0x12:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x14;
    puStack_164 = (undefined *)0x593fd1;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x13;
    puStack_164 = (undefined *)0x593fe6;
    puStack_15c = puVar2;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x11;
    break;
  case (undefined1 *)0x13:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x12;
    puStack_164 = (undefined *)0x594005;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x11;
    puStack_164 = (undefined *)0x59401a;
    puStack_15c = puVar2;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x14;
    break;
  case (undefined1 *)0x14:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x11;
    puStack_164 = (undefined *)0x594039;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x12;
    puStack_164 = (undefined *)0x59404e;
    puStack_15c = puVar2;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x13;
    break;
  case (undefined1 *)0x1d:
    puStack_160 = (undefined1 *)0x1e;
    break;
  case (undefined1 *)0x1e:
    goto switchD_00593eae_caseD_1e;
  case (undefined1 *)0x1f:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x1e;
    puStack_164 = (undefined *)0x594077;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
switchD_00593eae_caseD_1e:
    puStack_160 = (undefined1 *)0x1d;
    break;
  case (undefined1 *)0x20:
    puStack_160 = (undefined1 *)0x21;
    break;
  case (undefined1 *)0x21:
    puStack_160 = (undefined1 *)0x20;
    break;
  case (undefined1 *)0x2c:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x35;
    puStack_164 = (undefined *)0x594114;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x3;
    puStack_164 = (undefined *)0x594129;
    puStack_15c = puVar2;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x1;
    break;
  case (undefined1 *)0x2f:
  case (undefined1 *)0x30:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x8;
    puStack_164 = (undefined *)0x5940ca;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
switchD_00593eae_caseD_8:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x7;
    puStack_164 = (undefined *)0x5940e0;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x6;
    puStack_164 = (undefined *)0x5940f5;
    puStack_15c = puVar2;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x31;
    break;
  default:
    puStack_15c = local_10c;
    pcStack_158 = s_CharType__00742e10;
    puStack_160 = (undefined1 *)0x5941fa;
    FUN_00647d10();
    pcStack_158 = (char *)0x594204;
    iVar3 = FUN_00592920();
    pcStack_158 = *(char **)(iVar3 + 0x1b0);
    puStack_15c = local_138;
    puStack_160 = (undefined1 *)0x594217;
    puVar4 = (undefined4 *)FUN_004675a0();
    pcStack_158 = (char *)*puVar4;
    puStack_15c = local_10c;
    local_4._0_1_ = 2;
    puStack_160 = (undefined1 *)0x59422c;
    FUN_00647dc0();
    local_4._0_1_ = 0;
    pcStack_158 = (char *)0x594240;
    FUN_00649ba0();
    puStack_15c = local_10c;
    pcStack_158 = s_nAnimType__00742e00;
    puStack_160 = (undefined1 *)0x59424f;
    FUN_00647dc0();
    puStack_160 = param_2;
    ppuStack_168 = &local_13c;
    puStack_164 = &DAT_007328e4;
    uStack_16c = 0x59425f;
    FUN_00649920();
    local_4._0_1_ = 3;
    pcStack_158 = (char *)0x594271;
    pcStack_158 = (char *)FUN_00649940();
    puStack_15c = local_10c;
    puStack_160 = (undefined1 *)0x59427c;
    FUN_00647dc0();
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_158 = (char *)0x594290;
    FUN_00649950();
    goto switchD_00593eae_caseD_4;
  case (undefined1 *)0x35:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x2c;
    puStack_164 = (undefined *)0x594148;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x3;
    puStack_164 = (undefined *)0x59415d;
    puStack_15c = puVar2;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x1;
    break;
  case (undefined1 *)0x36:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x7;
    puStack_164 = (undefined *)0x594179;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x6;
    puStack_164 = (undefined *)0x59418e;
    puStack_15c = puVar2;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x8;
    puStack_164 = (undefined *)0x5941a3;
    puStack_15c = puVar2;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x31;
    break;
  case (undefined1 *)0x38:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x3;
    puStack_164 = (undefined *)0x593eff;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
  case (undefined1 *)0x3:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x2c;
    puStack_164 = (undefined *)0x593f15;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) {
LAB_005942a8:
      local_4 = 0xffffffff;
      pcStack_158 = (char *)0x5942bc;
      FUN_00649720();
      ExceptionList = local_c;
      return puVar2;
    }
switchD_00593eae_caseD_f:
    puStack_160 = (undefined1 *)0x1;
    break;
  case (undefined1 *)0x3a:
    puStack_15c = (undefined1 *)0x0;
    puStack_160 = (undefined1 *)0x1f;
    puStack_164 = (undefined *)0x594097;
    pcStack_158 = (char *)param_4;
    puVar2 = (undefined1 *)FUN_00593dd0();
    if (puVar2 != (undefined1 *)0x0) goto LAB_005942a8;
    puStack_160 = (undefined1 *)0x39;
  }
  puStack_15c = (undefined1 *)0x0;
  puStack_164 = (undefined *)0x5941c6;
  pcStack_158 = (char *)param_4;
  puVar2 = (undefined1 *)FUN_00593dd0();
  if (puVar2 != (undefined1 *)0x0) {
    local_4 = 0xffffffff;
    pcStack_158 = (char *)0x5941e4;
    FUN_00649720();
    ExceptionList = local_c;
    return puVar2;
  }
switchD_00593eae_caseD_4:
  local_4 = 0xffffffff;
  pcStack_158 = (char *)0x5942a4;
  FUN_00649720();
  ExceptionList = local_c;
  return (undefined1 *)0x0;
}

