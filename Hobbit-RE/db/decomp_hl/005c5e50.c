
void __fastcall FUN_005c5e50(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  FUN_005c8ff0(0xffffffff,0,0xb8,0x40);
  FUN_005c8ff0(0xffffffff,0,0x28,0x40);
  pvVar1 = operator_new(0x100);
  *(void **)(param_1 + 0x84) = pvVar1;
  iVar2 = 0;
  do {
    *(undefined2 *)(iVar2 + *(int *)(param_1 + 0x84)) = 0xffff;
    iVar2 = iVar2 + 2;
  } while (iVar2 < 0x100);
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 1;
  return;
}

