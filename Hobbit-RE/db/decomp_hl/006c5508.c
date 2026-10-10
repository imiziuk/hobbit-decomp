
undefined4 * FUN_006c5508(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_006c56f9(2);
  iVar3 = 0;
  if (0 < DAT_008174a0) {
    do {
      iVar1 = *(int *)(DAT_00816484 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_00816484) = pvVar2;
        if (*(int *)(iVar3 + DAT_00816484) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_00816484) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_00816484) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_00816484);
LAB_006c55ac:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_006c4957(iVar3,iVar1);
        iVar1 = *(int *)(DAT_00816484 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_00816484 + iVar3 * 4);
          goto LAB_006c55ac;
        }
        FUN_006c49a9(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_008174a0);
  }
  FUN_006c575a(2);
  return puVar4;
}

