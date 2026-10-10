
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004d7360(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int aiStack_11c [5];
  undefined4 uStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  int **ppiStack_fc;
  code *pcStack_f8;
  int *piStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  int aiStack_d4 [17];
  undefined4 uStack_90;
  undefined4 uStack_60;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d541f;
  pvStack_c = ExceptionList;
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d7393;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    if (*param_3 == 3) {
      *(int *)(param_1 + 0x160) = param_3[0x95];
      ExceptionList = pvStack_c;
      return 1;
    }
    ExceptionList = pvStack_c;
    return 0;
  }
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d73ce;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    if ((*param_3 != 1) && (*param_3 != 0xc)) {
      ExceptionList = pvStack_c;
      return 0;
    }
    pcStack_f8 = (code *)0x4d73fd;
    FUN_004d6080();
    ExceptionList = pvStack_c;
    return 1;
  }
  pcStack_f8 = (code *)0x4d7411;
  iVar1 = FUN_00647cf0();
  ppiStack_fc = (int **)s_Camera_Position_0072db58;
  uStack_100 = param_2;
  piStack_104 = (int *)0x4d741f;
  pcStack_f8 = (code *)iVar1;
  iVar2 = FUN_00647e80();
  if (iVar2 == 0) {
    pcStack_f8 = (code *)0x4d7437;
    iVar2 = FUN_00647cf0();
    if (iVar1 == iVar2) {
      if (*param_3 == 8) {
        *(int *)(param_1 + 0x248) = param_3[0x89];
        *(int *)(param_1 + 0x24c) = param_3[0x8a];
        *(int *)(param_1 + 0x250) = param_3[0x8b];
        ExceptionList = pvStack_c;
        return 1;
      }
    }
    else {
      pcStack_f8 = (code *)&DAT_00724e78;
      ppiStack_fc = (int **)0x4d7482;
      iVar1 = FUN_00647e40();
      if (iVar1 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0x248) = param_3[0x94];
          ExceptionList = pvStack_c;
          return 1;
        }
      }
      else {
        pcStack_f8 = (code *)&DAT_00724e74;
        ppiStack_fc = (int **)0x4d74af;
        iVar1 = FUN_00647e40();
        if (iVar1 == 0) {
          if (*param_3 == 2) {
            *(int *)(param_1 + 0x24c) = param_3[0x94];
            ExceptionList = pvStack_c;
            return 1;
          }
        }
        else {
          pcStack_f8 = (code *)&DAT_00724e70;
          ppiStack_fc = (int **)0x4d74dc;
          iVar1 = FUN_00647e40();
          if ((iVar1 == 0) && (*param_3 == 2)) {
            *(int *)(param_1 + 0x250) = param_3[0x94];
            ExceptionList = pvStack_c;
            return 1;
          }
        }
      }
    }
  }
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d7509;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    if (*param_3 != 0xd) {
      ExceptionList = pvStack_c;
      return 0;
    }
LAB_004d751c:
    piStack_d8 = aiStack_11c;
    FUN_00649b20(param_3 + 2);
    FUN_004d6440();
    ExceptionList = pvStack_c;
    return 1;
  }
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d754a;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    if (*param_3 == 1) {
      iVar1 = param_3[0x93];
      *(int *)(param_1 + 0x188) = iVar1;
      *(int *)(param_1 + 0x18c) = iVar1;
      ExceptionList = pvStack_c;
      return 1;
    }
    ExceptionList = pvStack_c;
    return 0;
  }
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d7584;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    if (*param_3 != 0xd) {
      ExceptionList = pvStack_c;
      return 0;
    }
    goto LAB_004d751c;
  }
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d75a2;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    if (*param_3 == 1) {
      *(int *)(param_1 + 0x168) = param_3[0x93];
      *(undefined4 *)(param_1 + 0x16c) = 1;
      *(undefined4 *)(param_1 + 0x174) = 0x40800000;
      ExceptionList = pvStack_c;
      return 1;
    }
    ExceptionList = pvStack_c;
    return 0;
  }
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d75e7;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    if (*param_3 != 1) {
      ExceptionList = pvStack_c;
      return 0;
    }
    iVar1 = param_3[0x93];
    iVar2 = *(int *)(param_1 + 0x170);
    *(int *)(param_1 + 0x16c) = iVar1;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        *(float *)(param_1 + 0x174) = (float)iVar1 * _DAT_006e958c;
        ExceptionList = pvStack_c;
        return 1;
      }
      if (iVar2 != 2) {
        ExceptionList = pvStack_c;
        return 1;
      }
      *(float *)(param_1 + 0x174) = (float)iVar1 + (float)iVar1;
      ExceptionList = pvStack_c;
      return 1;
    }
LAB_004d76cb:
    *(float *)(param_1 + 0x174) = (float)iVar1 * _DAT_006e99bc;
    ExceptionList = pvStack_c;
    return 1;
  }
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d7660;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    if ((*param_3 != 1) && (*param_3 != 0xc)) {
      ExceptionList = pvStack_c;
      return 0;
    }
    iVar1 = param_3[0x93];
    *(int *)(param_1 + 0x170) = iVar1;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        *(float *)(param_1 + 0x174) = (float)*(int *)(param_1 + 0x16c) * _DAT_006e958c;
        ExceptionList = pvStack_c;
        return 1;
      }
      if (iVar1 != 2) {
        ExceptionList = pvStack_c;
        return 1;
      }
      *(float *)(param_1 + 0x174) =
           (float)*(int *)(param_1 + 0x16c) + (float)*(int *)(param_1 + 0x16c);
      ExceptionList = pvStack_c;
      return 1;
    }
    iVar1 = *(int *)(param_1 + 0x16c);
    goto LAB_004d76cb;
  }
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d76ec;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    if (*param_3 == 2) {
      *(int *)(param_1 + 0x174) = param_3[0x94];
      ExceptionList = pvStack_c;
      return 1;
    }
    ExceptionList = pvStack_c;
    return 0;
  }
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d7720;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    if ((*param_3 != 1) && (*param_3 != 0xc)) {
      ExceptionList = pvStack_c;
      return 0;
    }
    *(int *)(param_1 + 0x178) = param_3[0x93];
    ExceptionList = pvStack_c;
    return 1;
  }
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d775b;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    piVar7 = (int *)0x1;
    if (*param_3 == 1) {
      iVar1 = param_3[0x93];
      *(int *)(param_1 + 0x188) = iVar1;
      *(int *)(param_1 + 0x18c) = iVar1;
      iVar1 = 0;
      if (*(int *)(param_1 + 0x230) == 0) {
        FUN_006499d0();
        uStack_4 = 0;
        FUN_006499d0();
        uStack_4._0_1_ = 1;
        aiStack_d4[1] = 0;
        aiStack_d4[2] = 0;
        aiStack_d4[3] = 0;
        aiStack_d4[4] = 0;
        aiStack_d4[5] = 0;
        pcStack_f8 = (code *)0x4d77e0;
        FUN_0064b130();
        uStack_4._0_1_ = 2;
        pcStack_f8 = (code *)0x4d77f2;
        FUN_0064a360();
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        FUN_0064b190();
        uStack_90 = 0x3f800000;
        pcStack_f8 = (code *)0x4d781c;
        FUN_0064a2e0();
        uStack_60 = 1;
        uStack_4 = 3;
        pcStack_f8 = (code *)0x4d783e;
        FUN_0064a360();
        pcStack_f8 = (code *)0x4d784e;
        FUN_0064a320();
        uStack_60 = *(undefined4 *)(param_1 + 0x188);
        iVar2 = *(int *)(param_1 + 0x230);
        if (*(int *)(param_1 + 0x238) < iVar2 + 1) {
          if (*(int *)(param_1 + 0x240) == 0) {
            iVar3 = *(int *)(param_1 + 0x238) / 2;
            iVar6 = 1;
            if (0 < iVar3) {
              iVar6 = iVar3;
            }
            if (0 < iVar6 + iVar2) {
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              piVar7 = (int *)(iVar3 + iVar2);
            }
          }
          else {
            piVar7 = (int *)(*(int *)(param_1 + 0x240) + iVar2);
          }
          pcStack_f8 = (code *)0x4d78af;
          piStack_dc = piVar7;
          piStack_d8 = (int *)operator_new((int)piVar7 * 0x78 + 4);
          uStack_4._0_1_ = 4;
          if (piStack_d8 == (int *)0x0) {
            piStack_e0 = (int *)0x0;
          }
          else {
            pcStack_f8 = FUN_004d8dc0;
            piStack_e0 = piStack_d8 + 1;
            uStack_100 = 0x78;
            *piStack_d8 = (int)piVar7;
            uStack_108 = 0x4d78da;
            piStack_104 = piStack_e0;
            ppiStack_fc = (int **)piVar7;
            FUN_006c043b();
          }
          uStack_4 = CONCAT31(uStack_4._1_3_,3);
          if (0 < *(int *)(param_1 + 0x230)) {
            aiStack_d4[0] = -0x10 - (int)piStack_e0;
            piVar7 = piStack_e0 + 4;
            do {
              iVar2 = *(int *)(param_1 + 0x234) + aiStack_d4[0];
              piVar7[-4] = *(int *)((int)piVar7 + *(int *)(param_1 + 0x234) + aiStack_d4[0]);
              piVar7[-3] = *(int *)((int)piVar7 + iVar2 + 4);
              piVar7[-2] = *(int *)((int)piVar7 + iVar2 + 8);
              piVar7[-1] = *(int *)((int)piVar7 + iVar2 + 0xc);
              *piVar7 = *(int *)((int)piVar7 + iVar2 + 0x10);
              pcStack_f8 = (code *)0x4d793f;
              FUN_0064a320();
              piVar7[0xc] = *(int *)((int)piVar7 + iVar2 + 0x40);
              pcStack_f8 = (code *)0x4d7951;
              FUN_0064a320();
              piVar7[0x18] = *(int *)((int)piVar7 + iVar2 + 0x70);
              iVar1 = iVar1 + 1;
              piVar7 = piVar7 + 0x1e;
            } while (iVar1 < *(int *)(param_1 + 0x230));
          }
          if (*(int *)(param_1 + 0x234) != 0) {
            pcStack_f8 = (code *)0x4d7976;
            FUN_004d8bb0();
          }
          *(int **)(param_1 + 0x234) = piStack_e0;
          *(int **)(param_1 + 0x238) = piStack_dc;
        }
        pcStack_f8 = (code *)0x4d79a5;
        FUN_004d8c10();
        *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
        uStack_4 = 5;
        FUN_00649ba0();
        uStack_4 = 0xffffffff;
        FUN_00649ba0();
      }
      ExceptionList = pvStack_c;
      return 1;
    }
    ExceptionList = pvStack_c;
    return 0;
  }
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d79e8;
  iVar1 = FUN_00647e40();
  if (iVar1 == 0) {
    if ((*param_3 != 7) && (*param_3 != 4)) {
      ExceptionList = pvStack_c;
      return 0;
    }
    pcStack_f8 = (code *)0x4d7a12;
    FUN_00649b20();
    uStack_4 = 6;
    pcStack_f8 = (code *)0x4d7a29;
    FUN_0064b830();
    uStack_4 = 0xffffffff;
    FUN_00649ba0();
    ExceptionList = pvStack_c;
    return 1;
  }
  pcStack_f8 = (code *)param_2;
  ppiStack_fc = (int **)0x4d7a55;
  iVar1 = FUN_00647e40();
  if (iVar1 != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x230)) {
      do {
        ppiStack_fc = &piStack_d8;
        pcStack_f8 = (code *)s_Contents_Item__03d_Type_0072dbb0;
        uStack_100 = 0x4d7f80;
        FUN_00649920();
        uStack_4 = 0x13;
        FUN_00649940();
        pcStack_f8 = (code *)param_2;
        ppiStack_fc = (int **)0x4d7f9c;
        iVar2 = FUN_00647e40();
        uStack_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          if (*param_3 == 0xd) {
            pcStack_f8 = (code *)0x4d80cb;
            FUN_0064a2e0();
            pcStack_f8 = (code *)0x4d80d7;
            iVar2 = FUN_004d8ba0();
            piStack_d8 = aiStack_11c;
            FUN_00649b60(iVar2 + 0x44);
            FUN_004d6280(iVar1);
            ExceptionList = pvStack_c;
            return 1;
          }
          ExceptionList = pvStack_c;
          return 0;
        }
        ppiStack_fc = (int **)aiStack_d4;
        pcStack_f8 = (code *)s_Contents_Item__03d_Resource_0072db94;
        uStack_100 = 0x4d7fd3;
        FUN_00649920();
        uStack_4 = 0x14;
        FUN_00649940();
        pcStack_f8 = (code *)param_2;
        ppiStack_fc = (int **)0x4d7fef;
        iVar2 = FUN_00647e40();
        uStack_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          ExceptionList = pvStack_c;
          return (uint)(*param_3 == 0xd);
        }
        ppiStack_fc = &piStack_dc;
        pcStack_f8 = (code *)s_Contents_Item__03d_Value_0072db78;
        uStack_100 = 0x4d8026;
        FUN_00649920();
        uStack_4 = 0x15;
        FUN_00649940();
        pcStack_f8 = (code *)param_2;
        ppiStack_fc = (int **)0x4d8042;
        iVar2 = FUN_00647e40();
        uStack_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          *(int *)(*(int *)(param_1 + 0x234) + 0x70 + iVar1 * 0x78) = param_3[0x93];
          ExceptionList = pvStack_c;
          return 1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x230));
    }
    pcStack_f8 = (code *)param_2;
    ppiStack_fc = (int **)0x4d8088;
    uVar5 = FUN_004c49a0();
    ExceptionList = pvStack_c;
    return uVar5;
  }
  if (*param_3 != 1) {
    ExceptionList = pvStack_c;
    return 0;
  }
  iVar1 = param_3[0x93];
  iVar2 = 0;
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x230) == 0) {
      FUN_006499d0();
      uStack_4 = 7;
      FUN_006499d0();
      uStack_4._0_1_ = 8;
      aiStack_d4[1] = 0;
      aiStack_d4[2] = 0;
      aiStack_d4[3] = 0;
      aiStack_d4[4] = 0;
      aiStack_d4[5] = 0;
      pcStack_f8 = (code *)0x4d7ad8;
      FUN_0064b130();
      uStack_4._0_1_ = 9;
      pcStack_f8 = (code *)0x4d7aea;
      FUN_0064a360();
      uStack_4 = CONCAT31(uStack_4._1_3_,8);
      FUN_0064b190();
      uStack_90 = 0x3f800000;
      pcStack_f8 = (code *)0x4d7b14;
      FUN_0064a2e0();
      uStack_60 = 1;
      uStack_4 = 10;
      pcStack_f8 = (code *)0x4d7b36;
      FUN_0064a360();
      pcStack_f8 = (code *)0x4d7b46;
      FUN_0064a320();
      uStack_60 = *(undefined4 *)(param_1 + 0x188);
      iVar1 = *(int *)(param_1 + 0x230);
      if (*(int *)(param_1 + 0x238) < iVar1 + 1) {
        if (*(int *)(param_1 + 0x240) == 0) {
          iVar3 = *(int *)(param_1 + 0x238) / 2;
          iVar6 = 1;
          if (0 < iVar3) {
            iVar6 = iVar3;
          }
          if (iVar6 + iVar1 < 1) {
            piStack_e0 = (int *)0x1;
          }
          else {
            if (iVar3 < 1) {
              iVar3 = 1;
            }
            piStack_e0 = (int *)(iVar3 + iVar1);
          }
        }
        else {
          piStack_e0 = (int *)(*(int *)(param_1 + 0x240) + iVar1);
        }
        pcStack_f8 = (code *)0x4d7bb4;
        piStack_d8 = (int *)operator_new((int)piStack_e0 * 0x78 + 4);
        uStack_4._0_1_ = 0xb;
        if (piStack_d8 == (int *)0x0) {
          piStack_dc = (int *)0x0;
        }
        else {
          pcStack_f8 = FUN_004d8dc0;
          piVar7 = piStack_d8 + 1;
          uStack_100 = 0x78;
          *piStack_d8 = (int)piStack_e0;
          uStack_108 = 0x4d7bdf;
          piStack_104 = piVar7;
          ppiStack_fc = (int **)piStack_e0;
          FUN_006c043b();
          piStack_dc = piVar7;
        }
        uStack_4 = CONCAT31(uStack_4._1_3_,10);
        if (0 < *(int *)(param_1 + 0x230)) {
          aiStack_d4[0] = -0x10 - (int)piStack_dc;
          piVar7 = piStack_dc + 4;
          do {
            iVar1 = *(int *)(param_1 + 0x234) + aiStack_d4[0];
            piVar7[-4] = *(int *)((int)piVar7 + *(int *)(param_1 + 0x234) + aiStack_d4[0]);
            piVar7[-3] = *(int *)((int)piVar7 + iVar1 + 4);
            piVar7[-2] = *(int *)((int)piVar7 + iVar1 + 8);
            piVar7[-1] = *(int *)((int)piVar7 + iVar1 + 0xc);
            *piVar7 = *(int *)((int)piVar7 + iVar1 + 0x10);
            pcStack_f8 = (code *)0x4d7c49;
            FUN_0064a320();
            piVar7[0xc] = *(int *)((int)piVar7 + iVar1 + 0x40);
            pcStack_f8 = (code *)0x4d7c5b;
            FUN_0064a320();
            piVar7[0x18] = *(int *)((int)piVar7 + iVar1 + 0x70);
            iVar2 = iVar2 + 1;
            piVar7 = piVar7 + 0x1e;
          } while (iVar2 < *(int *)(param_1 + 0x230));
        }
        if (*(int *)(param_1 + 0x234) != 0) {
          pcStack_f8 = (code *)0x4d7c80;
          FUN_004d8bb0();
        }
        *(int **)(param_1 + 0x234) = piStack_dc;
        *(int **)(param_1 + 0x238) = piStack_e0;
      }
      pcStack_f8 = (code *)0x4d7caf;
      FUN_004d8c10();
      *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
      uStack_4 = 0xc;
      FUN_00649ba0();
      uStack_4 = 0xffffffff;
      FUN_00649ba0();
      goto LAB_004d7f4a;
    }
  }
  else if (iVar1 < 0) goto LAB_004d7f4a;
  aiStack_d4[0] = *(int *)(param_1 + 0x230);
  if (aiStack_d4[0] < iVar1) {
    if (aiStack_d4[0] < iVar1) {
      aiStack_d4[0] = iVar1 - aiStack_d4[0];
      do {
        iVar6 = 0;
        FUN_006499d0();
        uStack_4 = 0xd;
        FUN_006499d0();
        uStack_4._0_1_ = 0xe;
        aiStack_d4[1] = 0;
        aiStack_d4[2] = 0;
        aiStack_d4[3] = 0;
        aiStack_d4[4] = 0;
        aiStack_d4[5] = 0;
        pcStack_f8 = (code *)0x4d7d52;
        FUN_0064b130();
        uStack_4._0_1_ = 0xf;
        pcStack_f8 = (code *)0x4d7d64;
        FUN_0064a360();
        uStack_4 = CONCAT31(uStack_4._1_3_,0xe);
        FUN_0064b190();
        uStack_90 = 0x3f800000;
        pcStack_f8 = (code *)0x4d7d8e;
        FUN_0064a2e0();
        iVar1 = 1;
        uStack_60 = 1;
        iVar2 = *(int *)(param_1 + 0x230);
        uStack_4 = 0x10;
        if (*(int *)(param_1 + 0x238) < iVar2 + 1) {
          if (*(int *)(param_1 + 0x240) == 0) {
            iVar4 = *(int *)(param_1 + 0x238) / 2;
            iVar3 = 1;
            if (0 < iVar4) {
              iVar3 = iVar4;
            }
            if (0 < iVar3 + iVar2) {
              if (iVar4 < 1) {
                iVar4 = 1;
              }
              iVar1 = iVar4 + iVar2;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x240) + iVar2;
          }
          pcStack_f8 = (code *)0x4d7df9;
          piStack_d8 = (int *)operator_new(iVar1 * 0x78 + 4);
          uStack_4._0_1_ = 0x11;
          if (piStack_d8 == (int *)0x0) {
            piStack_dc = (int *)0x0;
          }
          else {
            pcStack_f8 = FUN_004d8dc0;
            piVar7 = piStack_d8 + 1;
            uStack_100 = 0x78;
            *piStack_d8 = iVar1;
            uStack_108 = 0x4d7e24;
            piStack_104 = piVar7;
            ppiStack_fc = (int **)iVar1;
            FUN_006c043b();
            piStack_dc = piVar7;
          }
          uStack_4 = CONCAT31(uStack_4._1_3_,0x10);
          if (0 < *(int *)(param_1 + 0x230)) {
            piStack_d8 = (int *)(-0x10 - (int)piStack_dc);
            piVar7 = piStack_dc + 4;
            do {
              iVar2 = (int)piStack_d8 + (int)piVar7 + *(int *)(param_1 + 0x234);
              piVar7[-4] = *(int *)((int)piStack_d8 + (int)piVar7 + *(int *)(param_1 + 0x234));
              piVar7[-3] = *(int *)(iVar2 + 4);
              piVar7[-2] = *(int *)(iVar2 + 8);
              piVar7[-1] = *(int *)(iVar2 + 0xc);
              *piVar7 = *(int *)(iVar2 + 0x10);
              pcStack_f8 = (code *)0x4d7e89;
              FUN_0064a320();
              piVar7[0xc] = *(int *)(iVar2 + 0x40);
              pcStack_f8 = (code *)0x4d7e9b;
              FUN_0064a320();
              piVar7[0x18] = *(int *)(iVar2 + 0x70);
              iVar6 = iVar6 + 1;
              piVar7 = piVar7 + 0x1e;
            } while (iVar6 < *(int *)(param_1 + 0x230));
          }
          if (*(int *)(param_1 + 0x234) != 0) {
            pcStack_f8 = (code *)0x4d7ec0;
            FUN_004d8bb0();
          }
          *(int **)(param_1 + 0x234) = piStack_dc;
          *(int *)(param_1 + 0x238) = iVar1;
        }
        pcStack_f8 = (code *)0x4d7ef1;
        FUN_004d8c10();
        *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
        uStack_4 = 0x12;
        FUN_00649ba0();
        uStack_4 = 0xffffffff;
        FUN_00649ba0();
        aiStack_d4[0] = aiStack_d4[0] + -1;
      } while (aiStack_d4[0] != 0);
    }
  }
  else if (iVar1 < aiStack_d4[0]) {
    pcStack_f8 = (code *)0x4d7f47;
    FUN_004d8c60();
    *(int *)(param_1 + 0x230) = iVar1;
  }
LAB_004d7f4a:
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x230);
  ExceptionList = pvStack_c;
  return 1;
}

