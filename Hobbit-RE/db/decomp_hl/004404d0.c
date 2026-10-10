
void __fastcall FUN_004404d0(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x48c) = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_00442560(&local_c,0);
  return;
}

