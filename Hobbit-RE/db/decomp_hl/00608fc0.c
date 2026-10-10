
undefined4 __thiscall FUN_00608fc0(int param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_005be240();
  iVar1 = FUN_004021c0(uVar4);
  FUN_005be240();
  if ((iVar1 == 0) || (iVar2 = FUN_005afc20(), iVar2 == 0)) {
    return 0;
  }
  FUN_0041bcc0();
  iVar2 = *(int *)(param_1 + 8);
  *(float *)(param_1 + 0xb0) = param_2 + *(float *)(param_1 + 0xb0);
  *(float *)(param_1 + 0xb8) = param_2 + *(float *)(param_1 + 0xb8);
  if ((*(uint *)(iVar2 + 0x130) & 0x400) == 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
  case 9:
  case 0xf:
    if ((*(byte *)(iVar2 + 0x130) & 1) != 0) goto LAB_0060917f;
    break;
  case 6:
    if (((*(uint *)(iVar2 + 0x130) & 1) != 0) && ((*(uint *)(iVar2 + 0x130) & 4) != 0)) {
      uVar3 = FUN_005be370(param_2,8);
      return uVar3;
    }
    break;
  case 7:
    uVar3 = FUN_006093f0(iVar1,param_2,param_3);
    uVar3 = FUN_005be370(param_2,uVar3);
    return uVar3;
  case 8:
    uVar3 = FUN_00609780(iVar1,param_2,param_3);
    uVar3 = FUN_005be370(param_2,uVar3);
    return uVar3;
  case 10:
    if ((*(byte *)(iVar2 + 0x130) & 1) != 0) {
      FUN_006092a0();
      uVar3 = FUN_005be370(param_2,8);
      return uVar3;
    }
    break;
  case 0xb:
    uVar3 = FUN_00609940(iVar1,param_3);
    uVar3 = FUN_005be370(param_2,uVar3);
    return uVar3;
  case 0xc:
    uVar3 = FUN_00609240(param_3);
    uVar3 = FUN_005be370(param_2,uVar3);
    return uVar3;
  case 0xd:
    if ((*(byte *)(iVar2 + 0x130) & 1) != 0) {
      uVar3 = FUN_005be370(param_2,6);
      return uVar3;
    }
    break;
  case 0xe:
    if ((*(uint *)(iVar2 + 0x130) & 1) != 0) {
      uVar3 = FUN_005be370(param_2,(-((*(uint *)(iVar2 + 0x130) & 4) != 0) & 7U) + 6);
      return uVar3;
    }
    break;
  case 0x10:
    if ((*(byte *)(iVar2 + 0x130) & 1) != 0) {
      FUN_005af120();
      iVar1 = FUN_004a2970();
      uVar3 = FUN_005be370(param_2,(-(uint)(iVar1 != 1) & 0xfffffffd) + 8);
      return uVar3;
    }
    break;
  case 0x11:
    uVar3 = FUN_006096d0(iVar1,param_3);
    uVar3 = FUN_005be370(param_2,uVar3);
    return uVar3;
  default:
    if (*(int *)(param_1 + 0xac) != 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      uVar3 = FUN_005be370(param_2,0x10);
      return uVar3;
    }
LAB_0060917f:
    uVar3 = FUN_005be370(param_2,8);
    return uVar3;
  }
  uVar3 = FUN_005be370(param_2,param_3);
  return uVar3;
}

