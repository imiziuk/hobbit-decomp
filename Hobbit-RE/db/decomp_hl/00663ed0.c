
void __fastcall FUN_00663ed0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  while ((puVar1 = *(undefined4 **)(param_1 + 0x354), puVar1 != (undefined4 *)0x0 &&
         (*(int *)(param_1 + 0x358) - (int)puVar1 >> 2 != 0))) {
    (**(code **)(*(int *)*puVar1 + 0x14))();
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

