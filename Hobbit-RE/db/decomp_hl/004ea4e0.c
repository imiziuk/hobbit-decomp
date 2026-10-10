
void __fastcall FUN_004ea4e0(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40 [16];
  
  local_40[0xc] = 0.0;
  local_40[8] = 0.0;
  local_40[4] = 0.0;
  local_40[0xd] = 0.0;
  local_40[9] = 0.0;
  local_40[1] = 0.0;
  local_40[0xe] = 0.0;
  local_40[6] = 0.0;
  local_40[2] = 0.0;
  local_40[0xb] = 0.0;
  local_40[7] = 0.0;
  local_40[3] = 0.0;
  local_40[0] = 1.0;
  local_40[5] = 1.0;
  local_40[10] = 1.0;
  local_40[0xf] = 1.0;
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x68),&local_5c,&local_60);
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x6c),&local_70,&local_6c);
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x70),&local_64,&local_68);
  local_40[0] = local_68 * local_6c + local_64 * local_5c * local_70;
  local_40[1] = local_64 * local_60;
  local_40[2] = local_64 * local_5c * local_6c - local_68 * local_70;
  local_40[4] = local_70 * local_68 * local_5c - local_64 * local_6c;
  local_40[5] = local_68 * local_60;
  local_40[6] = local_68 * local_5c * local_6c + local_64 * local_70;
  local_40[0xc] = (float)*(undefined4 *)(param_1 + 0x14);
  local_40[0xe] = (float)*(undefined4 *)(param_1 + 0x1c);
  pfVar9 = (float *)(param_1 + 0x1ec);
  local_40[8] = local_70 * local_60;
  local_40[0xd] = (float)*(undefined4 *)(param_1 + 0x18);
  local_40[3] = 0.0;
  local_40[9] = -local_5c;
  local_40[7] = 0.0;
  local_40[0xb] = 0.0;
  local_40[0xf] = 1.0;
  local_40[10] = local_6c * local_60;
  if (pfVar9 != local_40) {
    pfVar13 = local_40;
    puVar10 = (undefined4 *)(param_1 + 500);
    do {
      puVar10[-2] = *pfVar13;
      puVar10[-1] = pfVar13[1];
      *puVar10 = *(undefined4 *)(((int)local_40 - (int)pfVar9) + (int)puVar10);
      puVar10[1] = *(undefined4 *)((int)local_40 + (4 - (int)pfVar9) + (int)puVar10);
      pfVar13 = pfVar13 + 4;
      puVar10 = puVar10 + 4;
    } while (pfVar13 != (float *)&stack0x00000000);
  }
  pfVar9 = (float *)(param_1 + 0x22c);
  if (pfVar9 != local_40) {
    pfVar13 = local_40;
    puVar10 = (undefined4 *)(param_1 + 0x234);
    do {
      puVar10[-2] = *pfVar13;
      puVar10[-1] = pfVar13[1];
      *puVar10 = *(undefined4 *)(((int)local_40 - (int)pfVar9) + (int)puVar10);
      puVar10[1] = *(undefined4 *)((int)local_40 + (4 - (int)pfVar9) + (int)puVar10);
      pfVar13 = pfVar13 + 4;
      puVar10 = puVar10 + 4;
    } while (pfVar13 != (float *)&stack0x00000000);
  }
  FUN_0064d480();
  local_58 = 0;
  local_54 = 0;
  local_50 = 0x42c80000;
  FUN_0041b9f0(&local_4c,&local_58);
  local_58 = local_4c;
  local_54 = local_48;
  iVar6 = (int)*(short *)(param_1 + 0x1ce) * (int)*(short *)(param_1 + 0x1cc);
  local_50 = local_44;
  *(int *)(param_1 + 0x328) = iVar6;
  pvVar7 = operator_new(iVar6 * 0xc);
  *(void **)(param_1 + 0x1d4) = pvVar7;
  pvVar7 = operator_new(*(int *)(param_1 + 0x328) << 3);
  *(void **)(param_1 + 0x1d8) = pvVar7;
  pvVar7 = operator_new(*(int *)(param_1 + 0x328) * 8);
  *(void **)(param_1 + 0x1dc) = pvVar7;
  pvVar7 = operator_new(*(int *)(param_1 + 0x328) * 4);
  local_6c = -*(float *)(param_1 + 0xac);
  iVar6 = 0;
  *(void **)(param_1 + 800) = pvVar7;
  local_64 = *(float *)(param_1 + 0x17c);
  local_68 = -*(float *)(param_1 + 0xb4);
  local_70 = -*(float *)(param_1 + 0xb0);
  local_5c = 0.0;
  if (0 < *(short *)(param_1 + 0x1ce)) {
    iVar8 = (int)*(short *)(param_1 + 0x1cc);
    do {
      local_60 = 0.0;
      if (0 < iVar8) {
        iVar14 = iVar6 * 0xc;
        fVar15 = DAT_006e92e8 / local_64;
        do {
          fVar1 = *(float *)(param_1 + 0x168);
          pfVar9 = (float *)(*(int *)(param_1 + 0x1d4) + iVar14);
          iVar14 = iVar14 + 0xc;
          fVar2 = *(float *)(param_1 + 0x164);
          pfVar9[1] = local_70;
          *pfVar9 = (float)(int)local_60 * fVar2 + local_6c;
          pfVar9[2] = (float)(int)local_5c * fVar1 + local_68;
          pfVar9 = (float *)(*(int *)(param_1 + 0x1d8) + iVar6 * 8);
          fVar1 = *(float *)(param_1 + 0x168);
          *pfVar9 = fVar15 * (float)(int)local_60 * *(float *)(param_1 + 0x164);
          pfVar9[1] = fVar15 * (float)(int)local_5c * fVar1;
          puVar10 = (undefined4 *)(*(int *)(param_1 + 0x1dc) + iVar6 * 8);
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar11 = (undefined1 *)(*(int *)(param_1 + 800) + iVar6 * 4);
          puVar11[3] = *(undefined1 *)(param_1 + 0x177);
          puVar11[2] = *(undefined1 *)(param_1 + 0x176);
          puVar11[1] = *(undefined1 *)(param_1 + 0x175);
          *puVar11 = *(undefined1 *)(param_1 + 0x174);
          *(undefined1 *)(*(int *)(param_1 + 800) + 3 + iVar6 * 4) =
               *(undefined1 *)(param_1 + 0x1d1);
          iVar8 = (int)*(short *)(param_1 + 0x1cc);
          iVar6 = iVar6 + 1;
          local_60 = (float)((int)local_60 + 1);
        } while ((int)local_60 < iVar8);
      }
      local_5c = (float)((int)local_5c + 1);
    } while ((int)local_5c < (int)*(short *)(param_1 + 0x1ce));
  }
  puVar10 = (undefined4 *)(param_1 + 0x334);
  for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)(param_1 + 0x334) = 1;
  *(undefined4 *)(param_1 + 0x338) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x33c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x340) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x344) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x348) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x350) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x354) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x374) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x378) = 0xbf800000;
  puVar10 = (undefined4 *)(param_1 + 0x39c);
  for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  sVar3 = *(short *)(param_1 + 0x1ce);
  sVar4 = *(short *)(param_1 + 0x1cc);
  *(undefined4 *)(param_1 + 0x39c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3a0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3a8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3bc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x3c0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x3c4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x3dc) = 0x41a00000;
  local_60 = (float)(int)sVar4;
  fVar15 = (float)(int)sVar3;
  if (sVar3 < sVar4) {
    local_60 = (float)(int)sVar3;
    fVar15 = (float)(int)sVar4;
  }
  local_5c = (float)(uint)(sVar3 >= sVar4);
  *(int *)(param_1 + 0x330) = (int)fVar15 * 2;
  *(int *)(param_1 + 0x32c) = (int)local_60 + -1;
  puVar12 = (undefined2 *)operator_new((int)fVar15 * 2 * ((int)local_60 + -1) * 2);
  *(undefined2 **)(param_1 + 0x324) = puVar12;
  local_64 = 0.0;
  if (0 < *(int *)(param_1 + 0x32c)) {
    do {
      bVar5 = true;
      if (local_5c == 0.0) {
        iVar6 = (int)fVar15 * (int)local_64;
      }
      else {
        iVar6 = (int)local_64 + 1;
      }
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 0x330)) {
        do {
          *puVar12 = (short)iVar6;
          puVar12 = puVar12 + 1;
          if (local_5c == 0.0) {
            if (bVar5) {
              iVar6 = iVar6 + (int)fVar15;
            }
            else {
              iVar6 = iVar6 + (1 - (int)fVar15);
            }
          }
          else if (bVar5) {
            iVar6 = iVar6 + 0xffff;
          }
          else {
            iVar6 = iVar6 + 1 + (int)local_60;
          }
          iVar8 = iVar8 + 1;
          bVar5 = !bVar5;
        } while (iVar8 < *(int *)(param_1 + 0x330));
      }
      local_64 = (float)((int)local_64 + 1);
    } while ((int)local_64 < *(int *)(param_1 + 0x32c));
  }
  if ((*(byte *)(param_1 + 0x1d2) & 1) != 0) {
    pvVar7 = operator_new((int)*(short *)(param_1 + 0x1ce) * (int)*(short *)(param_1 + 0x1cc) * 4);
    *(void **)(param_1 + 0x270) = pvVar7;
    pvVar7 = operator_new((int)*(short *)(param_1 + 0x1ce) * (int)*(short *)(param_1 + 0x1cc) * 4);
    *(void **)(param_1 + 0x274) = pvVar7;
    FUN_00648600(*(undefined4 *)(param_1 + 0x270),0,
                 (int)*(short *)(param_1 + 0x1ce) * (int)*(short *)(param_1 + 0x1cc) * 4);
    FUN_00648600(*(undefined4 *)(param_1 + 0x274),0,
                 (int)*(short *)(param_1 + 0x1ce) * (int)*(short *)(param_1 + 0x1cc) * 4);
  }
  FUN_004e8a30();
  *(byte *)(param_1 + 0x1d2) = *(byte *)(param_1 + 0x1d2) | 0x20;
  FUN_004e8890();
  return;
}

