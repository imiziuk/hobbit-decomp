
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00440de0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_0064e870(6,s__________BILBO_DIED_____R_I_P__B_007242b0,(double)*(float *)(param_1 + 0x14),
               (double)*(float *)(param_1 + 0x18),(double)*(float *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x5ec0) = 0;
  FUN_00427270();
  FUN_00425a80();
  FUN_00549470();
  FUN_00549580();
  uVar3 = 0x3e00000000000001;
  uVar2 = 0;
  uVar1 = FUN_0053cc70(s_DEATH_00723ebc);
  FUN_00540840(uVar1,uVar2,uVar3);
  *(undefined4 *)(param_1 + 0x794) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  FUN_004430e0();
  FUN_0051fd20();
  FUN_0052da20();
  _DAT_00763ed4 = 1;
  FUN_0041c2b0();
  return;
}

