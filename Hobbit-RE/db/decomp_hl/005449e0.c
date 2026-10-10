
void __fastcall FUN_005449e0(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = FUN_00549470(param_1 + 4);
    FUN_00549580(param_1 + 4);
    iVar1 = *(int *)(iVar1 + 0x4c);
    pvVar2 = operator_new(iVar1 * 0x28);
    *(void **)(param_1 + 0x28) = pvVar2;
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        puVar3 = (undefined4 *)(iVar4 + 0xc + *(int *)(param_1 + 0x28));
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0x3f800000;
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar4);
        *puVar3 = 0x3f800000;
        puVar3[1] = 0x3f800000;
        puVar3[2] = 0x3f800000;
        puVar3 = (undefined4 *)(iVar4 + 0x1c + *(int *)(param_1 + 0x28));
        iVar4 = iVar4 + 0x28;
        iVar1 = iVar1 + -1;
        puVar3[2] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
      } while (iVar1 != 0);
    }
  }
  return;
}

