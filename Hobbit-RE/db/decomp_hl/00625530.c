
void __thiscall FUN_00625530(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined8 uVar8;
  char *pcVar9;
  float fStack_4;
  
  switch(param_2) {
  case 5:
    iVar4 = FUN_00567b20(3);
    *(undefined4 *)(iVar4 + 0xc) = 1;
    break;
  case 6:
  case 0x11:
    iVar4 = FUN_00567b20(2);
    pcVar9 = s_combat_idle_007492e0;
    goto LAB_006257c3;
  case 7:
    iVar4 = FUN_00567b20(1);
    uVar8 = FUN_005be240();
    *(undefined8 *)(iVar4 + 0x10) = uVar8;
    FUN_0064a2e0(&DAT_0074a118);
    *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(param_1 + 0x70);
    break;
  case 8:
    iVar4 = *(int *)(param_1 + 8);
    fVar1 = *(float *)(iVar4 + 200);
    fVar2 = *(float *)(iVar4 + 0xcc);
    fStack_4 = *(float *)(iVar4 + 0xd0);
    fVar7 = (float10)FUN_0064ca10(fVar1,fStack_4);
    *(float *)(param_1 + 0x68) = (float)fVar7;
    fVar3 = DAT_006e92e8 / SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fStack_4 * fStack_4);
    iVar4 = FUN_0064cf30(fVar3);
    if (iVar4 == 0) {
      fStack_4 = 0.0;
      fVar1 = DAT_006e92e4;
      fVar2 = DAT_006e92e4;
    }
    else {
      fStack_4 = fStack_4 * fVar3;
      fVar1 = fVar1 * fVar3;
      fVar2 = fVar2 * fVar3;
    }
    fVar3 = *(float *)(param_1 + 0x70);
    iVar4 = FUN_00567b20(1);
    uVar8 = FUN_005be240();
    *(undefined8 *)(iVar4 + 0x10) = uVar8;
    *(float *)(iVar4 + 0x18) = fVar3 * fVar1;
    *(float *)(iVar4 + 0x1c) = fVar2 * fVar3;
    *(float *)(iVar4 + 0x20) = fStack_4 * fVar3;
    FUN_0064a2e0(&DAT_0074a118);
    *(uint *)(iVar4 + 0x5c) = *(uint *)(iVar4 + 0x5c) & 0xfffffffb;
    break;
  case 9:
    iVar4 = FUN_00567b20(1);
    uVar8 = FUN_005be240();
    *(undefined8 *)(iVar4 + 0x10) = uVar8;
    FUN_0064a2e0(&DAT_0074a118);
    if (*(int *)(param_1 + 0x58) == 0) {
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(param_1 + 0x74);
    }
    else {
      *(undefined4 *)(iVar4 + 0x24) = DAT_006f60ec;
    }
    break;
  case 0xb:
    iVar4 = FUN_00567b20(2);
    pcVar9 = &DAT_0074a0ec;
    goto LAB_006257c3;
  case 0xc:
  case 0xf:
    iVar4 = FUN_00567b20(2);
    pcVar9 = &DAT_0074a0e4;
    goto LAB_006257c3;
  case 0xd:
    iVar4 = FUN_00567b20(2);
    pcVar9 = s_jumpattack_0074a10c;
    goto LAB_006257c3;
  case 0xe:
    iVar4 = FUN_00567b20(2);
    pcVar9 = s_strafe_back_0074a100;
LAB_006257c3:
    FUN_0064a2e0(pcVar9);
    uVar8 = FUN_005be240();
    *(undefined8 *)(iVar4 + 0x40) = uVar8;
    break;
  case 0x10:
    iVar4 = FUN_00567b20(1);
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 0x14) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 8;
    piVar5 = (int *)FUN_005af120();
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x2c))();
    *(undefined4 *)(iVar4 + 0x18) = *puVar6;
    *(undefined4 *)(iVar4 + 0x1c) = puVar6[1];
    *(undefined4 *)(iVar4 + 0x20) = puVar6[2];
    *(uint *)(iVar4 + 0x5c) = *(uint *)(iVar4 + 0x5c) | 4;
    FUN_005af9f0(iVar4);
  case 10:
    iVar4 = FUN_00567b20(0);
    uVar8 = FUN_005be240();
    *(undefined8 *)(iVar4 + 0x10) = uVar8;
    break;
  default:
    goto switchD_00625548_default;
  }
  FUN_005af9f0(iVar4);
switchD_00625548_default:
  FUN_005be710(param_2);
  return;
}

