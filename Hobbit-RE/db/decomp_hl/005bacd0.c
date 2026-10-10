
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005bacd0(int param_1)

{
  int iVar1;
  int *piVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  iVar1 = FUN_0041bcc0();
  local_4 = *(float *)(iVar1 + 0x58) + *(float *)(iVar1 + 0x4c);
  local_18 = (*(float *)(iVar1 + 0x44) + *(float *)(iVar1 + 0x50)) * _DAT_006e936c;
  local_14 = (*(float *)(iVar1 + 0x54) + *(float *)(iVar1 + 0x48)) * _DAT_006e936c;
  local_10 = local_4 * _DAT_006e936c;
  iVar1 = FUN_005af120();
  FUN_00579860(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),param_1 + 0x98,&local_18,
               0x1800);
  FUN_005798f0(4);
  FUN_00577e70();
  if (DAT_00773970 < 1) {
    piVar2 = (int *)FUN_0041bcc0();
    iVar1 = (**(code **)(*piVar2 + 0x124))();
    if (iVar1 == 0) {
      return 1;
    }
    FUN_0041bcc0();
    FUN_00424bc0();
  }
  return 0;
}

