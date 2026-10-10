
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00506c90(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = __ftol();
  iVar3 = __ftol();
  switch(param_3) {
  case 0:
    if ((&PTR_DAT_00731e78)[iVar2] != (undefined *)0x1) break;
    *(float *)(param_1 + 0x518) = *(float *)(param_1 + 0x518) - _DAT_006ee600;
    fVar1 = *(float *)(param_1 + 0x51c) - DAT_006e92e8;
    goto LAB_00506d57;
  case 1:
    if (*(int *)(&DAT_00731ea8 + iVar2 * 4) != 1) break;
    *(float *)(param_1 + 0x518) = *(float *)(param_1 + 0x518) + _DAT_006ee600;
    fVar1 = *(float *)(param_1 + 0x51c) + DAT_006e92e8;
LAB_00506d57:
    *(float *)(param_1 + 0x51c) = fVar1;
    break;
  case 2:
    if ((&DAT_00731e8c)[iVar2] == 1) {
      *(float *)(param_1 + 0x518) = *(float *)(param_1 + 0x518) - DAT_006e92e8;
    }
    break;
  case 3:
    if (*(int *)(&DAT_00731e94 + iVar2 * 4) == 1) {
      *(float *)(param_1 + 0x518) = *(float *)(param_1 + 0x518) + DAT_006e92e8;
    }
  }
  iVar4 = __ftol();
  if ((iVar2 != iVar4) || (iVar2 = __ftol(), iVar3 != iVar2)) {
    FUN_00659600(s_CursorMove_00731fe0,1);
  }
  return;
}

