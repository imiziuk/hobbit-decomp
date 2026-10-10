
void __thiscall FUN_004a5990(int *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  
  iVar4 = (**(code **)(*param_1 + 0x154))();
  if (iVar4 != 0) {
    pfVar5 = (float *)(**(code **)(*param_1 + 0x28))();
    fVar1 = *pfVar5;
    fVar2 = pfVar5[1];
    fVar3 = pfVar5[2];
    iVar4 = (**(code **)(*param_1 + 0x154))();
    FUN_0064ca10((param_2 - fVar1) * *(float *)(iVar4 + 0x4c) +
                 (param_3 - fVar2) * *(float *)(iVar4 + 0x5c) +
                 (param_4 - fVar3) * *(float *)(iVar4 + 0x6c) + *(float *)(iVar4 + 0x7c),
                 (param_2 - fVar1) * *(float *)(iVar4 + 0x54) +
                 (param_3 - fVar2) * *(float *)(iVar4 + 100) +
                 (param_4 - fVar3) * *(float *)(iVar4 + 0x74) + *(float *)(iVar4 + 0x84));
    return;
  }
  pfVar5 = (float *)(**(code **)(*param_1 + 0x28))();
  FUN_0064ca10(param_2 - *pfVar5,param_4 - pfVar5[2]);
  return;
}

