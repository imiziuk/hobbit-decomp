
undefined4 __thiscall FUN_006bb310(int param_1,int *param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == 0) {
    fVar2 = (float10)(**(code **)*param_2)();
    if (fVar2 < (float10)*(float *)(*(int *)(param_1 + 4) + 0x7c)) {
      return 0;
    }
  }
  return 1;
}

