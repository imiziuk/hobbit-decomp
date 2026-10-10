
void FUN_0065bb60(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_retaddr;
  float fVar7;
  int iStack_18;
  int iStack_14;
  int iStack_c;
  int iStack_4;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  iVar4 = (**(code **)(*DAT_007f0310 + 0x18))(DAT_007f0310,DAT_007edafc);
  iVar6 = 0;
  fVar7 = 0.0;
  if (0 < iVar4) {
    do {
      (**(code **)(*DAT_007f0310 + 0x1c))(DAT_007f0310,DAT_007edafc,iVar6,&iStack_18);
      if (iStack_c == DAT_007f0444) {
        iVar5 = iStack_14 * iStack_18;
        if (iVar5 < iVar1 * iVar2) {
          fVar3 = (float)iVar5 / (float)iStack_4;
        }
        else {
          fVar3 = (float)iStack_4 / (float)iVar5;
        }
        if (fVar7 < fVar3) {
          *param_1 = iStack_18;
          *unaff_retaddr = iStack_14;
          fVar7 = fVar3;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return;
}

