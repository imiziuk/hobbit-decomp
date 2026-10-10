
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006327e0(int param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  float10 fVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_005af0f0();
  iVar5 = FUN_004021c0(uVar9);
  FUN_005af0f0();
  if (iVar5 == 0) {
    return 0;
  }
  FUN_0041bcc0();
  *(float *)(param_1 + 0x5c) = param_2 + *(float *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x68) = param_2 + *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0x6c) = param_2 + *(float *)(param_1 + 0x6c);
  uVar9 = FUN_005be240();
  iVar5 = FUN_004021c0(uVar9);
  FUN_005be240();
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 8);
  fVar1 = *(float *)(iVar5 + 400);
  fVar2 = *(float *)(iVar5 + 0x194);
  fVar3 = *(float *)(iVar5 + 0x198);
  piVar6 = (int *)FUN_005af120();
  iVar5 = (**(code **)(*piVar6 + 0x154))();
  fVar4 = *(float *)(iVar5 + 0x20);
  fVar8 = (float10)FUN_0064ca10(fVar1,fVar3);
  fVar8 = (fVar8 - (float10)fVar4) + (float10)_DAT_006e9368;
  if (((float10)_DAT_006e95a0 < fVar8) ||
     (fVar8 < (float10)_DAT_006e959c != (NAN(fVar8) || NAN((float10)_DAT_006e959c)))) {
    fVar8 = (float10)FUN_0064c6b0((float)fVar8,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar8) {
    do {
      fVar8 = fVar8 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar8);
  }
  if (fVar8 < (float10)DAT_006e92e4 != (NAN(fVar8) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar8 = fVar8 + (float10)_DAT_006e9598;
    } while (fVar8 < (float10)DAT_006e92e4 != (NAN(fVar8) || NAN((float10)DAT_006e92e4)));
  }
  fVar4 = (float)(fVar8 - (float10)_DAT_006e9368);
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
  case 7:
  case 8:
  case 0xb:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) break;
    goto LAB_00632a9a;
  case 6:
    if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) {
      fVar4 = -fVar4;
    }
    if (_DAT_006f6780 < fVar4) {
      param_3 = 7;
    }
    else {
      fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
      if (*(float *)(param_1 + 0x4c) <= fVar1) {
        param_3 = 8;
      }
      else if ((fVar1 < *(float *)(param_1 + 0x4c) ==
                (NAN(fVar1) || NAN(*(float *)(param_1 + 0x4c)))) ||
              (*(float *)(param_1 + 0x68) < *(float *)(param_1 + 0x58))) {
        if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
          param_3 = 6;
        }
      }
      else {
        iVar5 = FUN_005af000();
        if (iVar5 == 0) {
          fVar8 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
          *(float *)(param_1 + 0x68) = (float)fVar8;
        }
        else {
          param_3 = 9;
        }
      }
    }
    break;
  case 9:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) {
        fVar4 = -fVar4;
      }
      param_3 = 7;
      if (fVar4 <= _DAT_006f6784) {
        param_3 = 6;
      }
      fVar8 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
      *(float *)(param_1 + 0x68) = (float)fVar8;
    }
    break;
  case 10:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) break;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    goto LAB_00632a87;
  case 0xc:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) break;
    iVar5 = FUN_005befc0(0);
    if ((iVar5 != 0) && (*(int *)(param_1 + 0x50) != 0 || *(int *)(param_1 + 0x54) != 0)) {
      param_3 = 5;
      break;
    }
LAB_00632a87:
    param_3 = 6;
    break;
  case 0xd:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      FUN_005af120();
      iVar5 = FUN_004a2970();
      param_3 = (-(uint)(iVar5 != 2) & 6) + 6;
    }
    break;
  default:
    if (*(int *)(param_1 + 100) != 0) {
      param_3 = 0xd;
      *(undefined4 *)(param_1 + 100) = 0;
      break;
    }
LAB_00632a9a:
    param_3 = 6;
  }
  uVar7 = FUN_005be370(param_2,param_3);
  return uVar7;
}

