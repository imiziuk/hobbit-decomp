
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00443a70(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  int local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_30 = (float)param_1[5];
  local_2c = (float)param_1[6];
  local_28 = (float)param_1[7];
  local_18 = local_30;
  local_14 = (int)local_2c;
  local_10 = local_28;
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],local_c,&local_40);
  local_3c = (float)param_1[0x228] - (float)param_1[0x22b];
  local_34 = (float)param_1[0x22a] - (float)param_1[0x22d];
  fVar1 = DAT_006e92e8 /
          SQRT(local_3c * local_3c +
               local_34 * local_34 +
               ((float)param_1[0x229] - (float)param_1[0x22c]) *
               ((float)param_1[0x229] - (float)param_1[0x22c]));
  iVar4 = FUN_0064cf30(fVar1);
  fVar2 = DAT_006e92e4;
  fVar3 = DAT_006e92e4;
  if (iVar4 != 0) {
    fVar2 = fVar1 * local_3c;
    fVar3 = fVar1 * local_34;
  }
  fVar1 = *(float *)(param_1[0x114] + 0x148) * (float)param_1[0x248];
  local_3c = fVar1 * fVar2;
  local_30 = local_30 + local_3c;
  local_28 = local_28 + fVar1 * fVar3;
  fVar1 = (float)param_1[0x230];
  param_1[0x230] = (int)((float)param_1[0x248] + fVar1);
  fVar1 = ((float)param_1[0x248] + fVar1) / (float)param_1[0x22e];
  local_40 = ((float)param_1[0x229] - (float)param_1[0x22c]) * fVar1 + (float)param_1[0x22c];
  fVar2 = _DAT_006ec0a0 * (float)param_1[0x22f];
  fVar5 = (float10)FUN_0064c800(_DAT_006ec098 * fVar1 + _DAT_006ec09c);
  local_2c = (float)((fVar5 * (float10)(float)param_1[0x22f] - (float10)fVar2) + (float10)local_40);
  (**(code **)(*param_1 + 0x14))(&local_30,0);
  fVar1 = (float)param_1[5] - fStack_20;
  local_40 = (float)param_1[6] - fStack_1c;
  local_3c = (float)param_1[7] - local_18;
  FUN_00401f00((fVar1 + (float)param_1[5]) - (float)param_1[0x22b],
               (local_40 + (float)param_1[6]) - (float)param_1[0x22c],
               (local_3c + (float)param_1[7]) - (float)param_1[0x22d]);
  FUN_00401f00((float)param_1[0x22b] - (float)param_1[0x228],
               (float)param_1[0x22c] - (float)param_1[0x229],
               (float)param_1[0x22d] - (float)param_1[0x22a]);
  fVar2 = local_2c * local_2c + local_28 * local_28 + fStack_24 * fStack_24;
  fVar3 = fStack_20 * fStack_20 + fStack_1c * fStack_1c + local_18 * local_18;
  if (fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
    fVar2 = DAT_006e92e8 / (float)param_1[0x248];
    FUN_00401f00(fVar2 * fVar1,local_40 * fVar2,local_3c * fVar2);
    FUN_004357e0(&fStack_20);
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724354,0x322);
  }
  return;
}

