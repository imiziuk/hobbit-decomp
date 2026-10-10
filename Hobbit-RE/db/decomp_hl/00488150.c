
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00488150(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float fStack_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2c58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  iVar3 = 0;
  local_4 = 0;
  FUN_0065fce0();
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  FUN_006727a0();
  FUN_0041b9f0();
  FUN_0064cf30();
  __ftol();
  FUN_005a3970();
  __ftol();
  FUN_0066c3a0();
  (**(code **)(*DAT_007f1000 + 200))();
  iVar1 = *param_1;
  FUN_0065fce0();
  FUN_00672260();
  (**(code **)(iVar1 + 0xcc))();
  iVar1 = FUN_00549470();
  if (iVar1 != 0) {
    FUN_0066db80(iVar1);
    FUN_00549580();
    FUN_0066dac0();
    FUN_00557bb0();
    if (0 < param_1[0x43]) {
      iVar1 = 0;
      do {
        pfVar4 = (float *)(param_1[0x5b] + iVar1);
        __ftol();
        fStack_40 = *pfVar4;
        local_3c = pfVar4[1];
        local_38 = pfVar4[2];
        FUN_0041b9f0(&local_34);
        fStack_40 = local_34;
        local_38 = (float)local_2c;
        local_3c = (float)local_30;
        uVar2 = FUN_0041b9c0(param_1[0x45],param_1[0x45]);
        FUN_0066e5a0(&fStack_40,uVar2);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x48;
      } while (iVar3 < param_1[0x43]);
    }
  }
  FUN_0066d9a0();
  uStack_14 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_1c;
  return;
}

