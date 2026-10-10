
void __fastcall FUN_004419d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00434cf0(0xac);
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = FUN_0053cc70(s_mine_cart_swing_00724328);
  FUN_00540840(uVar1,uVar2,uVar3,uVar4);
  FUN_00659600(s_StingSwingSwoosh_0072095c,1);
  FUN_004430e0(0);
  *(undefined4 *)(param_1 + 0x3c0) = 1;
  *(undefined4 *)(param_1 + 0x3c8) = 1;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  FUN_00423c90(0,0);
  FUN_004060e0();
  return;
}

