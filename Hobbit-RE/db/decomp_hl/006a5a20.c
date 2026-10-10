
undefined4 __thiscall
FUN_006a5a20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = thunk_FUN_006a2f20(param_2,param_3,param_4,param_5,param_6);
  uVar2 = FUN_0069f520(s_slider_bar_00755a78);
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  uVar2 = FUN_0069f520(s_slider_thumb_00755a50);
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x110) = 100;
  *(undefined4 *)(param_1 + 0x114) = 10;
  *(undefined4 *)(param_1 + 0x118) = 1;
  *(undefined4 *)(param_1 + 0x11c) = 1;
  return uVar1;
}

