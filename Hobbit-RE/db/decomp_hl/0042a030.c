
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042a030(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x1ef] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  iVar1 = *param_1;
  FUN_00434c10();
  uVar2 = __ftol();
  (**(code **)(iVar1 + 0x128))(uVar2);
  return;
}

