
void FUN_0054f290(void)

{
  int iVar1;
  
  iVar1 = 0x1b;
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x1b,1);
  switch(*(undefined4 *)(iVar1 + 0x2ec)) {
  case 0:
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,5);
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,6);
    return;
  case 1:
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,9);
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,1);
    return;
  case 2:
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,1);
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,4);
    return;
  case 3:
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,2);
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,2);
  }
  return;
}

