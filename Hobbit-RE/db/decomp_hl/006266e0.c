
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006266e0(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_005be240();
  piVar4 = (int *)FUN_004021c0(uVar10);
  FUN_005be240();
  if ((piVar4 == (int *)0x0) || (iVar5 = FUN_005afc20(), iVar5 == 0)) {
    return 0;
  }
  FUN_0041bcc0();
  iVar5 = *(int *)(param_1 + 8);
  fVar1 = *(float *)(iVar5 + 400);
  fVar2 = *(float *)(iVar5 + 0x194);
  fVar3 = *(float *)(iVar5 + 0x198);
  if ((*(byte *)(piVar4 + 4) & 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    fVar8 = (float10)(**(code **)(*piVar4 + 0x10c))();
    fVar9 = (float10)FUN_0064ca10(fVar1,fVar3);
    fVar8 = ((float10)(float)fVar8 - fVar9) + (float10)_DAT_006e9368;
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
    fVar8 = fVar8 - (float10)_DAT_006e9368;
    if ((fVar8 < (float10)_DAT_006e9578 == (NAN(fVar8) || NAN((float10)_DAT_006e9578))) ||
       (fVar8 <= (float10)_DAT_006e9570)) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 1;
    }
  }
  iVar5 = *(int *)(param_1 + 8);
  *(float *)(param_1 + 0x4c) = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  *(float *)(param_1 + 0x60) = param_2 + *(float *)(param_1 + 0x60);
  fVar1 = param_2 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x58) = fVar1;
  if ((*(uint *)(iVar5 + 0x130) & 0x1000) != 0) {
    *(float *)(param_1 + 0x58) = fVar1 + param_2;
  }
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 3:
    param_3 = 0xc;
    break;
  default:
    param_3 = 5;
    break;
  case 5:
  case 7:
    if ((((*(byte *)(iVar5 + 0x130) & 1) == 0) || (iVar5 = FUN_00626d80(&param_3), iVar5 != 0)) ||
       (iVar5 = FUN_00626e60(&param_3), iVar5 != 0)) break;
    goto LAB_00626a84;
  case 6:
    iVar5 = FUN_00626d80(&param_3);
    if ((iVar5 == 0) && (iVar5 = FUN_00626e60(&param_3), iVar5 == 0)) goto LAB_00626939;
    goto LAB_0062694c;
  case 8:
    if (((*(byte *)(iVar5 + 0x130) & 1) == 0) || (iVar5 = FUN_00626e60(&param_3), iVar5 != 0))
    goto LAB_0062694c;
    goto LAB_00626939;
  case 9:
    if ((*(byte *)(iVar5 + 0x130) & 1) == 0) break;
LAB_00626939:
    iVar5 = FUN_00626f70(&param_3);
    if (iVar5 == 0) {
      param_3 = 6;
    }
LAB_0062694c:
    if (*(int *)(param_1 + 100) == 0) {
      param_3 = 0xe;
    }
    break;
  case 10:
    if ((*(byte *)(iVar5 + 0x130) & 0x21) == 0) break;
    *(undefined4 *)(param_1 + 0x58) = 0;
    uVar6 = FUN_00647b10(0,1);
    *(undefined4 *)(param_1 + 0x54) = uVar6;
    iVar5 = FUN_00626fd0(&param_3);
    if ((iVar5 != 0) || (iVar5 = FUN_00626d80(&param_3), iVar5 != 0)) break;
    iVar5 = FUN_00626e60(&param_3);
    goto joined_r0x00626a79;
  case 0xb:
    if ((*(byte *)(iVar5 + 0x130) & 0x21) != 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      uVar6 = FUN_00647b10(0,1);
      *(undefined4 *)(param_1 + 0x54) = uVar6;
      iVar5 = FUN_00626fd0(&param_3);
      if ((((iVar5 == 0) && (iVar5 = FUN_00626d80(&param_3), iVar5 == 0)) &&
          (iVar5 = FUN_00626e60(&param_3), iVar5 == 0)) &&
         (iVar5 = FUN_00626f70(&param_3), iVar5 == 0)) {
        param_3 = 6;
      }
    }
    break;
  case 0xc:
    bVar7 = (*(byte *)(iVar5 + 0x130) & 1) == 0;
    goto LAB_00626a51;
  case 0xd:
    iVar5 = FUN_005af120();
    if ((*(uint *)(*(int *)(iVar5 + 0x304) + 0x4c) & 0x200) == 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
      iVar5 = FUN_00626d80(&param_3);
      if (((iVar5 == 0) && (iVar5 = FUN_00626e60(&param_3), iVar5 == 0)) &&
         (iVar5 = FUN_00626f70(&param_3), iVar5 == 0)) {
        param_3 = 6;
      }
    }
    if ((((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) &&
        (iVar5 = FUN_00626d80(&param_3), iVar5 == 0)) &&
       ((iVar5 = FUN_00626e60(&param_3), iVar5 == 0 && (iVar5 = FUN_00626f70(&param_3), iVar5 == 0))
       )) {
      param_3 = 6;
    }
    break;
  case 0xe:
    if ((*(byte *)(iVar5 + 0x130) & 1) != 0) {
      param_3 = 0xf;
    }
  case 0xf:
    bVar7 = *(int *)(param_1 + 100) == 0;
LAB_00626a51:
    if ((!bVar7) && (iVar5 = FUN_00626d80(&param_3), iVar5 == 0)) {
      iVar5 = FUN_00626e60(&param_3);
joined_r0x00626a79:
      if (iVar5 == 0) {
LAB_00626a84:
        iVar5 = FUN_00626f70(&param_3);
        if (iVar5 == 0) {
          param_3 = 6;
        }
      }
    }
  }
  uVar6 = FUN_005be370(param_2,param_3);
  return uVar6;
}

