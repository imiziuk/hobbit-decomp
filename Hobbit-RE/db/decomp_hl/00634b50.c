
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00634b50(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  
  switch(param_2) {
  case 5:
    iVar3 = FUN_00567b20(2);
    *(undefined4 *)(iVar3 + 0xc) = 3;
    break;
  case 6:
    iVar3 = FUN_00567b20(1);
    uVar4 = FUN_005be240();
    *(undefined8 *)(iVar3 + 0x10) = uVar4;
    fVar2 = *(float *)(param_1 + 0x48) * _DAT_006e99f4;
    *(undefined4 *)(iVar3 + 0x2c) = 8;
    *(float *)(iVar3 + 0x24) = fVar2;
    goto LAB_00634c38;
  case 7:
    iVar3 = FUN_00567b20(2);
    *(undefined4 *)(iVar3 + 0xc) = 0x23;
    break;
  case 8:
    iVar3 = FUN_00567b20(2);
    *(undefined4 *)(iVar3 + 0xc) = 5;
    break;
  case 9:
    iVar3 = FUN_00567b20(2);
    iVar1 = *(int *)(param_1 + 0x68);
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
    goto LAB_00634c38;
  default:
    goto switchD_00634b65_default;
  }
  uVar4 = FUN_005be240();
  *(undefined8 *)(iVar3 + 0x40) = uVar4;
LAB_00634c38:
  FUN_005af9f0(iVar3);
switchD_00634b65_default:
  FUN_005be710(param_2);
  return;
}

