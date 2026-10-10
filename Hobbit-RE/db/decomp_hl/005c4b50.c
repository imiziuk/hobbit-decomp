
void __thiscall FUN_005c4b50(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if ((undefined4 *)puVar3[1] != DAT_007ba9f4) {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *param_3) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (puVar2 != DAT_007ba9f4);
  }
  *param_2 = (int)puVar3;
  return;
}

