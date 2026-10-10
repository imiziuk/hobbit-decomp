
void FUN_00464560(void)

{
  void **ppvVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0c9b;
  local_c = ExceptionList;
  piVar4 = (int *)0x0;
  if (DAT_0075cbf0 == 0) {
    ExceptionList = &local_c;
    if (DAT_0075cbe8 != (int *)0x0) {
      ExceptionList = &local_c;
      FUN_00407f70(3);
    }
    DAT_0075cbe8 = (int *)0x0;
    DAT_0075cbec = 0;
    ppvVar1 = (void **)ExceptionList;
  }
  else {
    DAT_0075cbe4 = 0;
    ExceptionList = &local_c;
    ppvVar1 = &local_c;
    if (DAT_0075cbec == 0x67) goto LAB_0046464f;
  }
  ExceptionList = ppvVar1;
  DAT_0075cbe4 = 0;
  puVar2 = (undefined4 *)operator_new(0x11b8);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar4 = puVar2 + 1;
    *puVar2 = 0x67;
    FUN_006c043b(piVar4,0x2c,0x67,FUN_006499d0,FUN_00649ba0);
  }
  iVar7 = 0;
  local_4 = 0xffffffff;
  if (0 < DAT_0075cbe4) {
    iVar5 = 0;
    do {
      FUN_0064a320(iVar5 + (int)DAT_0075cbe8);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x2c;
    } while (iVar7 < DAT_0075cbe4);
  }
  if (DAT_0075cbe8 != (int *)0x0) {
    FUN_00407f70(3);
  }
  DAT_0075cbec = 0x67;
  DAT_0075cbe8 = piVar4;
LAB_0046464f:
  FUN_00649b20(&DAT_00720670);
  local_4 = 1;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 2;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320(iVar6 + (int)DAT_0075cbe8);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Bilbo_007200ac);
  local_4 = 3;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 4;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0 < DAT_0075cbe4) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_0075cbe8);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BilboBOB_007267b8);
  local_4 = 5;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 6;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = CONCAT31(local_4._1_3_,5);
    if (0 < DAT_0075cbe4) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_0075cbe8);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BilboCB_007267b0);
  local_4 = 7;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 8;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = CONCAT31(local_4._1_3_,7);
    if (0 < DAT_0075cbe4) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_0075cbe8);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BilboEK_007267a8);
  local_4 = 9;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 10;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = CONCAT31(local_4._1_3_,9);
    if (0 < DAT_0075cbe4) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_0075cbe8);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BilboHB_007267a0);
  local_4 = 0xb;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0xc;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = CONCAT31(local_4._1_3_,0xb);
    if (0 < DAT_0075cbe4) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_0075cbe8);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BilboLT_00726798);
  local_4 = 0xd;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0xe;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = CONCAT31(local_4._1_3_,0xd);
    if (0 < DAT_0075cbe4) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_0075cbe8);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BilboLM_00726790);
  local_4 = 0xf;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x10;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = CONCAT31(local_4._1_3_,0xf);
    if (0 < DAT_0075cbe4) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        FUN_0064a320(iVar5 + (int)DAT_0075cbe8);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BilboMW_00726788);
  local_4 = 0x11;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_0075cbe4;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x12;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x11);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320(iVar6 + (int)DAT_0075cbe8);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BilboOH_00726780);
  local_4 = 0x13;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_0075cbe4;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x14;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x13);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320(iVar6 + (int)DAT_0075cbe8);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BilboRM_00726778);
  local_4 = 0x15;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_0075cbe4;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x16;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x15);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320(iVar6 + (int)DAT_0075cbe8);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BilboSL_00726770);
  local_4 = 0x17;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_0075cbe4;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x18;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x17);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320(iVar6 + (int)DAT_0075cbe8);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BilboSM_00726768);
  local_4 = 0x19;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_0075cbe4;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x1a;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x19);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320(iVar6 + (int)DAT_0075cbe8);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BilboTH_00726760);
  local_4 = 0x1b;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x1c;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x1b);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320(iVar6 + (int)DAT_0075cbe8);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_GandalfOH_00726754);
  local_4 = 0x1d;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x1e;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x1d);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320((int)DAT_0075cbe8 + iVar6);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Goblin_SlaveOH_00726744);
  local_4 = 0x1f;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x20;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x1f);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320((int)DAT_0075cbe8 + iVar6);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_________NORMAL_ENEMIES__________00726724);
  local_4 = 0x21;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x22;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x21);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320((int)DAT_0075cbe8 + iVar6);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&PTR_s_ame_00726720);
  local_4 = 0x23;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = DAT_0075cbe4 + iVar7;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x24;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x23);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320((int)DAT_0075cbe8 + iVar6);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_FireBat_00726718);
  local_4 = 0x25;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_0075cbe4;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x26;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x25);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320((int)DAT_0075cbe8 + iVar6);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_EelNPC_00726710);
  local_4 = 0x27;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_0075cbe4;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x28;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x27);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320((int)DAT_0075cbe8 + iVar6);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Imp_Red_00726708);
  local_4 = 0x29;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_0075cbe4;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x2a;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x29);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320((int)DAT_0075cbe8 + iVar6);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Imp_Green_007266fc);
  local_4 = 0x2b;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_0075cbe4;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x2c;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x2b);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320((int)DAT_0075cbe8 + iVar6);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Imp_Fong_Green_007266ec);
  local_4 = 0x2d;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_0075cbe4;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x2e;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x2d);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320((int)DAT_0075cbe8 + iVar6);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Imp_Purple_007266e0);
  local_4 = 0x2f;
  piVar4 = DAT_0075cbe8;
  iVar7 = DAT_0075cbec;
  if (DAT_0075cbec < DAT_0075cbe4 + 1) {
    if (DAT_0075cbf4 == 0) {
      iVar7 = DAT_0075cbec / 2;
      iVar5 = 1;
      if (0 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar5 + DAT_0075cbe4 < 1) {
        iVar7 = 1;
      }
      else {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        iVar7 = iVar7 + DAT_0075cbe4;
      }
    }
    else {
      iVar7 = DAT_0075cbe4 + DAT_0075cbf4;
    }
    piVar3 = (int *)operator_new(iVar7 * 0x2c + 4);
    local_4._0_1_ = 0x30;
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
      *piVar3 = iVar7;
      FUN_006c043b(piVar4,0x2c,iVar7,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x2f);
    if (0 < DAT_0075cbe4) {
      iVar6 = 0;
      do {
        FUN_0064a320((int)DAT_0075cbe8 + iVar6);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar5 < DAT_0075cbe4);
    }
    if (DAT_0075cbe8 != (int *)0x0) {
      FUN_00407f70(3);
    }
  }
  DAT_0075cbec = iVar7;
  DAT_0075cbe8 = piVar4;
  FUN_0064a320(local_64);
  DAT_0075cbe4 = DAT_0075cbe4 + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Imp_Blue_007266d4);
  local_4 = 0x31;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Goblin_Bolg_Guard_007266c0);
  local_4 = 0x32;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Goblin_Slave_007266b0);
  local_4 = 0x33;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Goblin_Guard_007266a0);
  local_4 = 0x34;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_No_Move_Goblin_Guard_00726688);
  local_4 = 0x35;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_War_Goblin_0072667c);
  local_4 = 0x36;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Flamey_War_Goblin_00726668);
  local_4 = 0x37;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Goblin_Shaman_00726658);
  local_4 = 0x38;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Bolg_Shaman_0072664c);
  local_4 = 0x39;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Goblin_Bolg_00726640);
  local_4 = 0x3a;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Goblin_Mugwart_00726630);
  local_4 = 0x3b;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Goblin_Ugslap_00726620);
  local_4 = 0x3c;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_NeedlePod_00726614);
  local_4 = 0x3d;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_ThornPod_00726608);
  local_4 = 0x3e;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_LittleRockBadger_007265f4);
  local_4 = 0x3f;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_WolfSpider_007265e8);
  local_4 = 0x40;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_ChitnousSpider_007265d8);
  local_4 = 0x41;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_RedSpider_007265cc);
  local_4 = 0x42;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_GreenSpider_007265c0);
  local_4 = 0x43;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BlackSpider_007265b4);
  local_4 = 0x44;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BasicWaterLeaper_007265a0);
  local_4 = 0x45;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_WaterLeaper_00726594);
  local_4 = 0x46;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_WightWarrior_00726584);
  local_4 = 0x47;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_WightArcher_00726578);
  local_4 = 0x48;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_WightCaster_0072656c);
  local_4 = 0x49;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&DAT_00726564);
  local_4 = 0x4a;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Warg_Wolf_00726558);
  local_4 = 0x4b;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_StormWolf_0072654c);
  local_4 = 0x4c;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_________BOSS_ENEMIES__________0072652c);
  local_4 = 0x4d;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BridgeTroll_00726520);
  local_4 = 0x4e;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BigRockBadger_00726510);
  local_4 = 0x4f;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_SmaugSleeping_00726500);
  local_4 = 0x50;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_SmaugAlert_007264f4);
  local_4 = 0x51;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_SmaugAttacking_007264e4);
  local_4 = 0x52;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BossSpiderWrath_007264d4);
  local_4 = 0x53;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BossSpiderWild_007264c4);
  local_4 = 0x54;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_BossSpiderWicked_007264b0);
  local_4 = 0x55;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_TrollTom_007264a4);
  local_4 = 0x56;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_TrollWilliam_00726494);
  local_4 = 0x57;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_TrollBert_00726488);
  local_4 = 0x58;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Wallet_00726480);
  local_4 = 0x59;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_WightBoss_00726474);
  local_4 = 0x5a;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_________AMBIENT_CREATURES________00726450);
  local_4 = 0x5b;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Chicken_00726448);
  local_4 = 0x5c;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_SleepingChicken_00726438);
  local_4 = 0x5d;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&DAT_00726430);
  local_4 = 0x5e;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&PTR_LAB_0072642c);
  local_4 = 0x5f;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_FireFlies_00726420);
  local_4 = 0x60;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Fish_Bass_00726414);
  local_4 = 0x61;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Fish_BottomFeeder_00726400);
  local_4 = 0x62;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Fish_Minnows_007263f0);
  local_4 = 99;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&DAT_007263e8);
  local_4 = 100;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Scarecrow_007263dc);
  local_4 = 0x65;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_StoneGiant_007263d0);
  local_4 = 0x66;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(&DAT_007263c8);
  local_4 = 0x67;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_________GOOD_CHARACTERS__________007263a4);
  local_4 = 0x68;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Dwarf_0072639c);
  local_4 = 0x69;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_ElfGuard_00726390);
  local_4 = 0x6a;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_ElfGuardFemale_00726380);
  local_4 = 0x6b;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_ElfCommon_00726374);
  local_4 = 0x6c;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_ElfCommonFemale_00726364);
  local_4 = 0x6d;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Hobbit_0072635c);
  local_4 = 0x6e;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_HobbitPatrolling_00726348);
  local_4 = 0x6f;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_HobbitKid_0072633c);
  local_4 = 0x70;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_OldPeople_00726330);
  local_4 = 0x71;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_WarElf_00726328);
  local_4 = 0x72;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_WarHuman_0072631c);
  local_4 = 0x73;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_WarDwarf_00726310);
  local_4 = 0x74;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_________UNIQUE_GOOD_CHARACTERS___007262e8);
  local_4 = 0x75;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Balfour_007262e0);
  local_4 = 0x76;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Beorn_007262d8);
  local_4 = 0x77;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_FinalBeorn_007262cc);
  local_4 = 0x78;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Corwin_007262c4);
  local_4 = 0x79;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_WarLiana_007262b8);
  local_4 = 0x7a;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_TrollHoLiana_007262a8);
  local_4 = 0x7b;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Gandalf_007262a0);
  local_4 = 0x7c;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Thorin_00726298);
  local_4 = 0x7d;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_________REALLY_WACKED_STUFF______00726270);
  local_4 = 0x7e;
  FUN_00469980(local_64);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00649b20(s_Bridge_00726268);
  local_4 = 0x7f;
  FUN_00469980(local_38);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

