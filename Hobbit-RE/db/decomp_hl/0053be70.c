
float10 __thiscall FUN_0053be70(int *param_1,float param_2)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int local_3c;
  undefined1 local_28 [28];
  float local_c;
  float local_8;
  float local_4;
  
  iVar7 = __ftol();
  uVar2 = param_1[1];
  uVar4 = uVar2 * 2;
  if (((uVar4 ^ uVar2) & 0x7fffffff ^ uVar4) == 0xffffffff) {
    iVar8 = *param_1;
  }
  else {
    iVar8 = FUN_00549470(param_1 + 1);
  }
  iVar8 = param_1[2] * 0x50 + *(int *)(iVar8 + 0x58);
  fVar3 = (float)(param_1[3] / (int)(uint)*(byte *)(iVar8 + 0x2f));
  if (param_2 < fVar3 == (NAN(param_2) || NAN(fVar3))) {
    param_2 = fVar3;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x1a] = 0;
  FUN_0053b910(local_28);
  fVar6 = local_4;
  fVar5 = local_8;
  fVar3 = local_c;
  bVar1 = *(byte *)(iVar8 + 0x2f);
  local_3c = __ftol();
  if ((local_3c == 0) && (0 < param_1[3])) {
    local_3c = 1;
    param_2 = DAT_006e92e8 / (float)bVar1;
  }
  param_1[4] = (int)(float)local_3c;
  param_1[5] = 0;
  param_1[0x1a] = 0;
  FUN_0053b910(local_28);
  param_1[5] = 0;
  param_1[4] = (int)(float)iVar7;
  param_1[0x1a] = 0;
  return SQRT(((float10)fVar3 - (float10)local_c) * ((float10)fVar3 - (float10)local_c) +
              ((float10)fVar5 - (float10)local_8) * ((float10)fVar5 - (float10)local_8) +
              ((float10)fVar6 - (float10)local_4) * ((float10)fVar6 - (float10)local_4)) /
         (float10)param_2;
}

