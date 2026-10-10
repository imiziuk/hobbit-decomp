
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a3d90(int *param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined8 uVar10;
  char *pcVar11;
  int iStack_10;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  if ((param_1[0x9a] & 0x20000U) == 0) {
    FUN_0065fce0(0);
    pfVar2 = (float *)FUN_00672260(&uStack_c);
    pfVar3 = (float *)(**(code **)(*param_1 + 0x28))();
    fVar1 = SQRT((*pfVar3 - *pfVar2) * (*pfVar3 - *pfVar2) +
                 (pfVar3[1] - pfVar2[1]) * (pfVar3[1] - pfVar2[1]) +
                 (pfVar3[2] - pfVar2[2]) * (pfVar3[2] - pfVar2[2]));
    if (fVar1 <= _DAT_0072a8f0) {
      if ((((fVar1 < _DAT_0072a8f4 != (NAN(fVar1) || NAN(_DAT_0072a8f4))) ||
           (iVar4 = param_1[0x6c], iVar4 == 0x38)) || (iVar4 == 0x39)) ||
         ((iVar4 == 0x37 || (iVar4 = FUN_004a2340(), iVar4 != 0)))) {
        param_1[0x118] = 0;
        param_1[0x9a] = param_1[0x9a] & 0xfff7ffff;
      }
      if (((param_1[0x6c] != 0x47) || ((param_1[0x9a] & 0x80000U) == 0)) &&
         (((param_1[0x9a] & 2U) != 0 && (((uint)param_1[0xfc] >> 6 & 1) == 0)))) {
        if ((param_1[0x9a] & 0x200U) != 0) {
          (**(code **)(*param_1 + 0x14c))();
        }
        if ((param_1[0x9a] & 0x100U) != 0) {
          FUN_004a37f0();
        }
        if (param_1[0xc0] != 0) {
          FUN_005b2ff0();
        }
        if ((DAT_0075fbf8 != 0) && ((*(byte *)(param_1 + 0x9a) & 1) == 0)) {
          puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
          uStack_c = *puVar5;
          fStack_8 = (float)puVar5[1];
          uStack_4 = puVar5[2];
          iVar4 = (**(code **)(*param_1 + 0x38))();
          fStack_8 = fStack_8 + *(float *)(iVar4 + 0x10);
          uVar10 = FUN_00473320();
          iVar4 = FUN_004021c0(uVar10);
          FUN_00473320();
          iStack_10 = -1;
          if (iVar4 != 0) {
            iStack_10 = (int)*(short *)(iVar4 + 0x18e);
          }
          iVar4 = (**(code **)(*param_1 + 0x154))();
          iVar6 = FUN_00549470(iVar4 + 0xd0);
          FUN_00549580(iVar4 + 0xd0);
          uVar7 = (**(code **)(*param_1 + 0x4c))
                            (*(int *)(iVar4 + 0xd4) * 0x50 + *(int *)(iVar6 + 0x58),iStack_10);
          pcVar11 = s_NPC_Name__s_Anim__s_Shot__d_0072b014;
          uVar9 = extraout_ECX;
          FUN_00406b70(0xffffffff);
          FUN_0066ae20(&uStack_c,uVar9,pcVar11,uVar7);
          iVar4 = param_1[0x98];
          if (iVar4 != 0) {
            if ((*(int *)(iVar4 + 8) != 0 || *(int *)(iVar4 + 0xc) != 0) &&
               (piVar8 = (int *)FUN_004021c0(*(int *)(iVar4 + 8),*(int *)(iVar4 + 0xc)),
               piVar8 != (int *)0x0)) {
              pcVar11 = s_WeaponProp_0072b008;
              uVar9 = extraout_ECX_00;
              FUN_00406b70(0xffffffff);
              uVar9 = (**(code **)(*piVar8 + 0x28))(uVar9,pcVar11);
              FUN_0066ae20(uVar9);
            }
            iVar4 = *(int *)param_1[0x98];
            iVar6 = ((int *)param_1[0x98])[1];
            if ((iVar4 != 0 || iVar6 != 0) &&
               (piVar8 = (int *)FUN_004021c0(iVar4,iVar6), piVar8 != (int *)0x0)) {
              pcVar11 = s_RangedWeaponProp_0072aff4;
              uVar9 = extraout_ECX_01;
              FUN_00406b70(0xffffffff);
              uVar9 = (**(code **)(*piVar8 + 0x28))(uVar9,pcVar11);
              FUN_0066ae20(uVar9);
            }
            iVar4 = *(int *)(param_1[0x98] + 0x10);
            iVar6 = *(int *)(param_1[0x98] + 0x14);
            if ((iVar4 != 0 || iVar6 != 0) &&
               (piVar8 = (int *)FUN_004021c0(iVar4,iVar6), piVar8 != (int *)0x0)) {
              pcVar11 = s_ShieldProp_0072afe8;
              uVar9 = extraout_ECX_02;
              FUN_00406b70(0xffffffff);
              uVar9 = (**(code **)(*piVar8 + 0x28))(uVar9,pcVar11);
              FUN_0066ae20(uVar9);
            }
            iVar4 = *(int *)(param_1[0x98] + 0x18);
            iVar6 = *(int *)(param_1[0x98] + 0x1c);
            if ((iVar4 != 0 || iVar6 != 0) &&
               (piVar8 = (int *)FUN_004021c0(iVar4,iVar6), piVar8 != (int *)0x0)) {
              pcVar11 = s_HeldAmmoProp_0072afd8;
              uVar9 = extraout_ECX_03;
              FUN_00406b70(0xffffffff);
              uVar9 = (**(code **)(*piVar8 + 0x28))(uVar9,pcVar11);
              FUN_0066ae20(uVar9);
            }
          }
        }
        param_1[0x11f] = 0;
        return;
      }
    }
  }
  return;
}

