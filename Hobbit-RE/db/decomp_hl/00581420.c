
void __thiscall FUN_00581420(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined2 *)(param_1 + 0xe8) = param_3;
  iVar1 = FUN_00549470(param_1 + 0x14);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  else if (*(int *)(param_1 + 0xe4) == 0) {
    pvVar2 = operator_new(*(int *)(iVar1 + 0x74) << 2);
    *(void **)(param_1 + 0xe4) = pvVar2;
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_00648600(*(int *)(param_1 + 0xe4),0,*(int *)(iVar1 + 0x74) << 2);
  }
  FUN_00549580(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  return;
}

