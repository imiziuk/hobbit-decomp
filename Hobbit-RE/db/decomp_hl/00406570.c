
void __thiscall FUN_00406570(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((param_1 != param_2) && (puVar1 = param_2 + 0x10, param_2 != puVar1)) {
    puVar2 = param_1 + 2;
    iVar3 = (int)param_2 - (int)param_1;
    do {
      puVar2[-2] = *param_2;
      puVar2[-1] = param_2[1];
      *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
      puVar2[1] = param_2[3];
      param_2 = param_2 + 4;
      puVar2 = puVar2 + 4;
    } while (param_2 != puVar1);
  }
  return;
}

