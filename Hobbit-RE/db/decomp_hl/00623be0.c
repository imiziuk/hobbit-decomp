
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00623be0(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  undefined8 uVar7;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  uStack_14 = 0;
  uStack_10 = 0;
  switch(param_2) {
  case 5:
    iVar5 = FUN_00567b20(2);
    *(undefined4 *)(iVar5 + 0xc) = 3;
    uVar7 = FUN_005be240();
    *(undefined8 *)(iVar5 + 0x40) = uVar7;
    break;
  case 6:
    iVar5 = FUN_00567b20(1);
    uVar7 = FUN_005be240();
    *(undefined8 *)(iVar5 + 0x10) = uVar7;
    *(undefined4 *)(iVar5 + 0x2c) = 8;
    *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(param_1 + 0x58);
    break;
  case 7:
    iVar5 = FUN_00567b20(1);
    uVar7 = FUN_005be240();
    *(undefined8 *)(iVar5 + 0x10) = uVar7;
    *(undefined4 *)(iVar5 + 0x2c) = 7;
    *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(param_1 + 0x5c);
    break;
  case 8:
    piVar3 = (int *)FUN_005af120();
    iVar5 = (**(code **)(*piVar3 + 0x154))();
    fVar1 = *(float *)(iVar5 + 0x20);
    uStack_c = *(undefined4 *)(*(int *)(param_1 + 8) + 400);
    uStack_4 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x198);
    fVar6 = (float10)FUN_0064ca10(uStack_c,uStack_4);
    fVar6 = (fVar6 - (float10)fVar1) + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar6) ||
       (fVar6 < (float10)_DAT_006e959c != (NAN(fVar6) || NAN((float10)_DAT_006e959c)))) {
      fVar6 = (float10)FUN_0064c6b0((float)fVar6,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar6) {
      do {
        fVar6 = fVar6 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar6);
    }
    if (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar6 = fVar6 + (float10)_DAT_006e9598;
      } while (fVar6 < (float10)DAT_006e92e4 != (NAN(fVar6) || NAN((float10)DAT_006e92e4)));
    }
    fVar1 = (float)(fVar6 - (float10)_DAT_006e9368);
    iVar5 = FUN_00567b20(2);
    uVar7 = FUN_005af0f0();
    fVar2 = _DAT_006e9578;
    *(undefined8 *)(iVar5 + 0x40) = uVar7;
    if (fVar1 <= fVar2) {
      if (fVar1 <= DAT_006e92e4) {
        if (fVar1 < _DAT_006e9570 == (NAN(fVar1) || NAN(_DAT_006e9570))) {
          FUN_0064a2e0(s_turn_right_00749eec);
        }
        else {
          FUN_0064a2e0(s_turn_right_180_00749ef8);
        }
      }
      else {
        FUN_0064a2e0(s_turn_left_00749f08);
      }
    }
    else {
      FUN_0064a2e0(s_turn_left_180_00749f14);
    }
    break;
  case 9:
    iVar5 = FUN_00567b20(2);
    uVar7 = FUN_005be240();
    *(undefined8 *)(iVar5 + 0x40) = uVar7;
    FUN_0064a2e0(*(undefined4 *)
                  ((&PTR_PTR_s_stand_attack_0074a0c0)[*(int *)(param_1 + 0x48) * 2] +
                  *(int *)(param_1 + 0x4c) * 4));
    break;
  case 10:
    iVar5 = FUN_00567b20(2);
    uVar7 = FUN_005be240();
    *(undefined8 *)(iVar5 + 0x40) = uVar7;
    FUN_0064a2e0(s_stand_up_0074a020);
    break;
  case 0xb:
    iVar5 = FUN_00567b20(2);
    uVar7 = FUN_005be240();
    *(undefined8 *)(iVar5 + 0x40) = uVar7;
    FUN_0064a2e0(s_stand_attack_0074a010);
    break;
  case 0xc:
    piVar3 = (int *)FUN_005af120();
    uVar4 = (**(code **)(*piVar3 + 0x28))(&uStack_14,0);
    FUN_004357e0(uVar4);
    FUN_005b3350();
    iVar5 = FUN_00567b20(1);
    *(undefined4 *)(iVar5 + 0x10) = uStack_14;
    *(undefined4 *)(iVar5 + 0x14) = uStack_10;
    *(undefined4 *)(iVar5 + 0x2c) = 8;
    *(uint *)(iVar5 + 0x5c) = *(uint *)(iVar5 + 0x5c) & 0xfffffffb;
    break;
  default:
    goto switchD_00623c02_default;
  }
  FUN_005af9f0(iVar5);
switchD_00623c02_default:
  FUN_005be710(param_2);
  return;
}

