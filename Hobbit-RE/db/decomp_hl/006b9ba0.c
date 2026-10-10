
void __fastcall FUN_006b9ba0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_006bb350();
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar1 + 0x8c);
  *(undefined4 *)(param_1 + 0xb8) = 1;
  if (0 < *(int *)(iVar1 + 0x88)) {
    puVar2 = (undefined4 *)(param_1 + 0x138);
    do {
      puVar2[-10] = 0;
      *puVar2 = 0;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x11;
    } while (iVar3 < *(int *)(iVar1 + 0x88));
  }
  return;
}

