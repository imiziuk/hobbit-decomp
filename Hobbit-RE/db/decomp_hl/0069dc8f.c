
undefined4
FUN_0069dc8f(uint param_1,uint param_2,int param_3,int param_4,byte *param_5,int *param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  piVar5 = param_6;
  iVar4 = (int)param_5;
  pbVar7 = *(byte **)((int)param_5 + 0x34);
  uVar10 = *(uint *)((int)param_5 + 0x1c);
  local_c = (byte *)*param_6;
  local_8 = param_6[1];
  param_6 = *(int **)((int)param_5 + 0x20);
  if (pbVar7 < *(byte **)((int)param_5 + 0x30)) {
    local_10 = *(byte **)((int)param_5 + 0x30) + (-1 - (int)pbVar7);
  }
  else {
    local_10 = (byte *)(*(int *)((int)param_5 + 0x2c) - (int)pbVar7);
  }
  uVar9 = *(uint *)(&DAT_00755730 + param_1 * 4);
  uVar2 = *(uint *)(&DAT_00755730 + param_2 * 4);
  param_5 = pbVar7;
  while( true ) {
    for (; uVar10 < 0x14; uVar10 = uVar10 + 8) {
      local_8 = local_8 - 1;
      param_6 = (int *)((uint)param_6 | (uint)*local_c << ((byte)uVar10 & 0x1f));
      local_c = local_c + 1;
    }
    pbVar7 = (byte *)(param_3 + (uVar9 & (uint)param_6) * 8);
    param_1 = (uint)*pbVar7;
    if (param_1 != 0) break;
LAB_0069dd51:
    param_6 = (int *)((uint)param_6 >> (pbVar7[1] & 0x1f));
    uVar10 = uVar10 - pbVar7[1];
    local_10 = local_10 + -1;
    *param_5 = pbVar7[4];
    param_5 = param_5 + 1;
LAB_0069dd6c:
    if ((local_10 < (byte *)0x102) || (local_8 < 10)) {
      uVar9 = piVar5[1] - local_8;
      if (uVar10 >> 3 < piVar5[1] - local_8) {
        uVar9 = uVar10 >> 3;
      }
      param_1 = 0;
LAB_0069df05:
      *(int **)(iVar4 + 0x20) = param_6;
      *(uint *)(iVar4 + 0x1c) = uVar10 + uVar9 * -8;
      iVar3 = *piVar5;
      *piVar5 = (int)local_c - uVar9;
      piVar5[2] = piVar5[2] + (((int)local_c - uVar9) - iVar3);
      piVar5[1] = uVar9 + local_8;
      *(byte **)(iVar4 + 0x34) = param_5;
      return param_1;
    }
  }
LAB_0069dd19:
  param_6 = (int *)((uint)param_6 >> (pbVar7[1] & 0x1f));
  uVar10 = uVar10 - pbVar7[1];
  if ((param_1 & 0x10) != 0) {
    param_1 = param_1 & 0xf;
    param_2 = (*(uint *)(&DAT_00755730 + param_1 * 4) & (uint)param_6) + *(int *)(pbVar7 + 4);
    param_6 = (int *)((uint)param_6 >> (sbyte)param_1);
    for (uVar10 = uVar10 - param_1; uVar10 < 0xf; uVar10 = uVar10 + 8) {
      local_8 = local_8 - 1;
      param_6 = (int *)((uint)param_6 | (uint)*local_c << ((byte)uVar10 & 0x1f));
      local_c = local_c + 1;
    }
    pbVar7 = (byte *)(param_4 + (uVar2 & (uint)param_6) * 8);
    while( true ) {
      bVar1 = *pbVar7;
      param_6 = (int *)((uint)param_6 >> (pbVar7[1] & 0x1f));
      uVar10 = uVar10 - pbVar7[1];
      if ((bVar1 & 0x10) != 0) {
        uVar8 = bVar1 & 0xf;
        for (; uVar10 < uVar8; uVar10 = uVar10 + 8) {
          local_8 = local_8 - 1;
          param_6 = (int *)((uint)param_6 | (uint)*local_c << ((byte)uVar10 & 0x1f));
          local_c = local_c + 1;
        }
        param_1 = *(uint *)(&DAT_00755730 + uVar8 * 4) & (uint)param_6;
        param_6 = (int *)((uint)param_6 >> (sbyte)uVar8);
        param_1 = param_1 + *(int *)(pbVar7 + 4);
        local_10 = local_10 + -param_2;
        uVar10 = uVar10 - uVar8;
        if ((uint)((int)param_5 - *(int *)(iVar4 + 0x28)) < param_1) {
          param_1 = (*(int *)(iVar4 + 0x28) - (int)param_5) + param_1;
          pbVar7 = (byte *)(*(int *)(iVar4 + 0x2c) - param_1);
          if (param_1 < param_2) {
            param_2 = param_2 - param_1;
            do {
              bVar1 = *pbVar7;
              pbVar6 = param_5 + 1;
              pbVar7 = pbVar7 + 1;
              param_1 = param_1 - 1;
              *param_5 = bVar1;
              param_5 = pbVar6;
            } while (param_1 != 0);
            pbVar7 = *(byte **)(iVar4 + 0x28);
          }
        }
        else {
          pbVar6 = param_5 + -param_1;
          *param_5 = *pbVar6;
          pbVar7 = pbVar6 + 2;
          param_2 = param_2 - 2;
          param_5[1] = pbVar6[1];
          param_5 = param_5 + 2;
        }
        do {
          bVar1 = *pbVar7;
          pbVar6 = param_5 + 1;
          pbVar7 = pbVar7 + 1;
          param_2 = param_2 - 1;
          *param_5 = bVar1;
          param_5 = pbVar6;
        } while (param_2 != 0);
        goto LAB_0069dd6c;
      }
      if ((bVar1 & 0x40) != 0) break;
      pbVar7 = pbVar7 + ((*(uint *)(&DAT_00755730 + (uint)bVar1 * 4) & (uint)param_6) +
                        *(int *)(pbVar7 + 4)) * 8;
    }
    piVar5[6] = (int)"invalid distance code";
LAB_0069deed:
    uVar9 = piVar5[1] - local_8;
    if (uVar10 >> 3 < piVar5[1] - local_8) {
      uVar9 = uVar10 >> 3;
    }
    param_1 = 0xfffffffd;
    goto LAB_0069df05;
  }
  if ((param_1 & 0x40) == 0) goto code_r0x0069dd37;
  if ((param_1 & 0x20) == 0) {
    piVar5[6] = (int)"invalid literal/length code";
    goto LAB_0069deed;
  }
  uVar9 = piVar5[1] - local_8;
  if (uVar10 >> 3 < piVar5[1] - local_8) {
    uVar9 = uVar10 >> 3;
  }
  param_1 = 1;
  goto LAB_0069df05;
code_r0x0069dd37:
  pbVar7 = pbVar7 + ((*(uint *)(&DAT_00755730 + param_1 * 4) & (uint)param_6) + *(int *)(pbVar7 + 4)
                    ) * 8;
  param_1 = (uint)*pbVar7;
  if (param_1 == 0) goto LAB_0069dd51;
  goto LAB_0069dd19;
}

