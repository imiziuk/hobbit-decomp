
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00657e10(int param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x223c) = 0;
  *(undefined4 *)(param_1 + 0x2240) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21f8) = 0;
  *(undefined4 *)(param_1 + 0x21f4) = 0;
  FUN_0067c2d0();
  FUN_0067b470(param_2);
  FUN_0067aa00();
  FUN_0067a7d0();
  FUN_00678250();
  if (*(int *)(param_1 + 0x2258) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x2250));
    *(undefined4 *)(param_1 + 0x2250) = 0;
    *(undefined4 *)(param_1 + 0x2254) = 0;
  }
  *(undefined4 *)(param_1 + 0x224c) = 0;
  if (*(int *)(param_1 + 0x2254) != 0x800) {
    pvVar1 = operator_new(0x2000);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x224c)) {
      do {
        *(undefined4 *)((int)pvVar1 + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x2250) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x224c));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x2250));
    *(void **)(param_1 + 0x2250) = pvVar1;
    *(undefined4 *)(param_1 + 0x2254) = 0x800;
  }
  DAT_007edac4 = 0;
  _DAT_007edac0 = 1;
  return;
}

