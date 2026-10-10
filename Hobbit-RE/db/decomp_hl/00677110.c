
undefined4 __fastcall FUN_00677110(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_006538e0();
    FUN_006bf840(iVar1);
  }
  FUN_00675840();
  (**(code **)(*(int *)param_1[1] + 8))();
  DAT_007f8790 = 0;
  return 1;
}

