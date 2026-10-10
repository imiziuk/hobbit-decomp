
undefined4 __thiscall
FUN_006a4020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = thunk_FUN_006a2f20(param_2,param_3,param_4,param_5,param_6);
  *(undefined4 *)(param_1 + 0xa0) = 0x292;
  *(undefined1 *)(param_1 + 0x187) = 0;
  *(undefined1 *)(param_1 + 0x186) = 0;
  *(undefined1 *)(param_1 + 0x185) = 0;
  *(undefined1 *)(param_1 + 0x184) = 0;
  uVar2 = FUN_0069f520(s_frame_00755b0c);
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  uVar2 = FUN_0069f520(s_sb_arrowdown_00755a08);
  *(undefined4 *)(param_1 + 0xfc) = uVar2;
  uVar2 = FUN_0069f520(s_sb_arrowup_007559e8);
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  uVar2 = FUN_0069f520(s_sb_container_007559c0);
  *(undefined4 *)(param_1 + 0x104) = uVar2;
  uVar2 = FUN_0069f520(s_sb_thumb_007559a0);
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0xe8) = 1;
  *(undefined4 *)(param_1 + 0xec) = 1;
  *(undefined4 *)(param_1 + 0xf0) = 1;
  *(undefined4 *)(param_1 + 0xf4) = 1;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
  iVar3 = (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48)) + -8;
  *(int *)(param_1 + 0x180) = (int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  return uVar1;
}

