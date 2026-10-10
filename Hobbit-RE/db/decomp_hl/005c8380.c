
void FUN_005c8380(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_005c7df0(param_1,param_2);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = 1;
    iVar3 = FUN_004021c0(param_1,param_2);
    if (iVar3 != 0) {
      cVar1 = *(char *)(*(int *)(*(int *)(iVar3 + 0x300) + 0xbc) + 0x44);
      if (cVar1 == '\x03') {
        iVar3 = FUN_005c8410(2);
        *(uint *)(iVar2 + 8) = ((iVar3 < 3) - 1 & 3) + 2;
        return;
      }
      if (cVar1 == '\x04') {
        *(undefined4 *)(iVar2 + 8) = 3;
        return;
      }
      *(uint *)(iVar2 + 8) = (uint)(cVar1 != '\a') * 2 + 4;
    }
  }
  return;
}

