
void __thiscall FUN_00658470(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (((undefined4 *)(param_1 + 0x21fc) != param_2) && (puVar1 = param_2 + 0x10, param_2 != puVar1))
  {
    puVar2 = (undefined4 *)(param_1 + 0x2204);
    iVar3 = (int)param_2 - (param_1 + 0x21fc);
    do {
      puVar2[-2] = *param_2;
      puVar2[-1] = param_2[1];
      *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
      puVar2[1] = param_2[3];
      param_2 = param_2 + 4;
      puVar2 = puVar2 + 4;
    } while (param_2 != puVar1);
  }
  *(undefined4 *)(param_1 + 0x223c) = param_3;
  *(undefined4 *)(param_1 + 0x2240) = param_4;
  return;
}

