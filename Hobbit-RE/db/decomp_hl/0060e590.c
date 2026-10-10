
void __thiscall FUN_0060e590(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(short *)(param_1 + 0x42) == 5) {
    fVar1 = param_2 + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x58) = fVar1;
    if (((*(float *)(param_1 + 0x4c) <= fVar1) && (DAT_006e92e4 < *(float *)(param_1 + 0x4c))) &&
       (DAT_006e92e4 < *(float *)(param_1 + 0x48))) {
      iVar2 = FUN_005befc0(0);
      if (iVar2 != 0) {
        FUN_005be370(param_2,6);
        return;
      }
    }
    uVar3 = 5;
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) goto LAB_0060e641;
  }
  else {
    if (*(short *)(param_1 + 0x42) != 6) {
      FUN_005be370(param_2,5);
      return;
    }
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      FUN_005be370(param_2,5);
      return;
    }
  }
  uVar3 = param_3;
LAB_0060e641:
  FUN_005be370(param_2,uVar3);
  return;
}

