
undefined4 FUN_00693a0a(int param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  for (; uVar1 < param_2; param_2 = param_2 - uVar1) {
    FUN_00693134(param_1,*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
  }
  if (param_2 != 0) {
    FUN_00693134(param_1,*(undefined4 *)(param_1 + 0x9c),param_2);
  }
  iVar3 = FUN_00693158(param_1);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x10c) & 0x20;
    if (((bVar2 == 0) || ((*(byte *)(param_1 + 0x5d) & 2) != 0)) &&
       ((bVar2 != 0 || ((*(byte *)(param_1 + 0x5d) & 4) == 0)))) {
      FUN_0068e327(param_1,"CRC error");
    }
    else {
      FUN_0068e34c(param_1,"CRC error");
    }
    uVar4 = 1;
  }
  return uVar4;
}

