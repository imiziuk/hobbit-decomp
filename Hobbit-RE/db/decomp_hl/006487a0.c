
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006487a0(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  int local_14;
  int local_10;
  int local_c;
  float local_4;
  int iVar6;
  
  iVar7 = 0;
  bVar5 = (&DAT_0074c490)[*param_1];
  local_14 = 1;
  local_10 = 0;
  local_c = 1;
  bVar2 = true;
  while ((bVar5 & 1) != 0) {
    pbVar3 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar5 = (&DAT_0074c490)[*pbVar3];
  }
  if (*param_1 == 0x2d) {
    param_1 = param_1 + 1;
    local_14 = -1;
  }
  if (*param_1 == 0x2b) {
    param_1 = param_1 + 1;
  }
  bVar5 = *param_1;
  bVar1 = (&DAT_0074c490)[bVar5];
  pbVar3 = param_1;
  while ((bVar1 & 2) != 0) {
    pbVar3 = pbVar3 + 1;
    iVar7 = (char)bVar5 + -0x30 + iVar7 * 10;
    bVar5 = *pbVar3;
    bVar1 = (&DAT_0074c490)[bVar5];
  }
  if (*pbVar3 == 0x2e) {
    bVar5 = pbVar3[1];
    pbVar3 = pbVar3 + 1;
    bVar2 = false;
    bVar1 = (&DAT_0074c490)[bVar5];
    local_10 = 0;
    local_c = 1;
    while ((bVar1 & 2) != 0) {
      local_c = local_c * 10;
      pbVar3 = pbVar3 + 1;
      local_10 = (char)bVar5 + -0x30 + local_10 * 10;
      bVar5 = *pbVar3;
      bVar1 = (&DAT_0074c490)[bVar5];
    }
  }
  bVar5 = *pbVar3;
  if ((((bVar5 != 0x65) && (bVar5 != 0x45)) && (bVar5 != 100)) && (bVar5 != 0x44)) {
    if (!bVar2) {
      return ((float10)local_10 / (float10)local_c + (float10)iVar7) * (float10)local_14;
    }
    return (float10)(iVar7 * local_14);
  }
  pbVar4 = pbVar3 + 1;
  param_1 = (byte *)DAT_006e92e4;
  local_4 = 1.0;
  if (pbVar3[1] == 0x2d) {
    pbVar4 = pbVar3 + 2;
    local_4 = -1.0;
  }
  if (*pbVar4 == 0x2b) {
    pbVar4 = pbVar4 + 1;
  }
  bVar5 = *pbVar4;
  if (((&DAT_0074c490)[bVar5] & 2) != 0) {
    do {
      iVar6 = (int)(char)bVar5;
      pbVar4 = pbVar4 + 1;
      bVar5 = *pbVar4;
      param_1 = (byte *)((float)param_1 * _DAT_006e9554 + (float)(iVar6 + -0x30));
    } while (((&DAT_0074c490)[bVar5] & 2) != 0);
    if ((float)param_1 < _DAT_006e9448 == (NAN((float)param_1) || NAN(_DAT_006e9448))) {
      fVar8 = (float10)FUN_006c05f0();
      goto LAB_0064896f;
    }
  }
  fVar8 = (float10)DAT_006e92e8;
  if ((NAN((float)param_1) || NAN(DAT_006e92e4)) == ((float)param_1 == DAT_006e92e4)) {
    do {
      fVar8 = fVar8 * (float10)_DAT_006e9554;
      param_1 = (byte *)((float)param_1 - DAT_006e92e8);
    } while ((NAN((float)param_1) || NAN(DAT_006e92e4)) == ((float)param_1 == DAT_006e92e4));
  }
LAB_0064896f:
  fVar9 = ((float10)local_10 / (float10)local_c + (float10)iVar7) * (float10)local_14;
  if (local_4 < DAT_006e92e4 == (NAN(local_4) || NAN(DAT_006e92e4))) {
    return fVar9 * fVar8;
  }
  return fVar9 / fVar8;
}

