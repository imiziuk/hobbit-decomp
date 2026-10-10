
int __thiscall FUN_00530bb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d87f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649b60(param_2);
  local_4 = 0;
  FUN_0064b170(param_2 + 0x2c);
  puVar2 = (undefined4 *)(param_2 + 0x78);
  puVar3 = (undefined4 *)(param_1 + 0x78);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

