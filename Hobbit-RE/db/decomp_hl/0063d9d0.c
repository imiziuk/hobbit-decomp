
void __thiscall FUN_0063d9d0(int *param_1,byte *param_2,int param_3)

{
  sbyte sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_10;
  byte *local_c;
  int local_8;
  
  if (param_3 != 0) {
    if (param_1[2] <= param_1[6] + param_3) {
      do {
        FUN_0063ca00();
      } while (param_1[2] <= param_1[6] + param_3);
    }
    local_c = (byte *)((param_1[6] >> 3) + *param_1);
    iVar4 = 0;
    local_8 = param_3;
    local_10 = 0;
    uVar6 = param_1[6] & 7;
    do {
      iVar5 = 8 - uVar6;
      if (local_8 < (int)(8 - uVar6)) {
        iVar5 = local_8;
      }
      for (; iVar4 < iVar5; iVar4 = iVar4 + 8) {
        local_10 = local_10 | (uint)*param_2 << ((byte)iVar4 & 0x1f);
        param_2 = param_2 + 1;
      }
      bVar2 = (byte)iVar5;
      sVar1 = (sbyte)uVar6;
      iVar4 = iVar4 - iVar5;
      bVar3 = -1 << ((8 - bVar2) - sVar1 & 0x1f) & (byte)(0xff >> sVar1);
      *local_c = ((byte)(0xff >> (8 - bVar2 & 0x1f)) & (byte)local_10) <<
                 (('\b' - bVar2) - sVar1 & 0x1f) & bVar3 | ~bVar3 & *local_c;
      local_c = local_c + 1;
      local_10 = local_10 >> (bVar2 & 0x1f);
      uVar6 = 0;
      local_8 = local_8 - iVar5;
    } while (local_8 != 0);
    iVar4 = param_1[6] + param_3 + -1;
    param_1[6] = param_1[6] + param_3;
    if (iVar4 <= param_1[3]) {
      iVar4 = param_1[3];
    }
    param_1[3] = iVar4;
  }
  return;
}

