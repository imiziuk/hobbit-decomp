
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00446010(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  int *piVar9;
  
  iVar6 = FUN_00472e70();
  if (iVar6 == 0) {
    uVar7 = FUN_0054c5c0(0x22,s_DC__projects_meridian_Support_Ob_0072439b + 1,0x19);
    sVar5 = FUN_0054c7c0();
    while (-1 < sVar5) {
      if (sVar5 == -1) {
        piVar9 = (int *)0x0;
      }
      else {
        uVar1 = *(uint *)(DAT_0076f648 + sVar5 * 0x14);
        if (uVar1 == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
        }
      }
      iVar6 = FUN_004b1070();
      if (((iVar6 == 0) && (iVar6 = FUN_004b25f0(), iVar6 == 0)) &&
         (iVar6 = FUN_004b1080(), iVar6 != 0)) {
        pfVar8 = (float *)(**(code **)(*piVar9 + 0x28))();
        fVar2 = *pfVar8 - *(float *)(param_1 + 0x14);
        fVar3 = pfVar8[1] - *(float *)(param_1 + 0x18);
        fVar4 = pfVar8[2] - *(float *)(param_1 + 0x1c);
        fVar2 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
        if (((*(byte *)((int)piVar9 + 0x16f) & 2) == 0) &&
           (fVar2 < _DAT_006ec0dc == (NAN(fVar2) || NAN(_DAT_006ec0dc)))) {
          if ((fVar2 < _DAT_00724398 != (NAN(fVar2) || NAN(_DAT_00724398))) &&
             (iVar6 = FUN_00446180(piVar9), iVar6 != 0)) {
            FUN_00446330(piVar9);
          }
        }
        else if (((*(byte *)((int)piVar9 + 0x16f) & 1) == 0) &&
                ((fVar2 < _DAT_00724394 != (NAN(fVar2) || NAN(_DAT_00724394)) &&
                 (iVar6 = FUN_00446180(piVar9), iVar6 != 0)))) {
          FUN_004b3400();
        }
      }
      sVar5 = FUN_0054c7c0();
    }
    FUN_0054c880(uVar7);
  }
  return;
}

