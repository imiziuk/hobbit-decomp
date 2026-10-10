
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004458a0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float unaff_ESI;
  float10 fVar6;
  float fStack_60;
  float *pfStack_5c;
  float *pfStack_58;
  float fStack_38;
  float local_34;
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  pfStack_58 = &local_34;
  pfStack_5c = &local_18;
  fStack_60 = 0.0;
  (**(code **)(*param_1 + 0x140))(param_1 + 5);
  FUN_00442550((float)param_1[6] - fStack_24 < *(float *)(param_1[0x114] + 0x4c) !=
               (NAN((float)param_1[6] - fStack_24) || NAN(*(float *)(param_1[0x114] + 0x4c))));
  fVar2 = (float)param_1[0x119];
  iVar3 = param_1[0x11a];
  fVar4 = (float)param_1[0x11b];
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],&pfStack_5c,&fStack_60);
  pfStack_5c = (float *)((float)pfStack_5c * (float)param_1[0x1e6]);
  fStack_28 = 0.0;
  pfStack_58 = (float *)((float)pfStack_58 * (float)param_1[0x1e7]);
  fVar1 = (float)param_1[0x1e6];
  fVar6 = (float10)(**(code **)(*param_1 + 0x10c))();
  fStack_24 = (float)fVar6;
  uStack_20 = 0;
  FUN_00429030(&fStack_28);
  fStack_60 = (float)param_1[0x248];
  fVar5 = _DAT_006e9354 * 1.0;
  fStack_28 = _DAT_006e9354 * 0.0 * fStack_60;
  fStack_1c = fStack_28 + (float)pfStack_5c;
  local_18 = fStack_60 *
             (_DAT_006e9354 * 0.0 -
             *(float *)(param_1[0x114] + 0x68) * (float)param_1[0x248] * _DAT_006e99b0) +
             (float)pfStack_58;
  fStack_14 = fVar5 * fStack_60 + unaff_ESI * fVar1;
  local_34 = fVar2;
  iStack_30 = iVar3;
  fStack_2c = fVar4;
  FUN_00469060(&local_34,&fStack_1c,0,0xbf800000,0,1,1);
  (**(code **)(*param_1 + 0x14))(&local_34,0);
  fVar1 = DAT_006e92e8 / (float)param_1[0x248];
  param_1[0x1d5] = (int)((fVar4 - 0.0) * fVar1);
  param_1[0x1d7] = (int)((local_34 - fVar2) * fVar1);
  param_1[0x1d6] = (int)((fStack_38 - fVar5) * fVar1);
  return;
}

