
void __thiscall FUN_0060bc40(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e3d00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  uStack_4 = 0;
  iVar2 = FUN_00406ce0();
  uStack_4 = 0xffffffff;
  if (iVar2 == -1) {
    FUN_00649720();
    piVar6 = (int *)0x0;
  }
  else {
    uVar1 = *(uint *)(DAT_0076f648 + iVar2 * 0x14);
    piVar6 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
    FUN_00649720();
  }
  if (*(short *)(param_1 + 0x42) == 7) goto LAB_0060bef4;
  switch(param_2) {
  case 5:
    if (0 < *(int *)(param_1 + 0x50)) {
      FUN_00649b20();
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 4) + 0x74);
      uStack_4 = 1;
      if (iVar2 == DAT_00748e7c) {
        iVar2 = FUN_00647b10();
        iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 4) +
                                 0x38) + iVar2 * 4);
      }
      if ((*(int *)(param_1 + 0x50) <= iVar2) || (iVar2 < 0)) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 100) = iVar2;
      iVar5 = FUN_00567b20();
      iVar2 = *(int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 4);
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar2 + 0x68);
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar2 + 0x6c);
      FUN_005af9f0();
      uStack_4 = 0xffffffff;
      FUN_00649ba0();
    }
    goto switchD_0060bce8_default;
  case 6:
    iVar2 = FUN_00567b20();
    if (piVar6 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 0xc) = 1;
    }
    else {
      *(undefined4 *)(iVar2 + 0xc) = 0x38;
    }
    break;
  case 7:
    iVar2 = FUN_00567b20();
    iVar5 = FUN_00647b10();
    if (iVar5 < 0x33) {
      *(undefined4 *)(iVar2 + 0xc) = 0xb;
    }
    else if (iVar5 < 0x4c) {
      *(undefined4 *)(iVar2 + 0xc) = 4;
    }
    else if (iVar5 < 100) {
      *(undefined4 *)(iVar2 + 0xc) = 5;
    }
    break;
  case 8:
    if (piVar6 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar6 + 0x28))();
      FUN_004357e0(uVar3);
      FUN_005af120();
      FUN_005b3030();
      FUN_005aa7f0();
    }
    iVar2 = FUN_00567b20();
    *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(iVar2 + 0xc) = 0x1c;
    FUN_005af9f0();
    *(undefined4 *)(param_1 + 0x74) = 0;
    goto switchD_0060bce8_default;
  case 9:
    FUN_005af120();
    FUN_004a28c0();
    iVar2 = FUN_00567b20();
    *(undefined4 *)(iVar2 + 0xc) = 0x25;
    *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(param_1 + 0x84);
    break;
  case 10:
    iVar2 = FUN_00567b20();
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    piVar6 = (int *)FUN_005af120();
    puVar4 = (undefined4 *)(**(code **)(*piVar6 + 0x2c))();
    *(undefined4 *)(iVar2 + 0x18) = *puVar4;
    *(undefined4 *)(iVar2 + 0x1c) = puVar4[1];
    *(undefined4 *)(iVar2 + 0x20) = puVar4[2];
    break;
  case 0xb:
    iVar2 = FUN_00567b20();
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x84);
    break;
  default:
    goto switchD_0060bce8_default;
  }
LAB_0060bef4:
  FUN_005af9f0();
switchD_0060bce8_default:
  FUN_005be710();
  ExceptionList = pvStack_c;
  return;
}

