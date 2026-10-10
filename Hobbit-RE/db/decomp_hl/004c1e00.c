
void __thiscall FUN_004c1e00(int *param_1,uint param_2)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_006d47d8;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004d1cb0();
  puVar1 = (uint *)(param_1 + 0x2f);
  *puVar1 = (param_1[0x2f] & 0x7fffffffU ^ (param_2 * 2 ^ param_2) & 0x7fffffff ^ param_2 * 2) &
            0x7fffffff ^ param_1[0x2f] & 0x7fffffffU;
  FUN_005492b0(puVar1,0);
  if ((int)param_2 < 0) {
    FUN_00549470(puVar1);
  }
  uVar3 = FUN_00549620(&param_2);
  FUN_00549670(puVar1,uVar3);
  if (((char)param_1[0x1f] == '\x05') || ((char)param_1[0x1f] == '\x06')) {
    uVar2 = (**(code **)(*param_1 + 0x104))();
    *(undefined2 *)(param_1 + 0x49) = uVar2;
  }
  else {
    *(undefined2 *)(param_1 + 0x49) = 0;
  }
  FUN_004d1e90();
  uStack_4 = 0xffffffff;
  FUN_00549580(&param_2);
  FUN_00549350(&param_2);
  ExceptionList = pvStack_c;
  return;
}

