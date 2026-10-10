
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0068903f(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  *param_1 = &PTR_FUN_006f9ed4;
  param_1[6] = *param_2;
  param_1[1] = param_2[1];
  param_1[0x412] = param_2[2];
  param_1[0x413] = param_2[3];
  puVar3 = param_2 + 10;
  puVar9 = param_1 + 0x40c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_00688c8c(param_2[0x11]);
  param_1[7] = local_14;
  param_1[8] = uStack_10;
  param_1[9] = uStack_c;
  param_1[10] = uStack_8;
  param_1[4] = (uint)(param_2[0x11] != 0);
  puVar5 = &DAT_00754500;
  if (param_2[0x10] == 0) {
    puVar5 = &DAT_00754480;
  }
  param_1[0xb] = puVar5;
  param_1[0x418] = param_3 >> 3;
  param_1[3] = (uint)(param_3 != 0);
  param_1[2] = param_4;
  if (param_4 == 2) {
    param_1[2] = 1;
    param_1[5] = 1;
    fVar2 = _DAT_006ed3a4;
    if (param_2[0x12] == 0) {
      iVar4 = 0x100;
      puVar3 = param_1 + 0xe;
      do {
        puVar3[1] = 0x3f800000;
        *puVar3 = 0x3f800000;
        iVar4 = iVar4 + -1;
        puVar3[-1] = 0x3f800000;
        puVar3[-2] = 0x3f800000;
        puVar3 = puVar3 + 4;
      } while (iVar4 != 0);
    }
    else {
      pfVar6 = (float *)(param_1 + 0xd);
      uVar7 = 0;
      do {
        uVar8 = uVar7 + 4;
        pfVar6[-1] = (float)*(byte *)(uVar7 + param_2[0x12]) * fVar2;
        *pfVar6 = (float)*(byte *)(uVar7 + 1 + param_2[0x12]) * fVar2;
        pfVar6[1] = (float)*(byte *)(uVar7 + 2 + param_2[0x12]) * fVar2;
        pfVar6[2] = (float)*(byte *)(uVar7 + 3 + param_2[0x12]) * fVar2;
        pfVar6 = pfVar6 + 4;
        uVar7 = uVar8;
      } while (uVar8 < 0x400);
    }
  }
  else {
    param_1[5] = 0;
  }
  piVar1 = param_1 + 0x40c;
  param_1[0x415] = param_1[0x40f] - param_1[0x40d];
  param_1[0x416] = param_1[0x411] - param_1[0x410];
  param_1[0x414] = param_1[0x40e] - *piVar1;
  param_1[0x417] = param_1[0x418] * (param_1[0x40e] - *piVar1);
  if (param_1[3] != 0) {
    param_1[6] = param_1[6] +
                 param_1[0x413] * param_1[0x410] + param_1[0x412] * param_1[0x40d] +
                 param_1[0x418] * *piVar1;
    *piVar1 = 0;
    param_1[0x40d] = 0;
    param_1[0x410] = 0;
    param_1[0x40e] = param_1[0x414];
    param_1[0x40f] = param_1[0x415];
    param_1[0x411] = param_1[0x416];
  }
  return param_1;
}

