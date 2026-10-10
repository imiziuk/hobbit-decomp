
void __thiscall
FUN_00579080(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5,
            float param_6,float param_7,undefined4 param_8)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbc78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_CylinderSetup_00740324);
  local_4 = 0;
  FUN_005778a0();
  *(undefined4 *)(param_1 + 0x3d84) = param_3;
  *(undefined4 *)(param_1 + 0x3d48) = 1;
  *(undefined4 *)(param_1 + 0x3d80) = param_2;
  *(undefined4 *)(param_1 + 0x3d88) = param_8;
  *(float *)(param_1 + 0x3d8c) = *param_4;
  *(float *)(param_1 + 0x3d90) = param_4[1];
  *(float *)(param_1 + 0x3d94) = param_4[2];
  *(float *)(param_1 + 0x3d98) = *param_5;
  *(float *)(param_1 + 0x3d9c) = param_5[1];
  *(float *)(param_1 + 0x3da0) = param_5[2];
  FUN_00401f00(*param_4,param_6 + param_4[1],param_4[2]);
  *(float *)(param_1 + 0x3dac) = local_1c;
  *(float *)(param_1 + 0x3da4) = local_24;
  *(float *)(param_1 + 0x3da8) = local_20;
  FUN_00401f00(*param_5,param_6 + param_5[1],param_5[2]);
  *(float *)(param_1 + 0x3db0) = local_24;
  *(float *)(param_1 + 0x3db4) = local_20;
  *(float *)(param_1 + 0x3db8) = local_1c;
  *(float *)(param_1 + 0x3dc0) = param_7;
  *(float *)(param_1 + 0x3dbc) = param_6;
  FUN_00401f00(*param_5 - *param_4,param_5[1] - param_4[1],param_5[2] - param_4[2]);
  *(float *)(param_1 + 0x3dc8) = local_20;
  *(float *)(param_1 + 0x3dc4) = local_24;
  *(float *)(param_1 + 0x3dcc) = local_1c;
  fVar2 = SQRT(*(float *)(param_1 + 0x3dcc) * *(float *)(param_1 + 0x3dcc) +
               *(float *)(param_1 + 0x3dc8) * *(float *)(param_1 + 0x3dc8) +
               *(float *)(param_1 + 0x3dc4) * *(float *)(param_1 + 0x3dc4));
  *(float *)(param_1 + 0x3ddc) = fVar2;
  fVar2 = DAT_006e92e8 / fVar2;
  FUN_00401f00(fVar2 * *(float *)(param_1 + 0x3dc4),fVar2 * *(float *)(param_1 + 0x3dc8),
               fVar2 * *(float *)(param_1 + 0x3dcc));
  *(float *)(param_1 + 0x3dd0) = local_24;
  *(float *)(param_1 + 0x3dd4) = local_20;
  *(float *)(param_1 + 0x3dd8) = local_1c;
  uVar3 = FUN_0057d810(param_1 + 0x3d8c,param_1 + 0x3da4,*(undefined4 *)(param_1 + 0x3dc0),
                       param_1 + 0x3df8,10);
  *(undefined4 *)(param_1 + 0x3ee8) = uVar3;
  uVar3 = FUN_0057d810(param_1 + 0x3d98,param_1 + 0x3db0,*(undefined4 *)(param_1 + 0x3dc0),
                       param_1 + 0x3e70,10);
  pfVar1 = (float *)(param_1 + 0x3de0);
  *(undefined4 *)(param_1 + 0x3eec) = uVar3;
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  FUN_00401f00(*param_4 - param_7,param_4[1],param_4[2] - param_7);
  if (local_24 < *pfVar1 != (NAN(local_24) || NAN(*pfVar1))) {
    *pfVar1 = local_24;
  }
  if (local_20 < *(float *)(param_1 + 0x3de4) !=
      (NAN(local_20) || NAN(*(float *)(param_1 + 0x3de4)))) {
    *(float *)(param_1 + 0x3de4) = local_20;
  }
  if (local_1c < *(float *)(param_1 + 0x3de8) !=
      (NAN(local_1c) || NAN(*(float *)(param_1 + 0x3de8)))) {
    *(float *)(param_1 + 0x3de8) = local_1c;
  }
  if (*(float *)(param_1 + 0x3dec) < local_24) {
    *(float *)(param_1 + 0x3dec) = local_24;
  }
  if (*(float *)(param_1 + 0x3df0) < local_20) {
    *(float *)(param_1 + 0x3df0) = local_20;
  }
  if (*(float *)(param_1 + 0x3df4) < local_1c) {
    *(float *)(param_1 + 0x3df4) = local_1c;
  }
  FUN_00401f00(param_7 + *param_4,param_6 + param_4[1],param_7 + param_4[2]);
  FUN_00406af0(&local_24);
  FUN_00480f60(pfVar1);
  uVar3 = FUN_00401f00(param_7,0,param_7);
  uVar3 = FUN_00405080(local_18,param_5,uVar3);
  FUN_00406af0(uVar3);
  uVar3 = FUN_00401f00(param_7,param_6,param_7);
  uVar3 = FUN_00402130(&local_24,param_5,uVar3);
  FUN_00406af0(uVar3);
  *(undefined4 *)(param_1 + 0x43d8) = 1;
  *(undefined4 *)(param_1 + 0x43dc) = 3;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

