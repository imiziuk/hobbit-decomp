
float10 __thiscall FUN_0053bfb0(int *param_1,float param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int local_40;
  undefined1 local_28 [28];
  float local_c;
  float local_8;
  float local_4;
  
  iVar9 = __ftol();
  uVar2 = param_1[1];
  uVar6 = uVar2 * 2;
  if (((uVar6 ^ uVar2) & 0x7fffffff ^ uVar6) == 0xffffffff) {
    iVar10 = *param_1;
  }
  else {
    iVar10 = FUN_00549470(param_1 + 1);
  }
  iVar3 = param_1[2];
  iVar10 = *(int *)(iVar10 + 0x58);
  iVar4 = param_1[3];
  fVar5 = (float)(iVar4 / (int)(uint)*(byte *)(iVar3 * 0x50 + 0x2f + iVar10));
  if (param_2 < fVar5 == (NAN(param_2) || NAN(fVar5))) {
    param_2 = fVar5;
  }
  param_1[4] = (int)(float)(iVar4 + -2);
  param_1[5] = 0;
  param_1[0x1a] = 0;
  FUN_0053b910(local_28);
  fVar8 = local_4;
  fVar7 = local_8;
  fVar5 = local_c;
  bVar1 = *(byte *)(iVar3 * 0x50 + iVar10 + 0x2f);
  local_40 = __ftol();
  if ((local_40 == iVar4 + -2) && (0 < param_1[3])) {
    local_40 = iVar4 + -3;
    param_2 = DAT_006e92e8 / (float)bVar1;
  }
  param_1[4] = (int)(float)local_40;
  param_1[5] = 0;
  param_1[0x1a] = 0;
  FUN_0053b910(local_28);
  param_1[5] = 0;
  param_1[4] = (int)(float)iVar9;
  param_1[0x1a] = 0;
  return SQRT(((float10)local_c - (float10)fVar5) * ((float10)local_c - (float10)fVar5) +
              ((float10)local_8 - (float10)fVar7) * ((float10)local_8 - (float10)fVar7) +
              ((float10)local_4 - (float10)fVar8) * ((float10)local_4 - (float10)fVar8)) /
         (float10)param_2;
}

