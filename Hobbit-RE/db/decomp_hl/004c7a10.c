
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c7a10(float *param_1,undefined4 param_2,undefined4 param_3,char *param_4,char *param_5,
                 undefined4 param_6,int param_7,char param_8,int param_9,int param_10)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((*param_4 != '\0') && (*param_5 != '\0')) {
    uVar3 = FUN_0054bad0(5,0,0);
    piVar1 = (int *)FUN_004021c0(uVar3);
    FUN_00401f00(*param_1 - _DAT_006e998c,param_1[1] - _DAT_006e998c,param_1[2] - _DAT_006e998c);
    local_18 = local_30;
    local_14 = local_2c;
    local_10 = local_28;
    local_30 = 0x41c80000;
    local_2c = 0x41c80000;
    local_28 = 0x41c80000;
    uVar2 = FUN_00402130(&local_24,param_1,&local_30);
    FUN_004357e0(uVar2);
    uVar10 = 0;
    uVar9 = 1;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar2 = extraout_ECX;
    FUN_00425250(&param_7);
    FUN_004c08b0(param_1,param_2,param_3,&local_18,uVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10)
    ;
    (**(code **)(*piVar1 + 0xd0))(param_4);
    FUN_004c7010(param_5);
    *(undefined4 *)(piVar1[0x50] + 0x90) = 0;
    *(undefined4 *)(piVar1[0x50] + 0x94) = 1;
    *(undefined4 *)(piVar1[0x50] + 0x80) = 0x3f800000;
    FUN_004c7660(param_5);
    *(byte *)((int)piVar1 + 0x15d) =
         (param_8 << 6 ^ *(byte *)((int)piVar1 + 0x15d)) & 0x40 ^ *(byte *)((int)piVar1 + 0x15d);
    *(undefined1 *)((int)piVar1 + 0x85) = param_6._3_1_;
    *(undefined1 *)(piVar1 + 0x21) = param_6._2_1_;
    *(undefined1 *)((int)piVar1 + 0x83) = param_6._1_1_;
    *(undefined1 *)((int)piVar1 + 0x82) = (undefined1)param_6;
    *(byte *)((int)piVar1 + 0x15b) = *(byte *)((int)piVar1 + 0x15b) | 0x80;
    *(byte *)((int)piVar1 + 0x15e) = (param_7 == 0) - 1U & 2;
    piVar1[0x54] = param_9;
    piVar1[0x55] = param_10;
    (**(code **)(*piVar1 + 0x100))();
    (**(code **)(*piVar1 + 0x124))();
    FUN_004ab3e0(0);
    FUN_004ab450(0);
    return;
  }
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_00488d30(s_FireBatImpact_0072c14c,param_1,&local_24,&local_30);
  FUN_00659630(s_GoblinBagExplosion_0072c31c,param_1,1);
  return;
}

