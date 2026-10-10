
uint FUN_00663a10(int *param_1,char param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int extraout_ECX;
  
  iVar3 = FUN_0065baf0();
  if ((iVar3 != 3) && ((iVar3 != 2 || (param_2 == '\0')))) {
    uVar1 = *(uint *)(extraout_ECX + 8);
    if ((uVar1 & 0x10) != 0) {
      return uVar1 & 0xffffff00;
    }
    bVar2 = (**(code **)(*param_1 + 0xc))();
    return (uint)(bVar2 == ((byte)(uVar1 >> 9) & 1));
  }
  return *(uint *)(extraout_ECX + 8) >> 4 & 1;
}

