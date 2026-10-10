
void __thiscall FUN_00422980(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x44c) = 1;
  *(int *)(param_1 + 0x414) = param_2;
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x8d4) != 0x28) {
      FUN_0043a3f0(0x20,s_C__projects_meridian_Support_Obj_007200c0,0xefa);
    }
    FUN_0041c2b0(0);
    FUN_0064e870(6,s_CINEMA__Bilbo_Input_set_FALSE_00720630);
  }
  return;
}

