
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ca430(int param_1)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4ac8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  if (*(int *)(param_1 + 0x154) == 0x437f0000) {
    bVar2 = *(byte *)(param_1 + 0x17c) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x17c) | 1;
  }
  *(byte *)(param_1 + 0x17c) = bVar2;
  if (DAT_0075dab4 == 0) {
    (**(code **)(*(int *)(param_1 + 0x174) + 4))();
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x174) + 8))();
  }
  *(undefined4 *)(param_1 + 0x160) = DAT_006ee9bc;
  iVar3 = *(int *)(param_1 + 0x15c);
  bVar4 = iVar3 == -1;
  if (bVar4) {
    iVar3 = FUN_0054f5b0();
    *(int *)(param_1 + 0x15c) = iVar3;
    bVar4 = iVar3 == -1;
  }
  if (!bVar4 && -2 < iVar3) {
    if (*(float *)(param_1 + 0x138) < *(float *)(param_1 + 0xe4) !=
        (NAN(*(float *)(param_1 + 0x138)) || NAN(*(float *)(param_1 + 0xe4)))) {
      pfVar1 = (float *)(*(int *)(param_1 + 0x120) * 0x2c + -0x20 + *(int *)(param_1 + 0x124));
      fStack_40 = *pfVar1 - _DAT_0072d0e8;
      fStack_3c = pfVar1[1] + _DAT_006e9554;
      fStack_38 = pfVar1[2] - _DAT_0072d0e8;
      fStack_2c = pfVar1[2] + _DAT_0072d0e8;
      fStack_28 = _DAT_0072d0e8 + *pfVar1;
      fStack_34 = fStack_40;
      fStack_30 = fStack_3c;
      fStack_24 = fStack_3c;
      fStack_20 = fStack_2c;
      fStack_1c = fStack_28;
      fStack_18 = fStack_3c;
      fStack_14 = fStack_38;
      FUN_00413480(0x80,0x80,0x80);
      FUN_00469af0(param_1 + 0x158);
      FUN_0054fc60(*(undefined4 *)(param_1 + 0x15c),&fStack_40,0x43960000);
    }
    FUN_0054f9c0();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

