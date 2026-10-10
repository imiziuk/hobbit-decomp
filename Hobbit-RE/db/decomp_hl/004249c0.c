
void __thiscall FUN_004249c0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x8d4) != 0x1e) {
    FUN_00402d40(param_2);
    *(undefined4 *)(param_1 + 0x580) = 1;
    *(undefined4 *)(param_1 + 0x590) = 1;
    *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
    *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
    *(undefined4 *)(param_1 + 0x474) = 0;
    FUN_0043a3f0(0x1e,s_C__projects_meridian_Support_Obj_007200c0,0x1215);
  }
  return;
}

