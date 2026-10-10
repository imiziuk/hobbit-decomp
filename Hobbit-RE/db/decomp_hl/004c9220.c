
void __thiscall
FUN_004c9220(undefined4 param_1,float param_2,float param_3,int *param_4,float *param_5)

{
  int iVar1;
  
  iVar1 = __ftol(param_1);
  *param_4 = iVar1;
  param_2 = param_2 - (float)iVar1 * param_3;
  *param_5 = param_2;
  if (param_2 <= DAT_006e92e8) {
    *param_5 = param_3;
  }
  else {
    *param_4 = *param_4 + 1;
  }
  iVar1 = *param_4 + 1;
  *param_4 = iVar1;
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  *param_4 = iVar1;
  if (99 < iVar1) {
    iVar1 = 99;
  }
  *param_4 = iVar1;
  return;
}

