
void FUN_0066c920(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_007f15e4 != 0) {
    piVar1 = (int *)FUN_00662390(*(undefined4 *)(&DAT_007f1544 + DAT_007f15fc * 4));
    (**(code **)(*piVar1 + 0x30))(piVar1);
    iVar2 = FUN_0065fcf0();
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        uVar3 = FUN_0065fd00(iVar2);
        FUN_0066cb10(uVar3);
        if (DAT_007f15d8 == 0) {
          if (DAT_007f1558 == 0) {
            uVar3 = *(undefined4 *)(&DAT_007f1544 + DAT_007f15fc * 4);
            uVar5 = 0x20;
          }
          else {
            uVar3 = *(undefined4 *)(&DAT_007f1544 + DAT_007f15fc * 4);
            uVar5 = 0x2c;
          }
        }
        else {
          uVar3 = *(undefined4 *)(&DAT_007f1544 + DAT_007f15fc * 4);
          uVar5 = 0x24;
        }
        FUN_006624e0(0,uVar3,uVar5);
        switch(DAT_007f158c) {
        case 0:
          (**(code **)(*DAT_007f1000 + 0x118))(DAT_007f1000,1,0,DAT_007f15e4);
          break;
        case 1:
          (**(code **)(*DAT_007f1000 + 0x118))(DAT_007f1000,2,0,DAT_007f15e4 / 2);
          break;
        case 2:
          (**(code **)(*DAT_007f1000 + 0x118))(DAT_007f1000,3,0,DAT_007f15e4 + -1);
          break;
        case 3:
          (**(code **)(*DAT_007f1000 + 0x118))(DAT_007f1000,4,0,DAT_007f15e4 / 3);
          break;
        case 4:
          (**(code **)(*DAT_007f1000 + 0x118))(DAT_007f1000,5,0,DAT_007f15e4 + -2);
          break;
        case 5:
        case 6:
        case 7:
          FUN_00662590(DAT_007f14e4,0);
          (**(code **)(*DAT_007f1000 + 0x11c))(DAT_007f1000,4,0,DAT_007f15e4,0,DAT_007f15e4 / 2);
        }
        iVar2 = iVar2 + 1;
        iVar4 = FUN_0065fcf0();
      } while (iVar2 < iVar4);
    }
    DAT_007f15fc = DAT_007f15fc + 1;
    if (DAT_007f15fc == 3) {
      DAT_007f15fc = 0;
    }
    DAT_007f15e4 = 0;
  }
  return;
}

