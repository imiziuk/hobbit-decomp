
void __fastcall FUN_00448ba0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar4 = 0x3e000000;
  uVar3 = 1;
  uVar2 = 0;
  uVar1 = FUN_0053cc70(s_PUSH_BLOCK_INTO_IDLE_007205b4);
  FUN_00540840(uVar1,uVar2,uVar3,uVar4);
  FUN_004430e0(2);
  *(undefined4 *)(param_1 + 0xa60) = 0;
  *(undefined4 *)(param_1 + 0xa64) = 0;
  *(undefined4 *)(param_1 + 0xa68) = 0;
  *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 0x3c0);
  uVar1 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x3c8);
  uVar2 = *(undefined4 *)(param_1 + 0x3b0);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x3d0);
  uVar3 = *(undefined4 *)(param_1 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3b8) = uVar2;
  *(undefined4 *)(param_1 + 0x3bc) = uVar3;
  return;
}

