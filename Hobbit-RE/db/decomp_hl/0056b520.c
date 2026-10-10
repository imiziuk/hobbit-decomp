
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0056b520(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_4;
  
  if ((*(int *)(param_1 + 0x480) == 5) || (iVar3 = FUN_0041bcc0(), *(int *)(iVar3 + 0x6f8) != 0)) {
    local_4 = *(float *)(*(int *)(param_1 + 0x730) + 0x4c);
  }
  else {
    local_4 = *(float *)(*(int *)(param_1 + 0x730) + 0x58);
  }
  if ((*(int *)(param_1 + 0x480) == 5) || (iVar3 = FUN_0041bcc0(), *(int *)(iVar3 + 0x6f8) != 0)) {
    iVar3 = *(int *)(param_1 + 0x730);
    fVar1 = *(float *)(iVar3 + 0x50);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x730);
    fVar1 = *(float *)(iVar3 + 0x5c);
  }
  fVar2 = *param_2;
  if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
    fVar2 = -fVar2;
  }
  if ((float)_DAT_006f3eb8 < fVar2) {
    *(float *)(param_1 + 0x678) = *(float *)(param_1 + 0x678) - fVar1 * *param_2 * param_3;
  }
  fVar1 = param_2[1];
  if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
    fVar1 = -fVar1;
  }
  if ((float)_DAT_006f3eb8 < fVar1) {
    fVar1 = _DAT_006e9370;
    if (*(int *)(iVar3 + 0x68) != 0) {
      fVar1 = DAT_006e92e8;
    }
    *(float *)(param_1 + 0x67c) =
         fVar1 * local_4 * param_3 * param_2[1] + *(float *)(param_1 + 0x67c);
  }
  return;
}

