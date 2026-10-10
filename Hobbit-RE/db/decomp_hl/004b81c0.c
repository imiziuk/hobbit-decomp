
void __fastcall FUN_004b81c0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  FUN_004b83e0();
  if (*(int *)(&DAT_0075d4a0 + param_1[0x60] * 0x24) != 0) {
    uVar4 = FUN_0054bad0(0x2d,0,0);
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    piVar1 = (int *)FUN_004021c0(uVar4);
    if (piVar1 != (int *)0x0) {
      FUN_00488c30(*(undefined4 *)(&DAT_0075d4a0 + param_1[0x60] * 0x24));
      iVar3 = *piVar1;
      uVar2 = (**(code **)(*param_1 + 0x28))(0);
      (**(code **)(iVar3 + 0x14))(uVar2);
      (**(code **)(*piVar1 + 0xfc))(param_1[100],param_1[100],param_1[100]);
      (**(code **)(*piVar1 + 0x110))();
    }
  }
  if (*(int *)(&DAT_0075d49c + param_1[0x60] * 0x24) != 0) {
    uVar5 = 1;
    uVar2 = (**(code **)(*param_1 + 0x28))(1);
    iVar3 = FUN_00659630(*(undefined4 *)(&DAT_0075d49c + param_1[0x60] * 0x24),uVar2,uVar5);
    param_1[0x6a] = iVar3;
  }
  return;
}

