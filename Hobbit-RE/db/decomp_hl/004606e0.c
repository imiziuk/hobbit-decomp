
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004606e0(int param_1,float *param_2)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  local_24 = 0.0;
  local_1c = 0.0;
  piVar2 = (int *)FUN_00406bf0(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x134));
  if (piVar2 == (int *)0x0) {
    fVar1 = 0.0;
  }
  else {
    if (*(int *)(param_1 + 0x148) == 0) {
      pfVar3 = (float *)(**(code **)(*piVar2 + 0x28))();
    }
    else {
      pfVar3 = &local_18;
      local_4 = (float)piVar2[0x13] + (float)piVar2[0x16];
      local_18 = ((float)piVar2[0x11] + (float)piVar2[0x14]) * _DAT_006e936c;
      local_14 = ((float)piVar2[0x12] + (float)piVar2[0x15]) * _DAT_006e936c;
      local_10 = ((float)piVar2[0x13] + (float)piVar2[0x16]) * _DAT_006e936c;
    }
    local_24 = *pfVar3 + *(float *)(param_1 + 0x138);
    fVar1 = *(float *)(param_1 + 0x13c) + pfVar3[1];
    local_1c = *(float *)(param_1 + 0x140) + pfVar3[2];
  }
  *param_2 = local_24;
  param_2[2] = local_1c;
  param_2[1] = fVar1;
  return;
}

