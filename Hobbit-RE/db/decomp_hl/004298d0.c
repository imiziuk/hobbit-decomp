
void __fastcall FUN_004298d0(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_004430e0(2);
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  fVar2 = DAT_006e92e4;
  *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x798) = 0x3f800000;
  iVar1 = param_1 + 0x454;
  if (*(float *)(param_1 + 0x608) <= fVar2) {
    if (*(int *)(param_1 + 0x3d0) == 0) {
      FUN_00549470(iVar1);
      FUN_00549580(iVar1);
      pcVar4 = s_STING_TARG_LEFT_ATTACK_00720c94;
    }
    else {
      FUN_00549470(iVar1);
      FUN_00549580(iVar1);
      pcVar4 = s_STAFF_TARG_LEFT_ATTACK_00720cac;
    }
  }
  else if (*(int *)(param_1 + 0x3d0) == 0) {
    FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    pcVar4 = s_STING_TARG_RIGHT_ATTACK_00720cc4;
  }
  else {
    FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    pcVar4 = s_STAFF_TARG_RIGHT_ATTACK_00720cdc;
  }
  uVar7 = 0;
  uVar6 = 1;
  uVar5 = 0;
  uVar3 = FUN_0053cc70(pcVar4);
  FUN_00540840(uVar3,uVar5,uVar6,uVar7);
  FUN_00425e90(1);
  *(undefined4 *)(param_1 + 0x5ec0) = 1;
  return;
}

