
undefined4 * __fastcall FUN_00643920(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  byte local_1c;
  byte abStack_1b [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  param_1[0x15e] = 0xffffffff;
  param_1[0x15f] = 0xffffffff;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 1;
  param_1[0x160] = 0;
  param_1[0x15d] = 0;
  param_1[0x162] = 0;
  FUN_00647d10(param_1 + 0x14,s______<>__0074b770);
  uVar2 = DAT_0074b78c;
  uVar1 = DAT_0074b77c;
  local_10 = DAT_0074b77c;
  local_8 = DAT_0074b784;
  local_4 = DAT_0074b788;
  local_18 = DAT_0074b790;
  local_14 = DAT_0074b794;
  local_c = DAT_0074b780;
  puVar6 = param_1 + 0x18;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_10._0_1_ = (char)uVar1;
  if ((char)local_10 != '\0') {
    pcVar4 = (char *)&local_10;
    do {
      pcVar4 = pcVar4 + 1;
      *(undefined1 *)((char)local_10 + 0x60 + (int)param_1) = 1;
      local_10._0_1_ = *pcVar4;
    } while ((char)local_10 != '\0');
  }
  if ((char)uVar2 != '\0') {
    uVar2 = uVar2 & 0xff;
    pbVar5 = &local_1c;
    do {
      pbVar5 = pbVar5 + 1;
      *(undefined1 *)((char)uVar2 + 0x60 + (int)param_1) = 2;
      uVar2 = (uint)*pbVar5;
    } while (*pbVar5 != 0);
  }
  return param_1;
}

