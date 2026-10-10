
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452690(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfdc6;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  ExceptionList = &local_c;
  if ((DAT_0075c9a8 & 1) == 0) {
    DAT_0075c9a8 = DAT_0075c9a8 | 1;
    DAT_0075c998 = (int *)0x0;
    DAT_0075c994 = 0;
    DAT_0075c99c = 0;
    DAT_0075c9a4 = 0;
    DAT_0075c9a0 = 0;
    _DAT_0075c98c = 0;
    _DAT_0075c990 = 0;
    ExceptionList = &local_c;
    FUN_006bfe55(&LAB_00452a30);
  }
  if (DAT_00724f00 == 0) goto LAB_00452968;
  DAT_00724f00 = 0;
  FUN_00649b20(s_Ground_00724f98);
  local_4 = 0;
  piVar2 = DAT_0075c998;
  iVar1 = DAT_0075c99c;
  if (DAT_0075c99c < DAT_0075c994 + 1) {
    if (DAT_0075c9a4 == 0) {
      iVar1 = DAT_0075c99c / 2;
      iVar6 = 1;
      if (0 < iVar1) {
        iVar6 = iVar1;
      }
      if (iVar6 + DAT_0075c994 < 1) {
        iVar1 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar1 = iVar1 + DAT_0075c994;
      }
    }
    else {
      iVar1 = DAT_0075c9a4 + DAT_0075c994;
    }
    piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
    local_4._0_1_ = 1;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2 + 1;
      *piVar2 = iVar1;
      FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0 < DAT_0075c994) {
      iVar4 = 0;
      do {
        FUN_0064a320(iVar4 + (int)DAT_0075c998);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar6 < DAT_0075c994);
    }
    piVar2 = piVar3;
    if (DAT_0075c998 != (int *)0x0) {
      piVar3 = DAT_0075c998 + -1;
      FUN_006c026a(DAT_0075c998,0x2c,DAT_0075c998[-1],FUN_00649ba0);
      FUN_006bf840(piVar3);
    }
  }
  DAT_0075c99c = iVar1;
  DAT_0075c998 = piVar2;
  piVar3 = (int *)0x0;
  FUN_0064a320(local_64);
  DAT_0075c994 = DAT_0075c994 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&DAT_00724f90);
  local_4 = 2;
  piVar2 = DAT_0075c998;
  iVar1 = DAT_0075c99c;
  if (DAT_0075c99c < DAT_0075c994 + 1) {
    iVar1 = DAT_0075c9a4;
    if (DAT_0075c9a4 == 0) {
      iVar4 = DAT_0075c99c / 2;
      iVar6 = 1;
      if (0 < iVar4) {
        iVar6 = iVar4;
      }
      iVar1 = 1;
      if (0 < iVar6 + DAT_0075c994) {
        if (0 < iVar4) {
          iVar1 = iVar4;
        }
        goto LAB_004528a4;
      }
    }
    else {
LAB_004528a4:
      iVar1 = iVar1 + DAT_0075c994;
    }
    piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
    local_4._0_1_ = 3;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2 + 1;
      *piVar2 = iVar1;
      FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
    }
    iVar6 = 0;
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0 < DAT_0075c994) {
      iVar4 = 0;
      do {
        FUN_0064a320(iVar4 + (int)DAT_0075c998);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar6 < DAT_0075c994);
    }
    piVar2 = piVar3;
    if (DAT_0075c998 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075c99c = iVar1;
  DAT_0075c998 = piVar2;
  FUN_0064a320(local_38);
  DAT_0075c994 = DAT_0075c994 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
LAB_00452968:
  iVar1 = 0;
  FUN_004c3f80(param_1);
  if (0 < *(int *)(param_1 + 8)) {
    iVar6 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0xc) + iVar6;
      iVar4 = FUN_00647e40(iVar5,s_System_Layer_00724f80);
      if (iVar4 == 0) {
        *(uint *)(iVar5 + 0x84) = *(uint *)(iVar5 + 0x84) | 4;
      }
      iVar4 = FUN_00647e40(iVar5,s_Animation_Resource_00724f6c);
      if (iVar4 == 0) {
        *(uint *)(iVar5 + 0x84) = *(uint *)(iVar5 + 0x84) | 4;
      }
      iVar1 = iVar1 + 1;
      iVar6 = iVar6 + 0x108;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xc;
    FUN_00647d10(iVar1,s_Hole_Type_00724f60);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(int *)(iVar1 + 0xf4) = DAT_0075c994;
    *(undefined **)(iVar1 + 0x100) = &DAT_0075c98c;
  }
  ExceptionList = local_c;
  return;
}

