
void __thiscall FUN_0061a440(int param_1,int *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float10 fVar9;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float afStack_a4 [20];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_1c;
  
  iVar4 = *(int *)(param_1 + 4);
  if ((*(int *)(param_1 + 0xb8) != 0) && (iVar5 = (**(code **)(*param_2 + 8))(), iVar5 == 0)) {
    fVar9 = (float10)(**(code **)*param_2)();
    if ((float10)*(float *)(iVar4 + 0x7c) < fVar9) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    if ((*(byte *)(iVar4 + 0x84) & 1) != 0) {
      FUN_0064c8e0();
      FUN_0064c8e0(*(undefined4 *)(param_1 + 0x1c),&fStack_bc,&fStack_b8);
      FUN_0064c8e0(*(undefined4 *)(param_1 + 0x20),&fStack_b0,&fStack_b4);
      afStack_a4[0] =
           (fStack_b4 * fStack_b8 + fStack_b0 * fStack_a8 * fStack_bc) * *(float *)(param_1 + 0xc);
      afStack_a4[1] = fStack_b0 * fStack_ac * *(float *)(param_1 + 0xc);
      afStack_a4[2] =
           (fStack_b0 * fStack_a8 * fStack_b8 - fStack_b4 * fStack_bc) * *(float *)(param_1 + 0xc);
      afStack_a4[4] =
           (fStack_bc * fStack_b4 * fStack_a8 - fStack_b0 * fStack_b8) * *(float *)(param_1 + 0x10);
      afStack_a4[5] = fStack_b4 * fStack_ac * *(float *)(param_1 + 0x10);
      afStack_a4[6] =
           (fStack_b4 * fStack_a8 * fStack_b8 + fStack_b0 * fStack_bc) * *(float *)(param_1 + 0x10);
      afStack_a4[8] = fStack_bc * fStack_ac * *(float *)(param_1 + 0x14);
      afStack_a4[9] = -fStack_a8 * *(float *)(param_1 + 0x14);
      afStack_a4[0xc] = *(float *)(param_1 + 0x24);
      afStack_a4[10] = fStack_b8 * fStack_ac * *(float *)(param_1 + 0x14);
      afStack_a4[0xd] = *(float *)(param_1 + 0x28);
      afStack_a4[0xe] = *(float *)(param_1 + 0x2c);
      afStack_a4[3] = 0.0;
      afStack_a4[7] = 0.0;
      afStack_a4[0xb] = 0.0;
      afStack_a4[0xf] = 1.0;
      FUN_006ba140();
      pfVar6 = (float *)FUN_0064e040();
      if ((afStack_a4 != pfVar6) && (pfVar1 = pfVar6 + 0x10, pfVar6 != pfVar1)) {
        pfVar8 = afStack_a4 + 2;
        iVar5 = (int)pfVar6 - (int)afStack_a4;
        do {
          pfVar8[-2] = *pfVar6;
          pfVar8[-1] = pfVar6[1];
          *pfVar8 = *(float *)(iVar5 + (int)pfVar8);
          pfVar8[1] = pfVar6[3];
          pfVar6 = pfVar6 + 4;
          pfVar8 = pfVar8 + 4;
        } while (pfVar6 != pfVar1);
      }
      pfVar6 = afStack_a4;
      do {
        pfVar6[0x10] = *pfVar6;
        pfVar6[0x11] = pfVar6[1];
        pfVar6[0x12] = pfVar6[2];
        pfVar6[0x13] = pfVar6[3];
        pfVar6 = pfVar6 + 4;
      } while (pfVar6 != afStack_a4 + 0x10);
      fStack_2c = 0.0;
      fStack_30 = 0.0;
      fStack_34 = 0.0;
    }
    *(float *)(param_1 + 0xac) = param_3 + *(float *)(param_1 + 0xac);
    if (*(int *)(param_1 + 0xb8) != 0) {
      while (iVar5 = *(int *)(param_1 + 0x104) * 0x44, fVar2 = *(float *)(iVar5 + 0x10c + param_1),
            iVar5 = iVar5 + 0x10c + param_1,
            fVar2 < *(float *)(param_1 + 0xac) != (NAN(fVar2) || NAN(*(float *)(param_1 + 0xac)))) {
        if (*(int *)(iVar5 + 4) != 0) {
          *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
        }
        *(undefined4 *)(iVar5 + 4) = 1;
        fVar9 = (float10)FUN_00647b30();
        *(float *)(iVar5 + 0x40) = (float)fVar9;
        *(float *)(iVar5 + 8) =
             *(float *)(param_1 + 0xac) -
             *(float *)(*(int *)(param_1 + 0x104) * 0x44 + 0x10c + param_1);
        puVar7 = (undefined4 *)FUN_00619b50();
        *(undefined4 *)(iVar5 + 0xc) = *puVar7;
        *(undefined4 *)(iVar5 + 0x10) = puVar7[1];
        *(undefined4 *)(iVar5 + 0x14) = puVar7[2];
        fVar9 = (float10)FUN_00647b30();
        *(float *)(iVar5 + 0x18) = (float)fVar9;
        fVar9 = (float10)FUN_00647b30(*(undefined4 *)(iVar4 + 0xa0));
        *(float *)(iVar5 + 0x1c) = (float)fVar9;
        fVar9 = (float10)FUN_00647b30(*(undefined4 *)(iVar4 + 0xa4),*(undefined4 *)(iVar4 + 0xb0));
        *(float *)(iVar5 + 0x20) = (float)fVar9;
        if ((*(byte *)(iVar4 + 0x84) & 1) != 0) {
          fVar2 = *(float *)(iVar5 + 0x20);
          fVar3 = *(float *)(iVar5 + 0x18);
          fStack_1c = afStack_a4[0x12] * *(float *)(iVar5 + 0x18) +
                      fStack_4c * *(float *)(iVar5 + 0x1c) + fStack_3c * *(float *)(iVar5 + 0x20) +
                      fStack_2c;
          *(float *)(iVar5 + 0x18) =
               afStack_a4[0x10] * *(float *)(iVar5 + 0x18) +
               fStack_54 * *(float *)(iVar5 + 0x1c) + fStack_44 * *(float *)(iVar5 + 0x20) +
               fStack_34;
          *(float *)(iVar5 + 0x20) = fStack_1c;
          *(float *)(iVar5 + 0x1c) =
               afStack_a4[0x11] * fVar3 + fStack_50 * *(float *)(iVar5 + 0x1c) + fStack_40 * fVar2 +
               fStack_30;
          puVar7 = (undefined4 *)FUN_0041b9f0();
          *(undefined4 *)(iVar5 + 0xc) = *puVar7;
          *(undefined4 *)(iVar5 + 0x10) = puVar7[1];
          *(undefined4 *)(iVar5 + 0x14) = puVar7[2];
        }
        iVar5 = *(int *)(param_1 + 0x104) + 1;
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
        *(int *)(param_1 + 0x104) = iVar5;
        if (*(int *)(iVar4 + 0x88) <= iVar5) {
          *(undefined4 *)(param_1 + 0x104) = 0;
          *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xb0);
          if ((*(byte *)(iVar4 + 0x84) & 8) != 0) {
            *(undefined4 *)(param_1 + 0xb8) = 0;
            return;
          }
        }
        if (*(int *)(param_1 + 0xb8) == 0) {
          return;
        }
      }
    }
  }
  return;
}

