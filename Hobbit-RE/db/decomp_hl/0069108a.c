
void FUN_0069108a(ushort *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte local_18 [16];
  int local_8;
  
  if (param_1 == (ushort *)0x0) {
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
  }
  else {
    FUN_006908e9(local_18);
    FUN_006908e9(local_18 + 4);
    local_18[0xb] = 0xff;
    local_18[7] = 0xff;
    local_18[3] = 0xff;
    if (param_1[1] < *param_1) {
      local_8 = 0;
      do {
        iVar3 = local_8;
        iVar4 = local_8 + 4;
        pbVar1 = local_18 + local_8;
        local_18[local_8 + 8] = (byte)((local_18[iVar4] + 1 + (uint)*pbVar1 * 2) / 3);
        iVar5 = local_8 + 1;
        local_8 = iVar5;
        local_18[iVar3 + 0xc] = (byte)((*pbVar1 + 1 + (uint)local_18[iVar4] * 2) / 3);
      } while (iVar5 < 3);
      local_18[0xf] = 0xff;
    }
    else {
      iVar5 = 0;
      do {
        iVar4 = iVar5 + 1;
        local_18[iVar5 + 8] = (byte)(((uint)local_18[iVar5 + 4] + (uint)local_18[iVar5]) / 2);
        local_18[iVar5 + 0xc] = 0;
        iVar5 = iVar4;
      } while (iVar4 < 3);
      local_18[0xf] = 0;
    }
    uVar6 = *(uint *)(param_1 + 2);
    iVar5 = 0x10;
    do {
      iVar4 = (uVar6 & 3) * 4;
      bVar2 = local_18[iVar4 + 3];
      *(undefined2 *)param_2 = *(undefined2 *)(local_18 + iVar4);
      *(byte *)((int)param_2 + 2) = local_18[iVar4 + 2];
      *(byte *)((int)param_2 + 3) = bVar2;
      uVar6 = uVar6 >> 2;
      param_2 = param_2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

