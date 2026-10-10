
void FUN_00555690(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = param_1;
  iVar3 = FUN_00554750();
  if (iVar3 == 0) {
    iVar3 = FUN_00558c40();
    if (iVar3 == 0) {
      bVar1 = false;
      goto LAB_005556b2;
    }
  }
  bVar1 = true;
LAB_005556b2:
  param_1 = CONCAT31(param_1._1_3_,(char)(*(uint *)(param_1 + 0x118) >> 1)) & 0xffffff01;
  if (*(int *)(iVar2 + 0x110) == 1) {
    pcVar4 = s_c__c_f_0073d95c;
    if (!bVar1) {
      FUN_00554fb0(&DAT_0073d958,param_1);
      return;
    }
  }
  else {
    if (*(int *)(iVar2 + 0x110) == 3) {
      FUN_00554fb0(&DAT_0073d954,param_1);
      return;
    }
    pcVar4 = s_c__c_f___c_0072dd74;
    if (!bVar1) {
      pcVar4 = &DAT_0072ed84;
    }
  }
  FUN_00554fb0(pcVar4,param_1);
  return;
}

