
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005afc70(int param_1,int *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 uVar12;
  int *piVar13;
  longlong lVar14;
  int local_44;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de640;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xbc) == 0) {
    return 0;
  }
  uVar12 = *(undefined4 *)(param_1 + 0x170);
  uVar1 = *(undefined4 *)(param_1 + 0x174);
  ExceptionList = &local_c;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4 = 0;
  iVar6 = FUN_00406ce0(uVar12,uVar1);
  local_4 = 0xffffffff;
  if (iVar6 == -1) {
    FUN_00649720();
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
    uVar7 = -(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7;
    FUN_00649720();
  }
  *(uint *)(param_1 + 0x178) = uVar7;
  local_4 = 1;
  local_44 = 0;
  iVar6 = FUN_005af120();
  if (*(int *)(*(int *)(iVar6 + 0x304) + 0x158) != 0) {
    iVar6 = FUN_005af120();
    local_44 = *(int *)(*(int *)(*(int *)(iVar6 + 0x304) + 0x158) + 4);
  }
  if (*param_2 != 2) {
    if (*param_2 == 7) {
      iVar6 = param_2[2];
      iVar8 = param_2[3];
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 2;
      iVar6 = FUN_00406ce0(iVar6,iVar8);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (iVar6 == -1) {
        FUN_00649720();
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
        uVar7 = -(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7;
        FUN_00649720();
      }
      iVar6 = *(int *)(uVar7 + 0x1a4);
      iVar8 = FUN_005af120();
      if (iVar6 != *(int *)(iVar8 + 0x1a4)) {
        *(int *)(param_1 + 0x48) = param_2[2];
        *(int *)(param_1 + 0x4c) = param_2[3];
        FUN_006bf840(0);
        ExceptionList = local_c;
        return 0;
      }
    }
LAB_005afec2:
    FUN_006bf840(0);
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_005af120();
  if (*(int *)(iVar6 + 0x1f8) == 0) goto switchD_005b0093_default;
  lVar5 = *(longlong *)(param_2 + 2);
  iVar6 = param_2[3];
  lVar4 = *(longlong *)(param_2 + 2);
  lVar14 = FUN_005af0f0();
  if ((lVar14 != lVar4) || (param_2[6] == 5)) goto switchD_005b0093_default;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 3;
  iVar6 = FUN_00406ce0((int)lVar5,iVar6);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar6 == -1) {
    FUN_00649720();
    FUN_006bf840(0);
    ExceptionList = local_c;
    return 0;
  }
  uVar7 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
  piVar13 = (int *)(-(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7);
  FUN_00649720();
  if (piVar13 == (int *)0x0) goto LAB_005afec2;
  piVar9 = (int *)FUN_005af120();
  pfVar10 = (float *)(**(code **)(*piVar9 + 0x28))();
  pfVar11 = (float *)(**(code **)(*piVar13 + 0x28))();
  if ((((char)piVar13[0x1f] == '\x1c') &&
      ((param_2[4] != *(int *)(param_1 + 0x170) || (param_2[5] != *(int *)(param_1 + 0x174))))) ||
     (((fVar2 = SQRT((*pfVar11 - *pfVar10) * (*pfVar11 - *pfVar10) +
                     (pfVar11[1] - pfVar10[1]) * (pfVar11[1] - pfVar10[1]) +
                     (pfVar11[2] - pfVar10[2]) * (pfVar11[2] - pfVar10[2])), iVar6 = FUN_005af120(),
       fVar3 = *(float *)(iVar6 + 0xec) + _DAT_006e9348, fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))
       && (param_2[6] != 4)) ||
      ((((local_44 == 0x1b || (local_44 == 0x1a)) || (local_44 == 0x1f)) ||
       (((local_44 == 0x11 || (local_44 == 0x12)) || ((local_44 == 0x13 || (local_44 == 0x14))))))))
     )) goto switchD_005b0093_default;
  if (param_2[6] == 6) {
    iVar6 = FUN_005af120();
    if (*(int *)(iVar6 + 0x240) == 0) goto switchD_005b0093_default;
    uVar12 = 8;
  }
  else {
    iVar6 = FUN_005af120();
    if (*(int *)(iVar6 + 0x1f0) == 0) {
      iVar6 = FUN_005af120();
      if (*(int *)(iVar6 + 0x1ec) == 0) {
        **(undefined4 **)(param_1 + 0x214) = 0;
      }
      iVar6 = FUN_005af120();
      if (*(int *)(iVar6 + 0x1e8) == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x214) + 4) = 0;
      }
      iVar6 = FUN_005af120();
      if (*(int *)(iVar6 + 500) == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x214) + 8) = 0;
      }
      piVar13 = *(int **)(param_1 + 0x214);
      iVar6 = piVar13[2] + piVar13[1] + *piVar13;
      if (iVar6 < 0x65) {
        iVar6 = 100;
      }
      iVar8 = FUN_00647b10(1,iVar6);
      piVar13 = *(int **)(param_1 + 0x214);
      iVar6 = *piVar13;
      if (iVar8 < iVar6) {
        uVar12 = 2;
      }
      else if (iVar8 < iVar6 + piVar13[1]) {
        uVar12 = FUN_00647b10(0,3);
        switch(uVar12) {
        case 0:
          uVar12 = 6;
          break;
        case 1:
          goto switchD_005b0093_caseD_1;
        case 2:
          uVar12 = 5;
          break;
        case 3:
          uVar12 = 4;
          break;
        default:
          goto switchD_005b0093_default;
        }
      }
      else {
        if (piVar13[2] + iVar6 + piVar13[1] <= iVar8) goto switchD_005b0093_default;
switchD_005b0093_caseD_1:
        uVar12 = 7;
      }
    }
    else {
      uVar12 = 3;
    }
  }
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x28))(uVar12);
switchD_005b0093_default:
  FUN_006bf840(0);
  ExceptionList = local_c;
  return 1;
}

