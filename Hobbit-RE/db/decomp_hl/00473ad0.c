
void __thiscall FUN_00473ad0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xcc)) {
    iVar1 = 0;
    do {
      if ((*(int *)(*(int *)(param_1 + 0xd0) + 0x2c + iVar1) == 1) &&
         (*(int *)(*(int *)(param_1 + 0xd0) + iVar1 + 0x30) == param_2)) {
        FUN_00473650(iVar2);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x40;
    } while (iVar2 < *(int *)(param_1 + 0xcc));
  }
  return;
}

