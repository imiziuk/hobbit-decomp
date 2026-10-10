
undefined4 __thiscall FUN_00673620(int param_1,int param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  uVar5 = 1;
  if ((*(uint *)(param_1 + 0x88) & 0x100) != 0) {
    FUN_00674180();
  }
  if (param_3 == 0) {
    pfVar2 = (float *)(param_1 + 0x254);
    piVar6 = (int *)(param_1 + 0x314);
    piVar3 = (int *)(param_1 + 0x35c);
  }
  else {
    pfVar2 = (float *)(param_1 + 0x2b4);
    piVar6 = (int *)(param_1 + 0x3a4);
    piVar3 = (int *)(param_1 + 0x3ec);
  }
  iVar4 = 0;
  do {
    fVar1 = *(float *)(param_2 + *piVar3 * 4) * *pfVar2 +
            *(float *)(param_2 + piVar3[2] * 4) * pfVar2[2] +
            *(float *)(param_2 + piVar3[1] * 4) * pfVar2[1] + pfVar2[3];
    if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
      return 0;
    }
    fVar1 = *(float *)(param_2 + *piVar6 * 4) * *pfVar2 +
            *(float *)(param_2 + piVar6[2] * 4) * pfVar2[2] +
            *(float *)(param_2 + piVar6[1] * 4) * pfVar2[1] + pfVar2[3];
    if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
      uVar5 = 2;
    }
    piVar6 = piVar6 + 3;
    piVar3 = piVar3 + 3;
    pfVar2 = pfVar2 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  return uVar5;
}

