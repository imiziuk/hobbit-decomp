
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066c3a0(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_007f15e0 == 0) {
    return;
  }
  iVar1 = 0;
  if (0 < DAT_007f14c8) {
    do {
      if ((code *)(&DAT_007f1448)[iVar1] != (code *)0x0) {
        (*(code *)(&DAT_007f1448)[iVar1])(1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_007f14c8);
  }
  DAT_007f15d8 = param_2 & 1;
  DAT_007f1558 = param_2 & 0x80000000;
  DAT_007f158c = param_1;
  _DAT_007f15f4 = param_2;
  DAT_007f15f0 = 0;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    DAT_007f14f0 = FUN_0066c920;
    DAT_007f157c = 0x4b0;
    break;
  case 6:
    DAT_007f14f0 = (code *)&DAT_0066cd30;
    DAT_007f157c = 300;
    break;
  case 7:
    DAT_007f14f0 = (code *)&LAB_0066d3a0;
    DAT_007f15f0 = 1;
  }
  DAT_007f15d0 = param_2 & 2;
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x89,0);
  (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0x1c,1);
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x34,0);
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xa8,0xf);
  if ((param_2 & 2) == 0) {
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,1,2);
    uVar3 = 0;
    uVar2 = 2;
  }
  else {
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,1,4);
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,2,0);
    uVar3 = 2;
    uVar2 = 3;
  }
  (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,uVar2,uVar3);
  if ((param_2 & 4) == 0) {
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,4,2);
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,5,0);
    iVar1 = *DAT_007f1000;
    if ((char)param_2 < '\0') {
      (**(code **)(iVar1 + 200))(DAT_007f1000,0x1b,1);
      uVar2 = 1;
LAB_0066c6a7:
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xab,uVar2);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,2);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,2);
    }
    else {
      if ((param_2 & 0x100) != 0) {
        (**(code **)(iVar1 + 200))(DAT_007f1000,0x1b,1);
        uVar2 = 3;
        goto LAB_0066c6a7;
      }
      (**(code **)(iVar1 + 200))(DAT_007f1000,0x1b,0);
    }
    uVar3 = 0;
    uVar2 = 0xf;
  }
  else {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x1b,1);
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,5);
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,6);
    if (DAT_007f15d0 == 0) {
      (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,4,2);
      uVar3 = 0;
      uVar2 = 5;
    }
    else {
      (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,4,4);
      (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,5,0);
      uVar3 = 2;
      uVar2 = 6;
    }
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,uVar2,uVar3);
    if ((char)param_2 < '\0') {
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xab,1);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,5);
      uVar2 = 2;
LAB_0066c621:
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,uVar2);
    }
    else {
      if ((param_2 & 0x100) == 0) {
        (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xab,1);
        (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,5);
        uVar2 = 6;
        goto LAB_0066c621;
      }
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xab,3);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,5);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,2);
    }
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x1b,1);
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x18,0);
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xf,1);
    uVar3 = 5;
    uVar2 = 0x19;
  }
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,uVar2,uVar3);
  (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,1,1,1);
  (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,1,4,1);
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x2f,DAT_007f1574);
  if ((param_2 & 0x10) == 0) {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,7,1);
    uVar3 = 4;
    uVar2 = 0x17;
  }
  else {
    uVar3 = 0;
    uVar2 = 7;
  }
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,uVar2,uVar3);
  if ((param_2 & 0x20) == 0) {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xe,1);
  }
  else {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xe,0);
  }
  if ((param_2 & 0x20000000) == 0) {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x16,2);
  }
  else {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x16,1);
  }
  if ((param_2 & 0x200) == 0) {
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0xd,1);
  }
  else {
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0xd,3);
  }
  if ((param_2 & 0x400) == 0) {
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0xe,1);
  }
  else {
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,0,0xe,3);
  }
  if ((param_2 & 8) == 0) {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,8,3);
  }
  else {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,8,2);
  }
  if (DAT_007f15d8 == 0) {
    if (DAT_007f1558 != 0) {
      (**(code **)(*DAT_007f1000 + 0x130))(DAT_007f1000,0x252);
      goto LAB_0066c881;
    }
    uVar2 = 0x242;
  }
  else {
    uVar2 = 0x244;
  }
  (**(code **)(*DAT_007f1000 + 0x130))(DAT_007f1000,uVar2);
LAB_0066c881:
  if (DAT_007f15d0 == 0) {
    FUN_00674940(0);
  }
  DAT_007f1604 = 1;
  DAT_007f15d4 = 0;
  DAT_007f1584 = 0;
  DAT_007f1570._3_1_ = 0xff;
  DAT_007f1570._2_1_ = 0xff;
  DAT_007f1570._1_1_ = 0xff;
  DAT_007f1570._0_1_ = 0xff;
  DAT_007f1554 = 0;
  DAT_007f1550 = 0;
  DAT_007f14ec = 0;
  DAT_007f14dc = 0;
  DAT_007f14d8 = 0;
  DAT_007f14d4 = 0;
  DAT_007f14d0 = 0;
  return;
}

