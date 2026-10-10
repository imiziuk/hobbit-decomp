
int __fastcall FUN_00577640(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbba4;
  local_c = ExceptionList;
  iVar1 = 0x10;
  ExceptionList = &local_c;
  do {
    FUN_0057dd60();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_0064cbe0();
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  FUN_006a1cb0();
  local_4 = 0;
  FUN_006a1cb0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_006a1cb0();
  local_4 = 2;
  iVar1 = param_1 + 0x528;
  iVar2 = 0x100;
  do {
    FUN_00401080(iVar1,0xc,3,FUN_0041def0);
    iVar1 = iVar1 + 0x38;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x3d2c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x3d30) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x3d34) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x3d38) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x3d3c) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x3d40) = 0xff7fffff;
  iVar1 = 2;
  do {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 2;
  do {
    FUN_00577830();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = param_1 + 0x40bc;
  iVar2 = 2;
  do {
    FUN_00401080(iVar1,0x10,0x10,FUN_0041def0);
    iVar1 = iVar1 + 0x104;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_005778a0();
  FUN_0064cc30();
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined2 *)(param_1 + 0x3d44) = 0;
  ExceptionList = local_c;
  return param_1;
}

