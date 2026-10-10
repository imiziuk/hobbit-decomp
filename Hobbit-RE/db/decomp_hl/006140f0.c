
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006140f0(int param_1,float param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  undefined4 uVar12;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [4];
  float local_8;
  
  iVar6 = FUN_00619790();
  if (-1 < iVar6) {
    pfVar1 = (float *)(iVar6 * 200 + 0x148 + param_1);
    FUN_00613a90(0);
    if (pfVar1[0x12] == -NAN) {
      fVar7 = (float)FUN_00659600(s_Smaug_FireBreath_Loop_0074947c,1);
      pfVar1[0x12] = fVar7;
    }
    iVar6 = FUN_006193c0();
    if (iVar6 == 0) {
      pfVar1[0x11] = 0.0;
      piVar9 = (int *)FUN_0041bcc0();
      pfVar10 = (float *)(**(code **)(*piVar9 + 0x28))();
      *pfVar1 = *pfVar10;
      pfVar1[1] = pfVar10[1];
      pfVar1[2] = pfVar10[2];
    }
    else {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x57c) + *(int *)(param_1 + 0x58c) * 4);
      iVar6 = FUN_004021c0(*puVar2,puVar2[1]);
      if (iVar6 != 0) {
        uVar8 = FUN_00402130(local_c,iVar6 + 0x44,iVar6 + 0x50,0x3f000000);
        FUN_00402160(&local_18,uVar8);
        *pfVar1 = local_18;
        pfVar1[1] = local_14;
        pfVar1[2] = local_10;
        iVar6 = FUN_0041bcc0();
        pfVar1[1] = *(float *)(iVar6 + 0x54);
      }
      pfVar1[0x11] = 1.4013e-45;
      pfVar1[0xd] = 0.0;
      pfVar1[0xe] = 0.0;
      pfVar1[0xf] = 0.0;
      pfVar1[0x10] = 0.0;
    }
    FUN_00618690(param_2);
    FUN_0056b660(DAT_006f5ad0,DAT_006f5af0,DAT_006f5af4,1);
    uVar12 = 0x3f800000;
    uVar8 = 0x15;
    FUN_0041bcc0(0x15,0x3f800000);
    FUN_0044c120(uVar8,uVar12);
    if (pfVar1[0x11] != 0.0) {
      local_30 = *pfVar1 - *(float *)(param_1 + 0xb8);
      pfVar10 = pfVar1 + 4;
      local_14 = pfVar1[1] - *(float *)(param_1 + 0xbc);
      local_28 = pfVar1[2] - *(float *)(param_1 + 0xc0);
      local_20 = local_14 * _DAT_006f5ae4;
      fVar7 = *(float *)(param_1 + 0xbc);
      local_1c = local_28 * _DAT_006f5ae4 + *(float *)(param_1 + 0xc0);
      *pfVar10 = local_30 * _DAT_006f5ae4 + *(float *)(param_1 + 0xb8);
      pfVar1[6] = local_1c;
      pfVar1[5] = local_20 + fVar7;
      piVar9 = *(int **)(*(int *)(param_1 + 0x57c) + *(int *)(param_1 + 0x58c) * 4);
      iVar6 = *piVar9;
      iVar3 = piVar9[1];
      local_18 = local_30;
      local_10 = local_28;
      iVar11 = FUN_0041bcc0();
      local_2c = *(float *)(iVar11 + 0x54) - pfVar1[5];
      local_20 = DAT_006f5ad8;
      param_2 = DAT_006f5ad8;
      FUN_00428790(0);
      FUN_004286f0(0);
      FUN_00428740(local_20);
      while (param_2 < _DAT_006f5adc != (param_2 == _DAT_006f5adc)) {
        local_24 = local_30 + *pfVar10;
        local_20 = local_2c + pfVar1[5];
        local_1c = local_28 + pfVar1[6];
        FUN_00579720(0,0,pfVar10,&local_24,5);
        iVar11 = FUN_00577e70();
        if ((iVar11 != 0) && ((DAT_00773520 != iVar6 || (DAT_00773524 != iVar3)))) break;
        local_8 = _DAT_006f5ae0;
        FUN_00428790(0);
        FUN_004286f0(0);
        FUN_00428740(local_8);
        param_2 = _DAT_006f5ae0 + param_2;
        if (iVar11 == 0) break;
      }
      local_24 = *pfVar1 - *pfVar10;
      local_20 = pfVar1[1] - pfVar1[5];
      local_1c = pfVar1[2] - pfVar1[6];
      fVar7 = DAT_006e92e8 / SQRT(local_2c * local_2c + local_30 * local_30 + local_28 * local_28);
      iVar11 = FUN_0064cf30(fVar7);
      if (iVar11 == 0) {
        local_30 = 0.0;
        local_2c = 0.0;
        local_28 = 0.0;
      }
      else {
        fVar7 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c) * fVar7;
        local_30 = local_30 * fVar7;
        local_2c = local_2c * fVar7;
        local_28 = local_28 * fVar7;
      }
      FUN_00401f00(local_30 + *pfVar10,local_2c + pfVar1[5],local_28 + pfVar1[6]);
      fVar5 = local_10;
      fVar4 = local_18;
      pfVar1[7] = local_24;
      pfVar1[8] = local_20;
      pfVar1[9] = local_1c;
      iVar11 = FUN_0041bcc0();
      fVar7 = *(float *)(iVar11 + 0x54) - pfVar1[5];
      param_2 = DAT_006f5ad8;
      local_8 = -DAT_006f5ad8;
      FUN_00428790(0);
      FUN_004286f0(0);
      FUN_00428740(local_8);
      while (-_DAT_006f5adc < param_2 != (-_DAT_006f5adc == param_2)) {
        FUN_00401f00(fVar4 + *pfVar10,fVar7 + pfVar1[5],fVar5 + pfVar1[6]);
        FUN_00579720(0,0,pfVar10,local_c,5);
        iVar11 = FUN_00577e70();
        if ((iVar11 != 0) && ((DAT_00773520 != iVar6 || (DAT_00773524 != iVar3)))) break;
        local_14 = -_DAT_006f5ae0;
        FUN_00428790(0);
        FUN_004286f0(0);
        FUN_00428740(local_14);
        param_2 = param_2 - _DAT_006f5ae0;
        if (iVar11 == 0) break;
      }
      FUN_00401f00(*pfVar1 - *pfVar10,pfVar1[1] - pfVar1[5],pfVar1[2] - pfVar1[6]);
      FUN_00468ca0(SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10));
      FUN_00401f00(fVar4 + *pfVar10,fVar7 + pfVar1[5],fVar5 + pfVar1[6]);
      FUN_004357e0(local_c);
    }
  }
  return;
}

