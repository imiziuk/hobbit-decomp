
undefined4 __thiscall FUN_005b5e70(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  float10 fVar13;
  int iStack00000008;
  void *local_60;
  int local_58;
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006deb5e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_NavController__GetShortestPath_00745694);
  iVar11 = 0;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  iVar10 = -1;
  bVar2 = false;
  iStack00000008 = __ftol();
  if (0 < *(int *)(param_1 + 0x2c)) {
    pfVar9 = (float *)(*(int *)(param_1 + 0x30) + 0x2c);
    do {
      if (*pfVar9 <= (float)iStack00000008) {
        iStack00000008 = __ftol();
        iVar10 = iVar11;
      }
      iVar11 = iVar11 + 1;
      pfVar9 = pfVar9 + 0xc;
    } while (iVar11 < *(int *)(param_1 + 0x2c));
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    pfVar9 = (float *)(*(int *)(param_1 + 0x14) + 0x2c);
    do {
      if (*pfVar9 <= (float)iStack00000008) {
        iStack00000008 = __ftol();
        bVar2 = true;
        iVar10 = iVar11;
      }
      iVar11 = iVar11 + 1;
      pfVar9 = pfVar9 + 0xc;
    } while (iVar11 < *(int *)(param_1 + 0x10));
  }
  if (iVar10 < 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
    uVar7 = 0;
  }
  else {
    iVar10 = iVar10 * 0x30;
    iStack00000008 = 0;
    if (bVar2) {
      iVar11 = *(int *)(param_1 + 0x14) + iVar10;
      if (0 < *(int *)(*(int *)(param_1 + 0x14) + 0x14 + iVar10)) {
        local_60 = (void *)0x0;
        do {
          uVar7 = *(undefined4 *)((int)local_60 + *(int *)(iVar11 + 0x18));
          uVar4 = *(undefined4 *)((int)local_60 + 4 + *(int *)(iVar11 + 0x18));
          FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
          local_4._0_1_ = 1;
          iVar11 = FUN_00406ce0(uVar7,uVar4);
          local_4._0_1_ = 0;
          if (iVar11 == -1) {
            FUN_00649720();
          }
          else {
            uVar1 = *(uint *)(DAT_0076f648 + iVar11 * 0x14);
            piVar8 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
            FUN_00649720();
            if (piVar8 != (int *)0x0) {
              uVar7 = *(undefined4 *)
                       (*(int *)(iVar10 + 0x18 + *(int *)(param_1 + 0x14)) + 0xc + (int)local_60);
              fVar13 = (float10)FUN_0049e280();
              uVar4 = (**(code **)(*piVar8 + 0x28))();
              FUN_004357e0(uVar4);
              uStack_20 = uVar7;
              fStack_1c = (float)fVar13;
              FUN_00404870(0,0,0);
              param_2 = *(int *)(iVar3 + 8);
              if (*(int *)(iVar3 + 0x10) < param_2 + 1) {
                if (*(int *)(iVar3 + 0x18) == 0) {
                  iVar5 = *(int *)(iVar3 + 0x10) / 2;
                  iVar11 = 1;
                  if (0 < iVar5) {
                    iVar11 = iVar5;
                  }
                  if (iVar11 + param_2 < 1) {
                    param_2 = 1;
                  }
                  else {
                    if (iVar5 < 1) {
                      iVar5 = 1;
                    }
                    param_2 = param_2 + iVar5;
                  }
                }
                else {
                  param_2 = *(int *)(iVar3 + 0x18) + param_2;
                }
                pvVar6 = operator_new(param_2 << 5);
                local_4._0_1_ = 2;
                if (pvVar6 == (void *)0x0) {
                  pvVar6 = (void *)0x0;
                }
                else {
                  iVar11 = param_2;
                  if (-1 < param_2 + -1) {
                    do {
                      FUN_0059b670();
                      iVar11 = iVar11 + -1;
                    } while (iVar11 != 0);
                  }
                }
                iVar11 = 0;
                local_4._0_1_ = 0;
                if (0 < *(int *)(iVar3 + 8)) {
                  iVar5 = 0;
                  do {
                    FUN_0059b3e0(*(int *)(iVar3 + 0xc) + iVar5);
                    iVar11 = iVar11 + 1;
                    iVar5 = iVar5 + 0x20;
                  } while (iVar11 < *(int *)(iVar3 + 8));
                }
                FUN_006bf840(*(undefined4 *)(iVar3 + 0xc));
                *(void **)(iVar3 + 0xc) = pvVar6;
                *(int *)(iVar3 + 0x10) = param_2;
              }
              FUN_0059b3e0(auStack_2c);
              *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
            }
          }
          iVar11 = iVar10 + *(int *)(param_1 + 0x14);
          iStack00000008 = iStack00000008 + 1;
          local_60 = (void *)((int)local_60 + 0x10);
        } while (iStack00000008 < *(int *)(iVar11 + 0x14));
      }
    }
    else {
      iVar11 = iVar10 + *(int *)(param_1 + 0x30);
      if (0 < *(int *)(iVar11 + 0x14)) {
        local_58 = 0;
        do {
          uVar7 = *(undefined4 *)(local_58 + *(int *)(iVar11 + 0x18));
          uVar4 = *(undefined4 *)(local_58 + 4 + *(int *)(iVar11 + 0x18));
          FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
          local_4._0_1_ = 3;
          iVar11 = FUN_00406ce0(uVar7,uVar4);
          local_4._0_1_ = 0;
          if (iVar11 == -1) {
            FUN_00649720();
          }
          else {
            uVar1 = *(uint *)(DAT_0076f648 + iVar11 * 0x14);
            piVar8 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
            FUN_00649720();
            if (piVar8 != (int *)0x0) {
              uVar7 = *(undefined4 *)
                       (*(int *)(iVar10 + 0x18 + *(int *)(param_1 + 0x30)) + 0xc + local_58);
              fVar13 = (float10)FUN_0049e280();
              uVar4 = (**(code **)(*piVar8 + 0x28))();
              FUN_004357e0(uVar4);
              param_2 = *(int *)(iVar3 + 8);
              uStack_18 = 0;
              uStack_14 = 0;
              uStack_10 = 0;
              uStack_20 = uVar7;
              fStack_1c = (float)fVar13;
              if (*(int *)(iVar3 + 0x10) < param_2 + 1) {
                if (*(int *)(iVar3 + 0x18) == 0) {
                  iVar5 = *(int *)(iVar3 + 0x10) / 2;
                  iVar11 = 1;
                  if (0 < iVar5) {
                    iVar11 = iVar5;
                  }
                  if (iVar11 + param_2 < 1) {
                    param_2 = 1;
                  }
                  else {
                    if (iVar5 < 1) {
                      iVar5 = 1;
                    }
                    param_2 = param_2 + iVar5;
                  }
                }
                else {
                  param_2 = *(int *)(iVar3 + 0x18) + param_2;
                }
                local_60 = operator_new(param_2 << 5);
                local_4._0_1_ = 4;
                if (local_60 == (void *)0x0) {
                  local_60 = (void *)0x0;
                }
                else {
                  iVar11 = param_2;
                  if (-1 < param_2 + -1) {
                    do {
                      FUN_0059b670();
                      iVar11 = iVar11 + -1;
                    } while (iVar11 != 0);
                  }
                }
                iVar11 = 0;
                local_4._0_1_ = 0;
                if (0 < *(int *)(iVar3 + 8)) {
                  puVar12 = (undefined4 *)((int)local_60 + 0x10);
                  do {
                    iVar5 = (int)puVar12 + *(int *)(iVar3 + 0xc) + (-0x10 - (int)local_60);
                    FUN_004357e0(iVar5);
                    puVar12[-1] = *(undefined4 *)(iVar5 + 0xc);
                    *puVar12 = *(undefined4 *)(iVar5 + 0x10);
                    FUN_004357e0(iVar5 + 0x14);
                    iVar11 = iVar11 + 1;
                    puVar12 = puVar12 + 8;
                  } while (iVar11 < *(int *)(iVar3 + 8));
                }
                FUN_006bf840(*(undefined4 *)(iVar3 + 0xc));
                *(void **)(iVar3 + 0xc) = local_60;
                *(int *)(iVar3 + 0x10) = param_2;
              }
              FUN_0059b3e0(auStack_2c);
              *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
            }
          }
          iVar11 = *(int *)(param_1 + 0x30) + iVar10;
          iStack00000008 = iStack00000008 + 1;
          local_58 = local_58 + 0x10;
        } while (iStack00000008 < *(int *)(iVar11 + 0x14));
      }
    }
    local_4 = 0xffffffff;
    FUN_00649720();
    uVar7 = 1;
  }
  ExceptionList = local_c;
  return uVar7;
}

