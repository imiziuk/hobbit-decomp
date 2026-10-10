
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066e5a0(undefined4 *param_1,float *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (DAT_007f15e0 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(DAT_007f1540 * 0x30 + DAT_007f14e8);
  puVar1[0xb] = 0;
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = *param_2;
  puVar1[4] = param_2[1];
  puVar1[5] = param_3;
  puVar1[10] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0x3f800000;
  puVar1[9] = 0x3f800000;
  if (*param_2 < DAT_006e92e4 == (NAN(*param_2) || NAN(DAT_006e92e4))) {
LAB_0066e666:
    if (param_2[1] < DAT_006e92e4 == (NAN(param_2[1]) || NAN(DAT_006e92e4))) goto LAB_0066e68e;
    puVar1[6] = 0;
    puVar1[7] = 0x3f800000;
    puVar1[8] = 0x3f800000;
    puVar1[9] = 0;
  }
  else {
    if (param_2[1] < DAT_006e92e4 == (NAN(param_2[1]) || NAN(DAT_006e92e4))) {
      if (*param_2 < DAT_006e92e4 != (NAN(*param_2) || NAN(DAT_006e92e4))) {
        puVar1[6] = 0x3f800000;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0x3f800000;
        puVar1[3] = (float)puVar1[3] * _DAT_006e9370;
        goto LAB_0066e68e;
      }
      goto LAB_0066e666;
    }
    puVar1[6] = 0x3f800000;
    puVar1[7] = 0x3f800000;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[3] = (float)puVar1[3] * _DAT_006e9370;
  }
  puVar1[4] = (float)puVar1[4] * _DAT_006e9370;
LAB_0066e68e:
  DAT_007f1540 = DAT_007f1540 + 1;
  if (DAT_007f1540 != 300) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0066e6a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_007f14f0)();
  return;
}

