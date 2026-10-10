
undefined4 __thiscall FUN_004c1da0(int param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0xe) {
    iVar1 = FUN_004c71a0();
    if (iVar1 != 0) {
      *(ushort *)(param_1 + 0x15a) = *(ushort *)(param_1 + 0x15a) & 0xbfff ^ 0x4000;
      FUN_004c7660(0);
      FUN_004c77d0(0);
      return 1;
    }
  }
  return 0;
}

