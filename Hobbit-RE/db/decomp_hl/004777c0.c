
void __thiscall FUN_004777c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1c9d;
  local_c = ExceptionList;
  piVar4 = (int *)0x0;
  ExceptionList = &local_c;
  if (DAT_00727b9c != 0) {
    DAT_00727b9c = 0;
    ExceptionList = &local_c;
    if (DAT_0075cd20 == 0) {
      ExceptionList = &local_c;
      if (DAT_0075cd18 != (int *)0x0) {
        ExceptionList = &local_c;
        FUN_00407f70();
      }
      DAT_0075cd18 = (int *)0x0;
      DAT_0075cd1c = 0;
    }
    DAT_0075cd14 = 0;
    FUN_00649b20();
    local_4 = 0;
    piVar2 = DAT_0075cd18;
    iVar1 = DAT_0075cd1c;
    if (DAT_0075cd1c < DAT_0075cd14 + 1) {
      if (DAT_0075cd24 == 0) {
        iVar1 = DAT_0075cd1c / 2;
        iVar5 = 1;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 + DAT_0075cd14 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = DAT_0075cd14 + iVar1;
        }
      }
      else {
        iVar1 = DAT_0075cd14 + DAT_0075cd24;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 1;
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < DAT_0075cd14) {
        iVar5 = 0;
        do {
          FUN_0064a320();
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_0075cd14);
      }
      piVar2 = piVar4;
      if (DAT_0075cd18 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075cd1c = iVar1;
    DAT_0075cd18 = piVar2;
    piVar4 = (int *)0x0;
    FUN_0064a320();
    DAT_0075cd14 = DAT_0075cd14 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 2;
    piVar2 = DAT_0075cd18;
    iVar1 = DAT_0075cd1c;
    if (DAT_0075cd1c < DAT_0075cd14 + 1) {
      if (DAT_0075cd24 == 0) {
        iVar1 = DAT_0075cd1c / 2;
        iVar5 = 1;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 + DAT_0075cd14 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cd14;
        }
      }
      else {
        iVar1 = DAT_0075cd14 + DAT_0075cd24;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 3;
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar5 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < DAT_0075cd14) {
        do {
          FUN_0064a320();
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_0075cd14);
      }
      piVar2 = piVar4;
      if (DAT_0075cd18 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075cd1c = iVar1;
    DAT_0075cd18 = piVar2;
    piVar4 = (int *)0x0;
    FUN_0064a320();
    DAT_0075cd14 = DAT_0075cd14 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    if (DAT_0075cd3c == 0) {
      if (DAT_0075cd34 != (int *)0x0) {
        FUN_00407f70();
      }
      DAT_0075cd34 = (int *)0x0;
      DAT_0075cd38 = 0;
    }
    DAT_0075cd30 = 0;
    FUN_00649b20();
    local_4 = 4;
    piVar2 = DAT_0075cd34;
    iVar1 = DAT_0075cd38;
    if (DAT_0075cd38 < DAT_0075cd30 + 1) {
      if (DAT_0075cd40 == 0) {
        iVar1 = DAT_0075cd38 / 2;
        iVar5 = 1;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 + DAT_0075cd30 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cd30;
        }
      }
      else {
        iVar1 = DAT_0075cd30 + DAT_0075cd40;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 5;
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar5 = 0;
      local_4 = CONCAT31(local_4._1_3_,4);
      if (0 < DAT_0075cd30) {
        do {
          FUN_0064a320();
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_0075cd30);
      }
      piVar2 = piVar4;
      if (DAT_0075cd34 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075cd38 = iVar1;
    DAT_0075cd34 = piVar2;
    piVar4 = (int *)0x0;
    FUN_0064a320();
    DAT_0075cd30 = DAT_0075cd30 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 6;
    piVar2 = DAT_0075cd34;
    iVar1 = DAT_0075cd38;
    if (DAT_0075cd38 < DAT_0075cd30 + 1) {
      if (DAT_0075cd40 == 0) {
        iVar1 = DAT_0075cd38 / 2;
        iVar5 = 1;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 + DAT_0075cd30 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cd30;
        }
      }
      else {
        iVar1 = DAT_0075cd30 + DAT_0075cd40;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 7;
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar5 = 0;
      local_4 = CONCAT31(local_4._1_3_,6);
      if (0 < DAT_0075cd30) {
        do {
          FUN_0064a320();
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_0075cd30);
      }
      piVar2 = piVar4;
      if (DAT_0075cd34 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075cd38 = iVar1;
    DAT_0075cd34 = piVar2;
    piVar4 = (int *)0x0;
    FUN_0064a320();
    DAT_0075cd30 = DAT_0075cd30 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 8;
    piVar2 = DAT_0075cd34;
    iVar1 = DAT_0075cd38;
    if (DAT_0075cd38 < DAT_0075cd30 + 1) {
      if (DAT_0075cd40 == 0) {
        iVar1 = DAT_0075cd38 / 2;
        iVar5 = 1;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 + DAT_0075cd30 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cd30;
        }
      }
      else {
        iVar1 = DAT_0075cd30 + DAT_0075cd40;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 9;
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar5 = 0;
      local_4 = CONCAT31(local_4._1_3_,8);
      if (0 < DAT_0075cd30) {
        do {
          FUN_0064a320();
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_0075cd30);
      }
      piVar2 = piVar4;
      if (DAT_0075cd34 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075cd38 = iVar1;
    DAT_0075cd34 = piVar2;
    piVar4 = (int *)0x0;
    FUN_0064a320();
    DAT_0075cd30 = DAT_0075cd30 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 10;
    piVar2 = DAT_0075cd34;
    iVar1 = DAT_0075cd38;
    if (DAT_0075cd38 < DAT_0075cd30 + 1) {
      if (DAT_0075cd40 == 0) {
        iVar1 = DAT_0075cd38 / 2;
        iVar5 = 1;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 + DAT_0075cd30 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cd30;
        }
      }
      else {
        iVar1 = DAT_0075cd30 + DAT_0075cd40;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 0xb;
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar5 = 0;
      local_4 = CONCAT31(local_4._1_3_,10);
      if (0 < DAT_0075cd30) {
        do {
          FUN_0064a320();
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_0075cd30);
      }
      piVar2 = piVar4;
      if (DAT_0075cd34 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075cd38 = iVar1;
    DAT_0075cd34 = piVar2;
    piVar4 = (int *)0x0;
    FUN_0064a320();
    DAT_0075cd30 = DAT_0075cd30 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    FUN_00649b20();
    local_4 = 0xc;
    piVar2 = DAT_0075cd34;
    iVar1 = DAT_0075cd38;
    if (DAT_0075cd38 < DAT_0075cd30 + 1) {
      if (DAT_0075cd40 == 0) {
        iVar1 = DAT_0075cd38 / 2;
        iVar5 = 1;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 + DAT_0075cd30 < 1) {
          iVar1 = 1;
        }
        else {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar1 = iVar1 + DAT_0075cd30;
        }
      }
      else {
        iVar1 = DAT_0075cd30 + DAT_0075cd40;
      }
      piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
      local_4._0_1_ = 0xd;
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_006c043b();
      }
      iVar5 = 0;
      local_4 = CONCAT31(local_4._1_3_,0xc);
      if (0 < DAT_0075cd30) {
        do {
          FUN_0064a320();
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_0075cd30);
      }
      piVar2 = piVar4;
      if (DAT_0075cd34 != (int *)0x0) {
        FUN_00407f70();
      }
    }
    DAT_0075cd38 = iVar1;
    DAT_0075cd34 = piVar2;
    FUN_0064a320();
    DAT_0075cd30 = DAT_0075cd30 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  FUN_00649920();
  local_4 = 0xe;
  FUN_00649940();
  FUN_00496020();
  local_4 = 0xffffffff;
  FUN_00649950();
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_00649920();
    local_4 = 0xf;
    FUN_00649940();
    FUN_00459f30();
    local_4 = 0xffffffff;
    FUN_00649950();
  }
  else {
    FUN_00649920();
    local_4 = 0x10;
    FUN_00649940();
    FUN_00481150();
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920();
    local_4 = 0x11;
    FUN_00649940();
    FUN_005669e0();
    local_4 = 0xffffffff;
    FUN_00649950();
    if (*(int *)(param_1 + 0x20) != 0 || *(int *)(param_1 + 0x24) != 0) {
      FUN_00649920();
      local_4 = 0x12;
      FUN_00649940();
      FUN_005669e0();
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920();
      local_4 = 0x13;
      FUN_00401f00();
      FUN_00401f00(0x800000,0x800000,0x800000);
      uVar3 = FUN_00649940(2);
      FUN_00480ff0(param_3,uVar3);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920();
      local_4 = 0x14;
      FUN_00649940();
      FUN_005669e0();
      local_4 = 0xffffffff;
      FUN_00649950();
    }
    FUN_00649920();
    local_4 = 0x15;
    FUN_00401f00();
    FUN_00401f00();
    FUN_00649940();
    FUN_00463d50();
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920();
    local_4 = 0x16;
    FUN_00401f00();
    FUN_00401f00(0x800000,0x800000,0x800000);
    uVar3 = FUN_00649940(2);
    FUN_00480ff0(param_3,uVar3);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (*(int *)(param_1 + 0x6c) == 0) {
      FUN_00649920();
      local_4 = 0x17;
      FUN_00401f00();
      FUN_00401f00();
      FUN_00649940();
      FUN_00463d50();
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920();
      local_4 = 0x18;
      FUN_00401f00();
      FUN_00401f00(0x800000,0x800000,0x800000);
      uVar3 = FUN_00649940(2);
      FUN_00480ff0(param_3,uVar3);
      local_4 = 0xffffffff;
      FUN_00649950();
    }
  }
  FUN_00649920();
  local_4 = 0x19;
  FUN_00649940();
  FUN_004bffd0();
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920();
  local_4 = 0x1a;
  FUN_00649940();
  FUN_004bffd0();
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920();
  local_4 = 0x1b;
  FUN_00649940();
  FUN_005669e0();
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920();
  local_4 = 0x1c;
  FUN_00649940();
  FUN_005669e0();
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00474830();
  ExceptionList = local_c;
  return;
}

