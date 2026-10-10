
void FUN_0069134c(int param_1,byte *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  pbVar9 = (byte *)(param_1 + 3);
  bVar3 = *pbVar9;
  pbVar10 = (byte *)(param_1 + 7);
  local_c = 0xf;
  bVar6 = bVar3;
  do {
    bVar4 = *pbVar10;
    if (bVar6 < bVar4) {
      bVar6 = bVar4;
    }
    if (bVar4 < bVar3) {
      bVar3 = bVar4;
    }
    pbVar10 = pbVar10 + 4;
    local_c = local_c + -1;
  } while (local_c != 0);
  if ((bVar6 == 0xff) && (bVar3 == 0)) {
    iVar11 = 0x10;
    do {
      bVar4 = *pbVar9;
      if ((bVar4 < bVar6) && (bVar4 != 0)) {
        bVar6 = bVar4;
      }
      if ((bVar3 < bVar4) && (bVar4 != 0xff)) {
        bVar3 = bVar4;
      }
      pbVar9 = pbVar9 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    if (bVar6 < bVar3) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
      bVar6 = 0xff;
      bVar3 = 0;
    }
  }
  else {
    bVar2 = false;
  }
  *param_2 = bVar6;
  param_2[1] = bVar3;
  if (bVar6 == bVar3) {
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  else {
    iVar7 = (uint)bVar6 - (uint)bVar3;
    uVar8 = 0xf;
    iVar11 = (uint)!bVar2 * 2 + 5;
    do {
      local_8 = local_8 << 3;
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 3 + uVar8 * 4);
        if (cVar1 == '\0') {
          local_8 = local_8 | 6;
        }
        else {
          if (cVar1 != -1) goto LAB_0069141b;
          local_8 = local_8 | 7;
        }
      }
      else {
LAB_0069141b:
        iVar5 = (int)(((uint)bVar6 - (uint)*(byte *)(param_1 + 3 + uVar8 * 4)) * iVar11 +
                     (iVar7 >> 1)) / iVar7;
        if (iVar5 < iVar11) {
          if (0 < iVar5) {
            local_8 = local_8 | iVar5 + 1U;
          }
        }
        else {
          local_8 = local_8 | 1;
        }
      }
      if ((uVar8 & 7) == 0) {
        bVar3 = (byte)(local_8 >> 8);
        bVar4 = (byte)(local_8 >> 0x10);
        if (uVar8 == 8) {
          param_2[5] = (byte)local_8;
          param_2[6] = bVar3;
          param_2[7] = bVar4;
        }
        else {
          param_2[2] = (byte)local_8;
          param_2[3] = bVar3;
          param_2[4] = bVar4;
        }
        local_8 = local_8 >> 0x10;
      }
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  FUN_006912c1(param_1,param_2 + 8);
  return;
}

