
void __thiscall FUN_00638b00(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  switch(param_2) {
  case 5:
    *(undefined4 *)(param_1 + 0x50) = 0x3f000000;
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar3 = FUN_00567b20(2);
      *(undefined4 *)(iVar3 + 0xc) = 0x35;
    }
    else {
      iVar3 = FUN_00567b20(2);
      *(undefined4 *)(iVar3 + 0xc) = 0x2c;
    }
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
    iVar3 = FUN_00567b20(0);
    uVar4 = FUN_005af0f0();
    *(undefined8 *)(iVar3 + 0x10) = uVar4;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x50) = 0x3fc00000;
    iVar3 = FUN_00567b20(1);
    uVar4 = FUN_005af0f0();
    *(undefined8 *)(iVar3 + 0x10) = uVar4;
    *(undefined4 *)(iVar3 + 0x2c) = 0x36;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x50) = 0x40000000;
    iVar3 = FUN_00567b20(2);
    *(undefined4 *)(iVar3 + 0xc) = 0x26;
    break;
  case 9:
    piVar1 = (int *)FUN_005af120();
    (**(code **)(*piVar1 + 0x28))();
    piVar1 = (int *)FUN_005af120();
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
    uStack_c = *puVar2;
    uStack_8 = puVar2[1];
    uStack_4 = puVar2[2];
    FUN_004357e0(&uStack_c);
    FUN_005b3350();
    iVar3 = FUN_00567b20(1);
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0x36;
    *(uint *)(iVar3 + 0x5c) = *(uint *)(iVar3 + 0x5c) & 0xfffffffb;
    break;
  default:
    goto switchD_00638b22_default;
  }
  FUN_005af9f0(iVar3);
switchD_00638b22_default:
  FUN_005be710(param_2);
  return;
}

