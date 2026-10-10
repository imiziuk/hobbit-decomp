
void __thiscall FUN_005bd4f0(int param_1,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iStack_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006df108;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006405e0(s_ActivationVolume_007458fc,param_1 + 0x98);
  FUN_006405e0(s_DeactivationVolume_007458e8,param_1 + 0xa0);
  FUN_006405b0(s_IsActive_007458dc,param_1 + 0xa8);
  FUN_006405e0(s_TailVolume_007458d0,param_1 + 0xb8);
  FUN_00640420(s_TailHeight_00745b2c,param_1 + 0xc0);
  FUN_00640420(s_TailRaiseTime_00745b1c,param_1 + 0xc4);
  FUN_00640420(s_TailLowerTime_00745b0c,param_1 + 200);
  FUN_006405e0(s_DeathCinema_0072b1a8,param_1 + 0x150);
  FUN_00640450(s_FidgetCount_00745b00,&iStack_24);
  iVar6 = 0;
  if (*(int *)(param_1 + 0x140) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x138));
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  *(undefined4 *)(param_1 + 0x134) = 0;
  if (0 < iStack_24) {
    do {
      pvVar2 = operator_new(0x18);
      if (pvVar2 != (void *)0x0) {
        FUN_00649920(auStack_20,s_Fidget_dVolume_00745af0,iVar6);
        uStack_4 = 0;
        pvVar7 = pvVar2;
        uVar3 = FUN_00649940(pvVar2);
        FUN_006405e0(uVar3,pvVar7);
        uStack_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(auStack_1c,s_Fidget_dTreasure_00745adc,iVar6);
        iVar5 = (int)pvVar2 + 8;
        uStack_4 = 1;
        uVar3 = FUN_00649940(iVar5);
        FUN_006405e0(uVar3,iVar5);
        uStack_4 = 0xffffffff;
        FUN_00649950();
        FUN_00649920(auStack_18,s_Fidget_dSoundLevel_00745ac8,iVar6);
        puVar8 = &uStack_14;
        uStack_4 = 2;
        uVar3 = FUN_00649940(puVar8);
        FUN_00640450(uVar3,puVar8);
        uStack_4 = 0xffffffff;
        FUN_00649950();
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x138) + iVar6 * 4) + 0x14) = uStack_14;
        param_2 = *(int *)(param_1 + 0x134);
        if (*(int *)(param_1 + 0x13c) < param_2 + 1) {
          if (*(int *)(param_1 + 0x144) == 0) {
            iVar4 = *(int *)(param_1 + 0x13c) / 2;
            iVar5 = 1;
            if (0 < iVar4) {
              iVar5 = iVar4;
            }
            if (iVar5 + param_2 < 1) {
              param_2 = 1;
            }
            else {
              if (iVar4 < 1) {
                iVar4 = 1;
              }
              param_2 = param_2 + iVar4;
            }
          }
          else {
            param_2 = *(int *)(param_1 + 0x144) + param_2;
          }
          pvStack_10 = operator_new(param_2 * 4);
          iVar5 = 0;
          if (0 < *(int *)(param_1 + 0x134)) {
            do {
              *(undefined4 *)((int)pvStack_10 + iVar5 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x138) + iVar5 * 4);
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(param_1 + 0x134));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x138));
          *(void **)(param_1 + 0x138) = pvStack_10;
          *(int *)(param_1 + 0x13c) = param_2;
        }
        *(void **)(*(int *)(param_1 + 0x138) + *(int *)(param_1 + 0x134) * 4) = pvVar2;
        *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iStack_24);
  }
  FUN_005bf550(uVar1);
  ExceptionList = pvStack_c;
  return;
}

