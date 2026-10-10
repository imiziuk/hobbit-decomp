
undefined4 __thiscall
FUN_006a6660(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = thunk_FUN_006a2f20(param_2,param_3,param_4,param_5,param_6);
  *(undefined4 *)(param_1 + 0xa0) = 0xd2;
  *(undefined1 *)(param_1 + 0x167) = 0;
  *(undefined1 *)(param_1 + 0x166) = 0;
  *(undefined1 *)(param_1 + 0x165) = 0;
  *(undefined1 *)(param_1 + 0x164) = 0;
  uVar2 = FUN_0069f520(s_frame_00755b0c);
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  uVar2 = FUN_0069f520(s_sb_arrowdown_00755a08);
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  uVar2 = FUN_0069f520(s_sb_arrowup_007559e8);
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  uVar2 = FUN_0069f520(s_sb_container_007559c0);
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  uVar2 = FUN_0069f520(s_sb_thumb_007559a0);
  *(undefined4 *)(param_1 + 0xfc) = uVar2;
  iVar3 = FUN_0069fcb0(0);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(int *)(param_1 + 0x154) = iVar3;
  *(undefined4 *)(param_1 + 0xe8) = 1;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(int *)(param_1 + 0x15c) = ((*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48)) + -8) / iVar3;
  return uVar1;
}

