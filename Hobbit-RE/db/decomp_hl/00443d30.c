
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00443d30(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar7;
  float fVar8;
  float fStack_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float local_5c;
  float local_58;
  int local_54;
  undefined1 auStack_50 [4];
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_44 [28];
  undefined1 local_28 [8];
  float fStack_20;
  float local_1c;
  float fStack_18;
  undefined1 local_10 [16];
  
  local_5c = (float)param_1[0x119];
  local_58 = (float)param_1[0x11a];
  local_54 = param_1[0x11b];
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],local_28,&local_78);
  fVar8 = (float)param_1[0x248];
  local_74 = fVar8 * (float)param_1[0x1d5];
  local_6c = fVar8 * (float)param_1[0x1d7];
  local_70 = fVar8 * (float)param_1[0x1d6] -
             *(float *)(param_1[0x114] + 0x68) * (float)param_1[0x248] * (float)param_1[0x248];
  (**(code **)(*param_1 + 0x140))(param_1 + 5,0,&local_1c,local_10);
  uVar5 = FUN_0042eea0(auStack_50,
                       local_1c * unaff_EBX + fStack_20 * unaff_ESI + fStack_18 * fStack_7c,
                       &fStack_20);
  FUN_004357e0(uVar5);
  uVar5 = FUN_00405080(auStack_50,&stack0xffffff7c,auStack_44);
  FUN_004357e0(uVar5);
  fVar4 = local_70;
  fVar3 = local_74;
  fVar2 = SQRT(local_78 * local_78 + local_74 * local_74 + local_70 * local_70);
  fVar8 = fVar2 / (float)param_1[0x248];
  if (fVar8 < DAT_006e92e4) {
    fVar8 = 0.0;
  }
  fVar1 = *(float *)(param_1[0x114] + 0x1b4);
  if (fVar1 < fVar8 != (NAN(fVar1) || NAN(fVar8))) {
    fVar8 = *(float *)(param_1[0x114] + 0x1b4);
  }
  if (fVar8 * _DAT_006e95d8 <= (float)param_1[0x29b]) {
    if (fVar8 < (float)param_1[0x29b] != (NAN(fVar8) || NAN((float)param_1[0x29b]))) {
      fVar8 = (float)param_1[0x29b];
    }
  }
  else {
    param_1[0x29b] = (int)(fVar8 * _DAT_006e95d8);
  }
  fVar2 = DAT_006e92e8 / fVar2;
  iVar6 = FUN_0064cf30(fVar2);
  if (iVar6 == 0) {
    fStack_7c = 0.0;
    fVar4 = DAT_006e92e4;
    fVar2 = DAT_006e92e4;
  }
  else {
    fStack_7c = fVar4 * fVar2;
    fVar4 = local_78 * fVar2;
    fVar2 = fVar2 * fVar3;
  }
  param_1[0x1dc] = 0;
  fVar8 = fVar8 * (float)param_1[0x248];
  param_1[0x1da] = 0;
  if (_DAT_006ec0b4 <
      fVar8 * fVar2 * fVar8 * fVar2 +
      fVar8 * fVar4 * fVar8 * fVar4 + fStack_7c * fVar8 * fStack_7c * fVar8) {
    fStack_60 = local_6c;
    local_58 = fStack_64;
    local_5c = fStack_68;
    FUN_00469060(&fStack_60,&stack0xffffff7c,0,*(undefined4 *)(param_1[0x114] + 0x58),0,1,1);
    (**(code **)(*param_1 + 0x14))(&fStack_60,0);
    fStack_4c = local_5c - fStack_68;
    fVar8 = DAT_006e92e8 / (float)param_1[0x248];
    fStack_48 = (local_58 - fStack_64) * fVar8;
    param_1[0x1d5] = (int)((fStack_60 - local_6c) * fVar8);
    param_1[0x1d7] = (int)fStack_48;
    param_1[0x1d6] = (int)(fStack_4c * fVar8);
  }
  (**(code **)(*param_1 + 0x140))(param_1 + 5,0,auStack_50,&fStack_60);
  FUN_00442550((float)param_1[6] - local_5c < *(float *)(param_1[0x114] + 0x4c) !=
               (NAN((float)param_1[6] - local_5c) || NAN(*(float *)(param_1[0x114] + 0x4c))));
  fVar7 = (float10)FUN_0064ca10(param_1[0x1d5],param_1[0x1d7]);
  fVar8 = (float)fVar7;
  param_1[0x1ec] = 0x3c23d70a;
  fVar7 = ((float10)(float)param_1[0x11d] - (float10)fVar8) + (float10)_DAT_006e9368;
  if (((float10)_DAT_006e95a0 < fVar7) ||
     (fVar7 < (float10)_DAT_006e959c != (NAN(fVar7) || NAN((float10)_DAT_006e959c)))) {
    fVar7 = (float10)FUN_0064c6b0((float)fVar7,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar7) {
    do {
      fVar7 = fVar7 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar7);
  }
  if (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar7 = fVar7 + (float10)_DAT_006e9598;
    } while (fVar7 < (float10)DAT_006e92e4 != (NAN(fVar7) || NAN((float10)DAT_006e92e4)));
  }
  fVar2 = (float)(fVar7 - (float10)_DAT_006e9368);
  fVar3 = (float)param_1[0x1ec] * (float)param_1[0x248];
  if (fVar2 < DAT_006e92e4) {
    fVar3 = -fVar3;
    if (fVar2 <= fVar3) goto LAB_0044418e;
  }
  else if (fVar2 < fVar3 == (NAN(fVar2) || NAN(fVar3))) goto LAB_0044418e;
  fVar3 = fVar2;
LAB_0044418e:
  param_1[0x160] = 1;
  param_1[0x164] = 1;
  param_1[0x11d] = (int)(fVar3 + fVar8);
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x167] = param_1[0x167] + 1;
  return;
}

