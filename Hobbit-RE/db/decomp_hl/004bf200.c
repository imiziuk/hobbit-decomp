
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004bf200(float *param_1,undefined4 *param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float local_a4;
  float local_a0;
  float local_9c;
  float afStack_98 [14];
  float local_60;
  undefined4 local_54;
  float afStack_50 [12];
  undefined4 local_20 [8];
  
  if (((NAN(*param_5) || NAN(DAT_006e92e4)) != (*param_5 == DAT_006e92e4)) &&
     ((NAN(param_5[2]) || NAN(DAT_006e92e4)) != (param_5[2] == DAT_006e92e4))) {
    return false;
  }
  local_a4 = *param_1;
  local_a0 = param_1[1];
  local_9c = param_1[2];
  FUN_004b9df0(&local_a4,local_20,param_3 + param_4);
  iVar5 = 0;
  puVar6 = local_20 + 1;
  iVar4 = 0;
  do {
    fVar1 = param_1[1];
    uVar2 = *puVar6;
    local_54 = uVar2;
    *(undefined4 *)((int)afStack_98 + iVar4) = puVar6[-1];
    *(undefined4 *)((int)afStack_98 + iVar4 + 8) = uVar2;
    *(float *)((int)afStack_98 + iVar4 + 4) = param_3 + param_4 + fVar1;
    fVar1 = *(float *)((int)afStack_98 + iVar4 + 4);
    local_60 = *(float *)((int)afStack_98 + iVar4 + 8) - local_9c;
    *(float *)((int)afStack_50 + iVar4) = *(float *)((int)afStack_98 + iVar4) - local_a4;
    *(float *)((int)afStack_50 + iVar4 + 8) = local_60;
    *(float *)((int)afStack_50 + iVar4 + 4) = fVar1 - local_a0;
    puVar3 = param_2;
    if (DAT_006e92e4 <
        *(float *)((int)afStack_50 + iVar4) * *param_5 +
        param_5[2] * *(float *)((int)afStack_50 + iVar4 + 8) +
        param_5[1] * *(float *)((int)afStack_50 + iVar4 + 4)) {
      if (3 < iVar5) {
        return false;
      }
      *param_2 = *(undefined4 *)((int)afStack_98 + iVar4);
      param_2[1] = *(undefined4 *)((int)afStack_98 + iVar4 + 4);
      param_2[2] = *(undefined4 *)((int)afStack_98 + iVar4 + 8);
      uVar2 = *(undefined4 *)((int)afStack_98 + iVar4);
      param_2[1] = (float)param_2[1] + _DAT_006e92f4;
      param_2[3] = uVar2;
      param_2[4] = *(undefined4 *)((int)afStack_98 + iVar4 + 4);
      param_2[5] = *(undefined4 *)((int)afStack_98 + iVar4 + 8);
      iVar5 = iVar5 + 2;
      puVar3 = param_2 + 6;
      param_2[4] = ((param_1[1] + _DAT_006e9364) - param_3) - param_4;
    }
    iVar4 = iVar4 + 0xc;
    puVar6 = puVar6 + 2;
    param_2 = puVar3;
  } while (iVar4 < 0x30);
  return iVar5 == 4;
}

