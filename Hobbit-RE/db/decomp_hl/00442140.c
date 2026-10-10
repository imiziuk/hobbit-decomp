
void __fastcall FUN_00442140(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piStack_18;
  
  if (((*(int *)(param_1 + 0x3c0) == 0) && (*(int *)(param_1 + 0x3d0) == 0)) &&
     (*(int *)(param_1 + 0x3b0) == 0)) {
    piStack_18 = (int *)(param_1 + 0x454);
    FUN_00549470();
    piStack_18 = (int *)(param_1 + 0x454);
    FUN_00549580();
    pcVar3 = s_IDLE_NO_WEAPON_007207fc;
  }
  else {
    piStack_18 = (int *)(param_1 + 0x454);
    FUN_00549470();
    piStack_18 = (int *)(param_1 + 0x454);
    FUN_00549580();
    pcVar3 = s_IDLE_WEAPON_00720114;
  }
  piStack_18 = (int *)0x3e800000;
  uVar4 = 1;
  uVar5 = 0;
  uVar2 = FUN_0053cc70(pcVar3);
  FUN_00540840(uVar2,uVar5,uVar4);
  piVar1 = (int *)(param_1 + 0x5ac);
  piStack_18 = piVar1;
  FUN_00541cc0(1);
  FUN_004258d0(&piStack_18);
  (**(code **)(*piVar1 + 4))();
  FUN_00549470(param_1 + 0x5b0);
  FUN_00549580(param_1 + 0x5b0);
  uVar5 = 0x3f400000;
  uVar2 = FUN_0053cc70(s_conversation_007200f8);
  FUN_005434b0(uVar2,uVar5);
  (**(code **)(*piVar1 + 0x10))(0x3f800000);
  *(undefined4 *)(param_1 + 0x7b0) = 0x49742400;
  *(undefined4 *)(param_1 + 0x75c) = 0;
  *(undefined4 *)(param_1 + 0x758) = 0;
  *(undefined4 *)(param_1 + 0x754) = 0;
  FUN_004430e0(2);
  FUN_004300c0();
  return;
}

