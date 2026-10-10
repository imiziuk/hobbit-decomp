
int FUN_004f1fc0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00650210();
  uVar2 = FUN_0052a650();
  switch(uVar2) {
  case 8:
    FUN_004f1f10(5);
    iVar3 = FUN_00650210();
    return iVar1 - iVar3;
  case 9:
    FUN_004f1f10(0);
    iVar3 = FUN_00650210();
    return iVar1 - iVar3;
  case 0xb:
    FUN_004f1f10(6);
    FUN_004f1f10(4);
    FUN_004f1f10(1);
    iVar3 = FUN_00650210();
    return iVar1 - iVar3;
  case 0xd:
    FUN_004f1f10(0);
    FUN_004f1f10(6);
    FUN_004f1f10(4);
    FUN_004f1f10(5);
    FUN_004f1f10(1);
  case 4:
    FUN_004f1f10(2);
    FUN_004f1f10(3);
  case 3:
  case 6:
    FUN_004f1f10(7);
  default:
    iVar3 = FUN_00650210();
    return iVar1 - iVar3;
  }
}

