
void __fastcall FUN_00542230(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d93ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_char_anim_player__UpdateCachedL2_00737d5c);
  local_4 = 0;
  if (*(int *)(param_1 + 300) == 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(param_1 + 0x130) == 0) {
    iVar1 = FUN_00549470(param_1);
    FUN_00549580(param_1);
    uVar2 = thunk_FUN_0064ff70(*(int *)(iVar1 + 0x4c) << 6,
                               s_C__projects_meridian_Support_Ani_00737d80,0x237);
    *(undefined4 *)(param_1 + 0x130) = uVar2;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
  local_1c = 0;
  local_2c = 0;
  local_3c = 0;
  local_18 = 0;
  local_28 = 0;
  local_48 = 0;
  local_14 = 0;
  local_34 = 0;
  local_44 = 0;
  local_20 = 0;
  local_30 = 0;
  local_40 = 0;
  local_4c = 0x3f800000;
  local_38 = 0x3f800000;
  local_24 = 0x3f800000;
  local_10 = 0x3f800000;
  FUN_005415b0(&DAT_007670d0);
  FUN_00549470(param_1);
  FUN_00549580(param_1);
  FUN_0053cd20(&local_4c,&DAT_007670d0,*(undefined4 *)(param_1 + 0x130));
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

