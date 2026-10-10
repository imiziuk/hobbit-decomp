
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0060db20(int param_1)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 != 0) {
    if (sVar1 == 5) {
      iVar2 = *(int *)(param_1 + 8);
      if ((*(byte *)(iVar2 + 0x130) & 1) == 0) goto LAB_0060dbc7;
      fVar3 = SQRT(*(float *)(iVar2 + 400) * *(float *)(iVar2 + 400) +
                   *(float *)(iVar2 + 0x194) * *(float *)(iVar2 + 0x194) +
                   *(float *)(iVar2 + 0x198) * *(float *)(iVar2 + 0x198));
      fVar4 = *(float *)(param_1 + 0x4c) * _DAT_006f57d4;
      if (fVar4 < fVar3 != (NAN(fVar4) || NAN(fVar3))) {
        FUN_005be370();
        return;
      }
    }
    else if (sVar1 == 6) {
      if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
        FUN_005be370();
        return;
      }
LAB_0060dbc7:
      FUN_005be370();
      return;
    }
  }
  FUN_005be370();
  return;
}

