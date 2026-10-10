
void __thiscall FUN_00651310(int *param_1,int param_2,int param_3,undefined1 *param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint local_10;
  uint local_8;
  undefined1 *local_4;
  
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
  uVar2 = sVar1 - param_2;
  if (4 < local_10) {
    local_10 = 4;
  }
  if (4 < uVar2) {
    uVar2 = 4;
  }
  local_8 = 0;
  if (local_10 != 0) {
    local_4 = param_4;
    do {
      uVar4 = 0;
      if (uVar2 != 0) {
        puVar3 = local_4;
        do {
          FUN_006508b0(&param_4,uVar4 + param_2,local_8 + param_3,param_5);
          *puVar3 = (char)((uint)param_4 >> 0x18);
          puVar3[1] = (char)((uint)param_4 >> 0x10);
          puVar3[0x20] = (char)((uint)param_4 >> 8);
          puVar3[0x21] = (char)param_4;
          puVar3 = puVar3 + 2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + 8;
    } while (local_8 < local_10);
  }
  return;
}

