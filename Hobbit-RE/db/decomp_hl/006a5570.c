
undefined4 __thiscall
FUN_006a5570(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = thunk_FUN_006a2f20(param_2,param_3,param_4,param_5,param_6);
  uVar2 = FUN_0069f520(s_button_check_00755a30);
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  return uVar1;
}

