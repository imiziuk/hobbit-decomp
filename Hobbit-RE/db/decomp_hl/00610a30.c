
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00610a30(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  float *local_bc;
  float *local_b8;
  float *local_b4;
  float *local_b0;
  float *local_ac;
  float local_a8;
  int local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = _DAT_006e999c;
  if (*param_1 != 0) {
    fVar2 = param_2 * _DAT_006e958c + (float)param_1[0xb];
    param_1[0xb] = (int)fVar2;
    if (fVar1 < fVar2) {
      do {
        fVar2 = fVar2 - _DAT_006e999c;
      } while (_DAT_006e999c < fVar2);
      param_1[0xb] = (int)fVar2;
    }
    local_a8 = 3.1415927;
    local_ac = (float *)0x0;
    local_b0 = (float *)0x610a8a;
    fVar8 = (float10)FUN_00647b30();
    fVar9 = (fVar8 + (float10)_DAT_006e9598) * (float10)param_2 + (float10)(float)param_1[10];
    fVar8 = (float10)_DAT_006e9598;
    param_1[10] = (int)(float)fVar9;
    if (fVar8 < fVar9) {
      do {
        fVar9 = fVar9 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 < fVar9);
      param_1[10] = (int)(float)fVar9;
    }
    local_a8 = (float)param_1[3];
    local_ac = (float *)param_1[2];
    local_b0 = (float *)0x610adc;
    iVar3 = FUN_004021c0();
    local_a8 = (float)param_1[5];
    local_ac = (float *)param_1[4];
    local_b0 = (float *)0x610af0;
    iVar4 = FUN_004021c0();
    local_b0 = (float *)(iVar3 + 0x44);
    local_a8 = 0.5;
    local_ac = (float *)(iVar3 + 0x50);
    local_b4 = &local_40;
    local_b8 = (float *)0x610b09;
    local_ac = (float *)FUN_00402130();
    local_b0 = &local_60;
    local_b4 = (float *)0x610b17;
    FUN_00402160();
    local_b0 = (float *)(iVar4 + 0x44);
    local_a8 = 0.5;
    local_ac = (float *)(iVar4 + 0x50);
    local_b4 = &local_40;
    local_b8 = (float *)0x610b31;
    local_ac = (float *)FUN_00402130();
    local_b0 = &local_54;
    local_b4 = (float *)0x610b3f;
    FUN_00402160();
    local_a8 = local_4c - local_58;
    local_ac = (float *)(local_50 - local_5c);
    local_b0 = (float *)(local_54 - local_60);
    local_b4 = (float *)0x610b6b;
    FUN_00401f00();
    fVar1 = DAT_006e92e8 / SQRT(local_8c * local_8c + local_94 * local_94 + local_90 * local_90);
    local_ac = (float *)0x610b9d;
    local_a8 = fVar1;
    iVar3 = FUN_0064cf30();
    if (iVar3 == 0) {
      local_94 = 0.0;
      local_90 = 0.0;
      local_8c = 0.0;
    }
    else {
      local_94 = local_94 * fVar1;
      local_90 = local_90 * fVar1;
      local_8c = local_8c * fVar1;
    }
    local_a8 = local_8c * _DAT_006e9348;
    local_ac = (float *)(local_90 * _DAT_006e9348);
    local_b0 = (float *)(local_94 * _DAT_006e9348);
    local_b4 = (float *)0x610c17;
    FUN_00401f00();
    local_54 = local_54 - local_78;
    local_50 = local_50 - local_74;
    local_4c = local_4c - local_70;
    local_a8 = local_8c * _DAT_006e9988;
    local_ac = (float *)(local_90 * _DAT_006e9988);
    local_b0 = (float *)(local_94 * _DAT_006e9988);
    local_b4 = (float *)0x610c70;
    FUN_00401f00();
    local_60 = local_78 + local_60;
    local_5c = local_74 + local_5c;
    local_58 = local_70 + local_58;
    local_a8 = local_94 - local_90 * DAT_006e92e4;
    local_ac = (float *)(local_8c * DAT_006e92e4 - local_94 * DAT_006e92e4);
    local_b0 = (float *)(local_90 * DAT_006e92e4 - local_8c);
    local_b4 = (float *)0x610cd9;
    FUN_00401f00();
    local_a8 = local_70 + local_8c;
    local_ac = (float *)(local_74 + local_90);
    local_b0 = (float *)(local_94 + local_78);
    local_b4 = (float *)0x610d08;
    FUN_00401f00();
    fVar1 = DAT_006e92e8 / SQRT(local_80 * local_80 + local_7c * local_7c + local_84 * local_84);
    local_ac = (float *)0x610d3a;
    local_a8 = fVar1;
    iVar3 = FUN_0064cf30();
    if (iVar3 == 0) {
      local_84 = 0.0;
      local_80 = 0.0;
      local_7c = 0.0;
    }
    else {
      local_84 = fVar1 * local_84;
      local_80 = local_80 * fVar1;
      local_7c = local_7c * fVar1;
    }
    iVar3 = param_1[10];
    fVar1 = local_7c * local_8c + local_84 * local_94 + local_80 * local_90;
    local_a8 = local_8c * fVar1;
    local_ac = (float *)(local_90 * fVar1);
    local_b0 = (float *)(fVar1 * local_94);
    local_b4 = (float *)0x610dc9;
    FUN_00401f00();
    local_ac = (float *)0x610dd3;
    local_a8 = (float)iVar3;
    fVar8 = (float10)FUN_0064c8d0();
    fVar8 = (float10)DAT_006e92e8 - fVar8;
    local_a8 = (float)((float10)local_70 * fVar8);
    local_ac = (float *)(float)((float10)local_74 * fVar8);
    local_b0 = (float *)(float)((float10)local_78 * fVar8);
    local_b4 = (float *)0x610e07;
    FUN_00401f00();
    iVar3 = param_1[10];
    local_a8 = local_80 * local_94 - local_90 * local_84;
    local_ac = (float *)(local_8c * local_84 - local_7c * local_94);
    local_b0 = (float *)(local_7c * local_90 - local_80 * local_8c);
    local_b4 = (float *)0x610e5b;
    FUN_00401f00();
    local_ac = (float *)0x610e65;
    local_a8 = (float)iVar3;
    fVar8 = (float10)FUN_0064c800();
    local_a8 = (float)((float10)local_64 * fVar8);
    local_ac = (float *)(float)((float10)local_68 * fVar8);
    local_b0 = (float *)(float)((float10)local_6c * fVar8);
    local_b4 = (float *)0x610e92;
    FUN_00401f00();
    local_a8 = (float)param_1[10];
    local_ac = (float *)0x610ea1;
    fVar8 = (float10)FUN_0064c8d0();
    local_a8 = (float)((float10)local_7c * fVar8);
    local_ac = (float *)(float)((float10)local_80 * fVar8);
    local_b0 = (float *)(float)(fVar8 * (float10)local_84);
    local_b4 = (float *)0x610ecb;
    FUN_00401f00();
    local_a8 = local_4 + local_1c;
    local_ac = (float *)(local_8 + local_20);
    local_b0 = (float *)(local_c + local_24);
    local_b4 = (float *)0x610f0f;
    FUN_00401f00();
    local_a8 = local_28 + local_10;
    local_ac = (float *)(local_2c + local_14);
    local_b0 = (float *)(local_30 + local_18);
    local_b4 = (float *)0x610f4d;
    FUN_00401f00();
    local_a8 = local_4c - local_58;
    local_80 = local_3c;
    local_ac = (float *)(local_50 - local_5c);
    local_84 = local_40;
    local_7c = local_38;
    local_b0 = (float *)(local_54 - local_60);
    local_b4 = (float *)0x610f94;
    FUN_00401f00();
    fVar1 = SQRT(local_68 * local_68 + local_64 * local_64 + local_6c * local_6c) * _DAT_006e936c;
    local_a8 = (float)param_1[0xb];
    local_ac = (float *)param_1[0xc];
    local_84 = local_84 * fVar1;
    local_80 = local_80 * fVar1;
    local_7c = local_7c * fVar1;
    local_b0 = (float *)0x610fea;
    FUN_005c2050();
    local_ac = (float *)param_1[0xd];
    local_a8 = (float)param_1[0xb] * _DAT_006e936c;
    local_b0 = (float *)0x611005;
    FUN_005c2050();
    local_98 = 0;
    do {
      local_ac = &local_84;
      local_b0 = &local_60;
      fVar1 = (float)local_98 * _DAT_006ec11c;
      local_b4 = &local_84;
      local_b8 = &local_54;
      local_bc = &local_6c;
      local_a8 = fVar1;
      FUN_00611260();
      local_a8 = (float)param_1[0xb] * _DAT_006e9598 + (float)local_98 * _DAT_006ebffc;
      local_48 = fVar1 - _DAT_006e936c;
      fVar1 = local_48;
      if (local_48 < DAT_006e92e4 != (NAN(local_48) || NAN(DAT_006e92e4))) {
        fVar1 = -local_48;
      }
      local_ac = (float *)0x61108c;
      local_44 = local_a8;
      fVar8 = (float10)FUN_0064c800();
      local_34 = (float)(((float10)_DAT_006e99a4 - (float10)fVar1) *
                        (fVar8 * (float10)_DAT_006e998c + (float10)_DAT_006e9984));
      local_a8 = (float)param_1[0xb] * _DAT_006f596c + (float)local_98 * _DAT_006f5970;
      fVar1 = local_48;
      if (local_48 < DAT_006e92e4 != (NAN(local_48) || NAN(DAT_006e92e4))) {
        fVar1 = -local_48;
      }
      local_ac = (float *)0x6110e5;
      local_44 = local_a8;
      fVar8 = (float10)FUN_0064c800();
      fVar2 = local_34;
      local_ac = (float *)local_34;
      local_b0 = &local_78;
      local_b4 = &local_40;
      local_78 = 0.0;
      local_74 = 1.0;
      local_48 = (float)(((float10)_DAT_006e99a4 - (float10)fVar1) *
                        (fVar8 * (float10)_DAT_006e9988 + (float10)_DAT_006e9354));
      local_70 = 0.0;
      local_b8 = (float *)0x61112d;
      pfVar5 = (float *)FUN_00402160();
      local_b4 = (float *)(local_64 + pfVar5[2]);
      local_b8 = (float *)(local_68 + pfVar5[1]);
      local_bc = (float *)(local_6c + *pfVar5);
      FUN_00401f00();
      local_b4 = (float *)fVar2;
      local_b8 = &local_78;
      local_bc = &local_18;
      uVar6 = FUN_00402160();
      FUN_00405080(&local_bc,&local_6c,uVar6);
      FUN_005c1fd0(param_1[0xc],local_98);
      fVar1 = local_48;
      local_a8 = local_48;
      local_ac = &local_78;
      local_b0 = &local_30;
      local_b4 = (float *)0x6111a0;
      pfVar5 = (float *)FUN_00402160();
      local_b4 = (float *)(local_64 + pfVar5[2]);
      local_b8 = (float *)(local_68 + pfVar5[1]);
      local_bc = (float *)(local_6c + *pfVar5);
      FUN_00401f00();
      local_b4 = (float *)fVar1;
      local_b8 = &local_78;
      local_bc = &local_24;
      uVar6 = FUN_00402160();
      FUN_00405080(&local_bc,&local_6c,uVar6);
      FUN_005c1fd0(param_1[0xd],local_98);
      local_98 = local_98 + 1;
    } while (local_98 < 8);
    local_a8 = (float)param_1[7];
    local_ac = (float *)param_1[6];
    local_b0 = (float *)0x61121c;
    piVar7 = (int *)FUN_004021c0();
    if (piVar7 != (int *)0x0) {
      local_a8 = 0.0;
      local_ac = &local_60;
      local_b0 = (float *)0x61122e;
      (**(code **)(*piVar7 + 0x14))();
    }
    local_a8 = (float)param_1[9];
    local_ac = (float *)param_1[8];
    local_b0 = (float *)0x611240;
    piVar7 = (int *)FUN_004021c0();
    if (piVar7 != (int *)0x0) {
      local_a8 = 0.0;
      local_ac = &local_54;
      local_b0 = (float *)0x611252;
      (**(code **)(*piVar7 + 0x14))();
    }
  }
  return;
}

