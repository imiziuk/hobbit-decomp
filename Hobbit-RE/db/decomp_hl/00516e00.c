
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00516e00(int param_1)

{
  DAT_00762ae0 = (float)*(int *)(param_1 + 0x1ac);
  _DAT_00762ae4 = (float)*(int *)(param_1 + 0x1b0);
  _DAT_00762ae8 = (float)*(int *)(param_1 + 0x1b4);
  FUN_0065af40(DAT_00762ae0 * _DAT_006e9360);
  FUN_0065af80(_DAT_00762ae4 * _DAT_006e9360);
  FUN_0065afc0(_DAT_00762ae8 * _DAT_006e9360);
  DAT_00762afc = *(undefined4 *)(param_1 + 0x1b8);
  FUN_006a3050();
  return;
}

