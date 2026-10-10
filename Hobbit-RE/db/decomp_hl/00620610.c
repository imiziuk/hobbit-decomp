
undefined4 __thiscall FUN_00620610(int param_1,float param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_005af0f0();
  iVar2 = FUN_004021c0(uVar5);
  FUN_005af0f0();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_0041bcc0();
  *(float *)(param_1 + 0x54) = param_2 + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x5c) = param_2 + *(float *)(param_1 + 0x5c);
  uVar5 = FUN_005be240();
  iVar2 = FUN_004021c0(uVar5);
  FUN_005be240();
  if (iVar2 == 0) {
    return 0;
  }
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 == 5) {
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      param_3 = 5;
    }
    iVar2 = FUN_00620940(&param_3);
    if (iVar2 == 0) {
      FUN_00620970(&param_3);
    }
  }
  else {
    if (sVar1 == 6) {
      if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_00620728;
      iVar2 = FUN_00620940(&param_3);
    }
    else {
      if (sVar1 == 7) {
        if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) == 0) goto LAB_00620728;
        fVar4 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
        *(float *)(param_1 + 0x5c) = (float)fVar4;
      }
      else {
        iVar2 = FUN_00620940(&param_3);
        if (iVar2 != 0) goto LAB_00620728;
      }
      iVar2 = FUN_00620970(&param_3);
    }
    if (iVar2 == 0) {
      param_3 = 5;
    }
  }
LAB_00620728:
  uVar3 = FUN_005be370(param_2,param_3);
  return uVar3;
}

