
undefined4 __thiscall FUN_005bb840(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_0041bcd0();
  if (((lVar1 == CONCAT44(param_3,param_2)) && (*(int *)(param_4 + 0x28) != 3)) &&
     (*(int *)(param_4 + 0x28) != 6)) {
    *(undefined4 *)(param_1 + 0x88) = 0x43480000;
  }
  return 0;
}

