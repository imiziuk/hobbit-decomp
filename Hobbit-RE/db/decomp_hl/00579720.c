
void __thiscall
FUN_00579720(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5,
            undefined4 param_6)

{
  float fVar1;
  
  FUN_00649600(s_Coll_RaySetup_00740364);
  FUN_005778a0();
  *(undefined4 *)(param_1 + 0x3d84) = param_3;
  *(undefined4 *)(param_1 + 0x3d80) = param_2;
  *(undefined4 *)(param_1 + 0x3d48) = 4;
  *(float *)(param_1 + 0x408c) = *param_4;
  *(float *)(param_1 + 0x4090) = param_4[1];
  *(float *)(param_1 + 0x4094) = param_4[2];
  *(float *)(param_1 + 0x4098) = *param_5;
  *(float *)(param_1 + 0x409c) = param_5[1];
  *(float *)(param_1 + 0x40a0) = param_5[2];
  *(undefined4 *)(param_1 + 0x3d88) = param_6;
  if (*param_4 < *param_5 == (NAN(*param_4) || NAN(*param_5))) {
    fVar1 = *param_5;
  }
  else {
    fVar1 = *param_4;
  }
  *(float *)(param_1 + 0x3d4c) = fVar1;
  if (param_5[1] <= param_4[1]) {
    fVar1 = param_5[1];
  }
  else {
    fVar1 = param_4[1];
  }
  *(float *)(param_1 + 0x3d50) = fVar1;
  if (param_5[2] <= param_4[2]) {
    fVar1 = param_5[2];
  }
  else {
    fVar1 = param_4[2];
  }
  *(float *)(param_1 + 0x3d54) = fVar1;
  if (*param_4 <= *param_5) {
    fVar1 = *param_5;
  }
  else {
    fVar1 = *param_4;
  }
  *(float *)(param_1 + 0x3d58) = fVar1;
  if (param_5[1] < param_4[1] == (NAN(param_5[1]) || NAN(param_4[1]))) {
    fVar1 = param_5[1];
  }
  else {
    fVar1 = param_4[1];
  }
  *(float *)(param_1 + 0x3d5c) = fVar1;
  if (param_5[2] < param_4[2] == (NAN(param_5[2]) || NAN(param_4[2]))) {
    fVar1 = param_5[2];
  }
  else {
    fVar1 = param_4[2];
  }
  *(float *)(param_1 + 0x3d60) = fVar1;
  FUN_00649720();
  return;
}

