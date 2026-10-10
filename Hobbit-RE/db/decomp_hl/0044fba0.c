
void __thiscall FUN_0044fba0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xac) != 0) {
    iVar2 = FUN_004021c0(param_2,param_3);
    if (((iVar2 == 0) ||
        ((bVar1 = (byte)*(undefined4 *)(iVar2 + 0x10), (bVar1 & 0x10) != 0x10 &&
         ((bVar1 & 0x40) != 0x40)))) ||
       ((*(int *)(iVar2 + 0x1a4) != 0 && (*(int *)(iVar2 + 0x1a4) != 2)))) {
      FUN_0059ed70(param_4);
      *(undefined4 *)(param_1 + 0xec) = 0;
    }
  }
  return;
}

