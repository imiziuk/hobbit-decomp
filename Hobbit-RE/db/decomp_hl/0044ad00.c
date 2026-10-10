
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0044ad00(int param_1,float *param_2)

{
  int *piVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74 [7];
  float local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_10;
  float fStack_8;
  
  local_80 = DAT_0075c814;
  local_7c = DAT_0075c818;
  local_78 = DAT_0075c81c;
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x474),&local_84,&local_88);
  local_74[3] = 0.0;
  local_74[4] = 0.0;
  fVar2 = local_80 * local_84;
  local_74[5] = 1.0;
  local_80 = local_88 * local_80 + local_84 * local_78 + *(float *)(param_1 + 0x14);
  local_7c = local_7c + *(float *)(param_1 + 0x18);
  local_78 = (local_88 * local_78 - fVar2) + *(float *)(param_1 + 0x1c);
  FUN_0064c8e0((*(float *)(param_1 + 0x474) + _DAT_007245e4) - _DAT_006e9578,&local_88,&local_84);
  fVar2 = local_74[5] * local_88;
  local_74[5] = local_74[5] * local_84 - local_74[3] * local_88;
  local_74[3] = local_74[3] * local_84 + fVar2;
  FUN_004357e0(local_74 + 3);
  fVar6 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar6 == ((float10)_DAT_006e92f0 == fVar6)) ||
     (fVar6 < (float10)_DAT_006e92ec == (fVar6 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar6)));
  }
  fVar6 = (float10)FUN_00402020(&local_80);
  local_2c = (float)-fVar6;
  local_74[0] = 0.0;
  local_74[1] = 0.0;
  local_74[2] = 1.0;
  FUN_0064c8e0((*(float *)(param_1 + 0x474) - _DAT_007245e4) + _DAT_006e9578,&local_88,&local_84);
  fVar2 = local_74[2] * local_88;
  local_74[2] = local_74[2] * local_84 - local_74[0] * local_88;
  local_74[0] = local_74[0] * local_84 + fVar2;
  FUN_004357e0(local_74);
  fVar6 = (float10)FUN_00402000();
  if (((float10)_DAT_006e92f0 < fVar6 == ((float10)_DAT_006e92f0 == fVar6)) ||
     (fVar6 < (float10)_DAT_006e92ec == (fVar6 == (float10)_DAT_006e92ec))) {
    FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar6)));
  }
  fVar6 = (float10)FUN_00402020(&local_80);
  local_1c = (float)-fVar6;
  local_88 = 3.4028235e+38;
  local_84 = (float)FUN_0054c5c0(0xd,s_C__projects_meridian_Support_Obj_00724604,0x2e4);
  while (iVar4 = *(int *)(&DAT_0076f664 + DAT_0076f864 * 4), iVar4 != -1) {
    piVar1 = *(int **)(DAT_0076f648 + iVar4 * 0x14);
    *(int *)(&DAT_0076f664 + DAT_0076f864 * 4) = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 4);
    if (piVar1 == (int *)0x0) break;
    pfVar3 = (float *)(**(code **)(*piVar1 + 0x28))();
    fStack_18 = *pfVar3;
    fStack_10 = pfVar3[2];
    if (((((fStack_18 - local_80) * (fStack_18 - local_80) +
           (fStack_10 - local_78) * (fStack_10 - local_78) < _DAT_007245e0 * _DAT_007245e0) &&
         (pfVar3 = (float *)(**(code **)(*piVar1 + 0x28))(),
         DAT_006e92e4 <
         local_38 * *pfVar3 + fStack_30 * pfVar3[2] + fStack_34 * pfVar3[1] + local_2c)) &&
        (pfVar3 = (float *)(**(code **)(*piVar1 + 0x28))(),
        DAT_006e92e4 < local_28 * *pfVar3 + fStack_20 * pfVar3[2] + fStack_24 * pfVar3[1] + local_1c
        )) && ((piVar1[2] != *(int *)(param_1 + 0x3a50) || (piVar1[3] != *(int *)(param_1 + 0x3a54))
               ))) {
      fStack_8 = local_7c;
      iVar4 = FUN_004c8970();
      if (0 < iVar4) {
        iVar5 = 0;
        do {
          FUN_004c8990(&fStack_44,iVar5);
          FUN_00401f00(fStack_44 - fStack_18,fStack_40 - fStack_8,fStack_3c - fStack_10);
          fVar2 = fStack_50 * fStack_50 + fStack_4c * fStack_4c + fStack_48 * fStack_48;
          if (fVar2 < local_88 != (NAN(fVar2) || NAN(local_88))) {
            local_74[6] = fStack_44;
            local_58 = fStack_40;
            local_54 = fStack_3c;
            local_88 = fVar2;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
    }
  }
  FUN_0054c880(local_84);
  if (_DAT_007245e0 * _DAT_007245e0 <= local_88) {
    return 0;
  }
  FUN_00401f00(local_74[6] - local_80,local_58 - local_7c,local_54 - local_78);
  fVar6 = (float10)FUN_0064ca10(local_74[6],local_54);
  *param_2 = (float)fVar6;
  return 1;
}

