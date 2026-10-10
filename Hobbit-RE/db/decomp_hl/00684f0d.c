
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00684f0d(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float *pfVar17;
  void *pvVar18;
  void *pvVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  void *pvVar23;
  float *pfVar24;
  int iVar25;
  undefined4 uVar26;
  float *local_18;
  uint local_14;
  uint local_10;
  void *local_8;
  
  if ((((char)param_1[2] != '\x05') || (iVar25 = param_1[1], *(int *)(iVar25 + 8) != 1)) ||
     (iVar13 = *param_1, *(int *)(iVar13 + 8) != 1)) {
    return 0x80004005;
  }
  uVar14 = *(uint *)(iVar13 + 0x1050);
  if (*(uint *)(iVar25 + 0x1050) != uVar14 >> 1) {
    if (*(uint *)(iVar25 + 0x1050) != 1) {
      return 0x80004005;
    }
    if (uVar14 != 1) {
      return 0x80004005;
    }
  }
  uVar15 = *(uint *)(iVar13 + 0x1054);
  if (*(uint *)(iVar25 + 0x1054) != uVar15 >> 1) {
    if (*(uint *)(iVar25 + 0x1054) != 1) {
      return 0x80004005;
    }
    if (uVar15 != 1) {
      return 0x80004005;
    }
  }
  if (*(int *)(iVar25 + 0x1058) != 1) {
    return 0x80004005;
  }
  if (*(int *)(iVar13 + 0x1058) != 1) {
    return 0x80004005;
  }
  if ((((*(byte *)((int)param_1 + 10) & 8) != 0) ||
      (iVar13 = *(int *)(iVar13 + 4), iVar13 != *(int *)(iVar25 + 4))) ||
     ((uVar14 < 2 || (uVar15 < 2)))) goto switchD_00684fe2_default;
  if (iVar13 < 0x1d) {
    if (iVar13 == 0x1c) {
LAB_00685067:
      iVar25 = FUN_00684468();
    }
    else {
      switch(iVar13) {
      case 0x14:
        iVar25 = FUN_00683b93();
        break;
      case 0x15:
        iVar25 = FUN_00683b99();
        break;
      case 0x16:
        iVar25 = FUN_00683cf7();
        break;
      case 0x17:
        iVar25 = FUN_00683e13();
        break;
      case 0x18:
        iVar25 = FUN_00683f63();
        break;
      case 0x19:
        iVar25 = FUN_00684087();
        break;
      case 0x1a:
        iVar25 = FUN_006841d6();
        break;
      case 0x1b:
        iVar25 = FUN_00684329();
        break;
      default:
        goto switchD_00684fe2_default;
      }
    }
  }
  else if (iVar13 == 0x1d) {
    iVar25 = FUN_00684503();
  }
  else if (iVar13 == 0x1e) {
    iVar25 = FUN_0068464f();
  }
  else if (iVar13 == 0x28) {
    iVar25 = FUN_00683b93();
  }
  else if (iVar13 == 0x29) {
    iVar25 = FUN_00683b93();
  }
  else {
    if (iVar13 == 0x32) goto LAB_00685067;
    if (iVar13 == 0x33) {
      iVar25 = FUN_00684770();
    }
    else {
      if (iVar13 != 0x34) goto switchD_00684fe2_default;
      iVar25 = FUN_006848bc();
    }
  }
  if (-1 < iVar25) {
    return 0;
  }
switchD_00684fe2_default:
  pfVar17 = (float *)operator_new(*(int *)(param_1[1] + 0x1050) << 4);
  if (pfVar17 != (float *)0x0) {
    iVar25 = *(int *)(*param_1 + 0x1050);
    if (*(int *)(*param_1 + 0x1054) == 1) {
      pvVar18 = operator_new(iVar25 << 4);
      local_8 = pvVar18;
    }
    else {
      local_8 = operator_new(iVar25 << 5);
      pvVar18 = (void *)(*(int *)(*param_1 + 0x1050) * 0x10 + (int)local_8);
    }
    if (local_8 == (void *)0x0) {
      uVar26 = 0x8007000e;
    }
    else {
      pvVar19 = local_8;
      pvVar23 = pvVar18;
      if (*(int *)(*param_1 + 0x1050) != 1) {
        pvVar19 = (void *)((int)local_8 + 0x10);
        pvVar23 = (void *)((int)pvVar18 + 0x10);
      }
      local_10 = 0;
      if (*(int *)(param_1[1] + 0x1054) != 0) {
        do {
          (**(code **)(*(int *)*param_1 + 4))(local_10 * 2,0,local_8);
          if (pvVar18 != local_8) {
            (**(code **)(*(int *)*param_1 + 4))(local_10 * 2 + 1,0,pvVar18);
          }
          fVar16 = _DAT_006e9550;
          local_14 = 0;
          local_18 = pfVar17;
          if (*(int *)(param_1[1] + 0x1050) != 0) {
            do {
              iVar25 = local_14 * 0x20;
              pfVar20 = (float *)((int)local_8 + iVar25);
              pfVar24 = (float *)((int)pvVar19 + iVar25);
              fVar1 = pfVar24[1];
              fVar2 = pfVar20[1];
              fVar3 = pfVar24[2];
              fVar4 = pfVar20[2];
              fVar5 = pfVar24[3];
              fVar6 = pfVar20[3];
              pfVar21 = (float *)((int)pvVar18 + iVar25);
              fVar7 = pfVar21[1];
              fVar8 = pfVar21[2];
              fVar9 = pfVar21[3];
              pfVar22 = (float *)((int)pvVar23 + iVar25);
              local_14 = local_14 + 1;
              fVar10 = pfVar22[1];
              fVar11 = pfVar22[2];
              fVar12 = pfVar22[3];
              *local_18 = (*pfVar24 + *pfVar20 + *pfVar21 + *pfVar22) * fVar16;
              local_18[1] = (fVar1 + fVar2 + fVar7 + fVar10) * fVar16;
              local_18[2] = (fVar3 + fVar4 + fVar8 + fVar11) * fVar16;
              local_18[3] = (fVar5 + fVar6 + fVar9 + fVar12) * fVar16;
              local_18 = local_18 + 4;
            } while (local_14 < *(uint *)(param_1[1] + 0x1050));
          }
          (**(code **)(*(int *)param_1[1] + 8))(local_10,0,pfVar17);
          local_10 = local_10 + 1;
        } while (local_10 < *(uint *)(param_1[1] + 0x1054));
      }
      FUN_006bf840(local_8);
      uVar26 = 0;
    }
    FUN_006bf840(pfVar17);
    return uVar26;
  }
  return 0x8007000e;
}

