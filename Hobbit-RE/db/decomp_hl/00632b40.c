
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00632b40(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  switch(param_2) {
  case 5:
    iVar3 = FUN_00567b20(1);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar3 + 0x2c) = 8;
    break;
  case 6:
    iVar3 = FUN_00567b20(2);
    *(undefined4 *)(iVar3 + 0xc) = 0x38;
    goto LAB_00632cc4;
  case 7:
    iVar3 = FUN_00567b20(0);
    uVar4 = FUN_005be240();
    *(undefined8 *)(iVar3 + 0x10) = uVar4;
    break;
  case 8:
    iVar3 = FUN_00567b20(1);
    uVar4 = FUN_005be240();
    *(undefined8 *)(iVar3 + 0x10) = uVar4;
    fVar2 = *(float *)(param_1 + 0x4c) * _DAT_006e99f4;
    *(undefined4 *)(iVar3 + 0x2c) = 8;
    *(float *)(iVar3 + 0x24) = fVar2;
    break;
  case 9:
    iVar3 = FUN_00567b20(2);
    *(undefined4 *)(iVar3 + 0xc) = 0x1c;
    goto LAB_00632cc4;
  case 10:
    iVar3 = FUN_00567b20(2);
    *(undefined4 *)(iVar3 + 0xc) = 5;
LAB_00632cc4:
    uVar4 = FUN_005be240();
    *(undefined8 *)(iVar3 + 0x40) = uVar4;
    break;
  case 0xb:
    iVar3 = FUN_00567b20(2);
    uVar4 = FUN_005be240();
    *(undefined8 *)(iVar3 + 0x40) = uVar4;
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 1) {
      *(undefined4 *)(iVar3 + 0xc) = 0x13;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(iVar3 + 0xc) = 0x14;
    }
    else if (iVar1 == 3) {
      *(undefined4 *)(iVar3 + 0xc) = 0x12;
    }
    else {
      *(undefined4 *)(iVar3 + 0xc) = 0x11;
    }
    break;
  case 0xc:
    uVar5 = 2;
    FUN_005af120(2);
    FUN_004a28c0(uVar5);
    iVar3 = FUN_00567b20(2);
    *(undefined4 *)(iVar3 + 0xc) = 0x25;
    *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(param_1 + 0x54);
    break;
  case 0xd:
    iVar3 = FUN_00567b20(3);
    *(undefined4 *)(iVar3 + 0xc) = 1;
    break;
  default:
    goto switchD_00632b55_default;
  }
  FUN_005af9f0(iVar3);
switchD_00632b55_default:
  FUN_005be710(param_2);
  return;
}

