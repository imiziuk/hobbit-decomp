
void __fastcall FUN_00429a60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00434cf0(0xa7);
  FUN_004430e0(2);
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar4 = 0x3e000000;
  uVar3 = 1;
  uVar2 = 0;
  uVar1 = FUN_0053cc70(s_STONE_ATTACK_00720cf4);
  FUN_00540840(uVar1,uVar2,uVar3,uVar4);
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  *(undefined4 *)(param_1 + 0xa08) = 0;
  FUN_00425e90(5);
  return;
}

