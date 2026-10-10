
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044a0b0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float *pfVar4;
  float10 fVar5;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = *(float *)(param_1 + 0x3a58 + *(int *)(param_1 + 0x465c) * 0x18);
  iVar1 = param_1 + *(int *)(param_1 + 0x465c) * 0x18;
  local_14 = *(float *)(iVar1 + 0x3a5c);
  local_10 = *(float *)(iVar1 + 0x3a60);
  local_c = *(float *)(iVar1 + 0x3a64);
  local_8 = *(float *)(iVar1 + 0x3a68);
  local_4 = *(float *)(iVar1 + 0x3a6c);
  FUN_00401f00(local_c - local_18,local_8 - local_14,local_4 - local_10);
  fVar2 = *(float *)(param_1 + 0x4660);
  FUN_00401f00(local_70 * fVar2,local_6c * fVar2,local_68 * fVar2);
  FUN_00401f00(local_58 + local_18,local_54 + local_14,local_50 + local_10);
  if (*(int *)(param_1 + 0x4664) == 0) {
    local_70 = DAT_0075c808;
    local_6c = (float)DAT_0075c80c;
    local_68 = (float)DAT_0075c810;
    FUN_00401f00(local_18,local_14 - _DAT_006e99c0,local_10);
    uVar3 = FUN_00405080(local_4c,&local_c,&local_18);
    uVar3 = FUN_00405080(local_40,&local_58,&local_18,uVar3);
    uVar3 = FUN_0042eb90(local_34,uVar3);
    FUN_004357e0(uVar3);
    FUN_0042e1f0();
    fVar5 = (float10)FUN_00402020(&local_18);
    local_1c = (float)-fVar5;
    fVar5 = (float10)FUN_0064ca10(local_28,local_20);
    *param_3 = (float)fVar5;
    if (DAT_006e92e4 <
        local_28 * *(float *)(param_1 + 0x14) +
        local_20 * *(float *)(param_1 + 0x1c) + local_24 * *(float *)(param_1 + 0x18) + local_1c) {
      *param_3 = (float)(fVar5 + (float10)_DAT_006e9368);
    }
    FUN_00428740(*param_3);
    pfVar4 = (float *)FUN_00405080(local_34,&local_64,&local_70);
    *param_2 = *pfVar4;
    param_2[1] = pfVar4[1];
    param_2[2] = pfVar4[2];
    return;
  }
  local_70 = DAT_0075c814;
  local_6c = DAT_0075c818;
  local_68 = DAT_0075c81c;
  if (*(int *)(param_1 + 0x6f8) == 0) {
    *param_3 = *(float *)(param_1 + 0x7ac);
  }
  else {
    *param_3 = *(float *)(param_1 + 0x614);
  }
  FUN_0064c8e0(*param_3,&local_74,&local_78);
  FUN_00401f00(local_64 - (local_78 * local_70 + local_68 * local_74),local_60 - local_6c,
               local_5c - (local_68 * local_78 - local_70 * local_74));
  *param_2 = local_58;
  param_2[1] = local_54;
  param_2[2] = local_50;
  return;
}

