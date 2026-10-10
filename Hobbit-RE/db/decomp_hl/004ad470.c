
void __thiscall
FUN_004ad470(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar8 = 1;
  uVar7 = 0xffffffff;
  uVar6 = 0;
  uVar5 = 1;
  uVar4 = 0;
  uVar3 = param_4;
  FUN_00425250(&param_7);
  FUN_00493c70(param_2,param_3,param_4,uVar3,uVar4,param_5,uVar5,uVar6,uVar7,uVar8);
  *(undefined4 *)(param_1 + 0x11c) = param_6;
  *(undefined4 *)(param_1 + 0x118) = param_6;
  uVar1 = param_7 >> 0x10 & 0xff;
  uVar2 = param_7 >> 8 & 0xff;
  *(float *)(param_1 + 0x120) = (float)uVar1;
  *(float *)(param_1 + 0x124) = (float)uVar2;
  *(float *)(param_1 + 0x128) = (float)(param_7 & 0xff);
  *(float *)(param_1 + 300) = (float)(param_7 >> 0x18);
  *(float *)(param_1 + 0x130) = (float)(int)((param_8 >> 0x10 & 0xff) - uVar1);
  *(float *)(param_1 + 0x134) = (float)(int)((param_8 >> 8 & 0xff) - uVar2);
  *(float *)(param_1 + 0x138) = (float)(int)((param_8 & 0xff) - (param_7 & 0xff));
  *(float *)(param_1 + 0x13c) = (float)(int)((param_8 >> 0x18) - (param_7 >> 0x18));
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) & 0xfe;
  return;
}

