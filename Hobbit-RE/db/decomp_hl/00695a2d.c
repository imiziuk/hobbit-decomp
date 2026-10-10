
uint FUN_00695a2d(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_8;
  
  local_8 = param_5;
  iVar2 = (int)param_2;
  if (param_3 < param_5) {
    cVar1 = FUN_00695943(param_1,param_2,param_3,param_5);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    param_3 = *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0xc);
  }
  param_3 = param_3 - param_5;
  uVar3 = iVar2 >> ((byte)param_3 & 0x1f) & (1 << ((byte)param_5 & 0x1f)) - 1U;
  param_2 = (int *)(param_4 + 0x44 + param_5 * 4);
  if (*param_2 < (int)uVar3) {
    do {
      if (param_3 < 1) {
        cVar1 = FUN_00695943(param_1,iVar2,param_3,1);
        if (cVar1 == '\0') {
          return 0xffffffff;
        }
        iVar2 = *(int *)(param_1 + 0xc);
        param_3 = *(int *)(param_1 + 0x18);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      uVar3 = uVar3 << 1 | iVar2 >> ((byte)param_3 & 0x1f) & 1U;
      local_8 = local_8 + 1;
    } while (*param_2 < (int)uVar3);
  }
  *(int *)(param_1 + 0x18) = param_3;
  *(int *)(param_1 + 0xc) = iVar2;
  if (local_8 < 0x11) {
    uVar3 = (uint)*(byte *)((*(int *)(param_4 + 0x8c + local_8 * 4) -
                            *(int *)(param_4 + local_8 * 4)) + *(int *)(param_4 + 0xd0) + 0x11 +
                           uVar3);
  }
  else {
    *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0x14) = 0x72;
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))(*(int **)(param_1 + 0x1c),0xffffffff);
    uVar3 = 0;
  }
  return uVar3;
}

