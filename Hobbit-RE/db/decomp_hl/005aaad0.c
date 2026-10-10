
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005aaad0(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  float *pfVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  float local_34;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ddf48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_SenseController__UpdateSensedArr_007448e4);
  local_4 = 0;
  piVar7 = (int *)FUN_005aa750();
  local_34 = 1e+07;
  uVar13 = FUN_0041bcd0();
  iVar8 = FUN_004a1060();
  if (iVar8 == 0) goto LAB_005aade3;
  if (param_3 == 0.0) {
    if ((*(byte *)(param_1 + 0x18) & 2) != 0) goto LAB_005aade3;
    FUN_005aa750();
    lVar14 = FUN_004a4160();
    lVar15 = FUN_0041bcd0();
    if (lVar14 == lVar15) goto LAB_005aade3;
  }
  piVar10 = piVar7;
  FUN_0041bcc0(piVar7);
  iVar8 = FUN_004683d0(piVar10);
  if ((iVar8 != 0) &&
     ((iVar8 = FUN_005ab800(uVar13,1,1), iVar8 != 0 || (iVar8 = FUN_005ab3f0(uVar13,1), iVar8 != 0))
     )) {
    *(undefined8 *)(param_1 + 0x38) = uVar13;
    pfVar9 = (float *)(**(code **)(*piVar7 + 0x28))();
    piVar10 = (int *)FUN_0041bcc0();
    pfVar11 = (float *)(**(code **)(*piVar10 + 0x28))();
    local_34 = (pfVar11[2] - pfVar9[2]) * (pfVar11[2] - pfVar9[2]) +
               (pfVar11[1] - pfVar9[1]) * (pfVar11[1] - pfVar9[1]) +
               (*pfVar11 - *pfVar9) * (*pfVar11 - *pfVar9);
  }
  if (param_3 != 0.0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    fVar2 = _DAT_006f427c;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffd;
    if (fVar2 < local_34) {
      uVar12 = FUN_0054c5c0(0x1c,s_C__projects_meridian_Support_AI__007448b0,0x10c);
      while (iVar8 = *(int *)(&DAT_0076f664 + DAT_0076f864 * 4), iVar8 != -1) {
        piVar10 = *(int **)(DAT_0076f648 + iVar8 * 0x14);
        *(int *)(&DAT_0076f664 + DAT_0076f864 * 4) =
             (int)*(short *)(DAT_0076f648 + iVar8 * 0x14 + 4);
        if (piVar10 == (int *)0x0) break;
        if (piVar10 != piVar7) {
          pfVar9 = (float *)(**(code **)(*piVar7 + 0x28))();
          pfVar11 = (float *)(**(code **)(*piVar10 + 0x28))();
          fVar3 = pfVar11[1] - pfVar9[1];
          fVar4 = (pfVar11[2] - pfVar9[2]) * (pfVar11[2] - pfVar9[2]);
          fVar2 = (*pfVar11 - *pfVar9) * (*pfVar11 - *pfVar9);
          param_3 = fVar3 * fVar3 + fVar4 + fVar2;
          if (((((*(byte *)(param_1 + 0x18) & 1) == 0) && (piVar7[0x91] != 0)) &&
              (fVar1 = *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c),
              param_3 < fVar1 != (NAN(param_3) || NAN(fVar1)))) &&
             (((iVar8 = FUN_004683d0(piVar10), iVar8 != 0 &&
               (iVar8 = (**(code **)(*piVar10 + 0x108))(0), iVar8 != 0)) &&
              (iVar8 = FUN_004a1090(), iVar8 != 0)))) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          iVar8 = (**(code **)(*piVar10 + 0x38))();
          fVar1 = *(float *)(iVar8 + 0x10);
          bVar6 = false;
          if ((-(_DAT_006e9550 * fVar1) < fVar3 != (NAN(-(_DAT_006e9550 * fVar1)) || NAN(fVar3))) &&
             (fVar3 < fVar1 != (NAN(fVar3) || NAN(fVar1)))) {
            param_3 = fVar4 + fVar2;
            fVar2 = *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30);
            if ((param_3 < fVar2 == (NAN(param_3) || NAN(fVar2))) ||
               (((iVar8 = FUN_004683d0(piVar10), iVar8 == 0 ||
                 (iVar8 = (**(code **)(*piVar10 + 0x108))(0), iVar8 == 0)) ||
                (iVar8 = FUN_004a1090(), iVar8 == 0)))) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
          }
          if (((bVar5) || (bVar6)) &&
             (*(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2,
             param_3 < local_34 != (NAN(param_3) || NAN(local_34)))) {
            *(int *)(param_1 + 0x38) = piVar10[2];
            local_34 = param_3;
            *(int *)(param_1 + 0x3c) = piVar10[3];
            FUN_004a4160();
          }
        }
      }
      FUN_0054c880(uVar12);
    }
  }
LAB_005aade3:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

