
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_005c2830(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 local_5;
  
  *(undefined1 *)(param_1 + 0x78) = local_5;
  *(undefined1 *)(param_1 + 0x79) = local_5;
  *(undefined1 *)(param_1 + 0x80) = 0;
  puVar1 = (undefined4 *)operator_new(0x24);
  puVar1[1] = 0;
  puVar1[8] = 1;
  FUN_006bf84b();
  if (DAT_007ba9f4 == (undefined4 *)0x0) {
    DAT_007ba9f4 = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_007ba9f4[2] = 0;
  }
  _DAT_007ba9f0 = _DAT_007ba9f0 + 1;
  FUN_006bf8e7();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006bf840(puVar1);
  }
  puVar1 = DAT_007ba9f4;
  pvVar2 = operator_new(0x24);
  *(undefined4 **)((int)pvVar2 + 4) = puVar1;
  *(undefined4 *)((int)pvVar2 + 0x20) = 0;
  *(void **)(param_1 + 0x7c) = pvVar2;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 0x7c) + 8) = *(int *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  return param_1;
}

