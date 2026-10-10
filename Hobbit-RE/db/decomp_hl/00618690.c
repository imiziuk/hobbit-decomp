
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00618690(float param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined4 unaff_ESI;
  float fVar10;
  float *pfVar11;
  float10 fVar12;
  float10 fVar13;
  float local_74;
  int local_68;
  float local_5c;
  float local_58;
  undefined4 uStack_54;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_1c;
  float fStack_10;
  float fStack_4;
  
  iVar5 = FUN_006193c0();
  if (((iVar5 == 0) && ((*(byte *)((int)param_1 + 0xb4) & 2) != 0)) &&
     (iVar5 = FUN_0061a8a0(), iVar5 == 0)) {
    piVar6 = (int *)FUN_0041bcc0();
    (**(code **)(*piVar6 + 0x128))(0xfffe7960);
  }
  *(float *)((int)param_1 + 0xa8) = *(float *)((int)param_1 + 0xa8) - param_2;
  if (*(short *)((int)param_1 + 0x42) == 8) {
    puVar7 = (undefined4 *)((int)param_1 + 0x1a0);
    local_68 = 5;
    fVar10 = param_1;
    local_74 = param_1;
    do {
      iVar5 = FUN_0061a8a0();
      if (iVar5 == 0) {
        piVar6 = (int *)FUN_004021c0(puVar7[4],puVar7[5]);
        piVar8 = (int *)FUN_004021c0(puVar7[0xe],puVar7[0xf]);
        piVar9 = (int *)FUN_004021c0(puVar7[0x18],puVar7[0x19]);
        fVar3 = (float)puVar7[-0x16] - *(float *)((int)fVar10 + 0xb8);
        pfVar11 = (float *)((int)fVar10 + 0xb8);
        local_5c = (float)puVar7[-0x15] - *(float *)((int)fVar10 + 0xbc);
        local_58 = (float)puVar7[-0x14] - *(float *)((int)fVar10 + 0xc0);
        fVar4 = SQRT(local_5c * local_5c + fVar3 * fVar3 + local_58 * local_58) / _DAT_006f5aec;
        if (piVar6 == (int *)0x0) {
          puVar7[4] = 0;
          puVar7[5] = 0;
        }
        else {
          if (DAT_006e92e4 < *(float *)((int)local_74 + 0xa8)) {
            puVar7[-0x13] = 1;
          }
          if (((puVar7[-5] != 0) && (puVar7[-8] == 0)) && (_DAT_006f5ad4 < (float)puVar7[-9])) {
            puVar7[-8] = 1;
            FUN_00613a90(1);
            FUN_00613a90(1);
          }
          (**(code **)(*piVar6 + 0x14))(pfVar11,0);
          puVar7[-2] = *pfVar11;
          puVar7[-1] = *(undefined4 *)((int)fVar10 + 0xbc);
          *puVar7 = *(undefined4 *)((int)fVar10 + 0xc0);
          puVar7[1] = local_68;
          puVar7[2] = piVar9;
          puVar7[3] = fVar3;
          fVar12 = (float10)FUN_0064ca10(piVar9,SQRT(fVar4 + local_74));
          local_74 = (float)-fVar12;
          fVar12 = (float10)FUN_0064ca10(local_68,fVar3);
          local_58 = (float)fVar12;
          uStack_54 = 0;
          local_5c = local_74;
          (**(code **)(*piVar6 + 0x1c))(&local_5c);
          (**(code **)(*piVar6 + 0xfc))(unaff_ESI,unaff_ESI,unaff_ESI);
        }
        iVar5 = FUN_006193c0();
        param_1 = local_74;
        if (iVar5 != 0) {
          if (puVar7[-5] == 0) {
            puVar7[-9] = 0;
            puVar7[-8] = 0;
            puVar7[-5] = 1;
          }
          fStack_44 = local_5c * _DAT_006f5ae4;
          fStack_40 = local_58 * _DAT_006f5ae4;
          fVar2 = *(float *)((int)fVar10 + 0xbc);
          fStack_1c = fStack_40 + *(float *)((int)fVar10 + 0xc0);
          pfVar1 = (float *)(puVar7 + -0x12);
          *pfVar1 = _DAT_006f5ae4 * fVar3 + *pfVar11;
          puVar7[-0x10] = fStack_1c;
          puVar7[-0x11] = fStack_44 + fVar2;
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 0x14))(pfVar1,0);
          }
          if (piVar9 != (int *)0x0) {
            (**(code **)(*piVar9 + 0x14))(pfVar1,0);
          }
          puVar7[8] = *pfVar1;
          puVar7[9] = puVar7[-0x11];
          puVar7[10] = puVar7[-0x10];
          puVar7[0x12] = *pfVar1;
          puVar7[0x13] = puVar7[-0x11];
          puVar7[0x14] = puVar7[-0x10];
          fStack_10 = (float)puVar7[-0xd] - (float)puVar7[-0x10];
          puVar7[0xb] = (float)puVar7[-0xf] - *pfVar1;
          puVar7[0xd] = fStack_10;
          puVar7[0xc] = (float)puVar7[-0xe] - (float)puVar7[-0x11];
          fStack_4 = (float)puVar7[-10] - (float)puVar7[-0x10];
          puVar7[0x15] = (float)puVar7[-0xc] - *pfVar1;
          puVar7[0x17] = fStack_4;
          puVar7[0x16] = (float)puVar7[-0xb] - (float)puVar7[-0x11];
          if (piVar8 != (int *)0x0) {
            fVar12 = (float10)FUN_0064ca10(puVar7[0xc],
                                           SQRT((float)puVar7[0xd] * (float)puVar7[0xd] +
                                                (float)puVar7[0xb] * (float)puVar7[0xb]));
            fVar13 = (float10)FUN_0064ca10(puVar7[0xb],puVar7[0xd]);
            fStack_38 = (float)fVar13;
            uStack_34 = 0;
            fStack_3c = (float)-fVar12;
            (**(code **)(*piVar8 + 0x1c))(&fStack_3c);
          }
          if (piVar9 != (int *)0x0) {
            fVar12 = (float10)FUN_0064ca10(puVar7[0x16],
                                           SQRT((float)puVar7[0x17] * (float)puVar7[0x17] +
                                                (float)puVar7[0x15] * (float)puVar7[0x15]));
            fVar13 = (float10)FUN_0064ca10(puVar7[0x15],puVar7[0x17]);
            fStack_2c = (float)fVar13;
            uStack_28 = 0;
            fStack_30 = (float)-fVar12;
            (**(code **)(*piVar9 + 0x1c))(&fStack_30);
          }
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 0xfc))(fVar4,fVar4,_DAT_006f5ae8);
          }
          if (piVar9 != (int *)0x0) {
            (**(code **)(*piVar9 + 0xfc))(fVar4,fVar4,_DAT_006f5ae8);
          }
        }
      }
      else {
        param_1 = fVar10;
        if (puVar7[-0x13] != 0) {
          FUN_00617960(0);
          if (puVar7[-4] != -1) {
            FUN_00659c80(puVar7[-4],0x3f800000);
            puVar7[-4] = 0xffffffff;
          }
        }
      }
      puVar7 = puVar7 + 0x32;
      local_68 = local_68 + -1;
      fVar10 = param_1;
    } while (local_68 != 0);
  }
  else {
    puVar7 = (undefined4 *)((int)param_1 + 0x154);
    iVar5 = 5;
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 0x32;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = 5;
  pfVar11 = (float *)((int)param_1 + 0x17c);
  do {
    iVar5 = iVar5 + -1;
    *pfVar11 = param_2 + *pfVar11;
    pfVar11 = pfVar11 + 0x32;
  } while (iVar5 != 0);
  return;
}

