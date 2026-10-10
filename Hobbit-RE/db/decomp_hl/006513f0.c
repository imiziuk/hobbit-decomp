
void __thiscall FUN_006513f0(int *param_1,int param_2,int param_3,byte *param_4,int param_5)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint local_10;
  uint local_8;
  byte *local_4;
  
  if ((char)param_1[7] == '\0') {
    sVar1 = *(short *)((int)param_1 + 0x16);
  }
  else {
    sVar1 = *(short *)(*param_1 + 6 + param_5 * 8);
  }
  local_10 = sVar1 - param_3;
  if ((char)param_1[7] == '\0') {
    sVar1 = (short)param_1[5];
  }
  else {
    sVar1 = *(short *)(*param_1 + 4 + param_5 * 8);
  }
  uVar3 = sVar1 - param_2;
  if (4 < local_10) {
    local_10 = 4;
  }
  if (4 < uVar3) {
    uVar3 = 4;
  }
  local_8 = 0;
  if (local_10 != 0) {
    local_4 = param_4;
    do {
      uVar5 = 0;
      if (uVar3 != 0) {
        pbVar4 = local_4;
        do {
          FUN_006508b0(&param_4,uVar5 + param_2,local_8 + param_3,param_5);
          bVar2 = (byte)((uint)param_4 >> 8);
          pbVar4[1] = (bVar2 & 0xfc) << 3 | (byte)((uint)param_4 >> 3) & 0x1f;
          *pbVar4 = (bVar2 >> 5 ^ param_4._2_1_) & 7 ^ param_4._2_1_;
          pbVar4 = pbVar4 + 2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + 8;
    } while (local_8 < local_10);
  }
  return;
}

