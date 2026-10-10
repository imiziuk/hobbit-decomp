
void __thiscall FUN_00579a60(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbcb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_ApplyCollMesh_00740384);
  local_4 = 0;
  switch(*(undefined4 *)(param_1 + 0x3d48)) {
  case 1:
    FUN_0057de30(param_2);
    break;
  case 2:
  case 3:
    FUN_0057f800(param_2);
    break;
  case 4:
  case 5:
  case 6:
    FUN_0057f2e0(param_2);
    break;
  case 7:
    FUN_005a4350();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

