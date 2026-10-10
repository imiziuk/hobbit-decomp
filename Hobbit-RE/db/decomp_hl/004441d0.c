
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004441d0(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float unaff_ESI;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [4];
  undefined1 auStack_14 [20];
  
  FUN_00442550(0);
  if ((param_1[0x235] != 0x17) || (_DAT_006e9994 < (float)param_1[0x1d6])) {
    fVar1 = *(float *)(param_1[0x114] + 0x68);
LAB_00444266:
    fVar1 = (float)param_1[0x1d6] - fVar1 * (float)param_1[0x248];
  }
  else {
    if (((float)param_1[0x1d6] < _DAT_006e9994 != ((float)param_1[0x1d6] == _DAT_006e9994)) &&
       (_DAT_006ec0cc < (float)param_1[0x1d6])) {
      fVar1 = *(float *)(param_1[0x114] + 0x68) * _DAT_006ec0c8;
      goto LAB_00444266;
    }
    if ((float)param_1[0x1d6] < (float)_DAT_006ec0c0 ==
        (NAN((float)param_1[0x1d6]) || NAN((float)_DAT_006ec0c0))) goto LAB_00444278;
    fVar1 = -(*(float *)(param_1[0x114] + 0x68) * _DAT_006ec0b8 * (float)param_1[0x248]);
  }
  param_1[0x1d6] = (int)fVar1;
LAB_00444278:
  fVar1 = *(float *)(param_1[0x114] + 0x1bc);
  if ((float)param_1[0x1d6] < fVar1 != ((float)param_1[0x1d6] == fVar1)) {
    param_1[0x1d6] = *(int *)(param_1[0x114] + 0x1bc);
  }
  local_6c = (float)param_1[0x119];
  local_68 = (float)param_1[0x11a];
  local_64 = (float)param_1[0x11b];
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],local_18,&local_70);
  fVar1 = (float)param_1[0x248];
  local_60 = local_6c;
  local_2c = fVar1 * (float)param_1[0x1ee];
  local_28 = fVar1 * (float)param_1[0x1ef];
  fVar2 = (float)param_1[0x248];
  local_44 = fVar2 * (float)param_1[0x1e9];
  local_40 = fVar2 * (float)param_1[0x1ea];
  local_4c = (float)param_1[0x248];
  local_54 = local_4c * (float)param_1[0x1d5];
  local_50 = local_4c * (float)param_1[0x1d6];
  local_4c = local_4c * (float)param_1[0x1d7];
  local_38 = local_50 + local_44;
  local_34 = local_4c + local_40;
  local_24 = local_54 + fVar2 * (float)param_1[0x1e8] + fVar1 * (float)param_1[0x1ed];
  local_20 = local_38 + local_2c;
  local_1c = local_34 + local_28;
  local_5c = local_68;
  local_58 = local_64;
  FUN_00469060(&local_60,&local_24,0,0xbf800000,0,1,1);
  (**(code **)(*param_1 + 0x14))(&local_60,0);
  fVar1 = (float)param_1[0x248];
  FUN_00401f00(fVar1 * (float)param_1[0x1ed],fVar1 * (float)param_1[0x1ee],
               fVar1 * (float)param_1[0x1ef]);
  fVar1 = (float)param_1[0x248];
  FUN_00401f00(fVar1 * (float)param_1[0x1e8],fVar1 * (float)param_1[0x1e9],
               fVar1 * (float)param_1[0x1ea]);
  FUN_00401f00(local_38 + local_44,local_34 + local_40,fStack_30 + fStack_3c);
  FUN_00401f00(local_68 - unaff_ESI,local_64 - local_70,local_60 - local_6c);
  FUN_00401f00(local_50 - local_5c,local_4c - local_58,fStack_48 - local_54);
  uVar3 = FUN_004451d0(auStack_14,&stack0xffffff8c,param_1[0x248]);
  FUN_004357e0(uVar3);
  return;
}

