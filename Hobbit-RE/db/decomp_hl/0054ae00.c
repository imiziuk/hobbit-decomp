
void __thiscall FUN_0054ae00(int param_1,int *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  puVar4 = (undefined4 *)puVar3[1];
  if (puVar4 != DAT_0076cd84) {
    do {
      puVar1 = (undefined1 *)puVar4[4];
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = &DAT_006f3ce8;
      }
      iVar2 = FUN_0054b4a0(0,*(undefined4 *)(param_3 + 8),puVar1,puVar4[5]);
      if (iVar2 < 0) {
        puVar5 = (undefined4 *)*puVar4;
        puVar3 = puVar4;
      }
      else {
        puVar5 = (undefined4 *)puVar4[2];
      }
      puVar4 = puVar5;
    } while (puVar5 != DAT_0076cd84);
  }
  *param_2 = (int)puVar3;
  return;
}

