
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f2e00(int param_1)

{
  float fVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  float10 fVar9;
  float10 extraout_ST0;
  float10 fVar10;
  
  fVar9 = (float10)FUN_00557bb0();
  fVar1 = (float)(fVar9 * (float10)_DAT_0072f324);
  if (DAT_0072f328 == 0) {
    iVar8 = __ftol();
    fVar9 = (float10)fVar1 - (float10)iVar8 * (float10)_DAT_0072f32c;
    if (fVar9 < extraout_ST0 == (NAN(fVar9) || NAN(extraout_ST0))) {
      fVar10 = extraout_ST0 + extraout_ST0;
      if (fVar9 < fVar10 == (NAN(fVar9) || NAN(fVar10))) {
        FUN_0064c8d0((float)(((fVar9 - fVar10) / extraout_ST0) * (float10)_DAT_006e9598));
      }
      else {
        FUN_0064c8d0((float)(((fVar9 - extraout_ST0) / extraout_ST0) * (float10)_DAT_006e9598));
      }
    }
    else {
      FUN_0064c8d0((float)((fVar9 / extraout_ST0) * (float10)_DAT_006e9598));
    }
  }
  else {
    FUN_0064c800(fVar1);
    FUN_0064c800(fVar1 + _DAT_006e99e0);
    FUN_0064c800(fVar1 + _DAT_006efa4c);
  }
  cVar2 = __ftol();
  cVar3 = __ftol();
  cVar4 = __ftol();
  cVar5 = __ftol();
  cVar6 = __ftol();
  cVar7 = __ftol();
  FUN_004f8ec0(CONCAT31(CONCAT21(CONCAT11(0xff,cVar5 + cVar2),cVar6 + cVar3),cVar7 + cVar4));
  iVar8 = FUN_0065f190(s_HUD_RingEffects_0072f8b8);
  if (iVar8 != 0) {
    if ((DAT_006e92e4 < *(float *)(param_1 + 0x13a0)) &&
       (*(float *)(param_1 + 0x13a0) < DAT_006e92e8 !=
        (NAN(*(float *)(param_1 + 0x13a0)) || NAN(DAT_006e92e8)))) {
      FUN_004f2b00();
    }
    FUN_0065f430();
    return;
  }
  return;
}

