
byte * FUN_0068f12f(int *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  int local_14 [4];
  
  pbVar10 = param_2;
  bVar2 = *(byte *)(param_1 + 2);
  pbVar4 = (byte *)(uint)bVar2;
  if (bVar2 != 3) {
    bVar1 = false;
    iVar11 = *param_1;
    if ((bVar2 & 2) == 0) {
      iVar8 = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[3];
      uVar9 = 1;
    }
    else {
      iVar8 = (uint)*(byte *)((int)param_1 + 9) - (uint)*param_3;
      local_14[1] = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[1];
      local_14[2] = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[2];
      uVar9 = 3;
    }
    local_14[0] = iVar8;
    pbVar4 = param_3;
    if ((*(byte *)(param_1 + 2) & 4) != 0) {
      pbVar4 = (byte *)((uint)*(byte *)((int)param_1 + 9) - (uint)param_3[4]);
      local_14[uVar9] = (int)pbVar4;
      uVar9 = uVar9 + 1;
    }
    iVar7 = 0;
    if (uVar9 != 0) {
      do {
        pbVar4 = (byte *)(local_14 + iVar7);
        if (*(int *)pbVar4 < 1) {
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          pbVar4[2] = 0;
          pbVar4[3] = 0;
          iVar8 = local_14[0];
        }
        else {
          bVar1 = true;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar9);
      if (bVar1) {
        uVar5 = (uint)*(byte *)((int)param_1 + 9);
        if (uVar5 == 2) {
          pbVar4 = param_2;
          for (iVar11 = param_1[1]; iVar11 != 0; iVar11 = iVar11 + -1) {
            *pbVar4 = *pbVar4 >> 1 & 0x55;
            pbVar4 = pbVar4 + 1;
          }
        }
        else if (uVar5 == 4) {
          bVar6 = (byte)iVar8;
          bVar2 = (byte)(0xf0 >> (bVar6 & 0x1f)) & 0xf0 | (byte)(0xf >> (bVar6 & 0x1f));
          pbVar4 = (byte *)(uint)bVar2;
          for (iVar11 = param_1[1]; iVar11 != 0; iVar11 = iVar11 + -1) {
            *param_2 = *param_2 >> (bVar6 & 0x1f) & bVar2;
            param_2 = param_2 + 1;
          }
        }
        else if (uVar5 == 8) {
          uVar5 = iVar11 * uVar9;
          uVar13 = 0;
          pbVar4 = (byte *)0x0;
          if (uVar5 != 0) {
            do {
              pbVar4 = (byte *)(uVar13 / uVar9);
              *param_2 = *param_2 >> (*(byte *)(local_14 + uVar13 % uVar9) & 0x1f);
              param_2 = param_2 + 1;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar5);
          }
        }
        else {
          pbVar4 = (byte *)(uVar5 - 0x10);
          if (pbVar4 == (byte *)0x0) {
            pbVar12 = (byte *)(iVar11 * uVar9);
            param_2 = (byte *)0x0;
            if (pbVar12 != (byte *)0x0) {
              do {
                uVar3 = (ushort)((ushort)*pbVar10 * 0x100 + (ushort)pbVar10[1]) >>
                        ((byte)(short)local_14[(uint)param_2 % uVar9] & 0x1f);
                *pbVar10 = (byte)(uVar3 >> 8);
                pbVar10[1] = (byte)uVar3;
                pbVar10 = pbVar10 + 2;
                pbVar4 = param_2 + 1;
                param_2 = pbVar4;
              } while (pbVar4 < pbVar12);
            }
          }
        }
      }
    }
  }
  return pbVar4;
}

