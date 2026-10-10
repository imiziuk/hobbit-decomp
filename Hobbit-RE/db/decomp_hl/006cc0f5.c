
undefined4
FUN_006cc0f5(ushort *param_1,int *param_2,byte *param_3,undefined4 param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  char local_60 [23];
  char local_49;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = 0;
  local_c = 0;
  local_18 = 0;
  for (pbVar7 = param_3;
      (((bVar6 = *pbVar7, bVar6 == 0x20 || (bVar6 == 9)) || (bVar6 == 10)) || (bVar6 == 0xd));
      pbVar7 = pbVar7 + 1) {
  }
  iVar4 = 4;
  iVar10 = 0;
  iVar5 = local_14;
LAB_006cc14c:
  local_14 = iVar5;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  pbVar9 = param_3;
  iVar1 = local_14;
  switch(iVar10) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_006cc169:
      local_14 = iVar1;
      iVar10 = 3;
      goto LAB_006cc38e;
    }
    if (bVar6 == DAT_007589dc) goto LAB_006cc178;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar10 = 2;
      pbVar7 = pbVar8;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar10 = 2;
      pbVar7 = pbVar8;
      iVar5 = local_14;
    }
    else {
      iVar10 = iVar5;
      pbVar7 = pbVar8;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_006cc468;
    }
    goto LAB_006cc14c;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar1 = iVar5, (char)bVar6 < ':')) goto LAB_006cc169;
    iVar10 = iVar4;
    pbVar7 = pbVar8;
    if (bVar6 != DAT_007589dc) {
      iVar10 = iVar5;
      if ((bVar6 == 0x2b) || (iVar10 = local_14, bVar6 == 0x2d)) goto LAB_006cc1fd;
      iVar10 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_006cc1d6;
    }
    goto LAB_006cc14c;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_006cc169;
    if (bVar6 == DAT_007589dc) {
LAB_006cc178:
      iVar10 = 5;
      pbVar7 = pbVar8;
      iVar5 = local_14;
    }
    else {
      iVar10 = iVar5;
      pbVar7 = pbVar8;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_006cc46d;
    }
    goto LAB_006cc14c;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_007589d8 < 2) {
        uVar2 = (byte)PTR_DAT_007587cc[(uint)bVar6 * 2] & 4;
      }
      else {
        uVar2 = FUN_006c6f0c(bVar6,4);
      }
      if (uVar2 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar3 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar3;
      }
      else {
        local_c = local_c + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar10 = iVar4;
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (bVar6 != DAT_007589dc) goto LAB_006cc2ea;
    goto LAB_006cc14c;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar10 = iVar5;
    if (local_8 == 0) {
      while (iVar5 = local_28, iVar10 = local_14, bVar6 == 0x30) {
        local_c = local_c + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar10;
      local_28 = iVar5;
      if (DAT_007589d8 < 2) {
        uVar2 = (byte)PTR_DAT_007587cc[(uint)bVar6 * 2] & 4;
      }
      else {
        uVar2 = FUN_006c6f0c(bVar6,4);
      }
      if (uVar2 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar3 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar3;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar10 = local_14;
    }
LAB_006cc2ea:
    iVar10 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_006cc1fd:
      local_14 = iVar10;
      iVar10 = 0xb;
      pbVar7 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_006cc1d6:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_006cc468;
      iVar10 = 6;
      pbVar7 = pbVar8;
      iVar5 = local_14;
    }
    goto LAB_006cc14c;
  case 5:
    local_28 = iVar5;
    if (DAT_007589d8 < 2) {
      uVar2 = (byte)PTR_DAT_007587cc[(uint)bVar6 * 2] & 4;
    }
    else {
      uVar2 = FUN_006c6f0c(bVar6,4);
    }
    iVar10 = iVar4;
    if (uVar2 != 0) goto LAB_006cc38e;
    goto LAB_006cc46d;
  case 6:
    param_3 = pbVar7 + -1;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_006cc3c3;
      if (bVar6 == 0x2d) goto LAB_006cc3b7;
      pbVar9 = param_3;
      if (bVar6 != 0x30) goto LAB_006cc46d;
LAB_006cc35c:
      iVar10 = 8;
      pbVar7 = pbVar8;
      iVar5 = local_14;
      goto LAB_006cc14c;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x30) goto LAB_006cc35c;
      goto LAB_006cc46d;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_006cc468;
    break;
  case 9:
    local_24 = 1;
    iVar4 = 0;
    goto LAB_006cc3ee;
  default:
    goto switchD_006cc158_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      param_3 = pbVar7;
      if (bVar6 == 0x2b) {
LAB_006cc3c3:
        iVar10 = 7;
        pbVar7 = pbVar8;
        iVar5 = local_14;
      }
      else {
        pbVar9 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_006cc46d;
LAB_006cc3b7:
        local_1c = -1;
        iVar10 = 7;
        pbVar7 = pbVar8;
        iVar5 = local_14;
      }
      goto LAB_006cc14c;
    }
    iVar10 = 10;
    pbVar8 = pbVar7;
switchD_006cc158_caseD_a:
    pbVar7 = pbVar8;
    pbVar9 = pbVar8;
    iVar5 = local_14;
    if (iVar10 != 10) goto LAB_006cc14c;
    goto LAB_006cc46d;
  }
  iVar10 = 9;
LAB_006cc38e:
  pbVar7 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_006cc14c;
LAB_006cc3ee:
  if (DAT_007589d8 < 2) {
    uVar2 = (byte)PTR_DAT_007587cc[(uint)bVar6 * 2] & 4;
  }
  else {
    uVar2 = FUN_006c6f0c(bVar6,4);
  }
  if (uVar2 == 0) goto LAB_006cc438;
  iVar4 = (char)bVar6 + -0x30 + iVar4 * 10;
  if (0x1450 < iVar4) goto LAB_006cc430;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_006cc3ee;
LAB_006cc430:
  iVar4 = 0x1451;
LAB_006cc438:
  while( true ) {
    local_20 = iVar4;
    if (DAT_007589d8 < 2) {
      uVar2 = (byte)PTR_DAT_007587cc[(uint)bVar6 * 2] & 4;
    }
    else {
      uVar2 = FUN_006c6f0c(bVar6,4);
    }
    if (uVar2 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    iVar4 = local_20;
  }
LAB_006cc468:
  pbVar9 = pbVar8 + -1;
LAB_006cc46d:
  *param_2 = (int)pbVar9;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_006cc57b;
  }
  pcVar3 = local_10;
  if (0x18 < local_8) {
    if ('\x04' < local_49) {
      local_49 = local_49 + '\x01';
    }
    local_8 = 0x18;
    local_c = local_c + 1;
    pcVar3 = local_10 + -1;
  }
  if (local_8 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
  }
  else {
    while (pcVar3 = pcVar3 + -1, *pcVar3 == '\0') {
      local_8 = local_8 - 1;
      local_c = local_c + 1;
    }
    FUN_006cc6a0(local_60,local_8,&local_44);
    iVar4 = local_20;
    if (local_1c < 0) {
      iVar4 = -local_20;
    }
    iVar4 = iVar4 + local_c;
    if (local_24 == 0) {
      iVar4 = iVar4 + param_5;
    }
    if (local_28 == 0) {
      iVar4 = iVar4 - param_6;
    }
    if (iVar4 < 0x1451) {
      if (-0x1451 < iVar4) {
        FUN_006cd1a3(&local_44,iVar4,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_006cc500;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_006cc500:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte *)0x0;
      param_3 = (byte *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_006cc57b:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}

