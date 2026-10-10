
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0053f7a0(int param_1,int param_2,uint param_3,int param_4,undefined4 *param_5)

{
  short sVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_3 >> 5;
  param_3 = param_3 & 0x1f;
  if ((iVar4 == *(short *)(param_1 + 6)) && (param_3 == 0)) {
    iVar4 = iVar4 + -1;
    param_3 = 0x20;
  }
  sVar1 = *(short *)(param_1 + 8);
  iVar5 = *(int *)(param_2 + 0x74);
  DAT_007670a4 = FUN_0053f540(param_2);
  iVar4 = *(int *)(iVar5 + (sVar1 + iVar4) * 0x18 + 0x14);
  DAT_007670ac = *(uint *)(DAT_007670a4 + param_4 * 4) >> 0x1e;
  DAT_007670a0 = *(uint *)(DAT_007670a4 + param_4 * 4) >> 0x1c & 3;
  DAT_007670b0 = *(uint *)(DAT_007670a4 + param_4 * 4) >> 0x1a & 3;
  DAT_007670b4 = *(uint *)(DAT_007670a4 + param_4 * 4) & 0x3ffff;
  DAT_0076709c = *(int *)(&DAT_00737aa8 + DAT_007670ac * 4) * iVar4 +
                 *(int *)(&DAT_00737a98 + DAT_007670ac * 4) + DAT_007670b4;
  DAT_007670a8 = *(int *)(&DAT_00737ac8 + DAT_007670a0 * 4) * iVar4 +
                 *(int *)(&DAT_00737ab8 + DAT_007670a0 * 4) + DAT_0076709c;
  if (DAT_007670ac == 0) {
    uVar2 = 0x3f800000;
    *param_5 = 0x3f800000;
    param_5[1] = 0x3f800000;
  }
  else {
    if (DAT_007670ac != 1) {
      if (DAT_007670ac == 3) {
        iVar4 = DAT_007670b4 + param_3 * 0xc;
        iVar5 = iVar4 + DAT_007670a4;
        *param_5 = *(undefined4 *)(iVar4 + DAT_007670a4);
        param_5[1] = *(undefined4 *)(iVar5 + 4);
        param_5[2] = *(undefined4 *)(iVar5 + 8);
      }
      goto LAB_0053f8a4;
    }
    iVar4 = DAT_007670a4 + DAT_007670b4;
    *param_5 = *(undefined4 *)(DAT_007670a4 + DAT_007670b4);
    param_5[1] = *(undefined4 *)(iVar4 + 4);
    uVar2 = *(undefined4 *)(iVar4 + 8);
  }
  param_5[2] = uVar2;
LAB_0053f8a4:
  if (DAT_007670a0 == 0) {
    param_5[3] = 0;
    param_5[4] = 0;
    param_5[5] = 0;
    param_5[6] = 0x3f800000;
  }
  else if (DAT_007670a0 == 1) {
    iVar4 = DAT_0076709c + DAT_007670a4;
    param_5[3] = *(undefined4 *)(DAT_0076709c + DAT_007670a4);
    param_5[4] = *(undefined4 *)(iVar4 + 4);
    param_5[5] = *(undefined4 *)(iVar4 + 8);
    param_5[6] = *(undefined4 *)(iVar4 + 0xc);
  }
  else if (DAT_007670a0 == 2) {
    puVar3 = (ushort *)(DAT_007670a4 + param_3 * 8 + DAT_0076709c);
    param_5[3] = (float)*puVar3 * _DAT_006f3bf0 - DAT_006e92e8;
    param_5[4] = (float)puVar3[1] * _DAT_006f3bf0 - DAT_006e92e8;
    param_5[5] = (float)puVar3[2] * _DAT_006f3bf0 - DAT_006e92e8;
    param_5[6] = (float)puVar3[3] * _DAT_006f3bf0 - DAT_006e92e8;
  }
  else if (DAT_007670a0 == 3) {
    FUN_0042fda0(param_3 * 0x10 + DAT_007670a4 + DAT_0076709c);
  }
  if (DAT_007670b0 != 0) {
    if (DAT_007670b0 != 1) {
      if (DAT_007670b0 == 3) {
        FUN_004357e0(DAT_007670a4 + param_3 * 0xc + DAT_007670a8);
      }
      return;
    }
    FUN_004357e0(DAT_007670a4 + DAT_007670a8);
    return;
  }
  uVar2 = FUN_00401f00(0,0,0);
  FUN_004357e0(uVar2);
  return;
}

