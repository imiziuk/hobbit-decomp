
void FUN_00544fa0(int param_1,undefined2 *param_2,int param_3,int param_4,float param_5)

{
  float fVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 local_8;
  int local_4;
  
  fVar1 = DAT_006e92e8 / param_5;
  FUN_0063ce50(&param_1);
  FUN_0063ce50(&local_4);
  FUN_0063cd60(&local_8,5);
  param_5 = (float)param_1 * fVar1;
  uVar3 = __ftol();
  iVar2 = param_3;
  *param_2 = uVar3;
  if (1 < param_4) {
    iVar4 = param_4 + -1;
    puVar5 = param_2;
    do {
      puVar5 = puVar5 + iVar2;
      FUN_0063cd60(&param_2,local_8);
      param_3 = (int)param_2 + local_4;
      param_5 = (float)param_3 * fVar1 + param_5;
      uVar3 = __ftol();
      *puVar5 = uVar3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

