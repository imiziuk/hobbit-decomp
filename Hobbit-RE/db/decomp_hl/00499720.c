
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00499720(int param_1)

{
  float *pfVar1;
  int *piVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_0055a9c0(param_1 + 0x100,param_1 + 0x11c,param_1 + 0x148,param_1 + 0x164);
    FUN_0055b420();
    pfVar1 = (float *)FUN_005c0150();
    local_4 = pfVar1[5] + pfVar1[2];
    local_18 = (pfVar1[3] + *pfVar1) * _DAT_006e936c;
    local_14 = (pfVar1[4] + pfVar1[1]) * _DAT_006e936c;
    local_10 = local_4 * _DAT_006e936c;
    piVar2 = (int *)FUN_0041bcc0();
    (**(code **)(*piVar2 + 0x14))(&local_18,1);
  }
  return;
}

