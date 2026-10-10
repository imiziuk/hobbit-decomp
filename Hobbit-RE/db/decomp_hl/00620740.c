
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00620740(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined8 uVar6;
  
  if (param_2 == 5) {
    iVar3 = FUN_00567b20(2);
    *(undefined4 *)(iVar3 + 0xc) = 0x38;
LAB_006208e5:
    uVar6 = FUN_005be240();
    *(undefined8 *)(iVar3 + 0x40) = uVar6;
  }
  else {
    if (param_2 != 6) {
      if (param_2 != 7) goto LAB_006208fb;
      iVar3 = FUN_00567b20(2);
      *(undefined4 *)(iVar3 + 0xc) = 0x1c;
      goto LAB_006208e5;
    }
    piVar4 = (int *)FUN_005af120();
    iVar3 = (**(code **)(*piVar4 + 0x154))();
    fVar1 = *(float *)(iVar3 + 0x20);
    fVar5 = (float10)FUN_0064ca10(*(undefined4 *)(*(int *)(param_1 + 8) + 400),
                                  *(undefined4 *)(*(int *)(param_1 + 8) + 0x198));
    fVar5 = (fVar5 - (float10)fVar1) + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar5) ||
       (fVar5 < (float10)_DAT_006e959c != (NAN(fVar5) || NAN((float10)_DAT_006e959c)))) {
      fVar5 = (float10)FUN_0064c6b0((float)fVar5,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar5) {
      do {
        fVar5 = fVar5 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar5);
    }
    if (fVar5 < (float10)DAT_006e92e4 != (NAN(fVar5) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar5 = fVar5 + (float10)_DAT_006e9598;
      } while (fVar5 < (float10)DAT_006e92e4 != (NAN(fVar5) || NAN((float10)DAT_006e92e4)));
    }
    fVar1 = (float)(fVar5 - (float10)_DAT_006e9368);
    iVar3 = FUN_00567b20(2);
    uVar6 = FUN_005af0f0();
    fVar2 = _DAT_006e9578;
    *(undefined8 *)(iVar3 + 0x40) = uVar6;
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
  }
  FUN_005af9f0(iVar3);
LAB_006208fb:
  FUN_005be710(param_2);
  return;
}

