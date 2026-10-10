
void __thiscall FUN_004d21b0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 0x2f;
  iVar2 = FUN_00549470(piVar1);
  if (iVar2 == 0) {
    FUN_00549580(piVar1);
    (**(code **)(*param_1 + 0x5c))();
    return;
  }
  FUN_005a52d0(param_2,1,1,0,0);
  FUN_00549580(piVar1);
  return;
}

