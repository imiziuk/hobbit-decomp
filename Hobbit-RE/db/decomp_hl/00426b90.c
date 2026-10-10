
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00426b90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  float local_18;
  float local_10;
  float local_c;
  undefined4 local_8;
  float local_4;
  
  iVar1 = FUN_004021c0(param_1,param_2);
  if (iVar1 == 0) {
    return false;
  }
  local_18 = *(float *)(iVar1 + 0x44);
  local_10 = *(float *)(iVar1 + 0x4c);
  local_c = *(float *)(iVar1 + 0x50);
  local_8 = *(undefined4 *)(iVar1 + 0x54);
  local_4 = *(float *)(iVar1 + 0x58);
  piVar2 = (int *)FUN_0041bcc0();
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x28))();
  uStack_1c = puVar3[2];
  fStack_20 = (float)puVar3[1] + _DAT_006e9364;
  uStack_24 = *puVar3;
  uStack_2c = local_8;
  fStack_30 = (local_c + local_18) * _DAT_006e936c;
  fStack_28 = (local_4 + local_10) * _DAT_006e936c;
  FUN_00579720(0,0,&uStack_24,&fStack_30,0x1800);
  iVar1 = FUN_00577e70();
  return iVar1 == 0;
}

