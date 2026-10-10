
void __thiscall FUN_006515c0(int *param_1,int param_2,int param_3,byte *param_4,int param_5)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if ((char)param_1[7] == '\0') {
    sVar1 = *(short *)((int)param_1 + 0x16);
  }
  else {
    sVar1 = *(short *)(*param_1 + 6 + param_5 * 8);
  }
  local_8 = sVar1 - param_3;
  if ((char)param_1[7] == '\0') {
    sVar1 = (short)param_1[5];
  }
  else {
    sVar1 = *(short *)(*param_1 + 4 + param_5 * 8);
  }
  local_c = sVar1 - param_2;
  if (8 < local_8) {
    local_8 = 8;
  }
  if (8 < local_c) {
    local_c = 8;
  }
  local_4 = 0;
  if (local_8 != 0) {
    do {
      uVar3 = 0;
      if (local_c != 0) {
        pbVar4 = param_4;
        do {
          bVar2 = FUN_00650ab0(uVar3 + param_2,local_4 + param_3,param_5);
          if ((uVar3 & 1) == 0) {
            *pbVar4 = bVar2 << 4;
          }
          else {
            *pbVar4 = *pbVar4 | bVar2 & 0xf;
            pbVar4 = pbVar4 + 1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_c);
      }
      local_4 = local_4 + 1;
      param_4 = param_4 + 4;
    } while (local_4 < local_8);
  }
  return;
}

