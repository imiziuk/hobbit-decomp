
void __thiscall FUN_0069efa0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_2c;
  int local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0();
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + param_2 * 4);
  local_4 = 0;
  FUN_0065f8a0(local_28);
  FUN_0066c3a0(7,0x13);
  FUN_0066dc10(iVar1 + 0x2c,1,1);
  uVar2 = FUN_0041b9c0((float)local_28[0],(float)local_2c);
  uVar3 = FUN_00401f00(0,0,0);
  FUN_0066e5a0(uVar3,uVar2);
  FUN_0066d9a0();
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

