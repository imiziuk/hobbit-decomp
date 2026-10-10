
void FUN_006998b7(int param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  int local_14;
  undefined4 *local_10;
  
  iVar3 = *(int *)(param_1 + 100);
  iVar4 = *(int *)(param_1 + 0x1a4);
  iVar5 = *(int *)(param_1 + 0x5c);
  if (0 < (int)param_4) {
    param_2 = param_2 - (int)param_3;
    local_10 = param_3;
    local_14 = param_4;
    do {
      FUN_00691533(*local_10,iVar5);
      iVar6 = *(int *)(iVar4 + 0x30);
      param_1 = 0;
      if (0 < iVar3) {
        param_3 = (int *)(iVar4 + 0x34);
        do {
          param_4 = 0;
          pcVar10 = (char *)*local_10;
          pbVar9 = (byte *)(*(int *)(param_2 + (int)local_10) + param_1);
          iVar7 = *(int *)(*(int *)(iVar4 + 0x18) + param_1 * 4);
          iVar8 = *param_3;
          for (iVar1 = iVar5; iVar1 != 0; iVar1 = iVar1 + -1) {
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + iVar3;
            *pcVar10 = *pcVar10 +
                       *(char *)(*(int *)(iVar8 + iVar6 * 0x40 + param_4 * 4) + (uint)bVar2 + iVar7)
            ;
            pcVar10 = pcVar10 + 1;
            param_4 = param_4 + 1 & 0xf;
          }
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
        } while (param_1 < iVar3);
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
      *(uint *)(iVar4 + 0x30) = iVar6 + 1U & 0xf;
    } while (local_14 != 0);
  }
  return;
}

