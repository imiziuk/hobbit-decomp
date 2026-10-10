
void __thiscall FUN_005433a0(int *param_1,uint param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_006d9472;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x28))();
  puVar1 = (uint *)(param_1 + 1);
  *puVar1 = (param_1[1] & 0x7fffffffU ^ (param_2 * 2 ^ param_2) & 0x7fffffff ^ param_2 * 2) &
            0x7fffffff ^ param_1[1] & 0x7fffffffU;
  FUN_005492b0(puVar1,0);
  if ((int)param_2 < 0) {
    FUN_00549470(puVar1);
  }
  uVar2 = FUN_00549620(&param_2);
  FUN_00549670(puVar1,uVar2);
  iVar3 = FUN_00549470(puVar1);
  FUN_00549580(puVar1);
  if (param_1[10] == 0) {
    pvVar4 = operator_new(*(int *)(iVar3 + 0x4c) * 0x28);
    param_1[10] = (int)pvVar4;
  }
  (**(code **)(*param_1 + 8))();
  uStack_4 = 0xffffffff;
  FUN_00549580(&param_2);
  FUN_00549350(&param_2);
  ExceptionList = pvStack_c;
  return;
}

