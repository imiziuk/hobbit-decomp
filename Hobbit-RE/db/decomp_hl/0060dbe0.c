
void __thiscall FUN_0060dbe0(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  undefined8 uVar3;
  
  if (param_2 == 5) {
    iVar1 = FUN_00567b20(2);
    *(undefined4 *)(iVar1 + 0xc) = 1;
    FUN_005af9f0(iVar1);
  }
  else if (param_2 == 6) {
    iVar1 = FUN_00567b20(1);
    uVar3 = FUN_005af0f0();
    *(undefined8 *)(iVar1 + 0x10) = uVar3;
    fVar2 = (float10)FUN_00647b30(0x42480000,0x42c80000);
    *(float *)(iVar1 + 0x1c) = (float)fVar2;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x2c) = 0x31;
    FUN_005af9f0(iVar1);
    FUN_005be710(6);
    return;
  }
  FUN_005be710(param_2);
  return;
}

