
uint __thiscall FUN_005488d0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_30 [4];
  char *local_2c;
  uint local_28;
  undefined4 local_24;
  undefined1 local_20 [16];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9590;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_44 = param_1;
  iVar2 = FUN_005c90f0(&local_4c,&local_48);
  if (iVar2 == 0) {
    local_50 = 0xffffffff;
  }
  else {
    local_50 = (local_4c << (*(byte *)(param_1 + 0x1e) & 0x1f)) + local_48;
  }
  pcVar7 = (char *)((*(uint *)(param_1 + 0x18) & local_50) * 0x7c +
                   *(int *)(*(int *)(param_1 + 0x24) + 8 +
                           ((int)local_50 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18));
  iVar2 = FUN_00647cf0(param_2);
  if (0x5f < iVar2) {
    iVar2 = 0x60;
  }
  if (0 < iVar2) {
    pcVar3 = pcVar7;
    iVar6 = iVar2;
    do {
      *pcVar3 = (&DAT_0074c390)[(byte)pcVar3[param_2 - (int)pcVar7]];
      pcVar3 = pcVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  pcVar7[iVar2] = '\0';
  uVar4 = 0xffffffff;
  pcVar7[0x78] = -1;
  pcVar7[0x79] = -1;
  pcVar7[0x7a] = -1;
  pcVar7[0x7b] = -1;
  pcVar7[0x70] = '\0';
  pcVar7[0x71] = '\0';
  pcVar7[0x6c] = '\0';
  pcVar7[0x6d] = '\0';
  pcVar7[0x6e] = '\0';
  pcVar7[0x6f] = '\0';
  pcVar7[0x68] = '\0';
  pcVar7[0x69] = '\0';
  pcVar7[0x6a] = '\0';
  pcVar7[0x6b] = '\0';
  pcVar7[0x74] = '\0';
  pcVar7[0x75] = '\0';
  pcVar7[0x76] = '\0';
  pcVar7[0x77] = '\0';
  pcVar7[100] = '\0';
  pcVar7[0x65] = '\0';
  pcVar7[0x66] = '\0';
  pcVar7[0x67] = '\0';
  pcVar7[0x72] = '\0';
  pcVar7[0x73] = '\0';
  pcVar3 = pcVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  local_30[0] = (undefined1)param_2;
  local_2c = (char *)0x0;
  local_28 = 0;
  local_24 = 0;
  cVar1 = FUN_0054a310(uVar4,1);
  if (cVar1 != '\0') {
    pcVar3 = local_2c;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_2c[uVar4] = '\0';
    local_28 = uVar4;
  }
  local_4 = 0;
  FUN_00549e80(local_30);
  local_10 = 0;
  local_4._0_1_ = 1;
  FUN_0054a430(local_40,local_20);
  FUN_0054abf0(local_40,local_3c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0054a060(1);
  *(uint *)(local_38 + 0x1c) = local_50;
  if (local_2c != (char *)0x0) {
    cVar1 = local_2c[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_006bf840(local_2c + -1);
    }
    else {
      local_2c[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return local_50;
}

