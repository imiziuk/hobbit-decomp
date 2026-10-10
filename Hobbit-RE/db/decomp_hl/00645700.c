
undefined4 __thiscall FUN_00645700(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  
  param_1[1] = 0;
  param_1[2] = param_2;
  iVar2 = FUN_00652580(param_3);
  if (iVar2 != 0) {
    FUN_0064a2e0(param_3);
    piVar3 = (int *)FUN_00651fc0();
    param_1[0xf] = piVar3;
    if ((*piVar3 == 0x6d637378) && (piVar3[1] == 7)) {
      piVar3[3] = (int)param_1;
      piVar3 = piVar3 + 9;
      param_1[0x10] = piVar3;
      iVar2 = param_1[0xf];
      piVar3 = piVar3 + *(short *)(param_1[0xf] + 0x10) * 3;
      param_1[0x11] = piVar3;
      piVar3 = piVar3 + *(short *)(iVar2 + 0x12) * 2;
      param_1[0x12] = piVar3;
      piVar3 = piVar3 + *(short *)(iVar2 + 0x14) * 7;
      param_1[0x13] = piVar3;
      piVar3 = piVar3 + *(short *)(iVar2 + 0x16) * 3;
      param_1[0x14] = piVar3;
      iVar2 = param_1[0xf];
      piVar3 = piVar3 + *(short *)(param_1[0xf] + 0x18) * 3;
      param_1[0x15] = piVar3;
      piVar3 = piVar3 + *(short *)(iVar2 + 0x1a) * 2;
      param_1[0x16] = piVar3;
      piVar3 = piVar3 + *(short *)(iVar2 + 0x1c);
      param_1[0x17] = piVar3;
      sVar1 = *(short *)(iVar2 + 0x1e);
      param_1[0x18] = piVar3 + sVar1;
      param_1[0x19] = (int)*(short *)(iVar2 + 0x20) + (int)(piVar3 + sVar1);
      *param_1 = 1;
      return 1;
    }
  }
  return 0;
}

