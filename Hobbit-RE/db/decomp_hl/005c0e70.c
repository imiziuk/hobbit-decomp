
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005c0e70(int param_1,undefined4 param_2)

{
  uint *puVar1;
  void *pvVar2;
  
  FUN_0064f350(param_1,4,1,param_2);
  FUN_0064f350(param_1 + 4,4,1,param_2);
  FUN_0064f350(param_1 + 8,4,1,param_2);
  FUN_0064f350(param_1 + 0xc,4,1,param_2);
  FUN_0064f350(param_1 + 0x10,4,1,param_2);
  FUN_0064f350(param_1 + 0x14,4,1,param_2);
  puVar1 = (uint *)(param_1 + 0x1c);
  FUN_0064f350(puVar1,4,1,param_2);
  FUN_0064f350(param_1 + 0x24,4,1,param_2);
  FUN_0064f350(param_1 + 0x28,4,1,param_2);
  FUN_0064f350(param_1 + 0x2c,4,1,param_2);
  FUN_0064f350(param_1 + 0x30,4,1,param_2);
  if (0 < (int)*puVar1) {
    _DAT_007ba8cc = _DAT_007ba8cc + *puVar1;
    pvVar2 = operator_new(*puVar1);
    *(void **)(param_1 + 0x20) = pvVar2;
    FUN_0064f350(pvVar2,1,*puVar1,param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

