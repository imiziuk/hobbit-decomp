
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0067aa00(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = (int *)FUN_0067b6c0();
  iVar2 = FUN_0067b6a0();
  iVar3 = iVar2;
  piVar4 = param_1;
  piVar5 = param_1;
  if (0 < iVar2) {
    do {
      piVar5 = piVar1;
      iVar3 = iVar3 + -1;
      *piVar5 = (int)piVar4;
      piVar5[1] = (int)(piVar5 + 0x22);
      piVar4 = piVar5;
      piVar1 = piVar5 + 0x22;
    } while (iVar3 != 0);
  }
  if (iVar2 != 0) {
    piVar5[1] = (int)param_1;
    *param_1 = (int)piVar5;
    iVar3 = FUN_0067b6c0();
    param_1[1] = iVar3;
    piVar4 = param_1 + 0x22;
    param_1[0x23] = (int)piVar4;
    param_1[0x36] = -1;
    *piVar4 = (int)piVar4;
    _DAT_00806a44 = 1;
    _DAT_00806a58 = 1;
    return;
  }
  param_1[1] = (int)param_1;
  *param_1 = (int)param_1;
  return;
}

