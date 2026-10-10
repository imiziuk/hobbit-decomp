
void __thiscall FUN_004d65b0(int param_1,int ***param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int iVar6;
  int iVar7;
  undefined *puStack_70;
  int *piStack_6c;
  char *pcStack_68;
  int **ppiStack_64;
  code *pcStack_60;
  int local_44;
  char local_40 [4];
  int *local_3c [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d531d;
  local_c = ExceptionList;
  piVar4 = (int *)0x0;
  ExceptionList = &local_c;
  if (DAT_0072d954 != 0) {
    DAT_0072d954 = 0;
    pcStack_60 = (code *)0x4d65f6;
    ExceptionList = &local_c;
    FUN_00649b20();
    local_4 = 0;
    piVar1 = DAT_0075dd20;
    ppiVar5 = DAT_0075dd24;
    if ((int)DAT_0075dd24 < DAT_0075dd1c + 1) {
      if (DAT_0075dd2c == 0) {
        iVar2 = (int)DAT_0075dd24 / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + DAT_0075dd1c < 1) {
          ppiVar5 = (int **)0x1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          ppiVar5 = (int **)(iVar2 + DAT_0075dd1c);
        }
      }
      else {
        ppiVar5 = (int **)(DAT_0075dd2c + DAT_0075dd1c);
      }
      pcStack_60 = (code *)0x4d6658;
      local_3c[0] = (int *)operator_new((int)ppiVar5 * 0x2c + 4);
      local_4._0_1_ = 1;
      if (local_3c[0] != (int *)0x0) {
        pcStack_60 = FUN_006499d0;
        piVar4 = local_3c[0] + 1;
        pcStack_68 = (char *)0x2c;
        *local_3c[0] = (int)ppiVar5;
        puStack_70 = (undefined *)0x4d6680;
        piStack_6c = piVar4;
        ppiStack_64 = ppiVar5;
        FUN_006c043b();
      }
      iVar6 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < DAT_0075dd1c) {
        do {
          pcStack_60 = (code *)0x4d66a7;
          FUN_0064a320();
          iVar6 = iVar6 + 1;
        } while (iVar6 < DAT_0075dd1c);
      }
      piVar1 = piVar4;
      if (DAT_0075dd20 != (int *)0x0) {
        pcStack_60 = (code *)0x4d66c7;
        FUN_00407f70();
      }
    }
    DAT_0075dd24 = ppiVar5;
    DAT_0075dd20 = piVar1;
    pcStack_60 = (code *)0x4d66ef;
    FUN_0064a320();
    DAT_0075dd1c = DAT_0075dd1c + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    pcStack_60 = (code *)0x4d6717;
    FUN_00649b20();
    local_4 = 2;
    piVar4 = DAT_0075dd20;
    ppiVar5 = DAT_0075dd24;
    if ((int)DAT_0075dd24 < DAT_0075dd1c + 1) {
      if (DAT_0075dd2c == 0) {
        iVar2 = (int)DAT_0075dd24 / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + DAT_0075dd1c < 1) {
          ppiVar5 = (int **)0x1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          ppiVar5 = (int **)(iVar2 + DAT_0075dd1c);
        }
      }
      else {
        ppiVar5 = (int **)(DAT_0075dd2c + DAT_0075dd1c);
      }
      pcStack_60 = (code *)0x4d677e;
      local_3c[0] = (int *)operator_new((int)ppiVar5 * 0x2c + 4);
      local_4._0_1_ = 3;
      if (local_3c[0] == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        pcStack_60 = FUN_006499d0;
        piVar4 = local_3c[0] + 1;
        pcStack_68 = (char *)0x2c;
        *local_3c[0] = (int)ppiVar5;
        puStack_70 = (undefined *)0x4d67a6;
        piStack_6c = piVar4;
        ppiStack_64 = ppiVar5;
        FUN_006c043b();
      }
      iVar6 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < DAT_0075dd1c) {
        do {
          pcStack_60 = (code *)0x4d67d2;
          FUN_0064a320();
          iVar6 = iVar6 + 1;
        } while (iVar6 < DAT_0075dd1c);
      }
      if (DAT_0075dd20 != (int *)0x0) {
        pcStack_60 = (code *)0x4d67f2;
        FUN_00407f70();
      }
    }
    DAT_0075dd24 = ppiVar5;
    DAT_0075dd20 = piVar4;
    pcStack_60 = (code *)0x4d681a;
    FUN_0064a320();
    DAT_0075dd1c = DAT_0075dd1c + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    pcStack_60 = (code *)0x4d6842;
    FUN_00649b20();
    local_4 = 4;
    piVar4 = DAT_0075dd20;
    ppiVar5 = DAT_0075dd24;
    if ((int)DAT_0075dd24 < DAT_0075dd1c + 1) {
      if (DAT_0075dd2c == 0) {
        iVar2 = (int)DAT_0075dd24 / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + DAT_0075dd1c < 1) {
          ppiVar5 = (int **)0x1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          ppiVar5 = (int **)(iVar2 + DAT_0075dd1c);
        }
      }
      else {
        ppiVar5 = (int **)(DAT_0075dd2c + DAT_0075dd1c);
      }
      pcStack_60 = (code *)0x4d68a9;
      local_3c[0] = (int *)operator_new((int)ppiVar5 * 0x2c + 4);
      local_4._0_1_ = 5;
      if (local_3c[0] == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        pcStack_60 = FUN_006499d0;
        piVar4 = local_3c[0] + 1;
        pcStack_68 = (char *)0x2c;
        *local_3c[0] = (int)ppiVar5;
        puStack_70 = (undefined *)0x4d68d1;
        piStack_6c = piVar4;
        ppiStack_64 = ppiVar5;
        FUN_006c043b();
      }
      iVar6 = 0;
      local_4 = CONCAT31(local_4._1_3_,4);
      if (0 < DAT_0075dd1c) {
        do {
          pcStack_60 = (code *)0x4d6902;
          FUN_0064a320();
          iVar6 = iVar6 + 1;
        } while (iVar6 < DAT_0075dd1c);
      }
      if (DAT_0075dd20 != (int *)0x0) {
        pcStack_60 = (code *)0x4d6922;
        FUN_00407f70();
      }
    }
    DAT_0075dd24 = ppiVar5;
    DAT_0075dd20 = piVar4;
    pcStack_60 = (code *)0x4d694c;
    FUN_0064a320();
    DAT_0075dd1c = DAT_0075dd1c + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    iVar6 = 0;
    if (DAT_0075dd08 == 0) {
      if (DAT_0075dd00 != (int *)0x0) {
        pcStack_60 = (code *)0x4d697b;
        FUN_00407f70();
      }
      DAT_0075dd00 = (int *)0x0;
      DAT_0075dd04 = (int **)0x0;
    }
    DAT_0075dcfc = 0;
    local_44 = 0;
    iVar2 = FUN_00434e50();
    if (0 < iVar2) {
      do {
        pcStack_60 = (code *)0x4d69ae;
        FUN_00434e80();
        pcStack_60 = (code *)0x4d69b8;
        FUN_00649b20();
        local_4 = 6;
        piVar4 = DAT_0075dd00;
        ppiVar5 = DAT_0075dd04;
        if ((int)DAT_0075dd04 < DAT_0075dcfc + 1) {
          if (DAT_0075dd0c == 0) {
            iVar2 = (int)DAT_0075dd04 / 2;
            iVar6 = 1;
            if (0 < iVar2) {
              iVar6 = iVar2;
            }
            if (iVar6 + DAT_0075dcfc < 1) {
              ppiVar5 = (int **)0x1;
            }
            else {
              if (iVar2 < 1) {
                iVar2 = 1;
              }
              ppiVar5 = (int **)(DAT_0075dcfc + iVar2);
            }
          }
          else {
            ppiVar5 = (int **)(DAT_0075dcfc + DAT_0075dd0c);
          }
          pcStack_60 = (code *)0x4d6a1f;
          local_3c[0] = (int *)operator_new((int)ppiVar5 * 0x2c + 4);
          local_4._0_1_ = 7;
          if (local_3c[0] == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            pcStack_60 = FUN_006499d0;
            piVar4 = local_3c[0] + 1;
            pcStack_68 = (char *)0x2c;
            *local_3c[0] = (int)ppiVar5;
            puStack_70 = (undefined *)0x4d6a47;
            piStack_6c = piVar4;
            ppiStack_64 = ppiVar5;
            FUN_006c043b();
          }
          iVar6 = 0;
          local_4 = CONCAT31(local_4._1_3_,6);
          if (0 < DAT_0075dcfc) {
            do {
              pcStack_60 = (code *)0x4d6a72;
              FUN_0064a320();
              iVar6 = iVar6 + 1;
            } while (iVar6 < DAT_0075dcfc);
          }
          iVar6 = local_44;
          if (DAT_0075dd00 != (int *)0x0) {
            pcStack_60 = (code *)0x4d6a92;
            FUN_00407f70();
            iVar6 = local_44;
          }
        }
        DAT_0075dd04 = ppiVar5;
        DAT_0075dd00 = piVar4;
        pcStack_60 = (code *)0x4d6ac0;
        FUN_0064a320();
        DAT_0075dcfc = DAT_0075dcfc + 1;
        local_4 = 0xffffffff;
        FUN_00649ba0();
        iVar6 = iVar6 + 1;
        local_44 = iVar6;
        iVar2 = FUN_00434e50();
      } while (iVar6 < iVar2);
    }
    pcStack_60 = (code *)0x4d6aff;
    FUN_00649b20();
    local_4 = 8;
    piVar4 = DAT_0075dc9c;
    ppiVar5 = DAT_0075dca0;
    if ((int)DAT_0075dca0 < DAT_0075dc98 + 1) {
      if (DAT_0075dca8 == 0) {
        iVar2 = (int)DAT_0075dca0 / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + DAT_0075dc98 < 1) {
          ppiVar5 = (int **)0x1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          ppiVar5 = (int **)(DAT_0075dc98 + iVar2);
        }
      }
      else {
        ppiVar5 = (int **)(DAT_0075dc98 + DAT_0075dca8);
      }
      pcStack_60 = (code *)0x4d6b66;
      local_3c[0] = (int *)operator_new((int)ppiVar5 * 0x2c + 4);
      local_4._0_1_ = 9;
      if (local_3c[0] == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        pcStack_60 = FUN_006499d0;
        piVar4 = local_3c[0] + 1;
        pcStack_68 = (char *)0x2c;
        *local_3c[0] = (int)ppiVar5;
        puStack_70 = (undefined *)0x4d6b8e;
        piStack_6c = piVar4;
        ppiStack_64 = ppiVar5;
        FUN_006c043b();
      }
      iVar6 = 0;
      local_4 = CONCAT31(local_4._1_3_,8);
      if (0 < DAT_0075dc98) {
        do {
          pcStack_60 = (code *)0x4d6bb9;
          FUN_0064a320();
          iVar6 = iVar6 + 1;
        } while (iVar6 < DAT_0075dc98);
      }
      if (DAT_0075dc9c != (int *)0x0) {
        pcStack_60 = (code *)0x4d6bd9;
        FUN_00407f70();
      }
    }
    DAT_0075dca0 = ppiVar5;
    DAT_0075dc9c = piVar4;
    pcStack_60 = (code *)0x4d6c01;
    FUN_0064a320();
    DAT_0075dc98 = DAT_0075dc98 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    pcStack_60 = (code *)0x4d6c29;
    FUN_00649b20();
    local_4 = 10;
    piVar4 = DAT_0075dc9c;
    ppiVar5 = DAT_0075dca0;
    if ((int)DAT_0075dca0 < DAT_0075dc98 + 1) {
      if (DAT_0075dca8 == 0) {
        iVar2 = (int)DAT_0075dca0 / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + DAT_0075dc98 < 1) {
          ppiVar5 = (int **)0x1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          ppiVar5 = (int **)(DAT_0075dc98 + iVar2);
        }
      }
      else {
        ppiVar5 = (int **)(DAT_0075dc98 + DAT_0075dca8);
      }
      pcStack_60 = (code *)0x4d6c90;
      local_3c[0] = (int *)operator_new((int)ppiVar5 * 0x2c + 4);
      local_4._0_1_ = 0xb;
      if (local_3c[0] == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        pcStack_60 = FUN_006499d0;
        piVar4 = local_3c[0] + 1;
        pcStack_68 = (char *)0x2c;
        *local_3c[0] = (int)ppiVar5;
        puStack_70 = (undefined *)0x4d6cb8;
        piStack_6c = piVar4;
        ppiStack_64 = ppiVar5;
        FUN_006c043b();
      }
      iVar6 = 0;
      local_4 = CONCAT31(local_4._1_3_,10);
      if (0 < DAT_0075dc98) {
        do {
          pcStack_60 = (code *)0x4d6ce3;
          FUN_0064a320();
          iVar6 = iVar6 + 1;
        } while (iVar6 < DAT_0075dc98);
      }
      if (DAT_0075dc9c != (int *)0x0) {
        pcStack_60 = (code *)0x4d6d03;
        FUN_00407f70();
      }
    }
    DAT_0075dca0 = ppiVar5;
    DAT_0075dc9c = piVar4;
    pcStack_60 = (code *)0x4d6d2b;
    FUN_0064a320();
    DAT_0075dc98 = DAT_0075dc98 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    pcStack_60 = (code *)0x4d6d53;
    FUN_00649b20();
    local_4 = 0xc;
    piVar4 = DAT_0075dc9c;
    ppiVar5 = DAT_0075dca0;
    if ((int)DAT_0075dca0 < DAT_0075dc98 + 1) {
      if (DAT_0075dca8 == 0) {
        iVar2 = (int)DAT_0075dca0 / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + DAT_0075dc98 < 1) {
          ppiVar5 = (int **)0x1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          ppiVar5 = (int **)(iVar2 + DAT_0075dc98);
        }
      }
      else {
        ppiVar5 = (int **)(DAT_0075dc98 + DAT_0075dca8);
      }
      pcStack_60 = (code *)0x4d6dba;
      local_3c[0] = (int *)operator_new((int)ppiVar5 * 0x2c + 4);
      local_4._0_1_ = 0xd;
      if (local_3c[0] == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        pcStack_60 = FUN_006499d0;
        piVar4 = local_3c[0] + 1;
        pcStack_68 = (char *)0x2c;
        *local_3c[0] = (int)ppiVar5;
        puStack_70 = (undefined *)0x4d6de2;
        piStack_6c = piVar4;
        ppiStack_64 = ppiVar5;
        FUN_006c043b();
      }
      iVar6 = 0;
      local_4 = CONCAT31(local_4._1_3_,0xc);
      if (0 < DAT_0075dc98) {
        do {
          pcStack_60 = (code *)0x4d6e11;
          FUN_0064a320();
          iVar6 = iVar6 + 1;
        } while (iVar6 < DAT_0075dc98);
      }
      if (DAT_0075dc9c != (int *)0x0) {
        pcStack_60 = (code *)0x4d6e31;
        FUN_00407f70();
      }
    }
    DAT_0075dca0 = ppiVar5;
    DAT_0075dc9c = piVar4;
    pcStack_60 = (code *)0x4d6e5b;
    FUN_0064a320();
    DAT_0075dc98 = DAT_0075dc98 + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    pcStack_60 = (code *)0x4d6e83;
    FUN_00649b20();
    local_4 = 0xe;
    pcStack_60 = (code *)0x4d6e9a;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    pcStack_60 = (code *)0x4d6eb5;
    FUN_00649b20();
    local_4 = 0xf;
    pcStack_60 = (code *)0x4d6ecc;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    pcStack_60 = (code *)0x4d6ee7;
    FUN_00649b20();
    local_4 = 0x10;
    pcStack_60 = (code *)0x4d6efe;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    pcStack_60 = (code *)0x4d6f19;
    FUN_00649b20();
    local_4 = 0x11;
    pcStack_60 = (code *)0x4d6f30;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    pcStack_60 = (code *)0x4d6f4b;
    FUN_00649b20();
    local_4 = 0x12;
    pcStack_60 = (code *)0x4d6f62;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    pcStack_60 = (code *)0x4d6f7d;
    FUN_00649b20();
    local_4 = 0x13;
    pcStack_60 = (code *)0x4d6f94;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
    pcStack_60 = (code *)0x4d6faf;
    FUN_00649b20();
    local_4 = 0x14;
    pcStack_60 = (code *)0x4d6fc6;
    FUN_00469980();
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  iVar6 = (int)param_2;
  pcStack_60 = (code *)0x4d6fe1;
  FUN_004c3f80();
  iVar2 = 0;
  if (0 < *(int *)(iVar6 + 8)) {
    iVar7 = 0;
    do {
      pcStack_60 = (code *)(*(int *)(iVar6 + 0xc) + iVar7);
      ppiStack_64 = (int **)0x4d7000;
      iVar3 = FUN_00647e40();
      if (iVar3 == 0) {
LAB_004d701e:
        *(uint *)(*(int *)(iVar6 + 0xc) + 0x84 + iVar7) =
             *(uint *)(*(int *)(iVar6 + 0xc) + 0x84 + iVar7) | 4;
      }
      else {
        pcStack_60 = (code *)(*(int *)(iVar6 + 0xc) + iVar7);
        ppiStack_64 = (int **)0x4d7017;
        iVar3 = FUN_00647e40();
        if (iVar3 == 0) goto LAB_004d701e;
      }
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + 0x108;
    } while (iVar2 < *(int *)(iVar6 + 8));
  }
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 3;
  ppiStack_64 = (int **)0x4d7060;
  pcStack_60 = (code *)iVar2;
  FUN_00647d10();
  *(undefined4 *)(iVar2 + 0x84) = 0x22;
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 0xc;
    ppiStack_64 = (int **)0x4d7094;
    pcStack_60 = (code *)iVar2;
    FUN_00647d10();
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf0) = 0;
    *(int *)(iVar2 + 0xf4) = DAT_0075dd1c;
    *(undefined **)(iVar2 + 0x100) = &DAT_0075dd14;
  }
  pcStack_60 = (code *)0x2;
  ppiStack_64 = (int **)s_Contents_0072dab8;
  pcStack_68 = (char *)iVar6;
  piStack_6c = (int *)0x4d70d0;
  FUN_00474220();
  piStack_6c = (int *)0x4;
  puStack_70 = &DAT_0075dcf4;
  FUN_00538050(iVar6,s_Contents_Type_0072d044);
  pcStack_60 = (code *)0x4d70fa;
  FUN_00434eb0();
  pcStack_60 = (code *)0x0;
  ppiStack_64 = (int **)0x1;
  pcStack_68 = s_Contents_Resource_0072dc64;
  piStack_6c = (int *)iVar6;
  puStack_70 = (undefined *)0x4d7119;
  FUN_004f1e00();
  puStack_70 = (undefined *)(param_1 + 0x26c);
  FUN_00474220(iVar6,s_Contents_Trap_0072dc54,2);
  FUN_00499e60(iVar6,s_Contents_Trap_Num_Gadgets_0072dc38,2,0,0xffffffff);
  FUN_00496020(iVar6,s_Contents_Trap_Difficulty_0072dc1c,&DAT_0075dc90,2);
  pcStack_60 = (code *)0x800000;
  ppiStack_64 = (int **)0x2;
  pcStack_68 = s_Contents_Trap_Timer_0072dc08;
  piStack_6c = (int *)iVar6;
  puStack_70 = (undefined *)0x4d716a;
  FUN_00537ff0();
  puStack_70 = (undefined *)0x2;
  FUN_00496020(iVar6,s_Contents_Trap_DamageType_0072dbec,&DAT_0075db74);
  FUN_00499e60(iVar6,s_Contents_Value_0072dbdc,4,0,0xffffffff);
  FUN_00499e60(iVar6,s_Contents_Count_0072da34,2,0,0xffffffff);
  *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x230);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x230)) {
    do {
      ppiStack_64 = (int **)&param_2;
      pcStack_60 = (code *)s_Contents_Item__03d_0072dbc8;
      pcStack_68 = (char *)0x4d71c7;
      FUN_00649920();
      pcStack_60 = (code *)0x2;
      local_4 = 0x15;
      ppiStack_64 = (int **)0x4d71dd;
      ppiStack_64 = (int **)FUN_00649940();
      pcStack_68 = (char *)iVar6;
      piStack_6c = (int *)0x4d71e4;
      FUN_00474220();
      local_4 = 0xffffffff;
      FUN_00649950();
      ppiStack_64 = (int **)&local_44;
      pcStack_60 = (code *)s_Contents_Item__03d_Type_0072dbb0;
      pcStack_68 = (char *)0x4d7207;
      FUN_00649920();
      pcStack_60 = (code *)&DAT_0075dcf4;
      local_4 = 0x16;
      ppiStack_64 = (int **)0x4d7220;
      ppiStack_64 = (int **)FUN_00649940();
      pcStack_68 = (char *)iVar6;
      piStack_6c = (int *)0x4d7227;
      FUN_00538050();
      local_4 = 0xffffffff;
      FUN_00649950();
      ppiStack_64 = (int **)local_40;
      pcStack_60 = (code *)s_Contents_Item__03d_Resource_0072db94;
      pcStack_68 = (char *)0x4d7247;
      FUN_00649920();
      local_4 = 0x17;
      pcStack_60 = (code *)0x4d725f;
      FUN_00434eb0();
      pcStack_60 = (code *)0x0;
      ppiStack_64 = (int **)0x1;
      pcStack_68 = (char *)0x4d727a;
      pcStack_68 = (char *)FUN_00649940();
      piStack_6c = (int *)iVar6;
      puStack_70 = (undefined *)0x4d7281;
      FUN_004f1e00();
      local_4 = 0xffffffff;
      FUN_00649950();
      ppiStack_64 = local_3c;
      pcStack_60 = (code *)s_Contents_Item__03d_Value_0072db78;
      pcStack_68 = (char *)0x4d72a4;
      FUN_00649920();
      pcStack_60 = (code *)0x0;
      ppiStack_64 = (int **)0x2;
      local_4 = 0x18;
      pcStack_68 = (char *)0x4d72bb;
      pcStack_68 = (char *)FUN_00649940();
      piStack_6c = (int *)iVar6;
      puStack_70 = (undefined *)0x4d72c2;
      FUN_00499e60();
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x194));
  }
  pcStack_60 = (code *)0x800000;
  ppiStack_64 = (int **)0x2;
  pcStack_68 = s_Contents_Scale_0072db68;
  piStack_6c = (int *)iVar6;
  puStack_70 = (undefined *)0x4d72fc;
  FUN_00537ff0();
  param_2 = &ppiStack_64;
  pcStack_68 = (char *)0x7f7fffff;
  piStack_6c = (int *)0x7f7fffff;
  puStack_70 = (undefined *)0x7f7fffff;
  FUN_00401f00();
  param_2 = (int ***)&puStack_70;
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(iVar6,s_Camera_Position_0072db58,2);
  ExceptionList = local_c;
  return;
}

