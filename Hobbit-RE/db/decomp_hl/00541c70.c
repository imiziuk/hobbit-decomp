
void __fastcall FUN_00541c70(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x13c) = 1;
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
  *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
  piVar1 = (int *)(param_1 + 0x110);
  iVar2 = 7;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 8))();
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

