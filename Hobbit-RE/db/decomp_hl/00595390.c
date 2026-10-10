
void __fastcall FUN_00595390(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  float *pfVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  undefined4 uVar12;
  int iStack_58;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [20];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd23b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_PhysController__SetupNavPath_00742fdc);
  local_4 = 0;
  if (*(int *)(param_1 + 400) != 0) {
    iVar1 = FUN_00566dd0();
    if (iVar1 == 1) {
      iVar1 = *(int *)(param_1 + 400);
      local_44 = *(float *)(iVar1 + 0x18);
      local_40 = *(float *)(iVar1 + 0x1c);
      local_3c = *(float *)(iVar1 + 0x20);
      piVar2 = (int *)FUN_00592920();
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x28))();
      uStack_38 = *puVar3;
      uStack_34 = puVar3[1];
      uStack_30 = puVar3[2];
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 400) + 0x10);
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 400) + 0x14);
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 1;
      iVar1 = FUN_00406ce0(uVar6,uVar7);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar1 == -1) {
        FUN_00649720();
      }
      else {
        uVar5 = *(uint *)(DAT_0076f648 + iVar1 * 0x14);
        piVar2 = (int *)(-(uint)((*(byte *)(uVar5 + 0x7f) & 0x10) != 0) & uVar5);
        FUN_00649720();
        if (piVar2 != (int *)0x0) {
          pfVar4 = (float *)(**(code **)(*piVar2 + 0x28))();
          local_44 = local_44 + *pfVar4;
          local_40 = local_40 + pfVar4[1];
          local_3c = local_3c + pfVar4[2];
        }
      }
      if (((*(int *)(param_1 + 0x19c) < 2) && ((*(byte *)(param_1 + 0x4c) & 0x20) != 0)) ||
         ((*(uint *)(param_1 + 0x4c) & 0x20000) != 0)) {
        if (*(int *)(param_1 + 0x1a8) == 0) {
          FUN_006bf840(*(undefined4 *)(param_1 + 0x1a0));
          *(undefined4 *)(param_1 + 0x1a0) = 0;
          *(undefined4 *)(param_1 + 0x1a4) = 0;
        }
        *(undefined4 *)(param_1 + 0x19c) = 0;
        uVar5 = *(uint *)(param_1 + 0x4c);
        if (((uVar5 & 0x10000) == 0) || ((uVar5 & 0x20000) != 0)) {
          uVar6 = FUN_00592220();
          uVar7 = FUN_005921e0(uVar6);
          uVar12 = 0x3e99999a;
          uVar8 = FUN_00592280(0x3e99999a,uVar7);
          FUN_005b4490(&uStack_38,&local_44,param_1 + 0x194,uVar8,uVar12,uVar7,uVar6);
          uVar5 = *(uint *)(param_1 + 0x4c);
          *(uint *)(param_1 + 0x4c) = uVar5 & 0xfffdffff | 0x10000;
          *(uint *)(param_1 + 0x4c) = uVar5 & 0xfffdffdf | 0x10000;
        }
        else {
          uVar5 = (~uVar5 & 0x200) >> 9;
          uVar6 = FUN_00592220(uVar5);
          uVar7 = FUN_005921e0(uVar6);
          uVar12 = 0x3e99999a;
          uVar8 = FUN_00592280(0x3e99999a,uVar7);
          iVar1 = FUN_005b3ae0(&uStack_38,&local_44,param_1 + 0x194,uVar8,uVar12,uVar7,uVar6,uVar5);
          uVar5 = (iVar1 << 0x10 ^ *(uint *)(param_1 + 0x4c)) & 0x10000 ^ *(uint *)(param_1 + 0x4c);
          *(uint *)(param_1 + 0x4c) = uVar5;
          *(uint *)(param_1 + 0x4c) = uVar5 & 0xffffffdf;
        }
      }
      else {
        if (*(int *)(param_1 + 0x19c) < 1) {
          iStack_58 = *(int *)(param_1 + 0x19c);
          uStack_18 = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          if (*(int *)(param_1 + 0x1a4) < iStack_58 + 1) {
            if (*(int *)(param_1 + 0x1ac) == 0) {
              iVar9 = *(int *)(param_1 + 0x1a4) / 2;
              iVar1 = 1;
              if (0 < iVar9) {
                iVar1 = iVar9;
              }
              if (iVar1 + iStack_58 < 1) {
                iStack_58 = 1;
              }
              else {
                if (iVar9 < 1) {
                  iVar9 = 1;
                }
                iStack_58 = iStack_58 + iVar9;
              }
            }
            else {
              iStack_58 = *(int *)(param_1 + 0x1ac) + iStack_58;
            }
            pvVar10 = operator_new(iStack_58 << 5);
            local_4._0_1_ = 2;
            pvVar11 = (void *)0x0;
            if (pvVar10 != (void *)0x0) {
              FUN_00401080(pvVar10,0x20,iStack_58,FUN_0059b670);
              pvVar11 = pvVar10;
            }
            iVar1 = 0;
            local_4 = (uint)local_4._1_3_ << 8;
            if (0 < *(int *)(param_1 + 0x19c)) {
              iVar9 = 0;
              do {
                FUN_0059b3e0(*(int *)(param_1 + 0x1a0) + iVar9);
                iVar1 = iVar1 + 1;
                iVar9 = iVar9 + 0x20;
              } while (iVar1 < *(int *)(param_1 + 0x19c));
            }
            FUN_006bf840(*(undefined4 *)(param_1 + 0x1a0));
            *(void **)(param_1 + 0x1a0) = pvVar11;
            *(int *)(param_1 + 0x1a4) = iStack_58;
          }
          FUN_0059b3e0(auStack_2c);
          *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
        }
        pfVar4 = (float *)(*(int *)(param_1 + 0x19c) * 0x20 + -0x20 + *(int *)(param_1 + 0x1a0));
        *pfVar4 = local_44;
        pfVar4[1] = local_40;
        pfVar4[2] = local_3c;
        *(undefined4 *)(*(int *)(param_1 + 0x19c) * 0x20 + -0x14 + *(int *)(param_1 + 0x1a0)) = 0;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

