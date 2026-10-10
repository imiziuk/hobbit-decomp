
int __thiscall FUN_006bfc10(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  if (*(uint *)(param_2 + 8) < param_3) {
    FUN_006bfb28();
  }
  uVar3 = *(uint *)(param_2 + 8) - param_3;
  if (param_4 < uVar3) {
    uVar3 = param_4;
  }
  if (param_1 == param_2) {
    FUN_006bfcde(uVar3 + param_3,DAT_006fd464);
    FUN_006bfcde(0,param_3);
  }
  else {
    if ((uVar3 != 0) && (uVar3 == *(uint *)(param_2 + 8))) {
      puVar2 = *(undefined1 **)(param_2 + 4);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_006f3ce8;
      }
      if ((byte)puVar2[-1] < 0xfe) {
        FUN_0054a060(1);
        puVar2 = *(undefined1 **)(param_2 + 4);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &DAT_006f3ce8;
        }
        *(undefined1 **)(param_1 + 4) = puVar2;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        puVar2[-1] = puVar2[-1] + '\x01';
        return param_1;
      }
    }
    cVar1 = FUN_0054a310(uVar3,1);
    if (cVar1 != '\0') {
      puVar2 = *(undefined1 **)(param_2 + 4);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_006f3ce8;
      }
      FUN_006c2dc0(*(undefined4 *)(param_1 + 4),puVar2 + param_3,uVar3);
      *(uint *)(param_1 + 8) = uVar3;
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar3) = 0;
    }
  }
  return param_1;
}

