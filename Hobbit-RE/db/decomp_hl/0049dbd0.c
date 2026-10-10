
void __thiscall FUN_0049dbd0(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  if ((param_1[0x32] != param_2) || (param_1[0x33] != param_3)) {
    if ((param_1[0x32] != 0 || param_1[0x33] != 0) && (local_20 = 0, 0 < param_1[0x2c])) {
      local_1c = 0;
      do {
        iVar5 = param_1[0x2d] + local_1c;
        if (((*(int *)(param_1[0x2d] + local_1c) == param_1[0x32]) &&
            (*(int *)(iVar5 + 4) == param_1[0x33])) && (*(int *)(iVar5 + 0xc) == 1)) {
          local_24 = (param_1[0x2c] - local_20) + -1;
          iVar5 = local_1c;
          if (0 < local_24) {
            do {
              puVar1 = (undefined4 *)(iVar5 + 0x10 + param_1[0x2d]);
              puVar6 = (undefined4 *)(param_1[0x2d] + iVar5);
              *puVar6 = *puVar1;
              puVar6[1] = puVar1[1];
              puVar6[2] = puVar1[2];
              puVar6[3] = puVar1[3];
              local_24 = local_24 + -1;
              iVar5 = iVar5 + 0x10;
            } while (local_24 != 0);
          }
          param_1[0x2c] = param_1[0x2c] + -1;
        }
        local_20 = local_20 + 1;
        local_1c = local_1c + 0x10;
      } while (local_20 < param_1[0x2c]);
    }
    param_1[0x32] = param_2;
    param_1[0x33] = param_3;
    if ((param_2 != 0 || param_3 != 0) &&
       (piVar2 = (int *)FUN_004021c0(param_2,param_3), piVar2 != (int *)0x0)) {
      pfVar3 = (float *)(**(code **)(*param_1 + 0x28))();
      pfVar4 = (float *)(**(code **)(*piVar2 + 0x28))();
      iStack_18 = param_1[0x32];
      iStack_14 = param_1[0x33];
      uStack_c = 1;
      fStack_10 = SQRT((*pfVar4 - *pfVar3) * (*pfVar4 - *pfVar3) +
                       (pfVar4[1] - pfVar3[1]) * (pfVar4[1] - pfVar3[1]) +
                       (pfVar4[2] - pfVar3[2]) * (pfVar4[2] - pfVar3[2]));
      FUN_0049ec80(&iStack_18);
    }
  }
  return;
}

