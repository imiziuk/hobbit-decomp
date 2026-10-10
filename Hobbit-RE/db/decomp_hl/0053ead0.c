
int __thiscall FUN_0053ead0(uint *param_1,byte param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 1 << (param_2 & 0x1f);
  iVar1 = 0;
  if (0 < param_3) {
    do {
      if ((uVar2 & *param_1) != 0) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = uVar2 << 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return iVar1;
}

