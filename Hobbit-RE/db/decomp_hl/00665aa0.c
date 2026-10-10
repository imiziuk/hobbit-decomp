
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * __thiscall FUN_00665aa0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  *param_1 = *param_3;
  param_1[1] = *param_2;
  param_1[8] = 0;
  puVar1 = (undefined4 *)operator_new(0x3c);
  puVar1[1] = 0;
  puVar1[0xe] = 1;
  FUN_006bf84b();
  if (DAT_007f1434 == (undefined4 *)0x0) {
    DAT_007f1434 = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_007f1434[2] = 0;
  }
  _DAT_007f1430 = _DAT_007f1430 + 1;
  FUN_006bf8e7();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006bf840(puVar1);
  }
  puVar1 = DAT_007f1434;
  pvVar2 = operator_new(0x3c);
  *(undefined4 **)((int)pvVar2 + 4) = puVar1;
  *(undefined4 *)((int)pvVar2 + 0x38) = 0;
  *(void **)(param_1 + 4) = pvVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return param_1;
}

