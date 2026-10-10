
void __thiscall FUN_005be710(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined2)param_2;
  switch(param_2) {
  case 1:
    uVar1 = FUN_005becf0();
    iVar2 = FUN_005af160(uVar1);
    if (iVar2 == 0) {
      return;
    }
    FUN_005af9f0(*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 100) * 4) + 4));
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x20;
    *(undefined2 *)((int)param_1 + 0x42) = uVar3;
    return;
  case 2:
    iVar2 = (**(code **)(*param_1 + 0x7c))();
    break;
  case 3:
    iVar2 = (**(code **)(*param_1 + 0x80))();
    break;
  case 4:
    *(undefined4 *)(param_1[2] + 0xd4) = 0;
    iVar2 = FUN_00567b20(2);
    *(undefined4 *)(iVar2 + 0xc) = 10;
    uVar4 = FUN_005be240();
    *(undefined8 *)(iVar2 + 0x40) = uVar4;
    FUN_005af9f0(iVar2);
    iVar2 = FUN_00567b20(2);
    *(undefined4 *)(iVar2 + 0xc) = 0x3e;
    uVar4 = FUN_005be240();
    *(undefined8 *)(iVar2 + 0x40) = uVar4;
    FUN_005af9f0(iVar2);
    *(undefined2 *)((int)param_1 + 0x42) = uVar3;
    return;
  default:
    goto switchD_005be724_default;
  }
  if (iVar2 != 0) {
    FUN_005af9f0(iVar2);
    *(undefined2 *)((int)param_1 + 0x42) = uVar3;
    return;
  }
  FUN_005af980(0);
switchD_005be724_default:
  *(undefined2 *)((int)param_1 + 0x42) = uVar3;
  return;
}

