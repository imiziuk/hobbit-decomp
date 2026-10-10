
void __thiscall FUN_00576b70(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  int local_4;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  puVar3 = (undefined4 *)puVar2[1];
  bVar4 = true;
  local_4 = param_1;
  if (puVar3 != DAT_00772ce8) {
    do {
      puVar2 = puVar3;
      iVar1 = FUN_0064a9c0(param_3,puVar2 + 3);
      bVar4 = iVar1 != 0;
      if (bVar4) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
    } while (puVar3 != DAT_00772ce8);
  }
  if (*(char *)(param_1 + 8) != '\0') {
    puVar2 = (undefined4 *)FUN_00577250(&local_4,puVar3,puVar2,param_3);
    *param_2 = *puVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar4) {
    if (puVar2 == (undefined4 *)**(int **)(param_1 + 4)) {
      puVar2 = (undefined4 *)FUN_00577250(&local_4,puVar3,puVar2,param_3);
      *param_2 = *puVar2;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    FUN_00577500();
  }
  iVar1 = FUN_0064a9c0(puVar2 + 3,param_3);
  if (iVar1 == 0) {
    *param_2 = puVar2;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
  puVar2 = (undefined4 *)FUN_00577250(&local_4,puVar3,puVar2,param_3);
  *param_2 = *puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

