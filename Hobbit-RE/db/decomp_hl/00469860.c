
undefined4 __fastcall FUN_00469860(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x154))();
  if (iVar1 != 0) {
    uVar2 = FUN_00549470(iVar1);
    FUN_00549580(iVar1);
    return uVar2;
  }
  return 0;
}

