
void __fastcall FUN_00447610(int param_1)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float afStack_dc [7];
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  undefined1 auStack_84 [4];
  undefined1 local_80 [60];
  undefined1 auStack_44 [68];
  
  piVar3 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x4d50),*(undefined4 *)(param_1 + 0x4d54));
  if (piVar3 != (int *)0x0) {
    if (((char)piVar3[0x1f] == '\x0e') && ((piVar3[4] & 0x200000U) != 0)) {
      (**(code **)(*piVar3 + 0x34))(local_80);
    }
    else {
      if (((char)piVar3[0x1f] != '\x05') || ((piVar3[4] & 0x200000U) == 0)) goto LAB_00447853;
      iVar7 = *piVar3;
      uVar4 = (**(code **)(iVar7 + 0x11c))();
      (**(code **)(iVar7 + 0x114))(local_80,uVar4);
    }
    if (*(int *)(param_1 + 0x4d58) != 0) {
      afStack_dc[0] = *(float *)(param_1 + 0x4d5c);
      afStack_dc[2] = *(float *)(param_1 + 0x4d64);
      afStack_dc[1] = *(float *)(param_1 + 0x4d60);
      afStack_dc[3] = *(float *)(param_1 + 0x4d68);
      afStack_dc[5] = *(float *)(param_1 + 0x4d70);
      afStack_dc[4] = *(float *)(param_1 + 0x4d6c);
      afStack_dc[6] = *(float *)(param_1 + 0x4d74);
      fStack_bc = *(float *)(param_1 + 0x4d7c);
      uStack_c0 = *(undefined4 *)(param_1 + 0x4d78);
      fStack_b8 = *(float *)(param_1 + 0x4d80);
      uStack_b0 = *(undefined4 *)(param_1 + 0x4d88);
      fStack_b4 = *(float *)(param_1 + 0x4d84);
      fStack_ac = *(float *)(param_1 + 0x4d8c);
      fStack_a4 = *(float *)(param_1 + 0x4d94);
      fStack_a8 = *(float *)(param_1 + 0x4d90);
      uStack_a0 = *(undefined4 *)(param_1 + 0x4d98);
      FUN_0064d6d0();
      pfVar5 = (float *)FUN_0064e040(auStack_44,auStack_84,afStack_dc);
      if ((afStack_dc != pfVar5) && (pfVar1 = pfVar5 + 0x10, pfVar5 != pfVar1)) {
        pfVar6 = afStack_dc + 2;
        iVar7 = (int)pfVar5 - (int)afStack_dc;
        do {
          pfVar6[-2] = *pfVar5;
          pfVar6[-1] = pfVar5[1];
          *pfVar6 = *(float *)(iVar7 + (int)pfVar6);
          pfVar6[1] = pfVar5[3];
          pfVar5 = pfVar5 + 4;
          pfVar6 = pfVar6 + 4;
        } while (pfVar5 != pfVar1);
      }
      fStack_94 = afStack_dc[6] * *(float *)(param_1 + 0x18) +
                  fStack_b4 * *(float *)(param_1 + 0x1c) +
                  afStack_dc[2] * *(float *)(param_1 + 0x14) + fStack_a4;
      fStack_90 = (afStack_dc[4] * *(float *)(param_1 + 0x18) +
                   fStack_bc * *(float *)(param_1 + 0x1c) +
                   afStack_dc[0] * *(float *)(param_1 + 0x14) + fStack_ac) -
                  *(float *)(param_1 + 0x14);
      fVar2 = DAT_006e92e8 / *(float *)(param_1 + 0x920);
      FUN_00401f00(fStack_90 * fVar2,
                   ((afStack_dc[5] * *(float *)(param_1 + 0x18) +
                     fStack_b8 * *(float *)(param_1 + 0x1c) +
                     afStack_dc[1] * *(float *)(param_1 + 0x14) + fStack_a8) -
                   *(float *)(param_1 + 0x18)) * fVar2,
                   (fStack_94 - *(float *)(param_1 + 0x1c)) * fVar2);
      *(undefined4 *)(param_1 + 0x7a0) = uStack_9c;
      *(float *)(param_1 + 0x7a8) = fStack_94;
      *(undefined4 *)(param_1 + 0x7a4) = uStack_98;
      *(undefined4 *)(param_1 + 0x7a4) = 0;
      FUN_00406570(auStack_84);
      return;
    }
  }
LAB_00447853:
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  return;
}

