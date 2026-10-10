
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_004bea50(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_84;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_5c;
  undefined4 local_58 [10];
  undefined4 local_30 [11];
  
  local_7c = *param_2;
  local_6c = (float)param_2[1] + _DAT_006e9364;
  local_74 = param_2[2];
  local_78 = local_6c - _DAT_006e99c4;
  local_70 = local_7c;
  local_68 = local_74;
  FUN_00579720(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_70,&local_7c,
               0x400001);
  FUN_005798f0(1);
  iVar3 = FUN_00577e70();
  if (iVar3 != 0) {
    return true;
  }
  FUN_004b9df0(param_2,local_58,DAT_0075d8e8);
  iVar3 = 0;
  local_84 = 0;
  puVar5 = local_30;
  do {
    puVar1 = puVar5 + -2;
    *puVar1 = local_58[iVar3 * 2];
    uVar2 = *(undefined4 *)(param_1 + 8);
    puVar5[-1] = (float)param_2[1] + _DAT_006e9364;
    *puVar5 = local_58[iVar3 * 2 + 1];
    local_7c = *puVar1;
    local_78 = (float)puVar5[-1] - _DAT_006e99c4;
    local_74 = *puVar5;
    local_5c = local_74;
    FUN_00579720(uVar2,*(undefined4 *)(param_1 + 0xc),puVar1,&local_7c,0x400001);
    FUN_005798f0(1);
    iVar4 = FUN_00577e70();
    if (((iVar4 != 0) && (_DAT_006e99a8 < DAT_00773504)) &&
       ((float)param_2[1] + _DAT_006e9988 < DAT_007734f8 ==
        (NAN((float)param_2[1] + _DAT_006e9988) || NAN(DAT_007734f8)))) {
      *puVar5 = DAT_007734fc;
      local_84 = local_84 + 1;
      *puVar1 = DAT_007734f4;
      puVar5[-1] = DAT_007734f8;
    }
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 3;
  } while (iVar3 < 4);
  return 2 < local_84;
}

