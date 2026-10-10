
void __fastcall FUN_00429c60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = param_1 + 0x454;
  *(undefined4 *)(param_1 + 0x794) = 0x40800000;
  if (*(int *)(param_1 + 0x3d0) == 0) {
    FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    uVar6 = 0;
    pcVar3 = s_STING_JUMP_STRIKE_00720d04;
  }
  else {
    FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    uVar6 = 0x3e800000;
    pcVar3 = s_STAFF_JUMP_STRIKE_00720d18;
  }
  uVar5 = 1;
  uVar4 = 0;
  uVar2 = FUN_0053cc70(pcVar3);
  FUN_00540840(uVar2,uVar4,uVar5,uVar6);
  FUN_004430e0(3);
  FUN_00425e90(1);
  *(undefined4 *)(param_1 + 0x758) = 0x43480000;
  FUN_004300c0();
  return;
}

