
void FUN_0062feb0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 10) {
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0xc) = 3;
    FUN_005af120();
    uVar2 = FUN_005aa780();
    *(undefined8 *)(iVar1 + 0x40) = uVar2;
    FUN_005af9f0(iVar1);
  }
  FUN_00638b00(param_1);
  return;
}

