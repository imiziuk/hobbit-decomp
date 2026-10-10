
void __fastcall FUN_00442070(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((*(int *)(param_1 + 0x3c0) == 0) && (*(int *)(param_1 + 0x3d0) == 0)) &&
     (*(int *)(param_1 + 0x3b0) == 0)) {
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    pcVar2 = s_IDLE_NO_WEAPON_007207fc;
  }
  else {
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    pcVar2 = s_IDLE_WEAPON_00720114;
  }
  uVar5 = 0x3e800000;
  uVar4 = 1;
  uVar3 = 0;
  uVar1 = FUN_0053cc70(pcVar2);
  FUN_00540840(uVar1,uVar3,uVar4,uVar5);
  *(undefined4 *)(param_1 + 0x7b0) = 0x49742400;
  *(undefined4 *)(param_1 + 0x75c) = 0;
  *(undefined4 *)(param_1 + 0x758) = 0;
  *(undefined4 *)(param_1 + 0x754) = 0;
  FUN_004430e0(2);
  FUN_004300c0();
  return;
}

