
undefined4 *
FUN_00688a83(undefined4 *param_1,float *param_2,int param_3,undefined4 *param_4,float *param_5,
            int param_6,float *param_7)

{
  undefined4 uVar1;
  undefined1 local_c4 [64];
  undefined1 local_84 [64];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_4 == (undefined4 *)0x0) {
    FUN_00688a2f(param_1);
  }
  else if (param_3 == 0) {
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = *param_4;
    param_1[5] = param_4[1];
    uVar1 = param_4[2];
    param_1[0xf] = 0x3f800000;
    param_1[10] = uVar1;
  }
  else {
    local_c = 0;
    local_44 = *param_4;
    local_10 = 0;
    local_30 = param_4[1];
    local_14 = 0;
    local_1c = param_4[2];
    local_18 = 0;
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_8 = 0x3f800000;
    FUN_0068894d(local_84,param_3);
    if (param_2 == (float *)0x0) {
      FUN_006888e0(param_1,local_84);
      FUN_006887fd(param_1,param_1,&local_44);
      FUN_006887fd(param_1,param_1,local_84);
    }
    else {
      FUN_006888e0(local_c4,local_84);
      FUN_00688a2f(param_1);
      param_1[0xc] = (float)param_1[0xc] - *param_2;
      param_1[0xd] = (float)param_1[0xd] - param_2[1];
      param_1[0xe] = (float)param_1[0xe] - param_2[2];
      FUN_006887fd(param_1,param_1,local_c4);
      FUN_006887fd(param_1,param_1,&local_44);
      FUN_006887fd(param_1,param_1,local_84);
      param_1[0xc] = (float)param_1[0xc] + *param_2;
      param_1[0xd] = param_2[1] + (float)param_1[0xd];
      param_1[0xe] = param_2[2] + (float)param_1[0xe];
    }
  }
  if (param_6 != 0) {
    FUN_0068894d(local_84,param_6);
    if (param_5 == (float *)0x0) {
      FUN_006887fd(param_1,param_1,local_84);
    }
    else {
      param_1[0xc] = (float)param_1[0xc] - *param_5;
      param_1[0xd] = (float)param_1[0xd] - param_5[1];
      param_1[0xe] = (float)param_1[0xe] - param_5[2];
      FUN_006887fd(param_1,param_1,local_84);
      param_1[0xc] = (float)param_1[0xc] + *param_5;
      param_1[0xd] = (float)param_1[0xd] + param_5[1];
      param_1[0xe] = (float)param_1[0xe] + param_5[2];
    }
  }
  if (param_7 != (float *)0x0) {
    param_1[0xc] = (float)param_1[0xc] + *param_7;
    param_1[0xd] = param_7[1] + (float)param_1[0xd];
    param_1[0xe] = param_7[2] + (float)param_1[0xe];
  }
  return param_1;
}

