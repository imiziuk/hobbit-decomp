
void FUN_00530990(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_b4 [44];
  undefined1 local_88 [76];
  undefined4 local_3c [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d87a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649b60(param_1);
  local_4 = 0;
  FUN_0064b170(param_1 + 0x2c);
  puVar2 = (undefined4 *)(param_1 + 0x78);
  puVar3 = local_3c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_4 = 1;
  FUN_0064a320(param_2);
  FUN_0064b7f0(param_2 + 0x2c);
  puVar2 = (undefined4 *)(param_2 + 0x78);
  puVar3 = (undefined4 *)(param_1 + 0x78);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0064a320(local_b4);
  FUN_0064b7f0(local_88);
  puVar2 = local_3c;
  puVar3 = (undefined4 *)(param_2 + 0x78);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_4 = 2;
  FUN_0064b190();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

