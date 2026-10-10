
void FUN_00699aa1(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  char *pcVar14;
  byte *pbVar15;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = (int)param_4;
  iVar3 = *(int *)(param_1 + 100);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x1a4);
  iVar6 = *(int *)(param_1 + 0x11c);
  if (0 < (int)param_4) {
    iVar13 = param_2 - (int)param_3;
    param_4 = param_3;
    do {
      FUN_00691533(*param_4,iVar4);
      param_1 = 0;
      if (0 < iVar3) {
        param_3 = (int *)(iVar5 + 0x44);
        do {
          pbVar15 = (byte *)(*(int *)(iVar13 + (int)param_4) + param_1);
          pcVar14 = (char *)*param_4;
          if (*(char *)(iVar5 + 0x54) == '\0') {
            psVar12 = (short *)*param_3;
            param_2 = 1;
            local_18 = iVar3;
          }
          else {
            param_2 = -1;
            pcVar14 = pcVar14 + iVar4 + -1;
            pbVar15 = pbVar15 + (iVar4 + -1) * iVar3;
            psVar12 = (short *)(*param_3 + 2 + iVar4 * 2);
            local_18 = -iVar3;
          }
          iVar7 = *(int *)(param_1 * 4 + *(int *)(iVar5 + 0x18));
          iVar8 = *(int *)(param_1 * 4 + *(int *)(iVar5 + 0x10));
          iVar9 = 0;
          local_10 = 0;
          local_10._0_2_ = 0;
          local_14 = 0;
          for (iVar1 = iVar4; iVar1 != 0; iVar1 = iVar1 + -1) {
            uVar10 = (uint)*(byte *)((uint)*pbVar15 + iVar6 + (psVar12[param_2] + 8 + iVar9 >> 4));
            bVar2 = *(byte *)(uVar10 + iVar7);
            *pcVar14 = *pcVar14 + bVar2;
            pbVar15 = pbVar15 + local_18;
            pcVar14 = pcVar14 + param_2;
            iVar11 = uVar10 - *(byte *)((uint)bVar2 + iVar8);
            *psVar12 = (short)local_10 + (short)iVar11 * 3;
            local_10 = local_14 + iVar11 * 5;
            iVar9 = iVar11 * 7;
            psVar12 = psVar12 + param_2;
            local_14 = iVar11;
          }
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
          *psVar12 = (short)local_10;
        } while (param_1 < iVar3);
      }
      param_4 = param_4 + 1;
      local_20 = local_20 + -1;
      *(bool *)(iVar5 + 0x54) = *(char *)(iVar5 + 0x54) == '\0';
    } while (local_20 != 0);
  }
  return;
}

