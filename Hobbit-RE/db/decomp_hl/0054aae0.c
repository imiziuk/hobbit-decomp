
void __thiscall FUN_0054aae0(int param_1,int *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  puVar4 = puVar3;
  puVar5 = (undefined4 *)puVar3[1];
  if ((undefined4 *)puVar3[1] != DAT_0076cd84) {
    do {
      puVar4 = puVar5;
      puVar1 = *(undefined1 **)(param_3 + 4);
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = &DAT_006f3ce8;
      }
      iVar2 = FUN_0054b4a0(0,puVar4[5],puVar1,*(undefined4 *)(param_3 + 8));
      if (iVar2 < 0) {
        puVar5 = (undefined4 *)puVar4[2];
        puVar4 = puVar3;
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
      }
      puVar3 = puVar4;
    } while (puVar5 != DAT_0076cd84);
  }
  *param_2 = (int)puVar4;
  return;
}

