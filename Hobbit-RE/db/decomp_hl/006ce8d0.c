
void __thiscall FUN_006ce8d0(int param_1,uint param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_006e86d8;
  pvStack_c = ExceptionList;
  puVar1 = (uint *)(param_1 + 4);
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  *puVar1 = (*puVar1 & 0x7fffffff ^ (param_2 * 2 ^ param_2) & 0x7fffffff ^ param_2 * 2) & 0x7fffffff
            ^ *puVar1 & 0x7fffffff;
  FUN_005492b0(puVar1,0);
  if ((int)param_2 < 0) {
    FUN_00549470(puVar1);
  }
  uVar2 = FUN_00549620(&param_2);
  FUN_00549670(puVar1,uVar2);
  uStack_4 = 0xffffffff;
  FUN_00549580(&param_2);
  FUN_00549350(&param_2);
  ExceptionList = pvStack_c;
  return;
}

