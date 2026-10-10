
void FUN_006c14d6(uint param_1,uint param_2,int param_3,code *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < param_2) {
    uVar2 = param_1;
    uVar3 = param_1 + param_3;
    do {
      for (; uVar3 <= param_2; uVar3 = uVar3 + param_3) {
        iVar1 = (*param_4)(uVar3,uVar2);
        if (0 < iVar1) {
          uVar2 = uVar3;
        }
      }
      FUN_006c1524(uVar2,param_2,param_3);
      param_2 = param_2 - param_3;
      uVar2 = param_1;
      uVar3 = param_1 + param_3;
    } while (param_1 < param_2);
  }
  return;
}

