
void __thiscall FUN_0060a100(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int local_20;
  undefined4 *local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3b88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00640420(s_WightBossAttackDelay_00748d94,param_1 + 0xbc);
  FUN_00640420(s_WightBossCastPercent_00748d7c,param_1 + 0xd4);
  FUN_00640420(s_WightBossAttackRadius_00748d64,param_1 + 0xc0);
  FUN_00640420(s_WightBossAttackIdleRadius_00748d48,param_1 + 0xc4);
  FUN_00640420(s_WightBossAttackTimeoutDuration_00748d28,param_1 + 0xd8);
  local_20 = 0;
  FUN_00640450(s_SpawnInfoCount_00748d18,&local_20);
  if (*(int *)(param_1 + 0xa0) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (0 < local_20) {
    do {
      local_1c = (undefined4 *)operator_new(0x18);
      if (local_1c == (undefined4 *)0x0) {
        local_1c = (undefined4 *)0x0;
      }
      else {
        *local_1c = 0;
        local_1c[1] = 0;
        local_1c[2] = 0;
        local_1c[3] = 0;
        local_1c[4] = 0;
        local_1c[5] = 0;
      }
      param_2 = *(int *)(param_1 + 0x94);
      if (*(int *)(param_1 + 0x9c) < param_2 + 1) {
        if (*(int *)(param_1 + 0xa4) == 0) {
          iVar2 = *(int *)(param_1 + 0x9c) / 2;
          iVar4 = 1;
          if (0 < iVar2) {
            iVar4 = iVar2;
          }
          if (iVar4 + param_2 < 1) {
            param_2 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            param_2 = param_2 + iVar2;
          }
        }
        else {
          param_2 = *(int *)(param_1 + 0xa4) + param_2;
        }
        pvVar3 = operator_new(param_2 * 4);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x94)) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x98) + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x94));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x98));
        *(void **)(param_1 + 0x98) = pvVar3;
        *(int *)(param_1 + 0x9c) = param_2;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x98) + *(int *)(param_1 + 0x94) * 4) = local_1c;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      FUN_00649920(local_18,s_SpawnMinion_d_00748d08,iVar7);
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x98) + iVar7 * 4);
      local_4 = 0;
      uVar5 = FUN_00649940(uVar6);
      FUN_006405e0(uVar5,uVar6);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_14,s_SpawnVolume_d_00748cf8,iVar7);
      iVar4 = *(int *)(*(int *)(param_1 + 0x98) + iVar7 * 4) + 8;
      local_4 = 1;
      uVar6 = FUN_00649940(iVar4);
      FUN_006405e0(uVar6,iVar4);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_10,s_SpawnFacing_d_00748ce8,iVar7);
      iVar4 = *(int *)(*(int *)(param_1 + 0x98) + iVar7 * 4) + 0x10;
      local_4 = 2;
      uVar6 = FUN_00649940(iVar4);
      FUN_006405e0(uVar6,iVar4);
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_20);
  }
  FUN_005bf550(uVar1);
  ExceptionList = local_c;
  return;
}

