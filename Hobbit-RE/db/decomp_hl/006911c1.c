
void FUN_006911c1(byte *param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_28 [4];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  FUN_0069108a(param_1 + 8,param_2);
  local_28[1] = (uint)param_1[1];
  local_28[0] = (uint)*param_1;
  if (local_28[1] < local_28[0]) {
    local_28[2] = (local_28[1] + local_28[0] * 6) / 7;
    local_28[3] = (local_28[0] * 5 + local_28[1] * 2) / 7;
    local_18 = (local_28[1] * 3 + local_28[0] * 4) / 7;
    local_14 = (local_28[0] * 3 + local_28[1] * 4) / 7;
    local_10 = (local_28[1] * 5 + local_28[0] * 2) / 7;
    local_c = (local_28[0] + local_28[1] * 6) / 7;
  }
  else {
    local_c = 0xff;
    local_28[2] = (local_28[1] + local_28[0] * 4) / 5;
    local_28[3] = (local_28[0] * 3 + local_28[1] * 2) / 5;
    local_18 = (local_28[1] * 3 + local_28[0] * 2) / 5;
    local_10 = 0;
    local_14 = (local_28[0] + local_28[1] * 4) / 5;
  }
  uVar3 = 0;
  do {
    if ((uVar3 & 7) == 0) {
      if (uVar3 == 0) {
        bVar1 = param_1[2];
        uVar2 = *(undefined2 *)(param_1 + 3);
      }
      else {
        bVar1 = param_1[5];
        uVar2 = *(undefined2 *)(param_1 + 6);
      }
      local_8 = (uint)CONCAT21(uVar2,bVar1);
    }
    uVar4 = local_8 & 7;
    local_8 = local_8 >> 3;
    *(char *)(param_2 + 3 + uVar3 * 4) = (char)local_28[uVar4];
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x10);
  return;
}

