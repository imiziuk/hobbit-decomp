
void __fastcall FUN_004b40d0(int *param_1)

{
  int iVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((*(byte *)((int)param_1 + 0x126) & 1) == 0) {
    uStack_10 = 0;
    uStack_20 = 0;
    uStack_30 = 0;
    uStack_c = 0;
    uStack_1c = 0;
    uStack_3c = 0;
    uStack_8 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    uStack_14 = 0;
    uStack_24 = 0;
    uStack_34 = 0;
    uStack_40 = 0x3f800000;
    uStack_2c = 0x3f800000;
    uStack_18 = 0x3f800000;
    uStack_4 = 0x3f800000;
    (**(code **)(*param_1 + 0x10c))(&uStack_40,0);
    if ((DAT_007ba5c8 != 0) && (iVar1 = FUN_005a8fa0(param_1 + 0x11,1), iVar1 != 0)) {
      return;
    }
    (**(code **)(*(int *)param_1[0x4c] + 4))(param_1);
  }
  return;
}

