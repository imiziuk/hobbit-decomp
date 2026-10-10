
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00673dc0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if ((*(uint *)(param_1 + 0x88) & 4) != 0) {
    pfVar1 = (float *)(param_1 + 0x10c);
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffb;
    FUN_00648600(pfVar1,0,0x40);
    FUN_00674110();
    if (*(int *)(param_1 + 0x70) == 0) {
      fVar4 = (float10)_DAT_006e936c;
      fVar2 = *(float *)(param_1 + 0x6c) / (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x68))
      ;
      fVar3 = (float10)fptan((float10)*(float *)(param_1 + 100) * (float10)_DAT_006e936c);
      *pfVar1 = (float)-((float10)DAT_006e92e8 / fVar3);
      fVar4 = (float10)fptan((float10)*(float *)(param_1 + 0x250) * fVar4);
      *(float *)(param_1 + 0x120) = (float)((float10)DAT_006e92e8 / fVar4);
      *(float *)(param_1 + 0x134) = fVar2;
      *(float *)(param_1 + 0x144) = -(fVar2 * *(float *)(param_1 + 0x68));
      *(undefined4 *)(param_1 + 0x138) = 0x3f800000;
      return;
    }
    fVar2 = DAT_006e92e8 / (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x68));
    *pfVar1 = _DAT_006ef7fc / *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x120) = _DAT_006e999c / *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x134) = fVar2;
    *(float *)(param_1 + 0x144) = -(fVar2 * *(float *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x148) = 0x3f800000;
  }
  return;
}

