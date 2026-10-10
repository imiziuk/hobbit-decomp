
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00581c30(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined4 *)operator_new(0x18);
  puVar1[1] = 0;
  puVar1[5] = 1;
  FUN_006bf84b();
  if (DAT_007778e0 == (undefined4 *)0x0) {
    DAT_007778e0 = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_007778e0[2] = 0;
  }
  _DAT_007778dc = _DAT_007778dc + 1;
  FUN_006bf8e7();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006bf840(puVar1);
  }
  puVar1 = DAT_007778e0;
  pvVar2 = operator_new(0x18);
  *(undefined4 **)((int)pvVar2 + 4) = puVar1;
  *(undefined4 *)((int)pvVar2 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(void **)(param_1 + 4) = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

