
void FUN_00699eb6(uint *param_1,int *param_2,byte *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  byte *local_8;
  
  puVar4 = param_1;
  local_14 = (byte *)*param_2;
  local_c = (byte *)param_2[1];
  local_8 = (byte *)param_1[7];
  local_10 = (byte *)param_1[0xd];
  if (local_10 < (byte *)param_1[0xc]) {
    local_18 = (byte *)param_1[0xc] + (-1 - (int)local_10);
    param_1 = (uint *)param_1[8];
  }
  else {
    local_18 = (byte *)(param_1[0xb] - (int)local_10);
    param_1 = (uint *)param_1[8];
  }
LAB_00699ef6:
  pbVar5 = local_10;
  pbVar10 = local_14;
  switch(*puVar4) {
  case 0:
LAB_00699f11:
    if (local_8 < (byte *)0x3) {
      if (local_c != (byte *)0x0) goto code_r0x00699f20;
      puVar4[8] = (uint)param_1;
      puVar4[7] = (uint)local_8;
      iVar9 = (int)local_14 - *param_2;
      *param_2 = (int)local_14;
LAB_0069a5d3:
      param_2[1] = 0;
LAB_0069a5d7:
      param_2[2] = param_2[2] + iVar9;
      goto LAB_0069a796;
    }
    uVar7 = ((uint)param_1 & 7) >> 1;
    puVar4[6] = (uint)param_1 & 1;
    if (uVar7 == 0) {
      uVar7 = (uint)(local_8 + -3) & 7;
      local_8 = local_8 + -3 + -uVar7;
      *puVar4 = 1;
      param_1 = (uint *)(((uint)param_1 >> 3) >> (sbyte)uVar7);
    }
    else if (uVar7 == 1) {
      FUN_0069bd57(&local_2c,&local_28,&local_24,&local_20,param_2);
      uVar7 = FUN_0069b2b5(local_2c,local_28,local_24,local_20,param_2);
      puVar4[1] = uVar7;
      if (uVar7 == 0) {
        puVar4[7] = (uint)local_8;
        puVar4[8] = (uint)param_1;
        param_2[1] = (int)local_c;
        iVar9 = *param_2;
        *param_2 = (int)local_14;
        param_2[2] = (int)(local_14 + (param_2[2] - iVar9));
        puVar4[0xd] = (uint)local_10;
        param_3 = (byte *)0xfffffffc;
        goto LAB_0069a799;
      }
      local_8 = local_8 + -3;
      *puVar4 = 6;
      param_1 = (uint *)((uint)param_1 >> 3);
    }
    else {
      if (uVar7 == 2) {
        param_1 = (uint *)((uint)param_1 >> 3);
        uVar7 = 3;
        local_8 = local_8 + -3;
        goto LAB_0069a066;
      }
      if (uVar7 == 3) {
        param_1 = (uint *)((uint)param_1 >> 3);
        *puVar4 = 9;
        param_2[6] = (int)"invalid block type";
        puVar4[7] = (uint)(local_8 + -3);
LAB_0069a566:
        puVar4[8] = (uint)param_1;
        param_2[1] = (int)local_c;
        iVar9 = (int)local_14 - *param_2;
        *param_2 = (int)local_14;
LAB_0069a632:
        param_2[2] = param_2[2] + iVar9;
        param_3 = (byte *)0xfffffffd;
LAB_0069a796:
        puVar4[0xd] = (uint)pbVar5;
LAB_0069a799:
        FUN_0069bd86(puVar4,param_2,param_3);
        return;
      }
    }
    goto LAB_00699ef6;
  case 1:
    for (pbVar10 = local_8; pbVar10 < (byte *)0x20; pbVar10 = pbVar10 + 8) {
      if (local_c == (byte *)0x0) {
        puVar4[7] = (uint)pbVar10;
        puVar4[8] = (uint)param_1;
        iVar9 = (int)local_14 - *param_2;
        param_2[1] = 0;
        *param_2 = (int)local_14;
        goto LAB_0069a5d7;
      }
      local_c = local_c + -1;
      param_3 = (byte *)0x0;
      param_1 = (uint *)((uint)param_1 | (uint)*local_14 << ((byte)pbVar10 & 0x1f));
      local_14 = local_14 + 1;
    }
    if (~(uint)param_1 >> 0x10 != ((uint)param_1 & 0xffff)) {
      *puVar4 = 9;
      param_2[6] = (int)"invalid stored block lengths";
      puVar4[7] = (uint)pbVar10;
      goto LAB_0069a566;
    }
    puVar4[1] = (uint)param_1 & 0xffff;
    local_8 = (byte *)0x0;
    param_1 = (uint *)0x0;
    if (puVar4[1] == 0) goto LAB_0069a05c;
    uVar7 = 2;
LAB_0069a066:
    *puVar4 = uVar7;
    goto LAB_00699ef6;
  case 2:
    if (local_c == (byte *)0x0) {
      puVar4[8] = (uint)param_1;
      puVar4[7] = (uint)local_8;
      param_2[1] = 0;
      goto LAB_0069a786;
    }
    if (local_18 == (byte *)0x0) {
      if (local_10 == (byte *)puVar4[0xb]) {
        pbVar5 = (byte *)puVar4[0xc];
        pbVar10 = (byte *)puVar4[10];
        if (pbVar5 != pbVar10) {
          if (pbVar10 < pbVar5) {
            local_18 = pbVar5 + (-1 - (int)pbVar10);
          }
          else {
            local_18 = (byte *)puVar4[0xb] + -(int)pbVar10;
          }
          local_10 = pbVar10;
          if (local_18 != (byte *)0x0) goto LAB_0069a112;
        }
      }
      puVar4[0xd] = (uint)local_10;
      param_3 = (byte *)FUN_0069bd86(puVar4,param_2,param_3);
      local_10 = (byte *)puVar4[0xd];
      pbVar5 = (byte *)puVar4[0xc];
      if (local_10 < pbVar5) {
        local_18 = pbVar5 + (-1 - (int)local_10);
      }
      else {
        local_18 = (byte *)(puVar4[0xb] - (int)local_10);
      }
      local_1c = (byte *)puVar4[0xb];
      if ((local_10 == local_1c) && (pbVar10 = (byte *)puVar4[10], pbVar5 != pbVar10)) {
        local_10 = pbVar10;
        if (pbVar10 < pbVar5) {
          local_18 = pbVar5 + (-1 - (int)pbVar10);
        }
        else {
          local_18 = local_1c + -(int)pbVar10;
        }
      }
      if (local_18 == (byte *)0x0) {
        puVar4[8] = (uint)param_1;
        puVar4[7] = (uint)local_8;
        param_2[1] = (int)local_c;
        iVar9 = *param_2;
        *param_2 = (int)local_14;
        param_2[2] = (int)(local_14 + (param_2[2] - iVar9));
        puVar4[0xd] = (uint)local_10;
        goto LAB_0069a799;
      }
    }
LAB_0069a112:
    param_3 = (byte *)0x0;
    pbVar5 = (byte *)puVar4[1];
    if (local_c < (byte *)puVar4[1]) {
      pbVar5 = local_c;
    }
    if (local_18 < pbVar5) {
      pbVar5 = local_18;
    }
    pbVar10 = local_14 + (int)pbVar5;
    local_c = local_c + -(int)pbVar5;
    pbVar2 = local_10 + (int)pbVar5;
    local_18 = local_18 + -(int)pbVar5;
    for (uVar7 = (uint)pbVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_10 = *(undefined4 *)local_14;
      local_14 = local_14 + 4;
      local_10 = local_10 + 4;
    }
    for (uVar7 = (uint)pbVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_10 = *local_14;
      local_14 = local_14 + 1;
      local_10 = local_10 + 1;
    }
    puVar1 = puVar4 + 1;
    *puVar1 = *puVar1 - (int)pbVar5;
    local_14 = pbVar10;
    local_10 = pbVar2;
    if (*puVar1 == 0) {
LAB_0069a05c:
      uVar7 = -(uint)(puVar4[6] != 0) & 7;
      goto LAB_0069a066;
    }
    goto LAB_00699ef6;
  case 3:
    for (; local_8 < (byte *)0xe; local_8 = local_8 + 8) {
      if (local_c == (byte *)0x0) {
        puVar4[8] = (uint)param_1;
        puVar4[7] = (uint)local_8;
        iVar9 = (int)pbVar10 - *param_2;
        *param_2 = (int)pbVar10;
        goto LAB_0069a5d3;
      }
      param_3 = (byte *)0x0;
      local_c = local_c + -1;
      param_1 = (uint *)((uint)param_1 | (uint)*pbVar10 << ((byte)local_8 & 0x1f));
      pbVar10 = pbVar10 + 1;
    }
    puVar4[1] = (uint)param_1 & 0x3fff;
    if ((0x1d < ((uint)param_1 & 0x1f)) ||
       (uVar7 = ((uint)param_1 & 0x3fff) >> 5 & 0x1f, 0x1d < uVar7)) {
      *puVar4 = 9;
      param_2[6] = (int)"too many length or distance symbols";
      puVar4[8] = (uint)param_1;
      puVar4[7] = (uint)local_8;
      param_2[1] = (int)local_c;
      iVar9 = (int)pbVar10 - *param_2;
      *param_2 = (int)pbVar10;
      goto LAB_0069a632;
    }
    uVar7 = (*(code *)param_2[8])(param_2[10],uVar7 + 0x102 + ((uint)param_1 & 0x1f),4);
    puVar4[3] = uVar7;
    if (uVar7 != 0) {
      param_1 = (uint *)((uint)param_1 >> 0xe);
      local_8 = local_8 + -0xe;
      puVar4[2] = 0;
      *puVar4 = 4;
      goto LAB_0069a1e7;
    }
    break;
  case 4:
LAB_0069a1e7:
    if (puVar4[2] < (puVar4[1] >> 10) + 4) {
      do {
        for (; local_8 < (byte *)0x3; local_8 = local_8 + 8) {
          if (local_c == (byte *)0x0) goto LAB_0069a679;
          bVar3 = *pbVar10;
          param_3 = (byte *)0x0;
          local_c = local_c + -1;
          bVar8 = (byte)local_8;
          pbVar10 = pbVar10 + 1;
          param_1 = (uint *)((uint)param_1 | (uint)bVar3 << (bVar8 & 0x1f));
        }
        uVar7 = (uint)param_1 >> 3;
        local_8 = local_8 + -3;
        *(uint *)(puVar4[3] + *(int *)(&DAT_006fc670 + puVar4[2] * 4) * 4) = (uint)param_1 & 7;
        puVar4[2] = puVar4[2] + 1;
        param_1 = (uint *)uVar7;
      } while (puVar4[2] < (puVar4[1] >> 10) + 4);
    }
    while (puVar4[2] < 0x13) {
      *(undefined4 *)(puVar4[3] + *(int *)(&DAT_006fc670 + puVar4[2] * 4) * 4) = 0;
      puVar4[2] = puVar4[2] + 1;
    }
    puVar4[4] = 7;
    local_18 = (byte *)FUN_0069bbd5(puVar4[3],puVar4 + 4,puVar4 + 5,puVar4[9],param_2);
    if (local_18 == (byte *)0x0) {
      puVar4[2] = 0;
      *puVar4 = 5;
      goto LAB_0069a3cb;
    }
    (*(code *)param_2[9])(param_2[10],puVar4[3]);
LAB_0069a64b:
    if (local_18 == (byte *)0xfffffffd) {
      *puVar4 = 9;
    }
    puVar4[8] = (uint)param_1;
    puVar4[7] = (uint)local_8;
    param_2[1] = (int)local_c;
    iVar9 = *param_2;
    *param_2 = (int)pbVar10;
    param_2[2] = (int)(pbVar10 + (param_2[2] - iVar9));
    puVar4[0xd] = (uint)local_10;
    param_3 = local_18;
    goto LAB_0069a799;
  case 5:
LAB_0069a3cb:
    while (puVar4[2] < (puVar4[1] >> 5 & 0x1f) + 0x102 + (puVar4[1] & 0x1f)) {
      for (; local_8 < (byte *)puVar4[4]; local_8 = local_8 + 8) {
        if (local_c == (byte *)0x0) goto LAB_0069a679;
        param_3 = (byte *)0x0;
        local_c = local_c + -1;
        param_1 = (uint *)((uint)param_1 | (uint)*pbVar10 << ((byte)local_8 & 0x1f));
        pbVar10 = pbVar10 + 1;
      }
      iVar9 = puVar4[5] + (*(uint *)(&DAT_00755730 + (int)puVar4[4] * 4) & (uint)param_1) * 8;
      bVar3 = *(byte *)(iVar9 + 1);
      local_18 = (byte *)(uint)bVar3;
      local_1c = *(byte **)(iVar9 + 4);
      if (local_1c < (byte *)0x10) {
        param_1 = (uint *)((uint)param_1 >> (bVar3 & 0x1f));
        local_8 = local_8 + -(int)local_18;
        *(byte **)(puVar4[3] + puVar4[2] * 4) = local_1c;
        puVar4[2] = puVar4[2] + 1;
      }
      else {
        if (local_1c == (byte *)0x12) {
          pbVar5 = (byte *)0x7;
        }
        else {
          pbVar5 = local_1c + -0xe;
        }
        local_14 = (byte *)((uint)(local_1c == (byte *)0x12) * 8 + 3);
        for (; local_8 < pbVar5 + (int)local_18; local_8 = local_8 + 8) {
          if (local_c == (byte *)0x0) goto LAB_0069a679;
          param_3 = (byte *)0x0;
          local_c = local_c + -1;
          param_1 = (uint *)((uint)param_1 | (uint)*pbVar10 << ((byte)local_8 & 0x1f));
          pbVar10 = pbVar10 + 1;
        }
        uVar7 = (uint)param_1 >> (bVar3 & 0x1f);
        local_14 = local_14 + (*(uint *)(&DAT_00755730 + (int)pbVar5 * 4) & uVar7);
        param_1 = (uint *)(uVar7 >> ((byte)pbVar5 & 0x1f));
        local_8 = local_8 + -(int)(pbVar5 + (int)local_18);
        uVar7 = puVar4[2];
        if ((byte *)((puVar4[1] >> 5 & 0x1f) + 0x102 + (puVar4[1] & 0x1f)) < local_14 + uVar7) {
LAB_0069a69d:
          (*(code *)param_2[9])(param_2[10],puVar4[3]);
          *puVar4 = 9;
          param_2[6] = (int)"invalid bit length repeat";
          puVar4[8] = (uint)param_1;
          puVar4[7] = (uint)local_8;
          param_2[1] = (int)local_c;
          param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar10;
          puVar4[0xd] = (uint)local_10;
          FUN_0069bd86(puVar4,param_2,0xfffffffd);
          return;
        }
        if (local_1c == (byte *)0x10) {
          if (uVar7 == 0) goto LAB_0069a69d;
          uVar6 = *(undefined4 *)((puVar4[3] - 4) + uVar7 * 4);
        }
        else {
          uVar6 = 0;
        }
        do {
          *(undefined4 *)(puVar4[3] + uVar7 * 4) = uVar6;
          uVar7 = uVar7 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != (byte *)0x0);
        puVar4[2] = uVar7;
        local_14 = (byte *)0x0;
      }
    }
    puVar4[5] = 0;
    local_1c = (byte *)0x9;
    local_14 = (byte *)0x6;
    local_18 = (byte *)FUN_0069bc54((puVar4[1] & 0x1f) + 0x101,(puVar4[1] >> 5 & 0x1f) + 1,puVar4[3]
                                    ,&local_1c,&local_14,&local_34,&local_30,puVar4[9],param_2);
    (*(code *)param_2[9])(param_2[10],puVar4[3]);
    if (local_18 != (byte *)0x0) goto LAB_0069a64b;
    uVar7 = FUN_0069b2b5(local_1c,local_14,local_34,local_30,param_2);
    if (uVar7 != 0) {
      puVar4[1] = uVar7;
      *puVar4 = 6;
      goto LAB_0069a476;
    }
    break;
  case 6:
LAB_0069a476:
    puVar4[8] = (uint)param_1;
    puVar4[7] = (uint)local_8;
    param_2[1] = (int)local_c;
    param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
    *param_2 = (int)pbVar10;
    puVar4[0xd] = (uint)local_10;
    param_3 = (byte *)FUN_0069b2e9(puVar4,param_2,param_3);
    if (param_3 != (byte *)0x1) goto LAB_0069a799;
    param_3 = (byte *)0x0;
    FUN_0069b83f(puVar4[1],param_2);
    local_c = (byte *)param_2[1];
    local_14 = (byte *)*param_2;
    param_1 = (uint *)puVar4[8];
    local_8 = (byte *)puVar4[7];
    local_10 = (byte *)puVar4[0xd];
    if (local_10 < (byte *)puVar4[0xc]) {
      local_18 = (byte *)puVar4[0xc] + (-1 - (int)local_10);
    }
    else {
      local_18 = (byte *)(puVar4[0xb] - (int)local_10);
    }
    if (puVar4[6] != 0) {
      *puVar4 = 7;
      goto LAB_0069a706;
    }
    *puVar4 = 0;
    goto LAB_00699ef6;
  case 7:
LAB_0069a706:
    pbVar10 = local_14;
    puVar4[0xd] = (uint)local_10;
    param_3 = (byte *)FUN_0069bd86(puVar4,param_2,param_3);
    pbVar5 = (byte *)puVar4[0xd];
    if ((byte *)puVar4[0xc] == pbVar5) {
      *puVar4 = 8;
LAB_0069a74b:
      puVar4[8] = (uint)param_1;
      puVar4[7] = (uint)local_8;
      param_2[1] = (int)local_c;
      param_3 = (byte *)0x1;
      param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
    }
    else {
      puVar4[8] = (uint)param_1;
      puVar4[7] = (uint)local_8;
      param_2[1] = (int)local_c;
      param_2[2] = (int)(pbVar10 + (param_2[2] - *param_2));
    }
    *param_2 = (int)pbVar10;
    goto LAB_0069a796;
  case 8:
    goto LAB_0069a74b;
  case 9:
    param_3 = (byte *)0xfffffffd;
    goto LAB_0069a771;
  default:
    param_3 = (byte *)0xfffffffe;
LAB_0069a771:
    puVar4[8] = (uint)param_1;
    puVar4[7] = (uint)local_8;
    param_2[1] = (int)local_c;
LAB_0069a786:
    iVar9 = *param_2;
    *param_2 = (int)local_14;
    param_2[2] = (int)(local_14 + (param_2[2] - iVar9));
    goto LAB_0069a796;
  }
  puVar4[8] = (uint)param_1;
  puVar4[7] = (uint)local_8;
  param_2[1] = (int)local_c;
  iVar9 = *param_2;
  *param_2 = (int)pbVar10;
  param_2[2] = (int)(pbVar10 + (param_2[2] - iVar9));
  puVar4[0xd] = (uint)local_10;
  param_3 = (byte *)0xfffffffc;
  goto LAB_0069a799;
LAB_0069a679:
  puVar4[8] = (uint)param_1;
  puVar4[7] = (uint)local_8;
  param_2[1] = 0;
  iVar9 = *param_2;
  *param_2 = (int)pbVar10;
  param_2[2] = (int)(pbVar10 + (param_2[2] - iVar9));
  puVar4[0xd] = (uint)local_10;
  goto LAB_0069a799;
code_r0x00699f20:
  param_3 = (byte *)0x0;
  local_c = local_c + -1;
  param_1 = (uint *)((uint)param_1 | (uint)*local_14 << ((byte)local_8 & 0x1f));
  local_14 = local_14 + 1;
  local_8 = local_8 + 8;
  goto LAB_00699f11;
}

