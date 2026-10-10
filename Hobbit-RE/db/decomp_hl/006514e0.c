
void __thiscall FUN_006514e0(int *param_1,uint param_2,int param_3,undefined1 *param_4,int param_5)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint local_c;
  uint local_4;
  
  iVar3 = param_2;
  if ((char)param_1[7] == '\0') {
    sVar1 = *(short *)((int)param_1 + 0x16);
  }
  else {
    sVar1 = *(short *)(*param_1 + 6 + param_5 * 8);
  }
  local_c = sVar1 - param_3;
  if ((char)param_1[7] == '\0') {
    sVar1 = (short)param_1[5];
  }
  else {
    sVar1 = *(short *)(*param_1 + 4 + param_5 * 8);
  }
  param_2 = (int)sVar1 - param_2;
  if (4 < local_c) {
    local_c = 4;
  }
  if (8 < param_2) {
    param_2 = 8;
  }
  local_4 = 0;
  if (local_c != 0) {
    iVar3 = iVar3 - (int)param_4;
    do {
      if (param_2 != 0) {
        puVar4 = param_4;
        uVar5 = param_2;
        do {
          uVar2 = FUN_00650ab0(puVar4 + iVar3,local_4 + param_3,param_5);
          *puVar4 = uVar2;
          puVar4 = puVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      local_4 = local_4 + 1;
      param_4 = param_4 + 8;
      iVar3 = iVar3 + -8;
    } while (local_4 < local_c);
  }
  return;
}

