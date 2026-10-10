
void __thiscall FUN_0053b700(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  param_1[0x18] = param_3;
  param_1[0x1f] = 0;
  if (param_2 == -1) {
    param_1[2] = -1;
    param_1[3] = 2;
    return;
  }
  if (param_2 != param_1[2]) {
    uVar1 = param_1[1] * 2;
    if (((uVar1 ^ param_1[1]) & 0x7fffffff ^ uVar1) == 0xffffffff) {
      iVar2 = *param_1;
    }
    else {
      iVar2 = FUN_00549470(param_1 + 1);
    }
    param_1[2] = param_2;
    param_1[3] = (int)*(short *)(*(int *)(iVar2 + 0x58) + 0x24 + param_2 * 0x50);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x1a] = 0;
  return;
}

