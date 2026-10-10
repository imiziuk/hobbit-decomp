
void __fastcall FUN_005c5b30(int *param_1)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  void *pvVar4;
  short *psVar5;
  int *piVar6;
  short sVar7;
  int iVar8;
  
  iVar1 = *param_1;
  uVar3 = iVar1 << 6;
  param_1[0x23] = uVar3;
  pvVar4 = operator_new(uVar3);
  iVar8 = 0;
  param_1[0x22] = (int)pvVar4;
  if (0 < *param_1) {
    piVar6 = (int *)((int)pvVar4 + 0x14);
    do {
      piVar6[-5] = param_1[0x11];
      piVar6[-4] = param_1[0x12];
      piVar6[-3] = param_1[0x13];
      piVar6[-2] = param_1[0x14];
      piVar6[-1] = param_1[0x15];
      *piVar6 = param_1[0x16];
      piVar6[1] = param_1[0x17];
      piVar6[2] = param_1[0x18];
      piVar6[3] = param_1[0x19];
      piVar6[4] = param_1[0x1a];
      iVar8 = iVar8 + 1;
      piVar6 = piVar6 + 10;
    } while (iVar8 < *param_1);
  }
  iVar8 = 0;
  if (0 < *param_1) {
    psVar5 = (short *)((int)pvVar4 + iVar1 * 0x28 + 4);
    do {
      sVar2 = (short)iVar8 * 5;
      psVar5[-1] = sVar2 + 1;
      psVar5[1] = sVar2 + 1;
      sVar7 = sVar2 + 4;
      psVar5[2] = sVar2 + 2;
      psVar5[5] = sVar2 + 2;
      psVar5[-2] = sVar2;
      *psVar5 = sVar7;
      psVar5[3] = sVar7;
      psVar5[4] = sVar7;
      psVar5[6] = sVar2 + 3;
      psVar5[7] = sVar7;
      psVar5[8] = sVar2 + 3;
      psVar5[9] = sVar2;
      iVar8 = iVar8 + 1;
      psVar5 = psVar5 + 0xc;
    } while (iVar8 < *param_1);
  }
  return;
}

