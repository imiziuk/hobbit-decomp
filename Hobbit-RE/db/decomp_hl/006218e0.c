
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006218e0(int param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined8 uVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    iVar1 = FUN_00621820();
    if ((iVar1 != 0) && (0 < *(int *)(param_1 + 0x50))) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
      *(undefined4 *)(param_1 + 0x70) = 1;
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
  }
  else {
    fVar6 = param_2 + *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x74) = fVar6;
    if (_DAT_006f5fcc <= fVar6) {
      FUN_00622190();
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
  }
  uVar5 = FUN_005af0f0();
  iVar1 = FUN_004021c0(uVar5);
  FUN_005af0f0();
  if ((iVar1 == 0) || (iVar1 = FUN_005afc20(), iVar1 == 0)) {
    return 0;
  }
  FUN_0041bcc0();
  *(float *)(param_1 + 100) = param_2 + *(float *)(param_1 + 100);
  fVar6 = param_2 + *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x84) = fVar6;
  if ((*(uint *)(*(int *)(param_1 + 8) + 0x130) & 0x1000) != 0) {
    *(float *)(param_1 + 0x84) = fVar6 + param_2;
  }
  FUN_005af120();
  fVar4 = (float10)FUN_004a6970();
  fVar6 = (float)(((float10)DAT_006e92e8 - fVar4) * (float10)_DAT_006e9338 + (float10)DAT_006e92e8);
  FUN_005af120(fVar6);
  FUN_004bd4c0(fVar6);
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    iVar1 = FUN_00621f40(&param_3);
    if (((iVar1 == 0) && (iVar1 = FUN_00621fe0(&param_3), iVar1 == 0)) &&
       (iVar1 = FUN_00622050(&param_3), iVar1 == 0)) {
      FUN_00622160(&param_3);
    }
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_00621ba9;
    goto LAB_00621ba1;
  case 6:
    uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x130);
    if ((uVar2 & 1) != 0) {
      param_3 = 0xb;
      goto LAB_00621ba9;
    }
LAB_00621b12:
    uVar2 = uVar2 & 0x20;
    break;
  case 7:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_00621ba9;
    goto LAB_00621b71;
  case 8:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_00621ba9;
    goto LAB_00621b81;
  case 9:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_00621ba9;
    goto LAB_00621b96;
  case 10:
    uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x130);
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 0x20) != 0) {
        param_3 = 10;
      }
      goto LAB_00621ba9;
    }
    iVar1 = FUN_00621fe0(&param_3);
    if (iVar1 != 0) goto LAB_00621ba9;
    uVar2 = FUN_00622050(&param_3);
    break;
  case 0xb:
    uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x130);
    if ((uVar2 & 1) == 0) goto LAB_00621b12;
    iVar1 = FUN_00621fe0(&param_3);
    if (iVar1 != 0) goto LAB_00621ba9;
    uVar2 = FUN_00622050(&param_3);
    break;
  case 0xc:
    if ((((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) ||
        (iVar1 = FUN_00621f40(&param_3), iVar1 != 0)) ||
       (iVar1 = FUN_00621fe0(&param_3), iVar1 != 0)) goto LAB_00621ba9;
    iVar1 = FUN_00622050(&param_3);
    goto joined_r0x00621b58;
  default:
    iVar1 = FUN_00621f40(&param_3);
    if (iVar1 != 0) goto LAB_00621ba9;
LAB_00621b71:
    iVar1 = FUN_00621fe0(&param_3);
    if (iVar1 != 0) goto LAB_00621ba9;
LAB_00621b81:
    iVar1 = FUN_00622050(&param_3);
joined_r0x00621b58:
    if (iVar1 != 0) goto LAB_00621ba9;
LAB_00621b96:
    uVar2 = FUN_00622160(&param_3);
  }
  if (uVar2 == 0) {
LAB_00621ba1:
    param_3 = 5;
  }
LAB_00621ba9:
  if (*(int *)(param_1 + 0x70) != 0) {
    param_3 = 6;
  }
  uVar3 = FUN_005be370(param_2,param_3);
  return uVar3;
}

