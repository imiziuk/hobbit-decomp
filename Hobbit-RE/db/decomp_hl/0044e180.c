
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044e180(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int local_24;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x5e94) == 0) {
    FUN_0044e0f0();
  }
  pfVar8 = (float *)(param_1 + 0x59c4);
  iVar7 = 0;
  do {
    if (*pfVar8 < DAT_006e92e4 != (*pfVar8 == DAT_006e92e4)) {
      if (iVar7 < 0x10) {
        piVar2 = (int *)(iVar7 * 0x50 + 0x5990 + param_1);
        iVar7 = FUN_00647b10(0,0x16);
        *piVar2 = *(int *)(&DAT_00724ab8 + iVar7 * 4);
        FUN_005a2b70();
        FUN_005a2b00(8,7);
        fVar9 = (float10)FUN_00647b30(0,0x3f800000);
        local_24 = 1;
        if (fVar9 <= (float10)_DAT_006e936c) {
          local_24 = -1;
        }
        fVar10 = (float10)FUN_00647b30(DAT_00724b14,DAT_00724b18);
        fVar9 = (float10)local_24;
        fVar11 = (float10)FUN_00647b30(0,0x3f800000);
        local_24 = 1;
        if (fVar11 <= (float10)_DAT_006e936c) {
          local_24 = -1;
        }
        fVar11 = (float10)FUN_00647b30(DAT_00724b14 * _DAT_006e936c,DAT_00724b18 * _DAT_006e936c);
        fVar3 = (float)(fVar11 * (float10)local_24);
        fVar11 = (float10)FUN_00647b30(0,0x3f800000);
        local_24 = 1;
        if (fVar11 <= (float10)_DAT_006e936c) {
          local_24 = -1;
        }
        fVar11 = (float10)FUN_00647b30(DAT_00724b14,DAT_00724b18);
        if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
          fVar3 = -fVar3;
        }
        piVar2[0x12] = (int)fVar3;
        piVar2[0x13] = (int)(float)(fVar11 * (float10)local_24);
        piVar2[0x11] = (int)(float)(fVar10 * fVar9);
        FUN_005a31e0(0);
        piVar2[0xd] = param_2;
        piVar2[0xe] = param_2;
        fVar9 = (float10)FUN_00647b30(0x40000000,0x40600000);
        piVar2[0x10] = (int)(float)fVar9;
        fVar3 = *param_3;
        fVar5 = param_3[1];
        local_10 = param_3[2];
        iVar7 = *piVar2;
        if (*(int *)(param_1 + 0x590) != 0) {
          FUN_005423d0();
        }
        pfVar8 = (float *)(*(int *)(param_1 + 0x594) + iVar7 * 0xc);
        local_c = *pfVar8;
        local_8 = pfVar8[1];
        local_4 = pfVar8[2];
        fVar9 = (float10)FUN_00647b30(DAT_00724b1c,DAT_00724b20);
        fVar4 = (float)fVar9;
        fVar6 = DAT_006e92e8 / SQRT(fVar3 * fVar3 + fVar5 * fVar5 + local_10 * local_10);
        iVar7 = FUN_0064cf30(fVar6);
        if (iVar7 == 0) {
          local_10 = 0.0;
          fVar3 = DAT_006e92e4;
          fVar5 = DAT_006e92e4;
        }
        else {
          local_10 = local_10 * fVar6;
          fVar3 = fVar6 * fVar3;
          fVar5 = fVar5 * fVar6;
        }
        iVar7 = 0;
        do {
          FUN_005a2f50(iVar7,&local_c,(iVar7 != 0) - 1U & 2);
          local_c = local_c + fVar3 * fVar4;
          iVar7 = iVar7 + 1;
          local_8 = local_8 + fVar5 * fVar4;
          local_4 = local_4 + local_10 * fVar4;
        } while (iVar7 < 8);
        iVar7 = 0;
        do {
          iVar1 = iVar7 + 1;
          FUN_005a2fb0(iVar7,iVar7,iVar1,fVar4,fVar4,1);
          iVar7 = iVar1;
        } while (iVar1 < 7);
      }
      return;
    }
    iVar7 = iVar7 + 1;
    pfVar8 = pfVar8 + 0x14;
  } while (iVar7 < 0x10);
  return;
}

