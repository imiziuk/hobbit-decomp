
int __fastcall FUN_005bef00(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00567b20(2);
  uVar2 = FUN_005af0f0();
  *(undefined8 *)(iVar1 + 0x40) = uVar2;
  switch(*(undefined1 *)(param_1 + 0x46)) {
  case 1:
    *(undefined4 *)(iVar1 + 0xc) = 0x1d;
    return iVar1;
  case 2:
    *(undefined4 *)(iVar1 + 0xc) = 0x1e;
    return iVar1;
  case 3:
    *(undefined4 *)(iVar1 + 0xc) = 0x1f;
    return iVar1;
  case 4:
    *(undefined4 *)(iVar1 + 0xc) = 0x39;
    return iVar1;
  case 5:
    *(undefined4 *)(iVar1 + 0xc) = 0x3a;
    return iVar1;
  case 6:
    *(undefined4 *)(iVar1 + 0xc) = 0x37;
    return iVar1;
  case 7:
    *(undefined4 *)(iVar1 + 0xc) = 0x16;
    return iVar1;
  case 8:
    *(undefined4 *)(iVar1 + 0xc) = 0x18;
    return iVar1;
  default:
    return 0;
  }
}

