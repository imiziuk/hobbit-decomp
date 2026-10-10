
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006364f0(int param_1,float param_2,undefined4 param_3)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  undefined8 uVar9;
  float fStack_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  uVar9 = FUN_005be240();
  iVar4 = FUN_004021c0(uVar9);
  FUN_005be240();
  iVar5 = *(int *)(param_1 + 8);
  fStack_c = *(float *)(iVar5 + 400);
  fStack_8 = *(float *)(iVar5 + 0x194);
  fStack_4 = *(float *)(iVar5 + 0x198);
  fVar7 = (float10)FUN_0064ca10(fStack_c,fStack_4);
  fVar1 = (float10)_DAT_006e9368;
  fVar8 = ((float10)*(float *)(param_1 + 0x88) - (float10)(float)(fVar7 + fVar1)) +
          (float10)_DAT_006e9368;
  fStack_28 = (float)fVar8;
  if (((float10)_DAT_006e95a0 < fVar8) ||
     (fVar8 < (float10)_DAT_006e959c != (NAN(fVar8) || NAN((float10)_DAT_006e959c)))) {
    fVar8 = (float10)FUN_0064c6b0(fStack_28,0x40c90fdb);
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
  fStack_30 = (float)(fVar8 - (float10)_DAT_006e9368);
  iVar5 = FUN_005af120();
  iVar5 = *(int *)(*(int *)(iVar5 + 0x304) + 400);
  if ((iVar4 == 0) || (iVar4 = FUN_005afc20(), iVar4 == 0)) {
    return 0;
  }
  FUN_0041bcc0();
  iVar4 = *(int *)(param_1 + 8);
  *(float *)(param_1 + 0x50) = param_2 + *(float *)(param_1 + 0x50);
  fVar2 = param_2 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x58) = fVar2;
  if ((*(uint *)(iVar4 + 0x130) & 0x1000) != 0) {
    *(float *)(param_1 + 0x58) = fVar2 + param_2;
  }
  if ((*(uint *)(iVar4 + 0x130) & 0x400) == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
  case 0xe:
  case 0xf:
    if (((((*(byte *)(iVar4 + 0x130) & 1) != 0) && (iVar5 = FUN_006370a0(&param_3), iVar5 == 0)) &&
        (iVar5 = FUN_00636d70(&param_3), iVar5 == 0)) &&
       ((iVar5 = FUN_00636e40(&param_3), iVar5 == 0 && (iVar5 = FUN_00636cf0(&param_3), iVar5 == 0))
       )) {
      FUN_00636df0(&param_3);
    }
    break;
  case 6:
    if ((*(byte *)(iVar4 + 0x130) & 1) == 0) break;
    iVar5 = FUN_00636d70(&param_3);
    goto LAB_00636b4f;
  case 7:
    if ((((*(byte *)(iVar4 + 0x130) & 1) != 0) && (iVar5 = FUN_00636d70(&param_3), iVar5 == 0)) &&
       ((iVar5 = FUN_00636e40(&param_3), iVar5 == 0 && (iVar5 = FUN_00636cf0(&param_3), iVar5 == 0))
       )) {
      FUN_00636df0(&param_3);
    }
    break;
  case 8:
    *(float *)(param_1 + 0x84) = param_2 + *(float *)(param_1 + 0x84);
    iVar4 = FUN_00566dd0();
    if (iVar4 == 1) {
      if (fStack_30 <= _DAT_006f55b0) {
        if (fStack_30 < _DAT_006f55ac != (NAN(fStack_30) || NAN(_DAT_006f55ac))) {
          fStack_30 = -0.34906587;
        }
      }
      else {
        fStack_30 = 0.34906587;
      }
      FUN_0064c8e0(0,&fStack_20,&fStack_28);
      FUN_0064c8e0(fStack_30 + (float)(fVar7 + fVar1),&fStack_24,&fStack_1c);
      fStack_18 = fStack_24 * fStack_28;
      fStack_14 = -fStack_20;
      fStack_10 = fStack_1c * fStack_28;
      fVar2 = DAT_006e92e8 /
              SQRT(fStack_18 * fStack_18 + fStack_14 * fStack_14 + fStack_10 * fStack_10);
      iVar4 = FUN_0064cf30(fVar2);
      if (iVar4 == 0) {
        fStack_10 = 0.0;
        fVar3 = DAT_006e92e4;
        fVar2 = DAT_006e92e4;
      }
      else {
        fVar2 = SQRT(fStack_c * fStack_c + fStack_8 * fStack_8 + fStack_4 * fStack_4) * fVar2;
        fStack_10 = fStack_10 * fVar2;
        fVar3 = fStack_18 * fVar2;
        fVar2 = fStack_14 * fVar2;
      }
      *(float *)(iVar5 + 0x18) = fVar3;
      *(float *)(iVar5 + 0x20) = fStack_10;
      *(float *)(iVar5 + 0x1c) = fVar2;
    }
    if (((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) ||
       (_DAT_006e999c < *(float *)(param_1 + 0x84))) {
      if (*(float *)(param_1 + 0x84) < _DAT_006e999c !=
          (NAN(*(float *)(param_1 + 0x84)) || NAN(_DAT_006e999c))) {
        *(undefined4 *)(param_1 + 0x84) = 0x40000000;
      }
      iVar5 = FUN_006370a0(&param_3);
      if ((((iVar5 == 0) && (iVar5 = FUN_00636d70(&param_3), iVar5 == 0)) &&
          (iVar5 = FUN_00636e40(&param_3), iVar5 == 0)) &&
         (iVar5 = FUN_00636cf0(&param_3), iVar5 == 0)) {
        FUN_00636df0(&param_3);
      }
    }
    break;
  case 9:
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) - param_2;
    iVar5 = FUN_006370a0(&param_3);
    if (((iVar5 == 0) && (iVar5 = FUN_00636d70(&param_3), iVar5 == 0)) &&
       ((iVar5 = FUN_00636e40(&param_3), iVar5 == 0 &&
        ((iVar5 = FUN_00636cf0(&param_3), iVar5 == 0 &&
         ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0)))))) goto LAB_00636b63;
    goto LAB_00636b6f;
  case 10:
    if ((*(byte *)(iVar4 + 0x130) & 1) == 0) goto LAB_00636b6f;
    iVar5 = FUN_00636e40(&param_3);
LAB_00636b4f:
    if ((iVar5 == 0) && (iVar5 = FUN_00636cf0(&param_3), iVar5 == 0)) {
LAB_00636b63:
      FUN_00636df0(&param_3);
    }
LAB_00636b6f:
    if (*(int *)(param_1 + 0x54) == 0) {
      param_3 = 0x12;
    }
    break;
  case 0xb:
    *(float *)(param_1 + 0x60) = param_2 + *(float *)(param_1 + 0x60);
    if (((((*(byte *)(iVar4 + 0x130) & 1) != 0) && (iVar5 = FUN_00636f50(&param_3), iVar5 == 0)) &&
        (iVar5 = FUN_006370a0(&param_3), iVar5 == 0)) &&
       (((iVar5 = FUN_00636d70(&param_3), iVar5 == 0 && (iVar5 = FUN_00636e40(&param_3), iVar5 == 0)
         ) && (iVar5 = FUN_00636cf0(&param_3), iVar5 == 0)))) {
      FUN_00636df0(&param_3);
    }
    break;
  case 0xc:
    if ((((*(byte *)(iVar4 + 0x130) & 1) != 0) && (iVar5 = FUN_006370a0(&param_3), iVar5 == 0)) &&
       ((iVar5 = FUN_00636d70(&param_3), iVar5 == 0 &&
        ((iVar5 = FUN_00636e40(&param_3), iVar5 == 0 && (iVar5 = FUN_00636cf0(&param_3), iVar5 == 0)
         ))))) {
      FUN_00636df0(&param_3);
    }
    break;
  case 0xd:
    if (((((*(byte *)(iVar4 + 0x130) & 1) == 0) || (iVar5 = FUN_006370a0(&param_3), iVar5 != 0)) ||
        (iVar5 = FUN_00636d70(&param_3), iVar5 != 0)) ||
       ((iVar5 = FUN_00636e40(&param_3), iVar5 != 0 || (iVar5 = FUN_00636cf0(&param_3), iVar5 != 0))
       )) break;
    goto LAB_006367a4;
  case 0x10:
    if ((*(byte *)(iVar4 + 0x130) & 1) == 0) break;
    FUN_005af120();
    iVar5 = FUN_004a2970();
    if (iVar5 != 1) {
      param_3 = 5;
      break;
    }
    goto LAB_00636abb;
  case 0x11:
    iVar5 = FUN_005af120();
    if ((*(uint *)(*(int *)(iVar5 + 0x304) + 0x4c) & 0x200) == 0) {
      param_3 = 10;
      break;
    }
    if ((((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) ||
        (iVar5 = FUN_006370a0(&param_3), iVar5 != 0)) ||
       ((iVar5 = FUN_00636d70(&param_3), iVar5 != 0 ||
        ((iVar5 = FUN_00636e40(&param_3), iVar5 != 0 || (iVar5 = FUN_00636cf0(&param_3), iVar5 != 0)
         ))))) break;
LAB_00636abb:
    FUN_00636df0(&param_3);
    break;
  case 0x12:
    if ((*(byte *)(iVar4 + 0x130) & 1) != 0) {
      param_3 = 0x13;
    }
  case 0x13:
    if ((((*(int *)(param_1 + 0x54) != 0) && (iVar5 = FUN_006370a0(&param_3), iVar5 == 0)) &&
        (iVar5 = FUN_00636d70(&param_3), iVar5 == 0)) &&
       ((iVar5 = FUN_00636e40(&param_3), iVar5 == 0 && (iVar5 = FUN_00636cf0(&param_3), iVar5 == 0))
       )) {
      FUN_00636df0(&param_3);
    }
    break;
  default:
    if (*(int *)(param_1 + 0x4c) != 0) {
      param_3 = 0x10;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      break;
    }
LAB_006367a4:
    param_3 = 9;
  }
  uVar6 = FUN_005be370(param_2,param_3);
  return uVar6;
}

