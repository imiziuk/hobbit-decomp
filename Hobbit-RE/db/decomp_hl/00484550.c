
void __thiscall FUN_00484550(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float local_c;
  float local_4;
  
  local_c = param_3[3] - *param_3;
  fVar1 = param_3[4];
  fVar2 = param_3[1];
  local_4 = param_3[5] - param_3[2];
  iVar3 = __ftol();
  *(int *)(param_1 + 0x104) = iVar3;
  iVar4 = __ftol();
  *(int *)(param_1 + 0x108) = iVar4;
  if (iVar3 < 1) {
    local_c = *(float *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = 1;
  }
  if (iVar4 < 1) {
    local_4 = *(float *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x108) = 1;
  }
  FUN_004e1e70(param_2,local_c,fVar1 - fVar2,local_4);
  *(byte *)(param_1 + 0x250) = *(byte *)(param_1 + 0x250) | 1;
  return;
}

