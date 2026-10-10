
uint FUN_00543230(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0053f540(param_1);
  return *(uint *)(iVar1 + param_2 * 4) >> 0x12 & 1;
}

