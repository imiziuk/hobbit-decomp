
int __thiscall FUN_00530c10(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_0064a320(param_2);
  FUN_0064b7f0(param_2 + 0x2c);
  puVar2 = (undefined4 *)(param_2 + 0x78);
  puVar3 = (undefined4 *)(param_1 + 0x78);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}

