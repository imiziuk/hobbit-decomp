
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00457d60(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_20 = *(float *)(param_1 + 0xb8);
  local_1c = 0.0;
  iVar3 = FUN_004582e0();
  if (iVar3 != 0) {
    local_1c = *(float *)(param_1 + 0xb8);
    local_20 = *(float *)(param_1 + 0xb8) + _DAT_006e9364;
  }
  fVar4 = (float10)FUN_00647b30(local_1c,local_20);
  local_10 = (float)fVar4;
  local_c = 0.0;
  fVar4 = (float10)FUN_00647b30(0xc0490fdb,0x40490fdb);
  local_8 = (float)fVar4;
  local_4 = 0.0;
  iVar3 = FUN_004582d0();
  if (iVar3 == 0) {
    fVar4 = (float10)FUN_00647b30(0xc0490fdb,0x40490fdb);
    local_c = (float)fVar4;
    fVar4 = (float10)FUN_00647b30(0xc0490fdb,0x40490fdb);
  }
  else {
    fVar4 = (float10)local_4;
  }
  FUN_0064c8e0((float)fVar4,&local_20,&local_1c);
  local_18 = local_1c * DAT_006e92e4 - local_20 * DAT_006e92e4;
  local_14 = local_20 * DAT_006e92e4 + local_1c * DAT_006e92e4;
  FUN_0064c8e0(local_c,&local_20,&local_1c);
  fVar1 = local_10 * local_20;
  local_10 = local_14 * local_20 + local_10 * local_1c;
  local_14 = local_14 * local_1c - fVar1;
  FUN_0064c8e0(local_8,&local_20,&local_1c);
  fVar1 = *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0x1c);
  *param_2 = local_1c * local_18 + local_10 * local_20 + *(float *)(param_1 + 0x14);
  param_2[1] = local_14 + fVar1;
  param_2[2] = (local_10 * local_1c - local_18 * local_20) + fVar2;
  return;
}

