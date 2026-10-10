
void __thiscall FUN_0041fbd0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x5908) = 0;
  *(undefined4 *)(param_1 + 0x590c) = 0;
  *(undefined4 *)(param_1 + 0x5910) = 0x7f7fffff;
  if (param_2 != -1) {
    FUN_00588ff0(param_2);
    iVar4 = FUN_00589010(param_2,&local_8);
    while (iVar4 != 0) {
      piVar5 = (int *)FUN_004021c0(local_8,local_4);
      if ((((piVar5 != (int *)0x0) && ((char)piVar5[0x1f] == '\x1c')) &&
          (iVar4 = (**(code **)(*piVar5 + 0x108))(0), iVar4 != 0)) && (piVar5[0x69] == 2)) {
        pfVar6 = (float *)(**(code **)(*piVar5 + 0x28))();
        fVar1 = *pfVar6 - *(float *)(param_1 + 0x14);
        fVar2 = pfVar6[1] - *(float *)(param_1 + 0x18);
        fVar3 = pfVar6[2] - *(float *)(param_1 + 0x1c);
        fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
        if (fVar1 < *(float *)(param_1 + 0x5910) !=
            (NAN(fVar1) || NAN(*(float *)(param_1 + 0x5910)))) {
          *(float *)(param_1 + 0x5910) = fVar1;
          *(undefined4 *)(param_1 + 0x5908) = local_8;
          *(undefined4 *)(param_1 + 0x590c) = local_4;
        }
      }
      iVar4 = FUN_00589010(param_2,&local_8);
    }
  }
  return;
}

