
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0044cb00(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_2 - *(float *)(param_1 + 0x14);
  local_4 = param_2[2] - *(float *)(param_1 + 0x1c);
  param_2 = (float *)(DAT_006e92e8 / SQRT(local_c * local_c + local_4 * local_4));
  iVar4 = FUN_0064cf30(param_2);
  if (iVar4 == 0) {
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = 0.0;
  }
  else {
    local_c = local_c * (float)param_2;
    local_8 = (float)param_2 * DAT_006e92e4;
    local_4 = local_4 * (float)param_2;
  }
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x474),&local_10,&param_2);
  fVar1 = (float)param_2 * DAT_006e92e4 + local_10;
  fVar3 = (float)param_2 - local_10 * DAT_006e92e4;
  fVar2 = SQRT(fVar1 * fVar1 + fVar3 * fVar3) *
          SQRT(local_8 * local_8 + local_c * local_c + local_4 * local_4);
  if ((NAN(fVar2) || NAN(DAT_006e92e4)) != (fVar2 == DAT_006e92e4)) {
    return (float10)DAT_006e92e4;
  }
  param_2 = (float *)((local_8 * DAT_006e92e4 + fVar1 * local_c + fVar3 * local_4) / fVar2);
  if (DAT_006e92e8 < (float)param_2) {
    param_2 = (float *)0x3f800000;
    fVar5 = (float10)FUN_006c0520();
    return fVar5;
  }
  if ((float)param_2 < _DAT_006e9370 != (NAN((float)param_2) || NAN(_DAT_006e9370))) {
    param_2 = (float *)0xbf800000;
  }
  fVar5 = (float10)FUN_006c0520();
  return fVar5;
}

