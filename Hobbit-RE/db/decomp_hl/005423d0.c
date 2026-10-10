
void __fastcall FUN_005423d0(int param_1)

{
  float *pfVar1;
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
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d93bd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_char_anim_player__UpdateCachedBo_00737dbc);
  local_4 = 0;
  if (*(int *)(param_1 + 0x13c) == 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(param_1 + 0x140) == 0) {
    iVar16 = FUN_00549470(param_1);
    FUN_00549580(param_1);
    uVar17 = thunk_FUN_0064ff70(*(int *)(iVar16 + 0x4c) * 0xc,
                                s_C__projects_meridian_Support_Ani_00737de4,0x256);
    *(undefined4 *)(param_1 + 0x140) = uVar17;
  }
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
  if (*(int *)(param_1 + 300) != 0) {
    FUN_00542230();
  }
  iVar16 = *(int *)(param_1 + 0x130);
  iVar18 = FUN_00549470(param_1);
  FUN_00549580(param_1);
  iVar18 = *(int *)(iVar18 + 0x4c);
  iVar19 = FUN_00549470(param_1);
  FUN_00549580(param_1);
  if (0 < iVar18) {
    iVar22 = 0;
    iVar23 = 0;
    pfVar20 = (float *)(iVar16 + 0x18);
    do {
      fVar2 = pfVar20[4];
      fVar3 = *(float *)(iVar22 + 0x3c + *(int *)(iVar19 + 0x50));
      pfVar1 = (float *)(iVar22 + 0x34 + *(int *)(iVar19 + 0x50));
      fVar4 = pfVar20[-4];
      iVar22 = iVar22 + 0x80;
      fVar5 = *pfVar1;
      fVar6 = *pfVar20;
      fVar7 = pfVar1[1];
      fVar8 = pfVar20[8];
      fVar9 = pfVar20[3];
      fVar10 = pfVar1[2];
      fVar11 = pfVar20[-1];
      fVar12 = pfVar1[1];
      fVar13 = pfVar20[-5];
      fVar14 = *pfVar1;
      fVar15 = pfVar20[7];
      pfVar21 = (float *)(*(int *)(param_1 + 0x140) + iVar23);
      iVar23 = iVar23 + 0xc;
      iVar18 = iVar18 + -1;
      *pfVar21 = pfVar20[-6] * *pfVar1 + pfVar20[2] * pfVar1[2] + pfVar20[-2] * pfVar1[1] +
                 pfVar20[6];
      pfVar21[1] = fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10 + fVar15;
      pfVar21[2] = fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3 + fVar8;
      pfVar20 = pfVar20 + 0x10;
    } while (iVar18 != 0);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

