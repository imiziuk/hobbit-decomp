
void __thiscall FUN_00617120(int param_1,float param_2)

{
  float fVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e4710;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006405e0(s_HeadVolume_00745910,param_1 + 0x90);
  FUN_006405e0(s_CeilingVolume_007498ec,param_1 + 0x98);
  FUN_00640420(s_MinStartVel_007498e0,param_1 + 0x530);
  FUN_00640420(s_MaxStartVel_007498d4,param_1 + 0x534);
  FUN_00640420(s_MinEndVel_007498c8,param_1 + 0x538);
  FUN_00640420(s_MaxEndVel_007498bc,param_1 + 0x53c);
  FUN_00640420(s_MinLife_007498b4,param_1 + 0x540);
  FUN_00640420(s_MaxLife_007498ac,param_1 + 0x544);
  FUN_00640420(s_MinBreathIn_007498a0,param_1 + 0x548);
  FUN_00640420(s_MaxBreathIn_00749894,param_1 + 0x54c);
  FUN_00640420(s_MinBreathOut_00749884,param_1 + 0x550);
  FUN_00640420(s_MaxBreathOut_00749874,param_1 + 0x554);
  FUN_00640420(s_MinSegEnd_00749868,param_1 + 0x558);
  FUN_00640420(s_MaxSegEnd_0074985c,param_1 + 0x55c);
  FUN_00640420(s_MinSegStart_00749850,param_1 + 0x560);
  FUN_00640420(s_MaxSegStart_00749844,param_1 + 0x564);
  FUN_00640420(s_MinDeviance_00749838,param_1 + 0x568);
  FUN_00640420(s_MaxDeviance_0074982c,param_1 + 0x56c);
  FUN_00640450(s_SafetyZoneCount_0074981c,&iStack_30);
  iVar6 = 0;
  if (*(int *)(param_1 + 0x584) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x57c));
    *(undefined4 *)(param_1 + 0x57c) = 0;
    *(undefined4 *)(param_1 + 0x580) = 0;
  }
  *(undefined4 *)(param_1 + 0x578) = 0;
  if (0 < iStack_30) {
    do {
      pvVar2 = operator_new(0x28);
      FUN_00649920(auStack_2c,s_SafetyZone_dBlocker_00749808,iVar6);
      uStack_4 = 0;
      pvVar7 = pvVar2;
      uVar3 = FUN_00649940(pvVar2);
      FUN_006405e0(uVar3,pvVar7);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_28,s_SafetyZone_dGlow_007497f4,iVar6);
      iVar5 = (int)pvVar2 + 8;
      uStack_4 = 1;
      uVar3 = FUN_00649940(iVar5);
      FUN_006405e0(uVar3,iVar5);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_24,s_SafetyZone_dVolume_007497e0,iVar6);
      iVar5 = (int)pvVar2 + 0x10;
      uStack_4 = 2;
      uVar3 = FUN_00649940(iVar5);
      FUN_006405e0(uVar3,iVar5);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_20,s_SafetyZone_dFlags_007497cc,iVar6);
      puVar8 = &uStack_14;
      uStack_4 = 3;
      uVar3 = FUN_00649940(puVar8);
      FUN_00640450(uVar3,puVar8);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_1c,s_SafetyZone_dHitCount_007497b4,iVar6);
      piVar9 = &iStack_34;
      uStack_4 = 4;
      uVar3 = FUN_00649940(piVar9);
      FUN_00640450(uVar3,piVar9);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_18,s_SafetyZone_dAlpha_007497a0,iVar6);
      puVar8 = &param_2;
      uStack_4 = 5;
      uVar3 = FUN_00649940(puVar8);
      FUN_00640420(uVar3,puVar8);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      *(undefined4 *)((int)pvVar2 + 0x18) = uStack_14;
      fVar1 = DAT_006e92e8;
      if (iStack_34 == 0) {
        iStack_34 = 1;
      }
      *(int *)((int)pvVar2 + 0x1c) = iStack_34;
      *(int *)((int)pvVar2 + 0x20) = iStack_34;
      if (fVar1 < param_2 == (NAN(fVar1) || NAN(param_2))) {
        if (param_2 < DAT_006e92e4) {
          param_2 = 0.0;
        }
      }
      else {
        param_2 = 1.0;
      }
      *(float *)((int)pvVar2 + 0x24) = param_2;
      iStack_38 = *(int *)(param_1 + 0x578);
      if (*(int *)(param_1 + 0x580) < iStack_38 + 1) {
        if (*(int *)(param_1 + 0x588) == 0) {
          iVar4 = *(int *)(param_1 + 0x580) / 2;
          iVar5 = 1;
          if (0 < iVar4) {
            iVar5 = iVar4;
          }
          if (iVar5 + iStack_38 < 1) {
            iStack_38 = 1;
          }
          else {
            if (iVar4 < 1) {
              iVar4 = 1;
            }
            iStack_38 = iStack_38 + iVar4;
          }
        }
        else {
          iStack_38 = *(int *)(param_1 + 0x588) + iStack_38;
        }
        pvStack_10 = operator_new(iStack_38 * 4);
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x578)) {
          do {
            *(undefined4 *)((int)pvStack_10 + iVar5 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x57c) + iVar5 * 4);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x578));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x57c));
        *(void **)(param_1 + 0x57c) = pvStack_10;
        *(int *)(param_1 + 0x580) = iStack_38;
      }
      *(void **)(*(int *)(param_1 + 0x57c) + *(int *)(param_1 + 0x578) * 4) = pvVar2;
      iVar6 = iVar6 + 1;
      *(int *)(param_1 + 0x578) = *(int *)(param_1 + 0x578) + 1;
    } while (iVar6 < iStack_30);
  }
  ExceptionList = pvStack_c;
  return;
}

