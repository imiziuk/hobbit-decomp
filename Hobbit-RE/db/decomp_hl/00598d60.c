
void __fastcall FUN_00598d60(int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd4a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__UpdateNavState_0074321c);
  local_4 = 0;
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 1:
    FUN_00598e50();
    break;
  case 2:
    FUN_005996d0();
    break;
  case 3:
  case 5:
    FUN_00598e30();
    break;
  case 4:
    FUN_005999c0();
    break;
  case 6:
    FUN_00599200();
    break;
  case 7:
    FUN_005993f0();
    break;
  default:
    uVar1 = FUN_00595ad0();
    *(undefined4 *)(param_1 + 0x230) = uVar1;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

