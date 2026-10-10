
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006238b0(int param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined8 uVar5;
  float fVar6;
  
  uVar5 = FUN_005af0f0();
  iVar1 = FUN_004021c0(uVar5);
  FUN_005af0f0();
  if ((iVar1 == 0) || (iVar1 = FUN_005afc20(), iVar1 == 0)) {
    return 0;
  }
  FUN_0041bcc0();
  *(float *)(param_1 + 0x50) = param_2 + *(float *)(param_1 + 0x50);
  fVar6 = param_2 + *(float *)(param_1 + 100);
  *(float *)(param_1 + 100) = fVar6;
  if ((*(uint *)(*(int *)(param_1 + 8) + 0x130) & 0x1000) != 0) {
    *(float *)(param_1 + 100) = fVar6 + param_2;
  }
  FUN_005af120();
  fVar4 = (float10)FUN_004a6970();
  fVar6 = (float)(((float10)DAT_006e92e8 - fVar4) * (float10)_DAT_006e9338 + (float10)DAT_006e92e8);
  FUN_005af120(fVar6);
  FUN_004bd4c0(fVar6);
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    iVar1 = FUN_00623f20(&param_3);
    if (((iVar1 == 0) && (iVar1 = FUN_00623fc0(&param_3), iVar1 == 0)) &&
       (iVar1 = FUN_00624030(&param_3), iVar1 == 0)) {
      FUN_00624140(&param_3);
    }
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_00623b94;
    goto LAB_00623b8c;
  case 6:
    if (((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) ||
       (iVar1 = FUN_00623fc0(&param_3), iVar1 != 0)) goto LAB_00623b94;
    iVar1 = FUN_00624030(&param_3);
    break;
  case 7:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_00623b94;
    iVar1 = FUN_00624030(&param_3);
    break;
  case 8:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_00623b94;
    goto LAB_00623b81;
  case 9:
    uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x130);
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 0x20) != 0) {
        param_3 = 9;
      }
      goto LAB_00623b94;
    }
    iVar1 = FUN_00623fc0(&param_3);
    if ((iVar1 != 0) || (iVar1 = FUN_00624030(&param_3), iVar1 != 0)) goto LAB_00623b94;
    iVar1 = FUN_00624220(&param_3);
    goto LAB_00623b88;
  case 10:
    uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x130);
    if ((uVar2 & 1) != 0) {
      param_3 = 0xb;
      goto LAB_00623b94;
    }
LAB_00623af5:
    if ((uVar2 & 0x20) == 0) goto LAB_00623b94;
    FUN_00624270();
    goto LAB_00623b8c;
  case 0xb:
    uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x130);
    if ((uVar2 & 1) == 0) goto LAB_00623af5;
    iVar1 = FUN_00623fc0(&param_3);
    if ((iVar1 != 0) || (iVar1 = FUN_00624030(&param_3), iVar1 != 0)) goto LAB_00623b94;
    iVar1 = FUN_00624220(&param_3);
    goto LAB_00623b88;
  case 0xc:
    if ((((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) ||
        (iVar1 = FUN_00623f20(&param_3), iVar1 != 0)) ||
       (iVar1 = FUN_00623fc0(&param_3), iVar1 != 0)) goto LAB_00623b94;
    iVar1 = FUN_00624030(&param_3);
    break;
  default:
    iVar1 = FUN_00623f20(&param_3);
    if ((iVar1 != 0) || (iVar1 = FUN_00623fc0(&param_3), iVar1 != 0)) goto LAB_00623b94;
    iVar1 = FUN_00624030(&param_3);
  }
  if (iVar1 == 0) {
LAB_00623b81:
    iVar1 = FUN_00624140(&param_3);
LAB_00623b88:
    if (iVar1 == 0) {
LAB_00623b8c:
      param_3 = 5;
    }
  }
LAB_00623b94:
  uVar3 = FUN_005be370(param_2,param_3);
  return uVar3;
}

