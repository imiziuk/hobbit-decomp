
void __fastcall FUN_004b82c0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar1 = (int *)FUN_004021c0(param_1[0x68],param_1[0x69]);
  if (piVar1 != (int *)0x0) {
    iVar4 = *piVar1;
    uVar2 = (**(code **)(*param_1 + 0x28))(0);
    (**(code **)(iVar4 + 0x14))(uVar2);
    pfVar3 = (float *)(**(code **)(*param_1 + 0x28))();
    fStack_c = (float)param_1[0x65] - *pfVar3;
    fStack_8 = (float)param_1[0x66] - pfVar3[1];
    fStack_4 = (float)param_1[0x67] - pfVar3[2];
    fVar5 = (float10)FUN_0064ca10(fStack_8,SQRT(fStack_4 * fStack_4 + fStack_c * fStack_c));
    fVar6 = (float10)FUN_0064ca10(fStack_c,fStack_4);
    iVar4 = FUN_0064cf30((float)-fVar5);
    if (iVar4 != 0) {
      iVar4 = FUN_0064cf30((float)fVar6);
      if (iVar4 != 0) {
        fStack_4 = 0.0;
        fStack_c = (float)-fVar5;
        fStack_8 = (float)fVar6;
        (**(code **)(*piVar1 + 0x1c))(&fStack_c);
      }
    }
  }
  if (param_1[0x6a] != 0) {
    uVar2 = (**(code **)(*param_1 + 0x28))();
    FUN_0065a290(param_1[0x6a],uVar2);
  }
  return;
}

