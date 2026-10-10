
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00630a00(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_4;
  
  switch(param_2) {
  case 5:
    iVar7 = FUN_00567b20(3);
    *(undefined4 *)(iVar7 + 0xc) = 1;
    break;
  case 6:
    iVar7 = FUN_00567b20(1);
    uVar8 = FUN_005be240();
    *(undefined8 *)(iVar7 + 0x10) = uVar8;
    FUN_0064a2e0(&PTR_DAT_00742dbc);
    iVar4 = *(int *)(param_1 + 8);
    fStack_4 = *(float *)(iVar4 + 0x198);
    fStack_c = *(float *)(iVar4 + 400);
    fVar1 = DAT_006e92e8 /
            SQRT(fStack_c * fStack_c +
                 *(float *)(iVar4 + 0x194) * *(float *)(iVar4 + 0x194) + fStack_4 * fStack_4);
    iVar4 = FUN_0064cf30(fVar1);
    uVar6 = _DAT_006f6668;
    fVar2 = DAT_006e92e4;
    fVar3 = DAT_006e92e4;
    if (iVar4 != 0) {
      fVar2 = fStack_c * fVar1;
      fVar3 = fStack_4 * fVar1;
    }
    fVar1 = *(float *)(param_1 + 0x50);
    fStack_c = -fVar1 * fVar2;
    *(float *)(iVar7 + 0x18) = fStack_c;
    *(undefined4 *)(iVar7 + 0x1c) = uVar6;
    *(float *)(iVar7 + 0x20) = -fVar1 * fVar3;
    break;
  case 7:
  case 8:
    iVar7 = FUN_00567b20(2);
    pcVar9 = s_combat_idle_007492e0;
    goto LAB_00630c3c;
  case 9:
    iVar7 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar7 + 0x48) = 0;
    *(undefined4 *)(iVar7 + 0x4c) = 0;
    iVar7 = FUN_00567b20(2);
    uVar8 = FUN_005be240();
    *(undefined8 *)(iVar7 + 0x40) = uVar8;
    iVar4 = *(int *)(param_1 + 8);
    fStack_4 = *(float *)(iVar4 + 0x198);
    fStack_c = *(float *)(iVar4 + 400);
    fVar1 = DAT_006e92e8 /
            SQRT(fStack_c * fStack_c +
                 *(float *)(iVar4 + 0x194) * *(float *)(iVar4 + 0x194) + fStack_4 * fStack_4);
    iVar4 = FUN_0064cf30(fVar1);
    uVar6 = _DAT_006f666c;
    fVar2 = DAT_006e92e4;
    fVar3 = DAT_006e92e4;
    if (iVar4 != 0) {
      fVar1 = fVar1 * _DAT_006e9364;
      fVar2 = fVar1 * fStack_c;
      fVar3 = fStack_4 * fVar1;
    }
    *(float *)(iVar7 + 0x48) = fVar2;
    *(undefined4 *)(iVar7 + 0x4c) = uVar6;
    *(float *)(iVar7 + 0x50) = fVar3;
    FUN_0064a2e0(s_attack_0074a3f8);
    break;
  case 10:
    iVar7 = FUN_00567b20(2);
    FUN_0064a2e0(s_miss_recover_0074a3e8);
    break;
  case 0xb:
    iVar7 = FUN_00567b20(2);
    FUN_0064a2e0(s_attach_0074a3e0);
    break;
  case 0xc:
    iVar7 = FUN_00567b20(2);
    pcVar9 = s_attack_recover_0074a3d0;
LAB_00630c3c:
    FUN_0064a2e0(pcVar9);
    uVar8 = FUN_005be240();
    *(undefined8 *)(iVar7 + 0x40) = uVar8;
    break;
  case 0xd:
    piVar5 = (int *)FUN_005af120();
    uVar6 = (**(code **)(*piVar5 + 0x28))(&uStack_14,1);
    FUN_004357e0(uVar6);
    FUN_005b3350();
    iVar7 = FUN_00567b20(1);
    *(undefined4 *)(iVar7 + 0x10) = uStack_14;
    *(undefined4 *)(iVar7 + 0x14) = uStack_10;
    FUN_0064a2e0(&PTR_DAT_00742dbc);
    *(undefined4 *)(iVar7 + 0x1c) = _DAT_006f6668;
    *(undefined4 *)(iVar7 + 0x18) = 0;
    *(undefined4 *)(iVar7 + 0x20) = 0;
    break;
  default:
    goto switchD_00630a18_default;
  }
  FUN_005af9f0(iVar7);
switchD_00630a18_default:
  FUN_005be710(param_2);
  return;
}

