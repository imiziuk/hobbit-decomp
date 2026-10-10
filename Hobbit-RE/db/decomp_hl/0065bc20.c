
void * FUN_0065bc20(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  int iVar3;
  void *pvVar4;
  
  pvVar4 = (void *)0x0;
  iVar1 = (**(code **)(*DAT_007f0310 + 0x18))(DAT_007f0310,DAT_007edafc);
  if (0 < iVar1) {
    pvVar4 = operator_new(iVar1 << 4);
  }
  iVar3 = 0;
  *unaff_EBX = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(*DAT_007f0310 + 0x1c))
                (DAT_007f0310,DAT_007edafc,iVar3,(void *)(*unaff_EBX * 0x10 + (int)pvVar4));
      iVar2 = *unaff_EBX * 0x10;
      if (((DAT_007eff90 <= *(uint *)(iVar2 + (int)pvVar4)) &&
          (DAT_007eff94 <= *(uint *)((int)pvVar4 + iVar2 + 4))) &&
         (*(int *)((int)pvVar4 + iVar2 + 0xc) == 0x16)) {
        *unaff_EBX = *unaff_EBX + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return pvVar4;
}

