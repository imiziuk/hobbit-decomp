
void FUN_00649510(undefined4 *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  if ((param_1[7] == 0) && ((*(byte *)(param_1 + 10) & 1) != 0)) {
    fVar2 = (float10)FUN_0064cbb0(param_1[8],param_1[9],*param_1);
    fVar2 = (float10)FUN_0064cbb0(param_1[4],param_1[5],(double)fVar2);
    fVar3 = (float10)FUN_0064cbb0(param_1[8],param_1[9]);
    fVar2 = (float10)FUN_0064cbb0(param_1[4],param_1[5],(double)((float10)(float)fVar2 - fVar3));
    FUN_0064e870(7,s___06d_____09_3f____07_3f____08_3_0074c8d4,param_1[6],(double)fVar2);
  }
  for (iVar1 = param_1[3]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    FUN_00649510(iVar1);
  }
  return;
}

