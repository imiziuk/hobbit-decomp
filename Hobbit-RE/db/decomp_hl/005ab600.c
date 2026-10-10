
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005ab600(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  
  FUN_005aa750();
  iVar1 = FUN_004a1060();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_004021c0(param_2,param_3), piVar2 != (int *)0x0)) {
    if ((param_4 != 0) && ((*(byte *)(piVar2 + 4) & 0x50) != 0)) {
      piVar3 = piVar2;
      FUN_005aa750(piVar2);
      iVar1 = FUN_004683d0(piVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((char)piVar2[0x1f] != '/') {
      if (((*(byte *)(piVar2 + 4) & 0x50) != 0) &&
         (iVar1 = (**(code **)(*piVar2 + 0x108))(1), iVar1 == 0)) {
        return 0;
      }
      if (((char)piVar2[0x1f] == '\x1c') && (iVar1 = FUN_004a1090(), iVar1 == 0)) {
        return 0;
      }
      piVar3 = (int *)FUN_005aa750();
      pfVar4 = (float *)(**(code **)(*piVar3 + 0x28))();
      pfVar5 = (float *)(**(code **)(*piVar2 + 0x28))();
      if (((SQRT((*pfVar5 - *pfVar4) * (*pfVar5 - *pfVar4) +
                 (pfVar5[1] - pfVar4[1]) * (pfVar5[1] - pfVar4[1]) +
                 (pfVar5[2] - pfVar4[2]) * (pfVar5[2] - pfVar4[2])) <= *(float *)(param_1 + 0x24))
          && ((*(byte *)(piVar2 + 4) & 0x50) != 0)) &&
         (fVar6 = (float10)(**(code **)(*piVar2 + 0x110))(), (float10)_DAT_006e936c <= fVar6)) {
        return 1;
      }
    }
  }
  return 0;
}

