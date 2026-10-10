
void __thiscall
FUN_00579b90(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbcf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_ApplyTriangle_007403ac);
  uVar1 = *(undefined4 *)(param_1 + 0x42d8);
  uVar2 = *(undefined4 *)(param_1 + 0x42dc);
  local_4 = 0;
  switch(*(undefined4 *)(param_1 + 0x3d48)) {
  case 1:
    local_30 = *param_2;
    local_2c = param_2[1];
    local_28 = param_2[2];
    local_24 = *param_3;
    local_20 = param_3[1];
    local_1c = param_3[2];
    local_18 = *param_4;
    local_14 = param_4[1];
    local_10 = param_4[2];
    FUN_0057ae50(&local_30,uVar1,uVar2,param_7);
    break;
  case 2:
  case 3:
    FUN_0057c770(param_2,param_3,param_4,uVar1,uVar2,param_7);
    break;
  case 4:
  case 5:
  case 6:
    FUN_0057cb20(param_2,param_3,param_4,uVar1,uVar2,param_7);
    break;
  case 7:
    FUN_0057cdf0(param_2,param_3,param_4,uVar1,uVar2,param_7);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

