
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00582ea0(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_4c;
  undefined4 local_48;
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
  undefined1 local_1c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc11b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_lighting_mgr__GetEffectiveLights_00740710);
  local_4 = 0;
  if (param_3[0x17] == 1) {
    *(undefined1 *)((int)param_3 + 0x57) = *(undefined1 *)((int)param_3 + 0x5b);
    *(undefined1 *)((int)param_3 + 0x56) = *(undefined1 *)((int)param_3 + 0x5a);
    *(undefined1 *)((int)param_3 + 0x55) = *(undefined1 *)((int)param_3 + 0x59);
    *(undefined1 *)(param_3 + 0x15) = *(undefined1 *)(param_3 + 0x16);
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  else {
    FUN_0064cc00();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_64 = *param_2;
    local_60 = param_2[1];
    local_5c = param_2[2];
    pfVar1 = param_2 + 3;
    FUN_004357e0(pfVar1);
    local_70 = param_3 + 3;
    local_6c = 8;
    local_4c = param_5;
    local_68 = 0;
    local_48 = param_6;
    FUN_00401f00(*pfVar1 + *param_2,param_2[4] + param_2[1],param_2[5] + param_2[2]);
    FUN_00402160(&local_7c,local_18,0x3f000000);
    local_2c = local_78;
    local_20 = param_7;
    local_28 = local_74;
    DAT_00740624 = DAT_00740624 + 1;
    local_30 = local_7c;
    local_34 = 0;
    local_24 = 1;
    local_1c = param_8;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    FUN_0058a630(param_2,FUN_00582c00,&local_70);
    uVar2 = local_68;
    FUN_005822d0();
    *(undefined1 *)((int)param_3 + 0x57) = 0;
    uVar3 = __ftol();
    *(undefined1 *)((int)param_3 + 0x56) = uVar3;
    uVar3 = __ftol();
    *(undefined1 *)((int)param_3 + 0x55) = uVar3;
    uVar3 = __ftol();
    *(undefined1 *)(param_3 + 0x15) = uVar3;
    *(char *)((int)param_3 + 0x5b) = (char)((uint)param_4 >> 0x18);
    *(char *)((int)param_3 + 0x5a) = (char)((uint)param_4 >> 0x10);
    *(char *)((int)param_3 + 0x59) = (char)((uint)param_4 >> 8);
    *(char *)(param_3 + 0x16) = (char)param_4;
    *param_3 = uVar2;
    param_3[0xf] = *param_2;
    param_3[0x10] = param_2[1];
    param_3[0x11] = param_2[2];
    param_3[0x12] = *pfVar1;
    param_3[0x13] = param_2[4];
    param_3[0x14] = param_2[5];
    FUN_00582340();
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  ExceptionList = local_c;
  return;
}

