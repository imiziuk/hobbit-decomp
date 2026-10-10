
void __thiscall FUN_004a13d0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_005af8c0();
  thunk_FUN_00595730();
  if (param_2 != 0) {
    param_1[0x9a] = param_1[0x9a] | 1;
  }
  iVar2 = param_1[0x99];
  param_1[0x99] = iVar2 + -1;
  if (iVar2 + -1 < 1) {
    FUN_00468250(param_2);
    param_1[0x99] = 0;
  }
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
  iVar2 = (**(code **)(*param_1 + 0x154))();
  *(undefined4 *)(iVar2 + 300) = 1;
  *(int *)(iVar2 + 0x138) = *(int *)(iVar2 + 0x138) + 1;
  *(undefined4 *)(iVar2 + 0x13c) = 1;
  *(int *)(iVar2 + 0x148) = *(int *)(iVar2 + 0x148) + 1;
  *(undefined4 *)(iVar2 + 0x10) = *puVar1;
  *(undefined4 *)(iVar2 + 0x14) = puVar1[1];
  *(undefined4 *)(iVar2 + 0x18) = puVar1[2];
  return;
}

