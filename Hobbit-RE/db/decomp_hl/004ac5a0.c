
uint FUN_004ac5a0(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_004ab440();
  uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar2 != 0) {
    uVar1 = uVar1 | 4;
  }
  return uVar1;
}

