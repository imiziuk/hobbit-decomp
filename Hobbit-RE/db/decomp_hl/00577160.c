
void __thiscall FUN_00577160(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  puVar2 = (undefined4 *)puVar4[1];
  if (puVar2 != DAT_00772ce8) {
    do {
      iVar1 = FUN_0064a9c0(puVar2 + 3,param_3);
      if (iVar1 == 0) {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (puVar3 != DAT_00772ce8);
  }
  *param_2 = (int)puVar4;
  return;
}

