
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_00426a90(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  bool bVar7;
  float unaff_EBX;
  float10 fVar8;
  float unaff_retaddr;
  undefined4 uStack_c;
  
  if (param_2 == (int *)0x0) {
    return false;
  }
  iVar4 = FUN_004a2300();
  if (iVar4 != 0) {
    pfVar5 = (float *)(**(code **)(*param_2 + 0x28))();
    fVar1 = *pfVar5 - *(float *)(param_1 + 0x14);
    fVar2 = pfVar5[1] - *(float *)(param_1 + 0x18);
    fVar3 = pfVar5[2] - *(float *)(param_1 + 0x1c);
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= _DAT_006e99d0) {
      iVar4 = (**(code **)(*param_2 + 0x108))(0);
      iVar6 = FUN_004a1090();
      bVar7 = iVar6 != 0 && iVar4 != 0;
      if ((param_2[0x69] == 1) || (param_2[0x69] == 0)) {
        bVar7 = false;
      }
      fVar8 = (float10)FUN_0064ca10(uStack_c,SQRT(unaff_retaddr + unaff_EBX));
      fVar8 = -fVar8;
      if (fVar8 < (float10)DAT_006e92e4 != (NAN(fVar8) || NAN((float10)DAT_006e92e4))) {
        fVar8 = -fVar8;
      }
      if (fVar8 <= (float10)_DAT_006e99cc) {
        return bVar7;
      }
    }
    return false;
  }
  return false;
}

