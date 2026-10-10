
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004062d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar3 = *(int *)(param_1 + 0x2c0 + param_2 * 8);
  iVar1 = *(int *)(param_1 + 0x2c4 + param_2 * 8);
  if (iVar3 != 0 || iVar1 != 0) {
    piVar2 = (int *)FUN_00406bf0(iVar3,iVar1);
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (*(float *)(iVar3 + 4) < _DAT_0075b66c * _DAT_006e936c) {
      pfVar4 = (float *)(**(code **)(*piVar2 + 0x28))();
      fStack_4 = _DAT_0075b670 + pfVar4[2];
      fStack_8 = _DAT_0075b66c + pfVar4[1];
      fStack_c = _DAT_0075b668 + *pfVar4;
      (**(code **)(*piVar2 + 0x14))(&fStack_c,0);
    }
  }
  return;
}

