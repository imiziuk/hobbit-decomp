
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0050b210(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  FUN_005c8690();
  switch(*(undefined4 *)(param_1 + 0x184)) {
  case 0:
    break;
  case 1:
    if (*(int *)(param_1 + 0x168) <= *(int *)(param_1 + 0x16c)) {
      *(undefined4 *)(param_1 + 0x184) = 2;
      *(undefined4 *)(param_1 + 0x180) = 0x41c80000;
      return;
    }
    fVar1 = *(float *)(param_1 + 0x180) * _DAT_006efedc;
    *(float *)(param_1 + 0x180) = fVar1;
    FUN_0050b190((float)*(int *)(param_1 + 0x16c),(float)*(int *)(param_1 + 0x168),fVar1,0x3d08ab86,
                 1);
    uVar2 = __ftol();
    *(undefined4 *)(param_1 + 0x16c) = uVar2;
    return;
  case 2:
    if (*(int *)(param_1 + 0x170) <= *(int *)(param_1 + 0x174)) {
      *(undefined4 *)(param_1 + 0x184) = 3;
      *(undefined4 *)(param_1 + 0x180) = 0x41c80000;
      return;
    }
    fVar1 = *(float *)(param_1 + 0x180) * _DAT_006efedc;
    *(float *)(param_1 + 0x180) = fVar1;
    FUN_0050b190((float)*(int *)(param_1 + 0x174),(float)*(int *)(param_1 + 0x170),fVar1,0x3d08ab86,
                 1);
    uVar2 = __ftol();
    *(undefined4 *)(param_1 + 0x174) = uVar2;
    return;
  case 3:
    if (*(int *)(param_1 + 0x17c) < *(int *)(param_1 + 0x178)) {
      fVar1 = *(float *)(param_1 + 0x180) * _DAT_006efedc;
      *(float *)(param_1 + 0x180) = fVar1;
      FUN_0050b190((float)*(int *)(param_1 + 0x17c),(float)*(int *)(param_1 + 0x178),fVar1,
                   0x3d08ab86,1);
      uVar2 = __ftol();
      *(undefined4 *)(param_1 + 0x17c) = uVar2;
      return;
    }
    *(undefined4 *)(param_1 + 0x184) = 4;
    *(undefined4 *)(param_1 + 0x180) = 0x41c80000;
  default:
    return;
  }
  if (*(int *)(param_1 + 0x160) <= *(int *)(param_1 + 0x164)) {
    *(undefined4 *)(param_1 + 0x184) = 1;
    *(undefined4 *)(param_1 + 0x180) = 0x41c80000;
    return;
  }
  fVar1 = *(float *)(param_1 + 0x180) * _DAT_006efedc;
  *(float *)(param_1 + 0x180) = fVar1;
  FUN_0050b190((float)*(int *)(param_1 + 0x164),(float)*(int *)(param_1 + 0x160),fVar1,0x3d08ab86,1)
  ;
  uVar2 = __ftol();
  *(undefined4 *)(param_1 + 0x164) = uVar2;
  return;
}

