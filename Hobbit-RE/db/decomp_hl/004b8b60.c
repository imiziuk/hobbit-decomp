
void __fastcall FUN_004b8b60(int *param_1)

{
  undefined4 *puVar1;
  float fStack_80;
  float local_7c [2];
  float afStack_74 [3];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float afStack_5c [4];
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
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10 [4];
  
  if ((param_1[0x58] != 0) && (-1 < param_1[0x59])) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_1c = 0;
    local_2c = 0;
    local_3c = 0;
    local_18 = 0;
    local_28 = 0;
    local_48 = 0;
    local_14 = 0;
    local_34 = 0;
    local_44 = 0;
    local_20 = 0;
    local_30 = 0;
    local_40 = 0;
    local_4c = 0x3f800000;
    local_38 = 0x3f800000;
    local_24 = 0x3f800000;
    local_10[0] = 0x3f800000;
    FUN_004d1ff0(local_7c,&local_4c);
    (**(code **)(*param_1 + 0x118))(&local_4c);
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    FUN_00405080(afStack_5c,afStack_74,&fStack_80);
    puVar1 = (undefined4 *)FUN_0041b9f0(local_10,&uStack_68);
    uStack_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    FUN_0041b9f0(local_10,&stack0xffffff74);
    FUN_004357e0(&uStack_68);
    FUN_005c1f90(param_1[0x59]);
  }
  return;
}

