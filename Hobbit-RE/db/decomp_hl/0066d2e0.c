
void FUN_0066d2e0(void)

{
  int *piVar1;
  
  if (DAT_007f15e4 == 0) {
    if (DAT_007f15d8 != 0) {
      piVar1 = (int *)FUN_00662390(*(undefined4 *)(&DAT_007f1544 + DAT_007f15fc * 4));
      (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,&DAT_007f15f8,0x2000);
      DAT_007f1580 = DAT_007f15f8;
      return;
    }
    if (DAT_007f1558 != 0) {
      piVar1 = (int *)FUN_00662390(*(undefined4 *)(&DAT_007f1544 + DAT_007f15fc * 4));
      (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,&DAT_007f156c,0x2000);
      DAT_007f15ec = DAT_007f156c;
      return;
    }
    piVar1 = (int *)FUN_00662390(*(undefined4 *)(&DAT_007f1544 + DAT_007f15fc * 4));
    (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,&DAT_007f15dc,0x2000);
    DAT_007f1588 = DAT_007f15dc;
  }
  return;
}

