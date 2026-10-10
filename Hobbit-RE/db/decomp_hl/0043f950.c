
void __fastcall FUN_0043f950(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar4 = 0x3e000000;
  uVar3 = 1;
  uVar2 = 1;
  uVar1 = FUN_0053cc70(s_edge_pullup_00724294);
  FUN_00540840(uVar1,uVar2,uVar3,uVar4);
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0x42480000;
  *(undefined4 *)(param_1 + 0x48c) = 0xc1200000;
  *(undefined4 *)(param_1 + 0x79c) = 0x3f8ccccd;
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  FUN_004430e0(0xb);
  return;
}

