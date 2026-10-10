
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004a4610(int *param_1,int param_2,int param_3,float *param_4,float param_5)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  float10 fVar9;
  int in_stack_00000020;
  int in_stack_00000024;
  int *local_c4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3bc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  iVar5 = FUN_00406ce0();
  local_4 = 0xffffffff;
  if (iVar5 == -1) {
    FUN_00649720();
    local_c4 = (int *)0x0;
  }
  else {
    uVar2 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
    local_c4 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
    FUN_00649720();
  }
  fVar1 = (float)param_1[0xa0];
  if (param_1[0x6c] == 0x4c) {
    if (fVar1 < _DAT_006e936c != (NAN(fVar1) || NAN(_DAT_006e936c))) {
      ExceptionList = local_c;
      return 0;
    }
  }
  else if (fVar1 < _DAT_006e9340 != (NAN(fVar1) || NAN(_DAT_006e9340))) {
    if ((local_c4 != (int *)0x0) && ((char)local_c4[0x1f] != '\x12')) {
      ExceptionList = local_c;
      return 0;
    }
    if (param_1[0x139] != 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  if (param_1[0x69] == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if ((param_2 == param_1[2]) && (param_3 == param_1[3])) {
    ExceptionList = local_c;
    return 0;
  }
  iVar5 = (**(code **)(*param_1 + 0x108))();
  if (iVar5 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if (in_stack_00000024 == 0) {
    if (param_1[0x69] == 1) {
      if (local_c4 == (int *)0x0) goto LAB_004a4782;
      if (((local_c4[4] | 0x50U) != 0) && (local_c4[0x69] == 1)) {
        ExceptionList = local_c;
        return 0;
      }
    }
    if (((local_c4 != (int *)0x0) && ((*(byte *)(local_c4 + 4) & 0x50) != 0)) &&
       (local_c4[0x69] == param_1[0x69])) {
      iVar5 = FUN_00587ce0();
      iVar6 = FUN_00587ce0();
      if (iVar5 == iVar6) {
        ExceptionList = local_c;
        return 0;
      }
    }
  }
LAB_004a4782:
  bVar4 = false;
  FUN_004357e0();
  FUN_005b8970(param_2);
  local_4 = 1;
  param_1[0x9a] = param_1[0x9a] & 0xffffbfff;
  iVar5 = (**(code **)(*param_1 + 0x154))();
  if ((iVar5 != 0) &&
     (puVar7 = (uint *)(**(code **)(*param_1 + 0x154))(), uVar2 = *puVar7 * 2,
     ((uVar2 ^ *puVar7) & 0x7fffffff ^ uVar2) != 0xffffffff)) {
    iVar5 = (**(code **)(*param_1 + 0x154))();
    fVar1 = *(float *)(iVar5 + 0xdc);
    iVar5 = (**(code **)(*param_1 + 0x154))();
    iVar6 = FUN_00549470();
    FUN_00549580();
    iVar5 = (int)*(short *)(*(int *)(iVar5 + 0xd4) * 0x50 + 0x26 + *(int *)(iVar6 + 0x58));
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        iVar8 = FUN_0053f210();
        if (((iVar8 == 0x11) &&
            (iVar8 = FUN_0053f210(), (float)iVar8 < fVar1 != ((float)iVar8 == fVar1))) &&
           (iVar8 = FUN_0053f210(), fVar1 <= (float)iVar8)) {
          (**(code **)(*param_1 + 0x154))();
          FUN_005417e0();
          iVar8 = (**(code **)(*param_1 + 0x154))();
          fVar3 = *(float *)(iVar8 + 0x28);
          fVar9 = (float10)FUN_0053f230();
          if (SQRT(((float10)param_4[2] - (float10)fStack_98) *
                   ((float10)param_4[2] - (float10)fStack_98) +
                   ((float10)param_4[1] - (float10)fStack_9c) *
                   ((float10)param_4[1] - (float10)fStack_9c) +
                   ((float10)*param_4 - (float10)fStack_a0) *
                   ((float10)*param_4 - (float10)fStack_a0)) <=
              fVar9 * (float10)fVar3 + (float10)param_5) {
            param_1[0x9a] = param_1[0x9a] | 0x4000;
            bVar4 = true;
            param_1[0x97] = param_1[0x97] + 1;
            break;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
  }
  if ((param_1[0x9a] & 0x4000U) == 0) {
    FUN_004357e0();
    iVar5 = FUN_004a4d10();
    if (iVar5 == 0) goto LAB_004a4ab6;
    if (((param_1[0xc1] == 0) || (iVar5 = *(int *)(param_1[0xc1] + 0x158), iVar5 == 0)) ||
       ((*(byte *)(iVar5 + 0x78) & 8) == 0)) {
      if ((((float)param_1[0x68] < DAT_006e92e8 != (NAN((float)param_1[0x68]) || NAN(DAT_006e92e8)))
          && (local_c4 != (int *)0x0)) && ((in_stack_00000020 == 1 || (in_stack_00000020 == 2)))) {
        iVar5 = *local_c4;
        iVar6 = param_1[2];
        (**(code **)(iVar5 + 0x28))();
        (**(code **)(iVar5 + 0x78))(iVar6);
      }
    }
    else {
      param_1[0x9a] = param_1[0x9a] | 0x4000;
      param_1[0x97] = param_1[0x97] + 1;
    }
  }
  else {
LAB_004a4ab6:
    if (!bVar4) goto LAB_004a4b6d;
  }
  iVar5 = FUN_005aead0();
  if (iVar5 == 0) {
LAB_004a4b6d:
    local_4 = 0xffffffff;
    FUN_005b8a20();
    ExceptionList = local_c;
    return 0;
  }
  if (DAT_0075cf1c != 0) {
    FUN_0054e4d0();
  }
  if ((local_c4 == (int *)0x0) || ((char)local_c4[0x1f] != '\x12')) {
    param_1[0x139] = 0;
  }
  else {
    param_1[0x139] = 1;
  }
  param_1[0xa0] = 0;
  if (fStack_24 < DAT_006e92e4 == (fStack_24 == DAT_006e92e4)) {
    if (in_stack_00000020 != 0x12) goto LAB_004a4bb0;
  }
  else if (in_stack_00000020 != 0x12) goto LAB_004a4b6d;
  param_1[0x119] = 0x41200000;
  param_1[0x11a] = DAT_006edd18;
  FUN_00580a60();
LAB_004a4bb0:
  FUN_0042a610(&DAT_0075cba4);
  FUN_0054e3f0();
  FUN_0054e4d0();
  FUN_004a5130();
  local_4 = 0xffffffff;
  FUN_005b8a20();
  ExceptionList = local_c;
  return 1;
}

