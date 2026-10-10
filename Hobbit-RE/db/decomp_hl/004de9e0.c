
void __thiscall FUN_004de9e0(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int *local_1c;
  undefined4 local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d577b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_trigger__OnImport_0072e5d8);
  local_4 = 0;
  local_20 = 0;
  FUN_006405b0(s_bHasTargetGuids_0072d8b0,&local_20);
  local_38 = 0;
  FUN_006405b0(s_UsesInven_0072e5cc,&local_38);
  *(uint *)(param_1 + 0x120) =
       (local_38 << 6 ^ *(uint *)(param_1 + 0x120)) & 0x40 ^ *(uint *)(param_1 + 0x120);
  FUN_006405b0(s_UsesBButton_0072e5c0,&local_38);
  *(uint *)(param_1 + 0x120) =
       (local_38 << 7 ^ *(uint *)(param_1 + 0x120)) & 0x80 ^ *(uint *)(param_1 + 0x120);
  FUN_006405b0(s_OneDirectional_0072e5b0,&local_38);
  *(uint *)(param_1 + 0x120) =
       (local_38 << 9 ^ *(uint *)(param_1 + 0x120)) & 0x200 ^ *(uint *)(param_1 + 0x120);
  FUN_006405b0(s_OneTimeShot_0072e5a4,&local_38);
  *(uint *)(param_1 + 0x120) =
       (local_38 << 5 ^ *(uint *)(param_1 + 0x120)) & 0x20 ^ *(uint *)(param_1 + 0x120);
  FUN_006405b0(s_CallUpdateInside_0072e590,&local_38);
  *(uint *)(param_1 + 0x120) =
       (local_38 << 0xe ^ *(uint *)(param_1 + 0x120)) & 0x4000 ^ *(uint *)(param_1 + 0x120);
  FUN_006405b0(s_OrderIrrelevant_0072e580,&local_38);
  *(uint *)(param_1 + 0x120) =
       (local_38 << 10 ^ *(uint *)(param_1 + 0x120)) & 0x400 ^ *(uint *)(param_1 + 0x120);
  FUN_006405b0(s_MultItemsCanActivate_0072e568,&local_38);
  *(uint *)(param_1 + 0x120) =
       (local_38 << 0xb ^ *(uint *)(param_1 + 0x120)) & 0x800 ^ *(uint *)(param_1 + 0x120);
  FUN_006405b0(s_DisableOnFull_0072e558,&local_38);
  *(uint *)(param_1 + 0x120) =
       (local_38 << 0xc ^ *(uint *)(param_1 + 0x120)) & 0x1000 ^ *(uint *)(param_1 + 0x120);
  FUN_006405b0(s_PlayerOnly_0072e54c,&local_38);
  *(uint *)(param_1 + 0x120) =
       (local_38 << 0x12 ^ *(uint *)(param_1 + 0x120)) & 0x40000 ^ *(uint *)(param_1 + 0x120);
  FUN_00640450(s_MaxItems_0072e540,(int *)(param_1 + 0x14c));
  FUN_00640450(s_nActivators_0072e534,param_1 + 0x150);
  FUN_004e2c00(param_2);
  if (*(int *)(param_1 + 0x16c) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x164));
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(int *)(param_1 + 0x1a4) == 0) {
    iVar3 = *(int *)(param_1 + 0x19c);
    if (iVar3 != 0) {
      local_24 = (undefined4 *)(iVar3 + -4);
      FUN_006c026a(iVar3,0x1c,*local_24,FUN_005c8440);
      FUN_006bf840(local_24);
    }
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(int *)(param_1 + 0x144) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x13c));
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  local_2c = 0;
  if (0 < *(int *)(param_1 + 0x14c)) {
    do {
      iVar3 = *(int *)(param_1 + 0x138);
      if (*(int *)(param_1 + 0x140) < iVar3 + 1) {
        if (*(int *)(param_1 + 0x148) == 0) {
          iVar1 = *(int *)(param_1 + 0x140) / 2;
          iVar4 = 1;
          if (0 < iVar1) {
            iVar4 = iVar1;
          }
          if (iVar4 + iVar3 < 1) {
            iVar1 = 1;
          }
          else {
            if (iVar1 < 1) {
              iVar1 = 1;
            }
            iVar1 = iVar1 + iVar3;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x148) + iVar3;
        }
        pvVar2 = operator_new(iVar1 * 4);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x138)) {
          do {
            *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x13c) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x138));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x13c));
        *(int *)(param_1 + 0x140) = iVar1;
        *(void **)(param_1 + 0x13c) = pvVar2;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x13c) + *(int *)(param_1 + 0x138) * 4) = 0xffffffff;
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
      iVar3 = *(int *)(param_1 + 0x198);
      if (*(int *)(param_1 + 0x1a0) < iVar3 + 1) {
        if (*(int *)(param_1 + 0x1a8) == 0) {
          iVar4 = *(int *)(param_1 + 0x1a0) / 2;
          iVar1 = 1;
          if (0 < iVar4) {
            iVar1 = iVar4;
          }
          if (iVar1 + iVar3 < 1) {
            iVar3 = 1;
          }
          else {
            if (iVar4 < 1) {
              iVar4 = 1;
            }
            iVar3 = iVar3 + iVar4;
          }
        }
        else {
          iVar3 = iVar3 + *(int *)(param_1 + 0x1a8);
        }
        local_30 = iVar3;
        local_1c = (int *)operator_new(iVar3 * 0x1c + 4);
        local_4._0_1_ = 1;
        if (local_1c == (int *)0x0) {
          local_34 = (int *)0x0;
        }
        else {
          piVar7 = local_1c + 1;
          *local_1c = iVar3;
          FUN_006c043b(piVar7,0x1c,iVar3,FUN_006a1cb0,FUN_005c8440);
          local_34 = piVar7;
        }
        iVar3 = 0;
        local_4 = (uint)local_4._1_3_ << 8;
        if (0 < *(int *)(param_1 + 0x198)) {
          iVar1 = 0;
          do {
            FUN_004e1ae0(*(int *)(param_1 + 0x19c) + iVar1);
            iVar3 = iVar3 + 1;
            iVar1 = iVar1 + 0x1c;
          } while (iVar3 < *(int *)(param_1 + 0x198));
        }
        iVar3 = *(int *)(param_1 + 0x19c);
        if (iVar3 != 0) {
          FUN_006c026a(iVar3,0x1c,*(undefined4 *)(iVar3 + -4),FUN_005c8440);
          FUN_006bf840(iVar3 + -4);
        }
        *(int **)(param_1 + 0x19c) = local_34;
        *(int *)(param_1 + 0x1a0) = local_30;
      }
      *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
      local_2c = local_2c + 1;
    } while (local_2c < *(int *)(param_1 + 0x14c));
  }
  if ((*(byte *)(param_1 + 0x120) & 0x40) != 0) {
    FUN_0063ff20();
    iVar3 = *(int *)(param_2 + 0xc);
    if (0 < *(int *)(param_2 + 0xc)) {
      do {
        local_2c = iVar3;
        FUN_0063ffc0();
        FUN_00640450(&DAT_0072e520,&local_30);
        iVar3 = *(int *)(param_1 + 0x160);
        if (*(int *)(param_1 + 0x168) < iVar3 + 1) {
          if (*(int *)(param_1 + 0x170) == 0) {
            iVar4 = *(int *)(param_1 + 0x168) / 2;
            iVar1 = 1;
            if (0 < iVar4) {
              iVar1 = iVar4;
            }
            if (iVar1 + iVar3 < 1) {
              iVar3 = 1;
            }
            else {
              if (iVar4 < 1) {
                iVar4 = 1;
              }
              iVar3 = iVar3 + iVar4;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x170) + iVar3;
          }
          pvVar2 = operator_new(iVar3 * 4);
          iVar1 = 0;
          if (0 < *(int *)(param_1 + 0x160)) {
            do {
              *(undefined4 *)((int)pvVar2 + iVar1 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x164) + iVar1 * 4);
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_1 + 0x160));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x164));
          *(void **)(param_1 + 0x164) = pvVar2;
          *(int *)(param_1 + 0x168) = iVar3;
        }
        *(int *)(*(int *)(param_1 + 0x164) + *(int *)(param_1 + 0x160) * 4) = local_30;
        local_2c = local_2c + -1;
        *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
        iVar3 = local_2c;
      } while (local_2c != 0);
    }
    FUN_0063ff20();
    if (0 < (int)*(undefined4 **)(param_2 + 0xc)) {
      local_34 = (int *)0x0;
      local_24 = *(undefined4 **)(param_2 + 0xc);
      do {
        FUN_0063ffc0();
        FUN_00640450(s_Number_0072e50c,&local_28);
        local_2c = 0;
        if (0 < local_28) {
          do {
            iVar6 = local_2c;
            FUN_00649920(&local_1c,s_ValidItem_d_0072e500,local_2c);
            piVar7 = &local_30;
            local_4._0_1_ = 2;
            uVar5 = FUN_00649940(piVar7);
            FUN_00640450(uVar5,piVar7);
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00649950();
            piVar7 = local_34;
            iVar1 = *(int *)(param_1 + 0x19c);
            iVar3 = *(int *)(iVar1 + 8 + (int)local_34);
            iVar4 = *(int *)((int)local_34 + iVar1 + 0x10);
            if (iVar4 < iVar3 + 1) {
              iVar6 = *(int *)((int)local_34 + iVar1 + 0x18);
              if (iVar6 == 0) {
                iVar4 = iVar4 / 2;
                iVar6 = 1;
                if (0 < iVar4) {
                  iVar6 = iVar4;
                }
                if (iVar6 + iVar3 < 1) {
                  iVar3 = 1;
                }
                else {
                  if (iVar4 < 1) {
                    iVar4 = 1;
                  }
                  iVar3 = iVar3 + iVar4;
                }
              }
              else {
                iVar3 = iVar6 + iVar3;
              }
              pvVar2 = operator_new(iVar3 * 4);
              iVar4 = 0;
              if (0 < *(int *)((int)piVar7 + iVar1 + 8)) {
                do {
                  *(undefined4 *)((int)pvVar2 + iVar4 * 4) =
                       *(undefined4 *)(*(int *)((int)piVar7 + iVar1 + 0xc) + iVar4 * 4);
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)((int)piVar7 + iVar1 + 8));
              }
              FUN_006bf840(*(undefined4 *)((int)piVar7 + iVar1 + 0xc));
              *(void **)((int)piVar7 + iVar1 + 0xc) = pvVar2;
              *(int *)((int)piVar7 + iVar1 + 0x10) = iVar3;
              iVar6 = local_2c;
            }
            *(int *)(*(int *)((int)piVar7 + iVar1 + 0xc) + *(int *)((int)piVar7 + iVar1 + 8) * 4) =
                 local_30;
            piVar7 = (int *)((int)piVar7 + iVar1 + 8);
            *piVar7 = *piVar7 + 1;
            local_2c = iVar6 + 1;
          } while (local_2c < local_28);
        }
        local_34 = local_34 + 7;
        local_24 = (undefined4 *)((int)local_24 + -1);
      } while (local_24 != (undefined4 *)0x0);
    }
  }
  if (local_20 == 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
  }
  else {
    FUN_0063ff20();
    iVar3 = *(int *)(param_2 + 0xc);
    *(int *)(param_1 + 0x128) = iVar3;
    pvVar2 = operator_new(iVar3 * 8);
    iVar1 = 0;
    *(void **)(param_1 + 300) = pvVar2;
    if (0 < iVar3) {
      do {
        FUN_0063ffc0();
        FUN_006405e0(&DAT_00724c04,&local_1c);
        iVar4 = *(int *)(param_1 + 300);
        *(int **)(iVar4 + iVar1 * 8) = local_1c;
        *(undefined4 *)(iVar4 + 4 + iVar1 * 8) = local_18;
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar3);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

