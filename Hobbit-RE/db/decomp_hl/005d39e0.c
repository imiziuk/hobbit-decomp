
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d39e0(int param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e03d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0();
  local_4 = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00434e10();
  }
  else {
    FUN_00649600();
    local_4._0_1_ = 1;
    iVar1 = FUN_00406ce0();
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar1 == -1) {
      FUN_00649720();
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(DAT_0076f648 + iVar1 * 0x14);
      FUN_00649720();
    }
    iVar1 = FUN_00647ed0();
    if (iVar1 == 0) {
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)FUN_0041bcc0();
        FUN_0041bcd0();
      }
      (**(code **)(*piVar3 + 0x28))();
      FUN_004b2a60();
    }
    else {
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)FUN_0041bcc0();
        iVar1 = *piVar3;
      }
      else {
        iVar1 = *piVar3;
      }
      pfVar2 = (float *)(**(code **)(iVar1 + 0x28))();
      fStack_20 = pfVar2[1];
      fStack_24 = *pfVar2;
      fStack_1c = pfVar2[2];
      piVar3 = (int *)FUN_0041bcc0();
      pfVar2 = (float *)(**(code **)(*piVar3 + 0x28))();
      fStack_10 = fStack_1c + (fStack_1c - pfVar2[2]) * _DAT_006e936c;
      fStack_14 = (fStack_20 - pfVar2[1]) * _DAT_006e936c + fStack_20;
      fStack_18 = (fStack_24 - *pfVar2) * _DAT_006e936c + fStack_24;
      fStack_20 = fStack_20 + _DAT_006e99a0;
      FUN_00434eb0();
      FUN_004357e0();
      FUN_004357e0(&fStack_24);
      FUN_004b3180();
    }
    iVar1 = FUN_00647ed0();
    if (iVar1 == 0) {
      FUN_00434d10();
    }
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

