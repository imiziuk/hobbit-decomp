
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004be800(int *param_1,float *param_2,undefined4 param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_1[0x94] != 0 || param_1[0x95] != 0) {
    iVar6 = 1;
    local_28 = 1;
    iVar2 = FUN_004be9b0(1);
    pfVar1 = param_2;
    piVar3 = param_1;
    if (1 < iVar2) {
      do {
        local_1c = DAT_006e92e4 * (float)local_28;
        local_14 = (float)local_28 * _DAT_006e9364;
        local_18 = local_1c;
        FUN_0064c8e0(param_1[0x1c],&local_2c,&param_2);
        local_24 = (float)param_2 * local_18 - local_14 * local_2c;
        local_20 = local_2c * local_18 + local_14 * (float)param_2;
        FUN_004286f0(param_1[0x1a]);
        FUN_00428740(param_1[0x1b]);
        local_24 = local_24 + (float)param_1[5];
        local_20 = local_20 + (float)param_1[6];
        local_1c = local_1c + (float)param_1[7];
        piVar3 = (int *)FUN_004021c0(piVar3[0x94],piVar3[0x95]);
        if (piVar3 == (int *)0x0) {
          return;
        }
        pfVar4 = (float *)(**(code **)(*piVar3 + 0x28))();
        fStack_4 = pfVar4[2] + pfVar1[2];
        fStack_8 = pfVar4[1] + pfVar1[1];
        fStack_c = *pfVar4 + *pfVar1;
        (**(code **)(*piVar3 + 300))(&fStack_c);
        piVar3[0x73] = (int)local_24;
        piVar3[0x74] = (int)local_20;
        piVar3[0x72] = local_28;
        (**(code **)(*piVar3 + 0x1c))(param_2);
        if (param_4 != 0) {
          FUN_004b9dd0();
          piVar5 = (int *)(**(code **)(*piVar3 + 0x28))();
          piVar3[0x60] = *piVar5;
          piVar3[0x61] = piVar5[1];
          piVar3[0x62] = piVar5[2];
        }
        iVar6 = iVar6 + 1;
        local_28 = iVar6;
        iVar2 = FUN_004be9b0(1);
      } while (iVar6 < iVar2);
    }
  }
  return;
}

