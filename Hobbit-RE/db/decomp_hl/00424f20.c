
void __fastcall FUN_00424f20(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  puStack_28 = local_10;
  puStack_2c = local_1c;
  param_1[0x49] = 2;
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1 + 5,0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x14))(&puStack_2c,0);
    FUN_00442550(1);
  }
  FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_007200c0,0x12af);
  if (((param_1[0xf0] == 0) && (param_1[0xf4] == 0)) && (param_1[0xec] == 0)) {
    FUN_00549470(param_1 + 0x115);
    FUN_00549580(param_1 + 0x115);
    pcVar3 = s_IDLE_NO_WEAPON_007207fc;
  }
  else {
    FUN_00549470(param_1 + 0x115);
    FUN_00549580(param_1 + 0x115);
    pcVar3 = s_IDLE_WEAPON_00720114;
  }
  uVar6 = 0x3e000000;
  uVar5 = 1;
  uVar4 = 0;
  uVar2 = FUN_0053cc70(pcVar3);
  FUN_00540840(uVar2,uVar4,uVar5,uVar6);
  return;
}

