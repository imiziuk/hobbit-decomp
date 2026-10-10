
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ef370(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  undefined1 local_1c [12];
  undefined4 local_10 [2];
  undefined4 local_8;
  undefined4 local_4;
  
  iVar10 = 0;
  if (*(int *)(param_1 + 0x1c8) == 0) {
    FUN_00659600(s_StingCutWeb_0072f098,1);
    local_8 = *(undefined4 *)(param_1 + 8);
    local_4 = *(undefined4 *)(param_1 + 0xc);
    local_10[0] = 0xd;
    if (DAT_0075cf1c != 0) {
      FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),local_10);
    }
    FUN_004ee6e0();
    pfVar3 = param_2;
    local_2c = 1e+33;
    local_28 = -NAN;
    local_30 = 0.0;
    if (0 < *(int *)(param_1 + 0x168) * *(int *)(param_1 + 0x164)) {
      do {
        puVar4 = (undefined4 *)FUN_005a3020(local_1c,local_30);
        iVar5 = *(int *)(param_1 + 0x1c4);
        *(undefined4 *)(iVar5 + iVar10) = *puVar4;
        iVar5 = iVar5 + iVar10;
        *(undefined4 *)(iVar5 + 4) = puVar4[1];
        *(undefined4 *)(iVar5 + 8) = puVar4[2];
        fVar9 = *pfVar3 - *(float *)(*(int *)(param_1 + 0x1c4) + iVar10);
        iVar5 = *(int *)(param_1 + 0x1c4) + iVar10;
        fVar2 = pfVar3[1] - *(float *)(iVar5 + 4);
        fVar1 = pfVar3[2] - *(float *)(iVar5 + 8);
        fVar9 = SQRT(fVar9 * fVar9 + fVar2 * fVar2 + fVar1 * fVar1);
        if (fVar9 < local_2c != (NAN(fVar9) || NAN(local_2c))) {
          local_28 = local_30;
          local_2c = fVar9;
        }
        local_30 = (float)((int)local_30 + 1);
        iVar10 = iVar10 + 0xc;
      } while ((int)local_30 < *(int *)(param_1 + 0x168) * *(int *)(param_1 + 0x164));
      if (local_28 != -NAN) {
        iVar10 = *(int *)(param_1 + 0x164);
        local_24 = (float)((int)local_28 / iVar10);
        iVar7 = (int)local_28 % iVar10;
        local_28 = (float)(*(int *)(param_1 + 0x168) * iVar10);
        iVar5 = 1;
        if (0 < iVar7) {
          iVar5 = iVar7;
        }
        iVar10 = iVar10 + -2;
        if ((iVar5 <= iVar10) && (iVar10 = iVar7, iVar7 < 1)) {
          iVar10 = 1;
        }
        *(int *)(param_1 + 0x1cc) = iVar10;
        *(undefined4 *)(param_1 + 0x1c8) = 1;
        FUN_0058c830(param_1 + 0x44,param_1 + 8);
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x168)) {
          local_2c = (float)((int)local_28 * 4);
          do {
            FUN_005a30b0(*(int *)(param_1 + 0x164) * iVar5 + iVar10,(int)local_28 + iVar5);
            iVar7 = *(int *)(param_1 + 0x1e8);
            param_2 = (float *)(iVar7 + (*(int *)(param_1 + 0x164) * iVar5 + iVar10) * 4);
            *(undefined1 *)((int)local_2c + 3 + iVar7) = *(undefined1 *)((int)param_2 + 3);
            *(undefined1 *)((int)local_2c + 2 + iVar7) = *(undefined1 *)((int)param_2 + 2);
            *(undefined1 *)((int)local_2c + 1 + iVar7) = *(undefined1 *)((int)param_2 + 1);
            *(undefined1 *)((int)local_2c + iVar7) = *(undefined1 *)param_2;
            iVar5 = iVar5 + 1;
            local_2c = (float)((int)local_2c + 4);
          } while (iVar5 < *(int *)(param_1 + 0x168));
        }
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x168)) {
          do {
            FUN_005a3150((*(int *)(param_1 + 0x164) + -1) * iVar5 + iVar10,&local_20,&local_28);
            FUN_005a3120((*(int *)(param_1 + 0x164) + -1) * iVar5 + iVar10,
                         *(int *)(param_1 + 0x168) * *(int *)(param_1 + 0x164) + iVar5,local_28);
            FUN_005a3080((*(int *)(param_1 + 0x164) + -1) * iVar5 + iVar10,&local_30,&param_2);
            FUN_005a3050((*(int *)(param_1 + 0x164) + -1) * iVar5 + iVar10,local_30 * _DAT_006e9340,
                         (float)param_2 * _DAT_006e95d8);
            FUN_005a3080((*(int *)(param_1 + 0x164) + -1) * iVar5 + -1 + iVar10,&local_30,&param_2);
            FUN_005a3050((*(int *)(param_1 + 0x164) + -1) * iVar5 + -1 + iVar10,
                         local_30 * _DAT_006e9340,(float)param_2 * _DAT_006e95d8);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x168));
        }
        iVar5 = *(int *)(param_1 + 0x164);
        iVar7 = *(int *)(param_1 + 0x168);
        iVar8 = iVar5 * iVar7;
        iVar6 = (iVar5 + -1) * iVar7;
        param_2 = (float *)(iVar7 + -1);
        local_28 = (float)(iVar6 + iVar10);
        local_30 = 0.0;
        if (0 < (int)param_2) {
          local_20 = ((int)param_2 * iVar5 + iVar6) - iVar8;
          do {
            FUN_005a3080(*(int *)(param_1 + 0x164) * (int)local_30 + (int)local_28,&local_2c,
                         &param_2);
            FUN_005a2fb0(local_20 + iVar8,iVar8,iVar8 + 1,local_2c,param_2,1);
            local_30 = (float)((int)local_30 + 1);
            iVar8 = iVar8 + 1;
          } while ((int)local_30 < *(int *)(param_1 + 0x168) + -1);
        }
        iVar5 = *(int *)(param_1 + 0x168);
        param_2 = (float *)((iVar5 * 2 + -1) * *(int *)(param_1 + 0x164) + -1);
        iVar7 = 0;
        if (0 < iVar5) {
          local_20 = *(int *)(param_1 + 0x164) * iVar5 - (int)param_2;
          do {
            FUN_005a2fb0((int)param_2 + iVar7,*(int *)(param_1 + 0x164) * iVar7 + iVar10,
                         local_20 + (int)param_2 + iVar7,0,0,1);
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(param_1 + 0x168));
        }
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x164)) {
          do {
            FUN_005a3080(iVar5,&local_30,&param_2);
            local_30 = local_30 * _DAT_006e936c;
            param_2 = (float *)((float)param_2 * _DAT_006e936c);
            FUN_005a3050(iVar5,local_30,param_2);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x164));
        }
        iVar5 = 0;
        if (*(int *)(param_1 + 0x164) != -1 && -1 < *(int *)(param_1 + 0x164) + 1) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 0x1d0) + iVar5 * 4) = 2;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x164) + 1);
        }
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x168)) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 0x1d4) + iVar5 * 4) = 1;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x168));
        }
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x168)) {
          fVar9 = (float)-(int)local_24;
          param_2 = (float *)local_24;
          do {
            local_28 = fVar9;
            if (-1 < (int)param_2) {
              local_28 = (float)param_2;
            }
            FUN_005892e0(*(int *)(param_1 + 0x1d4) + iVar5 * 4,0,
                         (float)(int)local_28 * _DAT_006e95a8,0,*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(param_1 + 0xc));
            iVar5 = iVar5 + 1;
            fVar9 = (float)((int)fVar9 + 1);
            param_2 = (float *)((int)param_2 + -1);
          } while (iVar5 < *(int *)(param_1 + 0x168));
        }
        iVar5 = 1;
        param_2 = (float *)((float)(int)local_24 * _DAT_006e95a8);
        if (1 < *(int *)(param_1 + 0x164) + -1) {
          local_30 = (float)(iVar10 + -1);
          fVar9 = (float)-iVar10;
          do {
            fVar9 = (float)((int)fVar9 + 1);
            local_24 = fVar9;
            if (-1 < (int)local_30) {
              local_24 = local_30;
            }
            FUN_00589360(*(int *)(param_1 + 0x1d0) + iVar5 * 4,0,
                         (float)(int)local_24 * _DAT_006e95a8 + (float)param_2,0,
                         *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
            iVar5 = iVar5 + 1;
            local_30 = (float)((int)local_30 + -1);
          } while (iVar5 < *(int *)(param_1 + 0x164) + -1);
        }
        puVar4 = (undefined4 *)(param_1 + 8);
        FUN_00589360(*(int *)(param_1 + 0x1d0) + *(int *)(param_1 + 0x164) * 4,0,param_2,0,
                     *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
        local_24 = (float)iVar10;
        if (iVar10 < 0) {
          local_24 = (float)-iVar10;
        }
        uVar14 = *(undefined4 *)(param_1 + 0xc);
        uVar13 = *puVar4;
        uVar12 = 0;
        fVar9 = (float)(int)local_24 * _DAT_006e95a8 + (float)param_2;
        fVar11 = (float10)FUN_00647b30(fVar9 + _DAT_006e936c,_DAT_006e99b0 + fVar9,0,uVar13,uVar14);
        FUN_00589360(*(undefined4 *)(param_1 + 0x1d0),0,(float)fVar11,uVar12,uVar13,uVar14);
        local_24 = (float)((iVar10 - *(int *)(param_1 + 0x164)) + -1);
        if ((int)local_24 < 0) {
          local_24 = (float)((*(int *)(param_1 + 0x164) - iVar10) + 1);
        }
        uVar14 = *(undefined4 *)(param_1 + 0xc);
        uVar13 = *puVar4;
        uVar12 = 0;
        param_2 = (float *)((float)(int)local_24 * _DAT_006e95a8 + (float)param_2);
        fVar11 = (float10)FUN_00647b30((float)param_2 + _DAT_006e936c,(float)param_2 + _DAT_006e99b0
                                       ,0,uVar13,uVar14);
        FUN_00589360(*(int *)(param_1 + 0x1d0) + -4 + *(int *)(param_1 + 0x164) * 4,0,(float)fVar11,
                     uVar12,uVar13,uVar14);
        fVar9 = (float)param_2 + _DAT_006e958c;
        param_2 = (float *)fVar9;
        FUN_00589260(param_1 + 0x1d8,0,fVar9,1,*puVar4,*(undefined4 *)(param_1 + 0xc));
        *(undefined4 *)(param_1 + 0x1dc) = 0xc3fa0000;
        FUN_005893e0((undefined4 *)(param_1 + 0x1dc),0,fVar9,1,*puVar4,
                     *(undefined4 *)(param_1 + 0xc));
      }
    }
  }
  return;
}

