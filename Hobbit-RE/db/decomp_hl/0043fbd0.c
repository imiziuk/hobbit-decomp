
void __fastcall FUN_0043fbd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_00434cf0(0xa9);
  FUN_00446eb0();
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar5 = 0x3e000000;
  uVar4 = 1;
  uVar3 = 1;
  uVar2 = FUN_0053cc70(s_POLE_PLANT_007242a0);
  FUN_00540840(uVar2,uVar3,uVar4,uVar5);
  iVar1 = *(int *)(param_1 + 0x450);
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(iVar1 + 0x130);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(iVar1 + 0x134);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(iVar1 + 0x138);
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x798) = DAT_00723dac;
  FUN_004430e0(0xf);
  *(undefined4 *)(param_1 + 0x9c4) = 0;
  *(undefined4 *)(param_1 + 0x5ec0) = 0;
  *(undefined4 *)(param_1 + 0x466c) = 0x3e800000;
  return;
}

