
void __fastcall FUN_00473410(int param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int local_4;
  
  if ((*(uint *)(param_1 + 0x194) & 0x800000) == 0) {
    *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) | 0x800000;
    uVar3 = FUN_0052ac90(&DAT_0071fe94);
    iVar4 = FUN_00647e40(uVar3);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x110) == 0) {
        FUN_006bf840(*(undefined4 *)(param_1 + 0x108));
        *(undefined4 *)(param_1 + 0x108) = 0;
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      *(undefined4 *)(param_1 + 0x104) = 0;
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0xcc)) {
        local_4 = 0;
        do {
          iVar9 = *(int *)(param_1 + 0x104);
          if (*(int *)(param_1 + 0x10c) < iVar9 + 1) {
            if (*(int *)(param_1 + 0x114) == 0) {
              iVar5 = *(int *)(param_1 + 0x10c) / 2;
              iVar7 = 1;
              if (0 < iVar5) {
                iVar7 = iVar5;
              }
              if (iVar9 + iVar7 < 1) {
                iVar9 = 1;
              }
              else {
                if (iVar5 < 1) {
                  iVar5 = 1;
                }
                iVar9 = iVar9 + iVar5;
              }
            }
            else {
              iVar9 = *(int *)(param_1 + 0x114) + iVar9;
            }
            pvVar6 = operator_new(iVar9 * 4);
            iVar7 = 0;
            if (0 < *(int *)(param_1 + 0x104)) {
              do {
                *(undefined4 *)((int)pvVar6 + iVar7 * 4) =
                     *(undefined4 *)(*(int *)(param_1 + 0x108) + iVar7 * 4);
                iVar7 = iVar7 + 1;
              } while (iVar7 < *(int *)(param_1 + 0x104));
            }
            FUN_006bf840(*(undefined4 *)(param_1 + 0x108));
            *(void **)(param_1 + 0x108) = pvVar6;
            *(int *)(param_1 + 0x10c) = iVar9;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x108) + *(int *)(param_1 + 0x104) * 4) = 0;
          *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
          iVar9 = 0;
          if (0 < *(int *)(param_1 + 0xb0)) {
            pfVar8 = (float *)(*(int *)(param_1 + 0xb4) + 0x38);
            do {
              fVar1 = *(float *)(*(int *)(param_1 + 0xd0) + 0x3c + local_4);
              if ((NAN(*pfVar8) || NAN(fVar1)) != (*pfVar8 == fVar1)) {
                *(undefined4 *)(*(int *)(param_1 + 0x108) + iVar4 * 4) = 1;
                break;
              }
              iVar9 = iVar9 + 1;
              pfVar8 = pfVar8 + 0xf;
            } while (iVar9 < *(int *)(param_1 + 0xb0));
          }
          iVar4 = iVar4 + 1;
          local_4 = local_4 + 0x40;
        } while (iVar4 < *(int *)(param_1 + 0xcc));
      }
      FUN_0064e870(6,s_Updating_Audio_Dialog_Lengths____00727b40);
      iVar4 = *(int *)(param_1 + 0xe8);
      iVar9 = 0;
      if (0 < iVar4) {
        do {
          iVar7 = 0;
          piVar2 = *(int **)(*(int *)(param_1 + 0xec) + iVar9 * 4);
          if (((piVar2[0xc] != 0) && (*piVar2 == 5)) && (iVar5 = FUN_00477250(), iVar5 != 0)) {
            if (0 < *(int *)(param_1 + 0xcc)) {
              do {
                FUN_00473650(iVar7);
                iVar7 = iVar7 + 1;
              } while (iVar7 < *(int *)(param_1 + 0xcc));
            }
            FUN_00473b60();
            FUN_00473bb0();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar4);
      }
      if (*(int *)(param_1 + 0x110) == 0) {
        FUN_006bf840(*(undefined4 *)(param_1 + 0x108));
        *(undefined4 *)(param_1 + 0x108) = 0;
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      *(undefined4 *)(param_1 + 0x104) = 0;
    }
  }
  return;
}

