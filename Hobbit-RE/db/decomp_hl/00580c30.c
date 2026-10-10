
/* WARNING: Removing unreachable block (ram,0x00581196) */
/* WARNING: Removing unreachable block (ram,0x00581160) */
/* WARNING: Removing unreachable block (ram,0x0058117a) */
/* WARNING: Removing unreachable block (ram,0x00581180) */
/* WARNING: Removing unreachable block (ram,0x0058118f) */
/* WARNING: Removing unreachable block (ram,0x005811a3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00580c30(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  float fVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  int iVar9;
  float *pfVar10;
  byte *pbVar11;
  undefined4 uVar12;
  void *pvVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  undefined4 *puVar20;
  int iVar21;
  int *unaff_retaddr;
  uint uStack_7c;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  int *piStack_6c;
  float *pfStack_68;
  int iStack_54;
  int iStack_50;
  void *pvStack_4c;
  uint uStack_48;
  int iStack_44;
  undefined1 auStack_40 [4];
  int *local_3c;
  int iStack_38;
  undefined1 *puStack_34;
  uint uStack_30;
  float local_2c;
  float fStack_28;
  int aiStack_1c [2];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc083;
  pvStack_c = ExceptionList;
  pfStack_68 = (float *)s_npc_ri__Render_007405fc;
  piStack_6c = (int *)0x580c60;
  ExceptionList = &pvStack_c;
  local_3c = param_1;
  FUN_00649600();
  pfStack_68 = &local_2c;
  param_1[4] = (int)param_2;
  bVar7 = *(byte *)(param_2 + 0x20);
  iVar9 = *param_2;
  piStack_6c = (int *)0x0;
  local_4 = 0;
  FUN_0065fce0();
  piStack_6c = (int *)0x580c8d;
  pfStack_68 = (float *)FUN_00672260();
  piStack_6c = (int *)0x580c97;
  bVar5 = (**(code **)(iVar9 + 0xcc))();
  if (bVar5 < bVar7) {
    iVar9 = *(int *)param_1[4];
    piStack_6c = aiStack_1c;
    puStack_74 = (undefined4 *)0x580cac;
    FUN_0065fce0();
    piStack_6c = (int *)FUN_00672260();
    cVar6 = (**(code **)(iVar9 + 0xcc))();
  }
  else {
    cVar6 = *(char *)(param_1[4] + 0x80);
  }
  *(char *)((int)param_1 + 9) = cVar6;
  if (((*(byte *)(param_1 + 0x38) & 0x48) == 0) && (cVar6 == -1)) {
    bVar7 = *(byte *)(param_1 + 2) & 0xfe;
  }
  else {
    bVar7 = *(byte *)(param_1 + 2) | 1;
  }
  *(byte *)(param_1 + 2) = bVar7;
  *(byte *)(param_1 + 2) = (bVar7 << 3 ^ bVar7) & 8 ^ bVar7;
  piStack_6c = param_1 + 5;
  iVar9 = FUN_00549470();
  if (iVar9 == 0) {
    piStack_6c = param_1 + 5;
    FUN_00549580();
    piStack_6c = param_2;
    (**(code **)(*param_1 + 8))();
    goto LAB_005813f8;
  }
  bVar4 = false;
  if ((int *)param_1[4] == (int *)0x0) {
LAB_00580da6:
    if ((*(byte *)(param_1 + 0x38) & 4) == 0) goto LAB_00580db3;
  }
  else {
    piStack_6c = (int *)0x580d33;
    pfVar10 = (float *)(**(code **)(*(int *)param_1[4] + 0x28))();
    fStack_28 = pfVar10[2];
    local_2c = pfVar10[1];
    fVar3 = *pfVar10 - (float)param_1[0x3b];
    if (((*(ushort *)(param_1[4] + 0x7a) & 0x3000) != 0) ||
       (_DAT_006f3ee8 <
        SQRT((fStack_28 - (float)param_1[0x3d]) * (fStack_28 - (float)param_1[0x3d]) +
             (local_2c - (float)param_1[0x3c]) * (local_2c - (float)param_1[0x3c]) + fVar3 * fVar3))
       ) {
      param_1[0x3b] = (int)*pfVar10;
      bVar4 = true;
      param_1[0x3c] = (int)local_2c;
      param_1[0x3d] = (int)fStack_28;
    }
    piStack_6c = (int *)0x580da2;
    FUN_004ac5f0();
    if (!bVar4) goto LAB_00580da6;
LAB_00580db3:
    if (((char)param_1[0x38] < '\0') || (uVar17 = 0x1000000, DAT_007405f8 == 0)) {
      uVar17 = 0;
    }
    if (DAT_007405f4 < 1) {
      puStack_34 = (undefined1 *)&piStack_6c;
      piStack_6c = (int *)CONCAT31(CONCAT21(CONCAT11(DAT_007778db,DAT_007778da),DAT_007778d9),
                                   DAT_007778d8);
      FUN_00582310();
    }
    else {
      piStack_6c = (int *)0x580de5;
      piStack_6c = (int *)FUN_004aac30();
      pbVar11 = (byte *)FUN_00583210();
      iVar15 = param_1[4];
      uStack_48 = (uint)*(byte *)(iVar15 + 0x85) + (uint)pbVar11[3];
      if (0xff < uStack_48) {
        uStack_48 = 0xff;
      }
      pvStack_4c = (void *)((uint)*(byte *)(iVar15 + 0x82) + (uint)*pbVar11);
      if ((void *)0xff < pvStack_4c) {
        pvStack_4c = (void *)0xff;
      }
      uVar16 = (uint)pbVar11[1] + (uint)*(byte *)(iVar15 + 0x83);
      if (uVar16 < 0x100) {
        uVar14 = (undefined1)uVar16;
      }
      else {
        uVar14 = 0xff;
      }
      uVar16 = (uint)*(byte *)(iVar15 + 0x84) + (uint)pbVar11[2];
      if (uVar16 < 0x100) {
        uVar8 = (undefined1)uVar16;
      }
      else {
        uVar8 = 0xff;
      }
      iStack_54 = CONCAT31(CONCAT12((undefined1)uStack_48,CONCAT11(uVar8,uVar14)),pvStack_4c._0_1_);
      piStack_6c = (int *)0x580eed;
      piStack_6c = (int *)FUN_004aac10();
      uStack_7c = uVar17 >> 0x18;
      puStack_74 = (undefined4 *)param_1[0x37];
      puStack_78 = (undefined4 *)0x0;
      puStack_34 = (undefined1 *)&uStack_7c;
      FUN_00425250(&iStack_54);
      piVar19 = param_1 + 6;
      uVar12 = FUN_00581d60(piVar19);
      FUN_00582ea0(uVar12,piVar19);
    }
    param_1[0x38] = param_1[0x38] | 4;
  }
  local_3c = (int *)(int)*(char *)(iVar9 + 0x28);
  piStack_6c = aiStack_1c;
  puStack_74 = (undefined4 *)0x580f74;
  FUN_0065fce0();
  piStack_6c = (int *)FUN_00672260();
  puStack_74 = (undefined4 *)(**(code **)(*unaff_retaddr + 0x28))();
  puStack_78 = (undefined4 *)auStack_40;
  uStack_7c = 0x580f95;
  iStack_38 = FUN_005a32d0();
  puStack_74 = (undefined4 *)0x580fa4;
  FUN_00549580();
  if (param_1[7] + param_1[6] < 1) {
    param_1[1] = 1;
  }
  else {
    param_1[1] = 3;
  }
  if ((undefined1 *)param_1[0x39] != (undefined1 *)0x0) {
    puStack_74 = (undefined4 *)0x0;
    uStack_7c = 0x580fd7;
    puStack_78 = (undefined4 *)param_1[0x39];
    FUN_00648600();
  }
  if ((param_1[0x50] == 0) || (param_1[0x51] - param_1[0x50] >> 2 == 0)) {
    iVar15 = param_1[0x50];
    uVar17 = *(uint *)(iVar9 + 0x74);
    local_4 = 0;
    if (iVar15 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = param_1[0x51] - iVar15 >> 2;
    }
    if (uVar16 < uVar17) {
      if (iVar15 == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = param_1[0x51] - iVar15 >> 2;
      }
      puVar20 = (undefined4 *)param_1[0x51];
      uVar17 = uVar17 - iVar15;
      if ((uint)(param_1[0x52] - (int)puVar20 >> 2) < uVar17) {
        uVar16 = FUN_004ace10();
        pvVar13 = (void *)uVar17;
        if (uVar17 < uVar16) {
          pvVar13 = (void *)FUN_004ace10();
        }
        pvStack_4c = pvVar13;
        iStack_50 = FUN_004ace10();
        iStack_50 = iStack_50 + (int)pvStack_4c;
        iVar15 = iStack_50;
        if (iStack_50 < 0) {
          iVar15 = 0;
        }
        puStack_74 = (undefined4 *)0x581083;
        pvStack_4c = operator_new(iVar15 * 4);
        puStack_78 = (undefined4 *)param_1[0x50];
        uStack_7c = 0x581097;
        puStack_74 = puVar20;
        puStack_78 = (undefined4 *)FUN_006692d0();
        uStack_7c = 0x5810a9;
        puStack_74 = (undefined4 *)uVar17;
        uStack_48 = (uint)puStack_78;
        FUN_00669300();
        puStack_74 = (undefined4 *)param_1[0x51];
        uStack_7c = 0x5810bd;
        puStack_78 = puVar20;
        FUN_006692d0();
        puStack_74 = (undefined4 *)param_1[0x50];
        puStack_78 = (undefined4 *)0x5810cc;
        FUN_005b8840();
        puStack_74 = (undefined4 *)0x5810d5;
        FUN_006bf840();
        pvVar13 = pvStack_4c;
        param_1[0x52] = (int)((int)pvStack_4c + iStack_50 * 4);
        iVar15 = FUN_004ace10();
        param_1[0x51] = (int)((int)pvVar13 + (iVar15 + uVar17) * 4);
        param_1[0x50] = (int)pvVar13;
      }
      else if (uVar17 != 0) {
        uStack_48 = uVar17 * 4;
        uStack_7c = 0x581120;
        puStack_78 = puVar20;
        puStack_74 = puVar20;
        FUN_006692d0();
        puStack_78 = (undefined4 *)param_1[0x51];
        puStack_74 = (undefined4 *)(uVar17 - ((int)puStack_78 - (int)puVar20 >> 2));
        uStack_7c = 0x58113a;
        FUN_00669300();
        puVar1 = (undefined4 *)param_1[0x51];
        for (; puVar20 != puVar1; puVar20 = puVar20 + 1) {
          *puVar20 = local_4;
        }
        param_1[0x51] = param_1[0x51] + uStack_48;
      }
    }
    else {
      uVar16 = FUN_004ace10();
      if (uVar17 < uVar16) {
        puStack_74 = (undefined4 *)(param_1[0x50] + uVar17 * 4);
        puStack_78 = (undefined4 *)0x5811c5;
        FUN_004ace30();
      }
    }
    uStack_48 = 0;
    if (0 < *(int *)(iVar9 + 100)) {
      iStack_50 = 0;
      do {
        iStack_54 = *(int *)(iVar9 + 0x68) + iStack_50;
        iVar15 = 0;
        if (0 < *(int *)(*(int *)(iVar9 + 0x68) + 8 + iStack_50)) {
          do {
            iVar18 = *(int *)(iStack_54 + 0xc) + iVar15;
            piVar19 = (int *)(iVar18 * 0x34 + *(int *)(iVar9 + 0x78));
            puVar20 = (undefined4 *)(iVar18 * 0x10 + *(int *)(iVar9 + 0xa4));
            local_3c = (int *)(*(int *)(iVar18 * 0x10 + 4 + *(int *)(iVar9 + 0xa4)) * 8 + 0x20);
            pvStack_4c = (void *)0x5;
            if (*piVar19 == 3) {
              pvStack_4c = (void *)0x4;
            }
            puStack_74 = (undefined4 *)0x581250;
            puStack_34 = (undefined1 *)operator_new(0x3c);
            pvStack_c._0_1_ = 1;
            if (puStack_34 == (undefined1 *)0x0) {
              uVar12 = 0;
            }
            else {
              puStack_74 = (undefined4 *)(*(int *)(iStack_54 + 0x1c) + piVar19[2] * 2);
              puStack_78 = (undefined4 *)piVar19[5];
              uStack_7c = *(uint *)(&DAT_007405e0 + puVar20[1] * 4);
              uVar12 = FUN_00664f50(*puVar20,local_3c);
            }
            *(undefined4 *)(*(int *)(iStack_44 + 0x140) + iVar18 * 4) = uVar12;
            iVar15 = iVar15 + 1;
            pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
          } while (iVar15 < *(int *)(iStack_54 + 8));
        }
        uStack_48 = uStack_48 + 1;
        iStack_50 = iStack_50 + 0x2c;
      } while ((int)uStack_48 < *(int *)(iVar9 + 100));
    }
  }
  puStack_34 = *(undefined1 **)(iVar9 + 8 + iStack_38 * 8);
  uStack_30 = *(uint *)(iVar9 + 0xc + iStack_38 * 8);
  iStack_54 = 0;
  if (0 < *(int *)(iVar9 + 0x5c)) {
    pvStack_4c = (void *)0x0;
    iVar15 = 0;
    do {
      uVar17 = 1 << ((byte)iStack_54 & 0x1f);
      if ((uVar17 & (uint)puStack_34) != 0 || ((int)uVar17 >> 0x1f & uStack_30) != 0) {
        uStack_48 = *(int *)(iVar9 + 0x60) + iVar15;
        iStack_50 = 0;
        if (0 < *(int *)(*(int *)(iVar9 + 0x60) + 0x10 + iVar15)) {
          do {
            iVar18 = (*(int *)(uStack_48 + 0x14) + iStack_50) * 0x2c;
            piVar19 = (int *)(iVar18 + *(int *)(iVar9 + 0x68));
            iVar21 = 0;
            if (0 < *(int *)(iVar18 + 8 + *(int *)(iVar9 + 0x68))) {
              do {
                puVar2 = *(undefined1 **)(*(int *)(iVar9 + 0x84) + *piVar19 * 4);
                puStack_74 = (undefined4 *)0x581386;
                FUN_005537c0();
                puStack_74 = (undefined4 *)iStack_44;
                uStack_7c = 0x58139c;
                puStack_78 = (undefined4 *)puVar2;
                FUN_005c2da0();
                iVar21 = iVar21 + 1;
              } while (iVar21 < piVar19[2]);
            }
            puStack_74 = (undefined4 *)0x5813ba;
            FUN_00583ff0();
            iStack_50 = iStack_50 + 1;
          } while (iStack_50 < *(int *)(uStack_48 + 0x10));
        }
      }
      iStack_54 = iStack_54 + 1;
      iVar15 = iVar15 + 0x18;
      pvStack_4c = (void *)((int)pvStack_4c + 0x2c);
    } while (iStack_54 < *(int *)(iVar9 + 0x5c));
  }
LAB_005813f8:
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_14;
  return;
}

