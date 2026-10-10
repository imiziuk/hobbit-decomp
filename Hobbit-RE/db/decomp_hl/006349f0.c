
undefined4 __thiscall FUN_006349f0(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *(float *)(param_1 + 0x5c) = param_2 + *(float *)(param_1 + 0x5c);
  uVar5 = FUN_005af0f0();
  iVar3 = FUN_004021c0(uVar5);
  FUN_005af0f0();
  if (iVar3 == 0) {
    return 0;
  }
  FUN_0041bcc0();
  iVar3 = *(int *)(param_1 + 8);
  *(float *)(param_1 + 100) = param_2 + *(float *)(param_1 + 100);
  fVar1 = param_2 + *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x60) = fVar1;
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    fVar2 = SQRT(*(float *)(iVar3 + 400) * *(float *)(iVar3 + 400) +
                 *(float *)(iVar3 + 0x194) * *(float *)(iVar3 + 0x194) +
                 *(float *)(iVar3 + 0x198) * *(float *)(iVar3 + 0x198));
    if (((fVar2 < *(float *)(param_1 + 0x48) == (NAN(fVar2) || NAN(*(float *)(param_1 + 0x48)))) ||
        (fVar1 < *(float *)(param_1 + 0x4c))) || (iVar3 = FUN_005af000(), iVar3 == 0)) {
      if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
        param_3 = 5;
      }
    }
    else {
      param_3 = 7;
    }
    break;
  case 6:
  case 9:
    if ((*(byte *)(iVar3 + 0x130) & 1) != 0) {
      param_3 = 5;
    }
    break;
  case 7:
    if ((*(byte *)(iVar3 + 0x130) & 1) == 0) break;
    *(undefined4 *)(param_1 + 0x60) = 0;
  default:
    param_3 = 5;
    break;
  case 8:
    if ((*(byte *)(iVar3 + 0x130) & 1) != 0) {
      *(undefined4 *)(param_1 + 100) = 0;
      param_3 = 5;
    }
  }
  uVar4 = FUN_005be370(param_2,param_3);
  return uVar4;
}

