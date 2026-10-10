
void __thiscall FUN_005f7960(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_50 [4];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2aa0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_50,s_Item_d_00748538,*(undefined4 *)(param_1 + 4));
  puVar3 = local_4c;
  local_4 = 0;
  uVar2 = FUN_00649940(puVar3);
  uVar1 = param_2;
  FUN_00640480(uVar2,puVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_Amount_d_0074852c,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0x38;
  local_4 = 1;
  uVar2 = FUN_00649940(param_1);
  FUN_00640450(uVar2,param_1);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_0064a2e0(local_4c);
  FUN_005f1cf0(uVar1);
  ExceptionList = local_c;
  return;
}

