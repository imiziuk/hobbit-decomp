
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00573020(int param_1,undefined4 param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float *pfVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  undefined8 uVar18;
  undefined4 unaff_retaddr;
  int local_1a8;
  int *local_1a4;
  float local_188 [2];
  undefined8 local_180;
  undefined4 local_178;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db831;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  iVar5 = 0;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    pfVar10 = *(float **)(param_1 + 0xc);
    do {
      if ((*pfVar10 == param_3) && (pfVar10[1] == param_4)) {
        (*(float **)(param_1 + 0xc))[iVar5 * 6 + 4] = 1.4013e-45;
        if (-1 < iVar5) goto LAB_0057333d;
        break;
      }
      iVar5 = iVar5 + 1;
      pfVar10 = pfVar10 + 6;
    } while (iVar5 < *(int *)(param_1 + 8));
  }
  uVar18 = FUN_0054bad0();
  FUN_00649600();
  local_4._0_1_ = 1;
  iVar5 = FUN_00406ce0();
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar5 == -1) {
    FUN_00649720();
    local_1a4 = (int *)0x0;
  }
  else {
    uVar3 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
    local_1a4 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
    FUN_00649720();
  }
  FUN_0053f310();
  FUN_00488c30();
  local_180 = uVar18;
  iVar5 = *(int *)(param_1 + 8);
  local_188[1] = param_4;
  local_188[0] = param_3;
  local_178 = 1;
  if (*(int *)(param_1 + 0x10) < iVar5 + 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      local_1a8 = *(int *)(param_1 + 0x10) / 2;
      iVar11 = 1;
      if (0 < local_1a8) {
        iVar11 = local_1a8;
      }
      if (iVar5 + iVar11 < 1) {
        local_1a8 = 1;
      }
      else {
        if (local_1a8 < 1) {
          local_1a8 = 1;
        }
        local_1a8 = local_1a8 + iVar5;
      }
    }
    else {
      local_1a8 = *(int *)(param_1 + 0x18) + iVar5;
    }
    pvVar6 = operator_new(local_1a8 * 0x18);
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      iVar7 = 0;
      do {
        puVar12 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar7);
        puVar13 = (undefined4 *)(iVar7 + (int)pvVar6);
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        iVar11 = iVar11 + 1;
        iVar7 = iVar7 + 0x18;
      } while (iVar11 < *(int *)(param_1 + 8));
    }
    FUN_006bf840();
    *(void **)(param_1 + 0xc) = pvVar6;
    *(int *)(param_1 + 0x10) = local_1a8;
  }
  pfVar10 = local_188;
  pfVar14 = (float *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 0x18);
  for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar14 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar14 = pfVar14 + 1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  (**(code **)(*local_1a4 + 0x1c))();
  fVar15 = (float10)FUN_0053f230();
  fVar16 = (float10)FUN_0053f230();
  fVar17 = (float10)FUN_0053f230();
  fVar1 = (float)fVar17;
  fVar17 = (float10)FUN_0053f230();
  fVar2 = (float)fVar17;
  FUN_0053f230();
  local_188[0] = fVar2;
  if (fVar2 < _DAT_006f3ed8 != (fVar2 == _DAT_006f3ed8)) {
    local_188[0] = 1.0;
  }
  local_188[1] = fVar1;
  if (fVar1 < _DAT_006f3ed8 != (fVar1 == _DAT_006f3ed8)) {
    local_188[1] = 1.0;
  }
  if (_DAT_006f3ed8 < (float)fVar15) {
    FUN_0048b750();
  }
  if (_DAT_006f3ed8 < (float)fVar16) {
    (**(code **)(*local_1a4 + 0x100))();
  }
  (**(code **)(*local_1a4 + 0xfc))();
  (**(code **)(*local_1a4 + 0x14))(unaff_retaddr,0);
LAB_0057333d:
  if (param_7 != 0) {
    iVar5 = iVar5 * 0x18;
    uVar3 = *(uint *)(iVar5 + 8 + *(int *)(param_1 + 0xc));
    uVar4 = *(uint *)(iVar5 + 0xc + *(int *)(param_1 + 0xc));
    FUN_00649600();
    iVar7 = (int)*(short *)(&DAT_0076cd88 + ((uVar3 ^ uVar4) * -0xfb & 0xfff) * 2);
    for (iVar11 = iVar7; iVar11 != -1; iVar11 = (int)*(short *)(DAT_0076f648 + iVar11 * 0x14 + 0xe))
    {
    }
    while (iVar7 != -1) {
      piVar9 = (int *)(DAT_0076f648 + iVar7 * 0x14);
      iVar11 = *piVar9;
      if (((iVar11 != 0) && (*(uint *)(iVar11 + 8) == uVar3)) && (*(uint *)(iVar11 + 0xc) == uVar4))
      {
        if (iVar7 != -1) {
          uVar3 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
          local_4 = (uint)local_4._1_3_ << 8;
          piVar9 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
          FUN_00649720();
          if (piVar9 == (int *)0x0) goto LAB_005733f9;
          (**(code **)(*piVar9 + 0x14))();
          (**(code **)(*piVar9 + 0x1c))();
          *(undefined4 *)(iVar5 + 0x10 + *(int *)(param_1 + 0xc)) = 1;
          goto LAB_00573425;
        }
        break;
      }
      iVar7 = (int)*(short *)((int)piVar9 + 0xe);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
LAB_005733f9:
    FUN_0053efd0();
    FUN_0053ebf0();
    FUN_0053ee10();
  }
LAB_00573425:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

