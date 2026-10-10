
void __thiscall FUN_00666db0(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1[1];
  iVar5 = *param_1;
  iVar2 = param_1[3];
  iVar6 = param_1[2] + param_3 * 4;
  uVar1 = iVar6 - iVar5 >> 2;
  if ((int)uVar1 < 0) {
    uVar3 = -(0x3ff - uVar1 >> 10);
  }
  else {
    uVar3 = uVar1 >> 10;
  }
  if (uVar3 != 0) {
    iVar5 = *(int *)(iVar2 + uVar3 * 4);
    iVar2 = iVar2 + uVar3 * 4;
    iVar4 = iVar5 + 0x1000;
    iVar6 = iVar5 + (uVar1 + uVar3 * -0x400) * 4;
  }
  *param_2 = iVar5;
  param_2[1] = iVar4;
  param_2[2] = iVar6;
  param_2[3] = iVar2;
  return;
}

