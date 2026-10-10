
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b0180(int *param_1)

{
  short sVar1;
  uint uVar2;
  float fVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 uVar8;
  float unaff_ESI;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fStack_d4;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [24];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  iVar5 = FUN_004b0ea0();
  if ((((((((iVar5 != 0x1d) && (iVar5 != 0x1e)) && (iVar5 != 0x1f)) &&
         (((iVar5 != 0x20 && (iVar5 != 0x21)) &&
          ((iVar5 != 0x22 && ((iVar5 != 0x23 && (iVar5 != 0x24)))))))) &&
        ((iVar5 != 0x25 && (((iVar5 != 0x26 && (iVar5 != 0x27)) && (iVar5 != 0x28)))))) &&
       (((iVar5 != 0x29 && (iVar5 != 0x2a)) &&
        (((iVar5 != 0x2b && ((iVar5 != 0x2c && (iVar5 != 0x2d)))) && (iVar5 != 0x2e)))))) ||
      (fVar9 = (float10)FUN_00434ca0(iVar5), fVar9 <= (float10)_DAT_006e92f8)) &&
     (((*(byte *)((int)param_1 + 0x126) & 1) == 0 && ((*(ushort *)((int)param_1 + 0x16e) & 4) == 0))
     )) {
    *(undefined2 *)((int)param_1 + 0x172) = 0;
    uStack_ac = 0;
    fStack_a8 = 0.0;
    uStack_a4 = 0;
    fStack_d4 = 0.0;
    if ((*(ushort *)((int)param_1 + 0x16e) & 1) != 0) {
      fVar9 = (float10)FUN_00557bb0(0x40c90fdb);
      fVar9 = (float10)FUN_0064c6b0((float)(fVar9 * (float10)_DAT_006ebffc));
      fStack_a8 = (float)fVar9;
    }
    if ((*(byte *)((int)param_1 + 0x16e) & 2) != 0) {
      fVar9 = (float10)FUN_004b37a0();
      fStack_d4 = (float)fVar9;
    }
    if (((*(byte *)((int)param_1 + 0x16e) & 0x20) != 0) ||
       ((*(byte *)((int)param_1 + 0x16f) & 1) != 0)) {
      uStack_ac = 0;
      fStack_a8 = 0.0;
      uStack_a4 = 0;
      fStack_d4 = 0.0;
    }
    fStack_a0 = (float)param_1[5];
    fStack_98 = (float)param_1[7];
    fStack_9c = (float)param_1[6] + fStack_d4;
    FUN_0064c8e0(uStack_ac,&fStack_c4,&fStack_c0);
    FUN_0064c8e0(fStack_a8,&fStack_b8,&fStack_bc);
    FUN_0064c8e0(uStack_a4,&fStack_b4,&fStack_b0);
    fStack_4c = (fStack_b0 * fStack_bc + fStack_b4 * fStack_c4 * fStack_b8) * (float)param_1[0x4c];
    fStack_48 = fStack_b4 * fStack_c0 * (float)param_1[0x4c];
    fStack_44 = (fStack_b4 * fStack_c4 * fStack_bc - fStack_b0 * fStack_b8) * (float)param_1[0x4c];
    fStack_3c = (fStack_b8 * fStack_b0 * fStack_c4 - fStack_b4 * fStack_bc) * (float)param_1[0x4d];
    fStack_38 = fStack_b0 * fStack_c0 * (float)param_1[0x4d];
    fStack_34 = (fStack_b0 * fStack_c4 * fStack_bc + fStack_b4 * fStack_b8) * (float)param_1[0x4d];
    fStack_2c = fStack_b8 * fStack_c0 * (float)param_1[0x4e];
    fStack_28 = -fStack_c4 * (float)param_1[0x4e];
    fStack_18 = fStack_9c;
    fStack_1c = fStack_a0;
    fStack_14 = fStack_98;
    uStack_40 = 0;
    fStack_24 = fStack_bc * fStack_c0 * (float)param_1[0x4e];
    *(undefined1 *)(param_1 + 0x21) = 200;
    *(undefined1 *)((int)param_1 + 0x83) = 200;
    *(undefined1 *)((int)param_1 + 0x82) = 200;
    *(undefined1 *)((int)param_1 + 0x85) = 0xff;
    uStack_30 = 0;
    uStack_20 = 0;
    uStack_10 = 0x3f800000;
    piVar6 = (int *)(**(code **)(*param_1 + 0x128))(&fStack_4c,1);
    (**(code **)(*piVar6 + 4))(param_1);
    if (((*(byte *)((int)param_1 + 0x16f) & 1) == 0) && ((*(byte *)((int)param_1 + 0x16f) & 4) == 0)
       ) {
      pfVar7 = (float *)FUN_00672260(&fStack_7c);
      fVar10 = (*pfVar7 - (float)param_1[5]) * (*pfVar7 - (float)param_1[5]) +
               (pfVar7[1] - (float)param_1[6]) * (pfVar7[1] - (float)param_1[6]) +
               (pfVar7[2] - (float)param_1[7]) * (pfVar7[2] - (float)param_1[7]);
      fVar11 = (float)*(ushort *)(param_1 + 0x5e) * (float)*(ushort *)(param_1 + 0x5e);
      if (fVar10 < fVar11 != (NAN(fVar10) || NAN(fVar11))) {
        uStack_70 = 0x7f7fffff;
        uStack_6c = 0x7f7fffff;
        uStack_68 = 0x7f7fffff;
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        iVar5 = piVar6[7];
        FUN_004357e0(iVar5);
        FUN_004357e0(iVar5 + 0xc);
        sVar1 = (short)param_1[0x5a];
        if (sVar1 == 0) {
          FUN_004b0900(&uStack_70);
          if ((short)param_1[0x5a] == -1) {
            piVar6 = (int *)0x0;
          }
          else {
            uVar2 = *(uint *)(DAT_0076f648 + (short)param_1[0x5a] * 0x14);
            if (uVar2 == 0) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
            }
          }
          pfVar7 = (float *)(**(code **)(*param_1 + 0x38))();
          fStack_a0 = *pfVar7;
          fStack_9c = pfVar7[1];
          fStack_98 = pfVar7[2];
          FUN_004357e0(pfVar7 + 3);
          fStack_a0 = fStack_a0 - _DAT_006e999c;
          fStack_9c = fStack_9c - _DAT_006e999c;
          fStack_98 = fStack_98 - _DAT_006e999c;
          fStack_94 = fStack_94 + _DAT_006e999c;
          fStack_90 = fStack_90 + _DAT_006e999c;
          fStack_8c = fStack_8c + _DAT_006e999c;
          FUN_004357e0(&fStack_a0);
          FUN_004357e0(&fStack_94);
          (**(code **)(*piVar6 + 0x11c))(1);
          iVar5 = *piVar6;
          uVar8 = (**(code **)(*param_1 + 0x30))();
          (**(code **)(iVar5 + 0x1c))(uVar8);
        }
        else if ((((sVar1 == -1) ||
                  (piVar6 = *(int **)(DAT_0076f648 + sVar1 * 0x14), piVar6 == (int *)0x0)) ||
                 ((*(byte *)((int)piVar6 + 0x7f) & 0x10) == 0)) || (piVar6 == (int *)0x0)) {
          *(undefined2 *)(param_1 + 0x5a) = 0;
          FUN_004b0900(&uStack_70);
          if ((short)param_1[0x5a] == -1) {
            piVar6 = (int *)0x0;
          }
          else {
            uVar2 = *(uint *)(DAT_0076f648 + (short)param_1[0x5a] * 0x14);
            if (uVar2 == 0) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
            }
          }
        }
        pfVar7 = (float *)FUN_00402130(&stack0xffffff24,&uStack_70,auStack_64);
        FUN_00401f00(*pfVar7 * _DAT_006e936c,pfVar7[1] * _DAT_006e936c,pfVar7[2] * _DAT_006e936c);
        fStack_a8 = fStack_84 + unaff_ESI;
        FUN_0065fce0(0);
        pfVar7 = (float *)FUN_00672260(&fStack_18);
        fVar10 = fStack_88 - *pfVar7;
        fVar11 = fStack_a8 - pfVar7[1];
        fVar3 = fStack_80 - pfVar7[2];
        fStack_d4 = DAT_006e92e8 / SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar3 * fVar3);
        iVar5 = FUN_0064cf30(fStack_d4);
        if (iVar5 == 0) {
          fVar10 = 0.0;
          fVar11 = 0.0;
          fStack_d4 = 0.0;
        }
        else {
          fVar10 = fStack_d4 * fVar10;
          fVar11 = fStack_d4 * fVar11;
          fStack_d4 = fStack_d4 * fVar3;
        }
        FUN_00405080(&fStack_7c,auStack_64,&uStack_70);
        fVar3 = fVar11;
        if (fVar11 < fVar10) {
          fStack_78 = fStack_7c;
          fVar3 = fVar10;
        }
        if (fVar3 <= fStack_d4) {
          fStack_78 = fStack_74;
        }
        fStack_78 = fStack_78 * _DAT_006ee1ac;
        FUN_00401f00(fStack_88 + fVar10 * fStack_78,fStack_78 * fVar11 + fStack_a8,
                     fStack_80 + fStack_78 * fStack_d4);
        (**(code **)(*piVar6 + 0x14))(&fStack_88,0);
        uVar4 = 0xff;
        if ((float)*(ushort *)((int)param_1 + 0x17a) * (float)*(ushort *)((int)param_1 + 0x17a) <
            fVar11) {
          uVar4 = __ftol();
        }
        (**(code **)(*piVar6 + 0x104))
                  (CONCAT31((int3)(CONCAT22((short)(CONCAT13(uVar4,0xff0000) >> 0x10),0xff00) >> 8),
                            0xff));
        (**(code **)(*piVar6 + 0x1c))(&fStack_c4);
        return;
      }
      FUN_004b36e0();
    }
  }
  return;
}

