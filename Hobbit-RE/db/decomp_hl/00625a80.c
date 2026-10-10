
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00625a80(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(float *)(param_1 + 0x50) < *(float *)(param_1 + 0x54)) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x58) != 0) && (_DAT_006f60f0 < *(float *)(param_1 + 0x48))) {
    *param_2 = 0xd;
    return 1;
  }
  iVar1 = FUN_00647b10(0,1);
  if (iVar1 != 0) {
    *param_2 = 0xb;
    return 1;
  }
  *param_2 = 0xc;
  return 1;
}

