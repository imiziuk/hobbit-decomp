
int FUN_0053f4d0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00647cf0(param_1);
  uVar2 = iVar1 + 1U & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  return 4 - uVar2;
}

