
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552060(float param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  undefined4 local_8;
  float local_4;
  
  local_20 = *(undefined4 *)((int)param_1 + 0xc);
  local_18 = *(float *)((int)param_1 + 0x14) - *(float *)((int)param_1 + 8);
  pfVar1 = (float *)((int)param_1 + 8);
  local_24 = *pfVar1;
  local_10 = *(float *)((int)param_1 + 0x1c) - *(float *)((int)param_1 + 0x10);
  local_1c = *(float *)((int)param_1 + 0x10);
  local_30 = *(float *)((int)param_1 + 0x14);
  local_2c = *(undefined4 *)((int)param_1 + 0x18);
  local_28 = *(float *)((int)param_1 + 0x1c);
  fVar3 = (float10)FUN_00647b30(0,local_10);
  param_1 = (float)(fVar3 + (float10)local_1c);
  fVar3 = (float10)FUN_00647b30(0,local_18);
  local_3c = (float)(fVar3 + (float10)local_24);
  local_38 = local_2c;
  local_34 = param_1;
  fVar3 = (float10)FUN_00647b30(0xc3480000,0x43480000);
  if (fVar3 + (float10)local_34 <= (float10)local_28) {
    fVar3 = (float10)FUN_00647b30(0xc3480000,0x43480000);
    fVar3 = fVar3 + (float10)local_34;
  }
  else {
    fVar3 = (float10)local_28;
  }
  if ((float10)local_1c <= fVar3) {
    fVar3 = (float10)FUN_00647b30(0xc3480000,0x43480000);
    if (fVar3 + (float10)local_34 <= (float10)local_28) {
      fVar3 = (float10)FUN_00647b30(0xc3480000,0x43480000);
      param_1 = (float)(fVar3 + (float10)local_34);
    }
    else {
      param_1 = local_28;
    }
  }
  else {
    param_1 = local_1c;
  }
  fVar3 = (float10)FUN_00647b30(0xc3480000,0x43480000);
  if (fVar3 + (float10)local_3c <= (float10)local_30) {
    fVar3 = (float10)FUN_00647b30(0xc3480000,0x43480000);
    fVar3 = fVar3 + (float10)local_3c;
  }
  else {
    fVar3 = (float10)local_30;
  }
  if ((float10)local_24 <= fVar3) {
    fVar3 = (float10)FUN_00647b30(0xc3480000,0x43480000);
    if (fVar3 + (float10)local_3c <= (float10)local_30) {
      fVar3 = (float10)FUN_00647b30(0xc3480000,0x43480000);
      fVar3 = fVar3 + (float10)local_3c;
    }
    else {
      fVar3 = (float10)local_30;
    }
  }
  else {
    fVar3 = (float10)local_24;
  }
  local_c = (float)fVar3;
  local_8 = local_20;
  local_4 = param_1;
  fVar4 = (float10)FUN_00647b30(0,0x3f800000);
  fVar3 = (float10)_DAT_006ec06c;
  param_1 = -NAN;
  FUN_005513a0(&local_3c,&param_1);
  FUN_0065fce0(0);
  iVar2 = FUN_00673620(pfVar1,0);
  if (iVar2 != 0) {
    param_1 = 1.0;
    if (fVar4 <= fVar3) {
      param_1 = 0.5;
    }
    FUN_00551460(&local_3c,&local_c,param_1,0,0);
  }
  return;
}

