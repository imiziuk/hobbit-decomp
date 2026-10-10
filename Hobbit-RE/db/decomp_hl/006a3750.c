
undefined4 __thiscall
FUN_006a3750(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = thunk_FUN_006a2f20(param_2,param_3,param_4,param_5,param_6);
  uVar2 = FUN_0069f520(s_frame_00755b0c);
  *(undefined4 *)(param_1 + 0x134) = uVar2;
  *(undefined1 *)(param_1 + 0x13b) = 0;
  *(undefined1 *)(param_1 + 0x13a) = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  if ((*(uint *)(param_1 + 0x2c) & 0x10000) != 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffeffff;
  }
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  return uVar1;
}

