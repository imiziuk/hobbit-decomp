
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00674110(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if ((char)*(uint *)(param_1 + 0x88) < '\0') {
    fVar3 = (float10)_DAT_006e936c;
    fVar1 = (float10)_DAT_006e936c;
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffffff7f | 4;
    fVar2 = (float10)fptan((float10)*(float *)(param_1 + 100) * (float10)_DAT_006e936c);
    fVar3 = (float10)fpatan(((float10)((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50)) + 1) *
                            fVar3) / (((float10)((*(int *)(param_1 + 0x54) -
                                                 *(int *)(param_1 + 0x4c)) + 1) * fVar1) / fVar2),
                            (float10)1);
    *(float *)(param_1 + 0x250) = (float)(fVar3 + fVar3);
  }
  return;
}

