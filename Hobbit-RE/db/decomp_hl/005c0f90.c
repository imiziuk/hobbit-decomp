
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005c0f90(int param_1,undefined4 param_2)

{
  uint *puVar1;
  void *pvVar2;
  
  FUN_0064f350(param_1,8,1,param_2);
  FUN_0064f350(param_1 + 8,4,1,param_2);
  FUN_0064f350(param_1 + 0xc,4,1,param_2);
  FUN_0064f350(param_1 + 0x10,4,1,param_2);
  puVar1 = (uint *)(param_1 + 0x14);
  FUN_0064f350(puVar1,4,1,param_2);
  FUN_0064f350(param_1 + 0x1c,4,1,param_2);
  if (0 < (int)*puVar1) {
    _DAT_007ba8d0 = _DAT_007ba8d0 + *puVar1;
    FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
    pvVar2 = operator_new(*puVar1);
    *(void **)(param_1 + 0x18) = pvVar2;
    FUN_0064f350(pvVar2,1,*puVar1,param_2);
    return;
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

