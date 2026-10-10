
void __fastcall FUN_0044e0f0(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x5e94) == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x5994);
    iVar3 = 0x10;
    do {
      puVar2[0xc] = 0;
      pvVar1 = operator_new(0xc0);
      *puVar2 = pvVar1;
      pvVar1 = operator_new(0xc0);
      puVar2[1] = pvVar1;
      puVar2 = puVar2 + 0x14;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)(param_1 + 0x5e94) = 1;
  }
  return;
}

