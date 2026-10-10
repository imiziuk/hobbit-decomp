
int FUN_00530170(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 != param_2) {
    puVar4 = (undefined4 *)(param_3 + 0x78);
    puVar2 = (undefined4 *)(param_2 + 0x78);
    do {
      param_2 = param_2 + -0xa8;
      param_3 = param_3 + -0xa8;
      puVar4 = puVar4 + -0x2a;
      FUN_0064a320(param_2);
      FUN_0064b7f0(puVar2 + -0x3d);
      puVar3 = puVar2 + -0x2a;
      puVar5 = puVar4;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar2 = puVar2 + -0x2a;
    } while (param_2 != param_1);
  }
  return param_3;
}

