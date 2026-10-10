
void __fastcall FUN_004053c0(int param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 extraout_ECX;
  int iVar11;
  float *pfVar12;
  float10 fVar13;
  undefined8 uVar14;
  undefined4 *local_14;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0066dac0();
    bVar6 = 0;
    pfVar1 = (float *)(param_1 + 0x2e8);
    local_14 = &DAT_006e931c;
    pfVar12 = (float *)(param_1 + 0x248);
    do {
      if (DAT_0071cf98 != 0) {
        iVar7 = FUN_0065f190();
        if (iVar7 != 0) {
          FUN_00669cf0();
          FUN_0065f430();
        }
      }
      if (*pfVar1 < pfVar12[-1] == (NAN(*pfVar1) || NAN(pfVar12[-1]))) {
        fVar4 = DAT_006e92e4;
        if (pfVar12[2] < *pfVar1) {
          fVar4 = *pfVar1 - pfVar12[2];
          goto LAB_004054b6;
        }
      }
      else {
        fVar4 = *pfVar1 - pfVar12[-1];
LAB_004054b6:
        fVar4 = fVar4 * fVar4;
      }
      if (*(float *)(param_1 + 0x2ec) < *pfVar12 ==
          (NAN(*(float *)(param_1 + 0x2ec)) || NAN(*pfVar12))) {
        if (pfVar12[3] < *(float *)(param_1 + 0x2ec)) {
          fVar5 = *(float *)(param_1 + 0x2ec) - pfVar12[3];
          goto LAB_004054dd;
        }
      }
      else {
        fVar5 = *(float *)(param_1 + 0x2ec) - *pfVar12;
LAB_004054dd:
        fVar4 = fVar5 * fVar5 + fVar4;
      }
      if (*(float *)(param_1 + 0x2f0) < pfVar12[1] ==
          (NAN(*(float *)(param_1 + 0x2f0)) || NAN(pfVar12[1]))) {
        if (pfVar12[4] < *(float *)(param_1 + 0x2f0)) {
          fVar5 = *(float *)(param_1 + 0x2f0) - pfVar12[4];
          goto LAB_0040550a;
        }
      }
      else {
        fVar5 = *(float *)(param_1 + 0x2f0) - pfVar12[1];
LAB_0040550a:
        fVar4 = fVar5 * fVar5 + fVar4;
      }
      if (fVar4 < DAT_006e9300 * DAT_006e9300 != (fVar4 == DAT_006e9300 * DAT_006e9300)) {
        bVar6 = 1;
      }
      local_14 = local_14 + 1;
      pfVar12 = pfVar12 + 6;
    } while ((int)local_14 < 0x6e9330);
    if (DAT_0071cf98 != 0) {
      iVar7 = FUN_0065f190();
      if (iVar7 != 0) {
        uVar14 = CONCAT44(1,extraout_ECX);
        FUN_00406b70((-(uint)bVar6 & 0xfffe01) - 0xffff01);
        FUN_0066a6e0(pfVar1,DAT_006e9300,uVar14);
        FUN_0065f430();
      }
    }
    FUN_0064f0d0(0,0,s_Keyboard_Controls_0071d484);
    FUN_0064f0d0(0,1,s___________________0071d470);
    FUN_0064f0d0(0,2,s_____Prev_Next_Anim_0071d458);
    FUN_0064f0d0(0,3,s_<_>_Prev_Next_Track_0071d440);
    FUN_0064f0d0(0,4,s___Repeat_Cur_Anim_0071d428);
    FUN_0064f0d0(0,5,s_____Accel_Decel_Cur_Anim_0071d40c);
    FUN_0064f0d0(0,6,s___Run_Through_Cur_Anim_0071d3f0);
    FUN_0064f0d0(0,8,s_Anim____s_0071d3e0,&DAT_0071cf50 + *(int *)(*(int *)(param_1 + 8) + 8) * 4);
    FUN_0064f0d0(0,9,s_AnimIndex___d_0071d3d0,*(undefined4 *)(*(int *)(param_1 + 8) + 8));
    FUN_0064f0d0(0,10,s_AnimSpeed___5_2f_0071d3bc,
                 (double)*(float *)(param_1 + 0x154 + *(int *)(*(int *)(param_1 + 8) + 8) * 4));
    pcVar8 = &DAT_0071d3b4;
    if (*(int *)(param_1 + 0x1e8) == 0) {
      pcVar8 = s_FALSE_0071d3ac;
    }
    FUN_0064f0d0(0,0xb,s_Repeating___s_0071d39c,pcVar8);
    puVar9 = &DAT_0071d398;
    if (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x24) <= DAT_006e92e4) {
      puVar9 = &DAT_0071d390;
    }
    FUN_0064f0d0(0,0xc,&DAT_0071d38c,puVar9);
    fVar13 = (float10)FUN_0064cd90();
    FUN_0064f0d0(0,0xd,s_SwingTimer__5_2f_0071d378,(double)fVar13);
    iVar11 = 0;
    iVar7 = 0xe;
    while( true ) {
      uVar2 = (*(int **)(param_1 + 8))[1];
      uVar3 = uVar2 * 2;
      if (((uVar3 ^ uVar2) & 0x7fffffff ^ uVar3) == 0xffffffff) {
        iVar10 = **(int **)(param_1 + 8);
      }
      else {
        iVar10 = FUN_00549470();
      }
      if (*(int *)(iVar10 + 0x54) <= iVar11) break;
      FUN_0064f0d0(0,iVar7,s_AnimSpeed__i____5_2f_0071d360,iVar11);
      iVar11 = iVar11 + 1;
      iVar7 = iVar7 + 1;
    }
    iVar11 = iVar7;
    if (*(int *)(param_1 + 0x1ec) != 0) {
      iVar11 = iVar7 + 1;
      FUN_0064f0d0(0,iVar7,s_RunThrgh____s_0071d350,
                   &DAT_0071cf50 + *(int *)(*(int *)(param_1 + 8) + 8) * 4);
    }
    if (*(int *)(param_1 + 0x1f8) != 0) {
      FUN_0064f0d0(0,iVar11,s_Up_to_date_0071d344);
      return;
    }
    FUN_0064f0d0(0,iVar11,s_CHANGES_NOT_SAVED_0071d330);
  }
  return;
}

