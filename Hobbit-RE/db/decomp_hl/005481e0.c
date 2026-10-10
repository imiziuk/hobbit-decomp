
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005481e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0xc) = DAT_0076cd70;
  _DAT_0076cd74 = _DAT_0076cd74 + 1;
  DAT_0076cd70 = param_1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

