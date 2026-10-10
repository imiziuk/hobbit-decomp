
void __fastcall FUN_0040e700(short *param_1)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  
  if (*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x36) == 0) {
    FUN_0040e6a0();
    return;
  }
  uVar2 = FUN_0040e830();
  sVar4 = (short)uVar2;
  if (sVar4 != *param_1) {
    iVar3 = FUN_0040ea00(uVar2);
    if (iVar3 == 2) {
      FUN_0040eab0(uVar2);
    }
    else if (iVar3 == 3) {
      FUN_0040ebd0(uVar2);
    }
    else if (iVar3 == 4) {
      FUN_0040ed50();
    }
    psVar1 = param_1 + 1;
    iVar3 = FUN_00647e40(psVar1,s_EREBOR_0071e754);
    if (iVar3 == 0) {
      FUN_0040eda0();
      *param_1 = sVar4;
      param_1[0x30] = 1;
      param_1[0x31] = 0;
      return;
    }
    iVar3 = FUN_00647e40(psVar1,s_THORIN_0071e74c);
    if (iVar3 == 0) {
      FUN_0040ee90();
      *param_1 = sVar4;
      param_1[0x30] = 1;
      param_1[0x31] = 0;
      return;
    }
    iVar3 = FUN_00647e40(psVar1,s_THRAIN_0071e744);
    if (iVar3 == 0) {
      FUN_0040ef10();
      *param_1 = sVar4;
      param_1[0x30] = 1;
      param_1[0x31] = 0;
      return;
    }
    iVar3 = FUN_00647e40(psVar1,s_DURIN_0071e73c);
    if (iVar3 == 0) {
      FUN_0040ef90();
      *param_1 = sVar4;
      param_1[0x30] = 1;
      param_1[0x31] = 0;
      return;
    }
    iVar3 = FUN_00647e40(psVar1,s_THROR_0071e734);
    if (iVar3 == 0) {
      FUN_0040f010();
    }
    param_1[0x30] = 1;
    param_1[0x31] = 0;
    *param_1 = sVar4;
  }
  return;
}

