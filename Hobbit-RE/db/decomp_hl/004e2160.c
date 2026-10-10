
undefined4 __thiscall FUN_004e2160(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  fVar2 = *(float *)(param_1 + 0xb0);
  fVar1 = *(float *)(param_1 + 0xac);
  fVar3 = *(float *)(param_1 + 0xb4);
  switch(param_3) {
  case 0:
    local_18 = -fVar1;
    local_14 = -fVar2;
    local_10 = -fVar3;
    local_4 = local_10;
    break;
  case 1:
    local_18 = -fVar1;
    local_14 = -fVar2;
    local_10 = fVar3;
    break;
  case 2:
    local_18 = -fVar1;
    local_14 = fVar2;
    local_10 = -fVar3;
    break;
  case 3:
    local_18 = -fVar1;
    local_14 = fVar2;
    local_10 = fVar3;
    break;
  case 4:
    local_8 = -fVar2;
    local_4 = -fVar3;
    local_18 = fVar1;
    local_14 = local_8;
    local_10 = local_4;
    break;
  case 5:
    local_8 = -fVar2;
    local_18 = fVar1;
    local_14 = local_8;
    local_10 = fVar3;
    break;
  case 6:
    local_4 = -fVar3;
    local_18 = fVar1;
    local_14 = fVar2;
    local_10 = local_4;
    break;
  case 7:
    local_18 = fVar1;
    local_14 = fVar2;
    local_10 = fVar3;
  }
  if (param_4 != 0) {
    FUN_00428790(*(undefined4 *)(param_1 + 0x70));
    FUN_004286f0(*(undefined4 *)(param_1 + 0x68));
    FUN_00428740(*(undefined4 *)(param_1 + 0x6c));
    local_18 = local_18 + *(float *)(param_1 + 0x14);
    local_14 = local_14 + *(float *)(param_1 + 0x18);
    local_10 = local_10 + *(float *)(param_1 + 0x1c);
  }
  FUN_004357e0(&local_18);
  return param_2;
}

