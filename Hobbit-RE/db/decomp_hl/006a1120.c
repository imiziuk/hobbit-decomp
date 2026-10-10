
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a1120(float *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e76b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_ui_manager__Render_00755c00);
  local_4 = 0;
  FUN_006a1050(0x3d089430);
  iVar3 = FUN_0065f190(&DAT_0073065c);
  if (iVar3 != 0) {
    FUN_006a1ae0();
    iVar3 = 0;
    uVar2 = 0;
    if (0 < (int)param_1[4]) {
      do {
        piVar1 = *(int **)((int)param_1[5] + iVar3 * 4);
        if (*piVar1 != 0) {
          FUN_006501d0(s_pUser_>Enabled_00755bf0);
          local_4 = CONCAT31(local_4._1_3_,1);
          if ((piVar1[0x172] != 0) && (param_1[0xe5] != 0.0)) {
            uVar2 = 1;
          }
          if (piVar1[10] != -1) {
            FUN_0069efa0(piVar1[10]);
          }
          iVar5 = piVar1[0x172];
          do {
            iVar5 = iVar5 + -1;
            if (iVar5 < 1) break;
            uVar4 = FUN_006a3230();
          } while ((uVar4 & 0x2000) == 0);
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          if (iVar5 < piVar1[0x172]) {
            do {
              FUN_006501d0(s_pUser_>DialogStack_j__>Render_00755bd0);
              local_4._0_1_ = 2;
              (**(code **)(**(int **)(piVar1[0x173] + iVar5 * 4) + 8))(piVar1[2],piVar1[3]);
              local_4 = CONCAT31(local_4._1_3_,1);
              FUN_006501e0();
              iVar5 = iVar5 + 1;
            } while (iVar5 < piVar1[0x172]);
          }
          local_4 = local_4 & 0xffffff00;
          FUN_006501e0();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[4]);
    }
    iVar5 = 0;
    fVar6 = (float10)FUN_0064c800(*param_1 * _DAT_006e9598);
    iVar3 = 0;
    param_1[1] = (float)((fVar6 + (float10)DAT_006e92e8) * (float10)_DAT_006e936c);
    if (0 < (int)param_1[0x35]) {
      do {
        FUN_006a1330((int)param_1[0x36] + iVar5);
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x18;
      } while (iVar3 < (int)param_1[0x35]);
    }
    if (param_1[0x38] == 0.0) {
      FUN_006bf840(param_1[0x36]);
      param_1[0x36] = 0.0;
      param_1[0x37] = 0.0;
    }
    param_1[0x35] = 0.0;
    FUN_00660340(uVar2);
    FUN_0065f430();
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

