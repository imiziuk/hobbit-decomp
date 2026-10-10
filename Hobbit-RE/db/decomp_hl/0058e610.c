
int __thiscall FUN_0058e610(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  do {
    if ((*(uint *)(param_1 + 0x380) & 1 << ((byte)iVar3 & 0x1f)) == 0) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  iVar1 = iVar3 * 0x1c + param_1;
  *(uint *)(param_1 + 0x380) = 1 << ((byte)iVar3 & 0x1f) | *(uint *)(param_1 + 0x380);
  iVar2 = FUN_006b75f0(param_2);
  if (iVar2 != 0) {
    FUN_006b7680();
    *(undefined4 *)(iVar1 + 0x10) = param_4;
    *(undefined4 *)(iVar1 + 0x14) = 0x3f800000;
    *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) & 0xfe;
    FUN_0058e740(iVar3,param_3);
    return iVar3;
  }
  return 0;
}

