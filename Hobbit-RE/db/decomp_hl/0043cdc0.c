
void __fastcall FUN_0043cdc0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_4;
  
  local_4 = 0x3e800000;
  if (*(int *)(param_1 + 0x8dc) == 9) {
    local_4 = 0;
  }
  if (((*(int *)(param_1 + 0x3c0) == 0) && (*(int *)(param_1 + 0x3d0) == 0)) &&
     (*(int *)(param_1 + 0x3b0) == 0)) {
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    pcVar2 = s_sneak_no_weapon_00720548;
  }
  else {
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    pcVar2 = s_sneak_weapon_00720558;
  }
  uVar4 = 1;
  uVar3 = 0;
  uVar1 = FUN_0053cc70(pcVar2);
  FUN_00540840(uVar1,uVar3,uVar4,local_4);
  if (*(int *)(param_1 + 0x5960) != 0) {
    *(undefined4 *)(param_1 + 0x798) = 0x3eaa7efa;
  }
  FUN_004430e0(2);
  *(undefined4 *)(param_1 + 0x9c0) = 0;
  *(undefined4 *)(param_1 + 0x5ec0) = 1;
  return;
}

