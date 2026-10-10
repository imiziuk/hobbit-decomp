
void __fastcall FUN_00427390(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x5efc) != -1) {
    FUN_00549470(param_1 + 0x5ef8);
    FUN_00549580(param_1 + 0x5ef8);
    iVar1 = FUN_0053cc70(s_damage_poison_00720b7c);
    if (*(int *)(param_1 + 0x5efc) == iVar1) {
      (**(code **)(*(int *)(param_1 + 0x5ef4) + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x658) = 0;
  FUN_00434cf0(0xa2);
  *(undefined4 *)(param_1 + 0x794) = 0x3ff33333;
  iVar2 = FUN_00647b10(0,1);
  iVar1 = param_1 + 0x454;
  if (iVar2 == 0) {
    FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    pcVar4 = s_L2R_swing_start_00720b8c;
  }
  else {
    FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    pcVar4 = s_R2L_swing_start_00720b9c;
  }
  uVar7 = 0;
  uVar6 = 1;
  uVar5 = 0;
  uVar3 = FUN_0053cc70(pcVar4);
  FUN_00540840(uVar3,uVar5,uVar6,uVar7);
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x9fc) = 0;
  *(undefined4 *)(param_1 + 0xa00) = 0;
  *(undefined4 *)(param_1 + 0x798) = 0x3f800000;
  FUN_00425e90(1);
  FUN_004430e0(2);
  *(undefined4 *)(param_1 + 0x5ec0) = 0;
  return;
}

