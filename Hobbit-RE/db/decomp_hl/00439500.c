
void __fastcall FUN_00439500(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar5 = 0x3e000000;
  uVar4 = 1;
  uVar3 = 1;
  uVar2 = FUN_0053cc70(s_ladder_dismount_00723d5c);
  FUN_00540840(uVar2,uVar3,uVar4,uVar5);
  iVar1 = *(int *)(param_1 + 0x450);
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(iVar1 + 0xfc);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(iVar1 + 0x100);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(iVar1 + 0x104);
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  FUN_004430e0(0x10);
  return;
}

