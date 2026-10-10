
int __thiscall FUN_0062fe10(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  
  fVar1 = param_2 + *(float *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x4c) = fVar1;
  *(float *)(param_1 + 100) = param_2 + *(float *)(param_1 + 100);
  if (*(short *)(param_1 + 0x42) == 10) {
    if (fVar1 < *(float *)(param_1 + 0x58)) {
      if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
        fVar5 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
        *(float *)(param_1 + 100) = (float)fVar5;
        param_3 = 5;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      param_3 = 5;
    }
  }
  iVar2 = FUN_006386f0(param_2,param_3);
  if (iVar2 == 7) {
    piVar3 = (int *)FUN_0041bcc0();
    iVar4 = (**(code **)(*piVar3 + 0x124))();
    if (iVar4 != 0) {
      return 10;
    }
  }
  return iVar2;
}

