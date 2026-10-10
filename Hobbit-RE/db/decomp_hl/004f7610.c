
void __thiscall FUN_004f7610(int param_1,undefined4 param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  float10 fVar14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d61d1;
  local_c = ExceptionList;
  if ((((DAT_007600e0 == 0) && (*(float *)(param_1 + 0x814) <= DAT_006e92e4)) &&
      (ExceptionList = &local_c, iVar8 = FUN_00472df0(), iVar8 == 0)) &&
     ((NAN(*(float *)(param_1 + 0x818)) || NAN(DAT_006e92e4)) !=
      (*(float *)(param_1 + 0x818) == DAT_006e92e4))) {
    fVar14 = (float10)FUN_00557bb0();
    *(float *)(param_1 + 0x8a0) = (float)fVar14;
    iVar8 = *(int *)(param_1 + 0x898);
    if (iVar8 != 0 || *(int *)(param_1 + 0x89c) != 0) {
      if ((param_3 == iVar8) && (param_4 == *(int *)(param_1 + 0x89c))) {
        ExceptionList = local_c;
        return;
      }
      FUN_00649600();
      local_4 = 0;
      iVar8 = FUN_00406ce0(iVar8);
      local_4 = 0xffffffff;
      if (iVar8 == -1) {
        FUN_00649720();
        piVar12 = (int *)0x0;
      }
      else {
        uVar7 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
        piVar12 = (int *)(-(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7);
        FUN_00649720();
      }
      FUN_00649600();
      local_4 = 1;
      iVar8 = FUN_00406ce0(param_3);
      local_4 = 0xffffffff;
      if (iVar8 == -1) {
        FUN_00649720();
        piVar13 = (int *)0x0;
      }
      else {
        uVar7 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
        piVar13 = (int *)(-(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7);
        FUN_00649720();
      }
      piVar9 = (int *)FUN_0041bcc0();
      pfVar10 = (float *)(**(code **)(*piVar9 + 0x28))();
      fVar1 = *pfVar10;
      fVar2 = pfVar10[1];
      fVar3 = pfVar10[2];
      pfVar10 = (float *)(**(code **)(*piVar12 + 0x28))();
      fVar4 = *pfVar10;
      fVar5 = pfVar10[1];
      fVar6 = pfVar10[2];
      pfVar10 = (float *)(**(code **)(*piVar13 + 0x28))();
      fVar6 = fVar6 - fVar3;
      fVar5 = fVar5 - fVar2;
      fVar4 = fVar4 - fVar1;
      fVar3 = pfVar10[2] - fVar3;
      fVar2 = pfVar10[1] - fVar2;
      fVar1 = *pfVar10 - fVar1;
      fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
      fVar2 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
      if (fVar2 < fVar1 != (NAN(fVar2) || NAN(fVar1))) {
        ExceptionList = local_c;
        return;
      }
    }
    uVar11 = *(undefined4 *)(param_1 + 0x890);
    *(int *)(param_1 + 0x89c) = param_4;
    *(int *)(param_1 + 0x898) = param_3;
    *(undefined4 *)(param_1 + 0x8a4) = 0;
    FUN_00649600();
    local_4 = 2;
    iVar8 = FUN_00406ce0(uVar11);
    local_4 = 0xffffffff;
    if (iVar8 == -1) {
      FUN_00649720();
      piVar12 = (int *)0x0;
    }
    else {
      uVar7 = *(uint *)(DAT_0076f648 + iVar8 * 0x14);
      piVar12 = (int *)(-(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7);
      FUN_00649720();
    }
    FUN_00425440();
    FUN_004d0bc0(0xffffffff);
    FUN_004c73d0();
    FUN_00469af0(param_1 + 0x1398);
    (**(code **)(*piVar12 + 0x10c))();
    uVar11 = FUN_005496c0(s_exclam_pulse_anim_0072f970,s_Props_00720224);
    FUN_004c7010(uVar11);
    FUN_004c7660(0);
    FUN_004c77d0(0);
    *(ushort *)((int)piVar12 + 0x15a) = *(ushort *)((int)piVar12 + 0x15a) & 0xbfff ^ 0x4000;
    (**(code **)(*piVar12 + 0x120))(0x3f800000);
    FUN_004c74d0(0x3f800000);
    (**(code **)(*piVar12 + 0x14))(local_4,0);
    (**(code **)(*piVar12 + 0x8c))(1,0xffffffff);
    (**(code **)(*piVar12 + 0x1c))(&stack0xfffffd64);
    FUN_004d22c0();
    *(undefined1 *)((int)piVar12 + 0x85) = 0xff;
    *(undefined1 *)(piVar12 + 0x21) = 0xe4;
    *(undefined1 *)((int)piVar12 + 0x83) = 0xe4;
    *(undefined1 *)((int)piVar12 + 0x82) = 0xe4;
  }
  ExceptionList = local_c;
  return;
}

