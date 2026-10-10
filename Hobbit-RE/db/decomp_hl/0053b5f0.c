
void __thiscall FUN_0053b5f0(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d90dd;
  local_c = ExceptionList;
  puVar1 = (uint *)(param_1 + 1);
  local_4 = 0;
  ExceptionList = &local_c;
  *puVar1 = (param_1[1] & 0x7fffffffU ^ (param_2 * 2 ^ param_2) & 0x7fffffff ^ param_2 * 2) &
            0x7fffffff ^ param_1[1] & 0x7fffffffU;
  FUN_005492b0(puVar1,0);
  if ((int)param_2 < 0) {
    FUN_00549470(puVar1);
  }
  uVar3 = FUN_00549620(&param_2);
  FUN_00549670(puVar1,uVar3);
  uVar2 = *puVar1 * 2;
  if (((uVar2 ^ *puVar1) & 0x7fffffff ^ uVar2) == 0xffffffff) {
    iVar4 = *param_1;
  }
  else {
    iVar4 = FUN_00549470(puVar1);
  }
  *param_1 = iVar4;
  local_4 = 0xffffffff;
  if (iVar4 == 0) {
    FUN_00549580(&param_2);
  }
  else {
    param_1[2] = -1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0x1a] = 0;
    FUN_00549580(&param_2);
  }
  FUN_00549350(&param_2);
  ExceptionList = local_c;
  return;
}

