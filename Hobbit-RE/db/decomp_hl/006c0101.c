
int FUN_006c0101(uint param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_8;
  
  iVar2 = param_1;
  local_8 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = local_8;
  param_1 = local_8;
  if (-1 < param_2) {
    do {
      if (uVar3 == 0xffffffff) {
        FUN_006c40ab();
      }
      uVar3 = uVar3 - 1;
      if (((*(int *)(iVar1 + 4 + uVar3 * 0x14) < param_3) &&
          (param_3 <= *(int *)(iVar1 + uVar3 * 0x14 + 8))) || (uVar3 == 0xffffffff)) {
        param_2 = param_2 + -1;
        local_8 = param_1;
        param_1 = uVar3;
      }
    } while (-1 < param_2);
  }
  uVar3 = uVar3 + 1;
  *param_4 = uVar3;
  *param_5 = local_8;
  if ((*(uint *)(iVar2 + 0xc) < local_8) || (local_8 < uVar3)) {
    FUN_006c40ab();
  }
  return iVar1 + uVar3 * 0x14;
}

