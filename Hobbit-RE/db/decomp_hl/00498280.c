
undefined4 __thiscall FUN_00498280(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piStack_40;
  int *piStack_3c;
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d33c2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 1;
  iVar1 = FUN_00647e40(param_2,s_Teleport_Object_00729e44);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      ExceptionList = pvStack_c;
      return 0;
    }
    *(int *)(param_1 + 0x138) = param_3[0x95];
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ApplyToObjects_00729ebc);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      ExceptionList = pvStack_c;
      return 0;
    }
    *(int *)(param_1 + 0x140) = param_3[0x95];
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_ApplyToResources_00729ea8);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      ExceptionList = pvStack_c;
      return 0;
    }
    *(int *)(param_1 + 0x13c) = param_3[0x95];
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Updated_00729e54);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x144) = 0;
    ExceptionList = pvStack_c;
    return 1;
  }
  piVar5 = (int *)0x0;
  if (*(int *)(param_1 + 0x144) == 0) goto LAB_00498c2e;
  if (*(int *)(param_1 + 0x138) == 0) {
    if (*(int *)(param_1 + 0x140) == 0) {
      if (*(int *)(param_1 + 0x13c) != 0) {
        iVar1 = FUN_00647e80(param_2,s_Load_Layer_00729e9c,0xb);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_00647ed0(param_2,s_Load_Layer_List_Count_00729e84), iVar1 != 0)) {
          FUN_00649b20(param_3 + 2);
          iVar1 = *(int *)(param_1 + 0x150);
          iStack_4 = 2;
          if (*(int *)(param_1 + 0x158) < iVar1 + 1) {
            if (*(int *)(param_1 + 0x160) == 0) {
              iVar2 = *(int *)(param_1 + 0x158) / 2;
              iVar6 = 1;
              if (0 < iVar2) {
                iVar6 = iVar2;
              }
              if (iVar6 + iVar1 < 1) {
                iVar2 = 1;
              }
              else {
                if (iVar2 < 1) {
                  iVar2 = 1;
                }
                iVar2 = iVar2 + iVar1;
              }
            }
            else {
              iVar2 = *(int *)(param_1 + 0x160) + iVar1;
            }
            piStack_3c = (int *)operator_new(iVar2 * 0x2c + 4);
            iStack_4._0_1_ = 3;
            if (piStack_3c != (int *)0x0) {
              piVar5 = piStack_3c + 1;
              *piStack_3c = iVar2;
              FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
            }
            iVar1 = 0;
            iStack_4 = CONCAT31(iStack_4._1_3_,2);
            piStack_40 = piVar5;
            if (0 < *(int *)(param_1 + 0x150)) {
              iVar6 = 0;
              do {
                FUN_0064a320(*(int *)(param_1 + 0x154) + iVar6);
                iVar1 = iVar1 + 1;
                iVar6 = iVar6 + 0x2c;
              } while (iVar1 < *(int *)(param_1 + 0x150));
            }
            iVar1 = *(int *)(param_1 + 0x154);
            if (iVar1 != 0) {
              FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
              FUN_006bf840(iVar1 + -4);
            }
            *(int *)(param_1 + 0x158) = iVar2;
            *(int **)(param_1 + 0x154) = piStack_40;
          }
          FUN_0064a320(auStack_38);
          *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
          goto LAB_0049867d;
        }
        goto LAB_0049868e;
      }
LAB_00498808:
      piVar5 = (int *)0x0;
      if (((*(int *)(param_1 + 0x140) == 0) ||
          (iVar1 = FUN_00647e80(param_2,s_Unload_Layer_00729e74,0xd), iVar1 != 0)) ||
         (iVar1 = FUN_00647ed0(param_2,s_Unload_Layer_List_Count_00729e5c), iVar1 == 0))
      goto LAB_00498c2e;
      FUN_00649b20(param_3 + 2);
      iVar1 = *(int *)(param_1 + 0x124);
      iStack_4 = 6;
      if (*(int *)(param_1 + 300) < iVar1 + 1) {
        if (*(int *)(param_1 + 0x134) == 0) {
          iVar2 = *(int *)(param_1 + 300) / 2;
          iVar6 = 1;
          if (0 < iVar2) {
            iVar6 = iVar2;
          }
          if (iVar6 + iVar1 < 1) {
            iVar2 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar2 = iVar2 + iVar1;
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0x134) + iVar1;
        }
        piStack_3c = (int *)operator_new(iVar2 * 0x2c + 4);
        iStack_4._0_1_ = 7;
        if (piStack_3c != (int *)0x0) {
          piVar5 = piStack_3c + 1;
          *piStack_3c = iVar2;
          FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
        }
        iVar1 = 0;
        iStack_4 = CONCAT31(iStack_4._1_3_,6);
        piStack_40 = piVar5;
        if (0 < *(int *)(param_1 + 0x124)) {
          iVar6 = 0;
          do {
            FUN_0064a320(*(int *)(param_1 + 0x128) + iVar6);
            iVar1 = iVar1 + 1;
            iVar6 = iVar6 + 0x2c;
          } while (iVar1 < *(int *)(param_1 + 0x124));
        }
        iVar1 = *(int *)(param_1 + 0x128);
        if (iVar1 != 0) {
          FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
          FUN_006bf840(iVar1 + -4);
        }
        *(int *)(param_1 + 300) = iVar2;
        *(int **)(param_1 + 0x128) = piStack_40;
      }
      goto LAB_00498c01;
    }
    iVar1 = FUN_00647e80(param_2,s_Load_Layer_00729e9c,0xb);
    if ((iVar1 == 0) && (iVar1 = FUN_00647ed0(param_2,s_Load_Layer_List_Count_00729e84), iVar1 != 0)
       ) {
      FUN_00649b20(param_3 + 2);
      iVar1 = *(int *)(param_1 + 0x108);
      iStack_4 = 0;
      if (*(int *)(param_1 + 0x110) < iVar1 + 1) {
        if (*(int *)(param_1 + 0x118) == 0) {
          iVar2 = *(int *)(param_1 + 0x110) / 2;
          iVar6 = 1;
          if (0 < iVar2) {
            iVar6 = iVar2;
          }
          if (iVar6 + iVar1 < 1) {
            iVar2 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar2 = iVar2 + iVar1;
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0x118) + iVar1;
        }
        piStack_3c = (int *)operator_new(iVar2 * 0x2c + 4);
        iStack_4._0_1_ = 1;
        if (piStack_3c != (int *)0x0) {
          piVar5 = piStack_3c + 1;
          *piStack_3c = iVar2;
          FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
        }
        iVar1 = 0;
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        piStack_40 = piVar5;
        if (0 < *(int *)(param_1 + 0x108)) {
          iVar6 = 0;
          do {
            FUN_0064a320(*(int *)(param_1 + 0x10c) + iVar6);
            iVar1 = iVar1 + 1;
            iVar6 = iVar6 + 0x2c;
          } while (iVar1 < *(int *)(param_1 + 0x108));
        }
        iVar1 = *(int *)(param_1 + 0x10c);
        if (iVar1 != 0) {
          FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
          FUN_006bf840(iVar1 + -4);
        }
        *(int *)(param_1 + 0x110) = iVar2;
        *(int **)(param_1 + 0x10c) = piStack_40;
      }
      FUN_0064a320(auStack_38);
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
LAB_0049867d:
      iStack_4 = 0xffffffff;
      FUN_00649ba0();
    }
LAB_0049868e:
    piVar5 = (int *)0x0;
    if (*(int *)(param_1 + 0x13c) == 0) goto LAB_00498808;
    iVar1 = FUN_00647e80(param_2,s_Unload_Layer_00729e74,0xd);
    if ((iVar1 != 0) ||
       (iVar1 = FUN_00647ed0(param_2,s_Unload_Layer_List_Count_00729e5c), iVar1 == 0))
    goto LAB_00498c2e;
    FUN_00649b20(param_3 + 2);
    iVar1 = *(int *)(param_1 + 0x16c);
    iStack_4 = 4;
    if (*(int *)(param_1 + 0x174) < iVar1 + 1) {
      if (*(int *)(param_1 + 0x17c) == 0) {
        iVar2 = *(int *)(param_1 + 0x174) / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + iVar1 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + iVar1;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x17c) + iVar1;
      }
      piStack_3c = (int *)operator_new(iVar2 * 0x2c + 4);
      iStack_4._0_1_ = 5;
      if (piStack_3c != (int *)0x0) {
        piVar5 = piStack_3c + 1;
        *piStack_3c = iVar2;
        FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
      }
      iVar1 = 0;
      iStack_4 = CONCAT31(iStack_4._1_3_,4);
      piStack_40 = piVar5;
      if (0 < *(int *)(param_1 + 0x16c)) {
        iVar6 = 0;
        do {
          FUN_0064a320(*(int *)(param_1 + 0x170) + iVar6);
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar1 < *(int *)(param_1 + 0x16c));
      }
      iVar1 = *(int *)(param_1 + 0x170);
      if (iVar1 != 0) {
        FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1 + -4);
      }
      *(int *)(param_1 + 0x174) = iVar2;
      *(int **)(param_1 + 0x170) = piStack_40;
    }
    FUN_0064a320(auStack_38);
    *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
  }
  else {
    if (*(int *)(param_1 + 0x144) == 0) goto LAB_00498c2e;
    iVar1 = FUN_00647e80(param_2,s_Load_Layer_00729e9c,0xb);
    if ((iVar1 == 0) && (iVar1 = FUN_00647ed0(param_2,s_Load_Layer_List_Count_00729e84), iVar1 != 0)
       ) {
      FUN_00649b20(param_3 + 2);
      iVar1 = *(int *)(param_1 + 0x108);
      iStack_4 = 8;
      if (*(int *)(param_1 + 0x110) < iVar1 + 1) {
        iVar2 = *(int *)(param_1 + 0x118);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x110) / 2;
          iVar6 = 1;
          if (0 < iVar2) {
            iVar6 = iVar2;
          }
          if (0 < iVar6 + iVar1) {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            goto LAB_00498a09;
          }
          piStack_40 = (int *)0x1;
        }
        else {
LAB_00498a09:
          piStack_40 = (int *)(iVar2 + iVar1);
        }
        piVar5 = piStack_40;
        piStack_3c = (int *)operator_new((int)piStack_40 * 0x2c + 4);
        iStack_4._0_1_ = 9;
        if (piStack_3c == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = piStack_3c + 1;
          *piStack_3c = (int)piVar5;
          FUN_006c043b(piVar4,0x2c,piVar5,FUN_006499d0,FUN_00649ba0);
        }
        iStack_4 = CONCAT31(iStack_4._1_3_,8);
        if (0 < *(int *)(param_1 + 0x108)) {
          iVar2 = 0;
          iVar1 = 0;
          do {
            FUN_0064a320(*(int *)(param_1 + 0x10c) + iVar2);
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + 0x2c;
            piVar5 = piStack_40;
          } while (iVar1 < *(int *)(param_1 + 0x108));
        }
        if (*(int *)(param_1 + 0x10c) != 0) {
          FUN_00407f70(3);
        }
        *(int **)(param_1 + 0x10c) = piVar4;
        *(int **)(param_1 + 0x110) = piVar5;
      }
      FUN_0064a320(auStack_38);
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
      goto LAB_00498c1d;
    }
    iVar1 = FUN_00647e80(param_2,s_Unload_Layer_00729e74,0xd);
    if ((iVar1 != 0) ||
       (iVar1 = FUN_00647ed0(param_2,s_Unload_Layer_List_Count_00729e5c), iVar1 == 0))
    goto LAB_00498c2e;
    FUN_00649b20(param_3 + 2);
    iVar1 = *(int *)(param_1 + 0x124);
    iStack_4 = 10;
    if (*(int *)(param_1 + 300) < iVar1 + 1) {
      if (*(int *)(param_1 + 0x134) == 0) {
        iVar2 = *(int *)(param_1 + 300) / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + iVar1 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = iVar2 + iVar1;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x134) + iVar1;
      }
      piStack_3c = (int *)operator_new(iVar2 * 0x2c + 4);
      iStack_4._0_1_ = 0xb;
      if (piStack_3c != (int *)0x0) {
        piVar5 = piStack_3c + 1;
        *piStack_3c = iVar2;
        FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
      }
      iVar1 = 0;
      iStack_4 = CONCAT31(iStack_4._1_3_,10);
      piStack_40 = piVar5;
      if (0 < *(int *)(param_1 + 0x124)) {
        iVar6 = 0;
        do {
          FUN_0064a320(*(int *)(param_1 + 0x128) + iVar6);
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar1 < *(int *)(param_1 + 0x124));
      }
      if (*(int *)(param_1 + 0x128) != 0) {
        FUN_00407f70(3);
      }
      *(int *)(param_1 + 300) = iVar2;
      *(int **)(param_1 + 0x128) = piStack_40;
    }
LAB_00498c01:
    FUN_0064a320(auStack_38);
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  }
LAB_00498c1d:
  iStack_4 = 0xffffffff;
  FUN_00649ba0();
LAB_00498c2e:
  iVar1 = FUN_00647e40(param_2,s_LoadObjects_Layer_List_Count_00729e18);
  if (iVar1 == 0) {
    if (*param_3 != 1) {
      ExceptionList = pvStack_c;
      return 0;
    }
    param_1 = param_1 + 0x100;
  }
  else {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x108)) {
      do {
        FUN_00649920(&piStack_40,s_LoadObjects_Layer__d_00729e00,iVar1);
        iStack_4 = 0xc;
        uVar3 = FUN_00649940();
        iVar2 = FUN_00647e40(param_2,uVar3);
        iStack_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          if ((*param_3 != 6) && (*param_3 != 4)) {
            ExceptionList = pvStack_c;
            return 0;
          }
          FUN_0064a2e0(param_3 + 2);
          ExceptionList = pvStack_c;
          return 1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x108));
    }
    iVar1 = FUN_00647e40(param_2,s_UnloadObjects_Layer_List_Count_00729dd0);
    if (iVar1 == 0) {
      if (*param_3 != 1) {
        ExceptionList = pvStack_c;
        return 0;
      }
      param_1 = param_1 + 0x11c;
    }
    else {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x124)) {
        do {
          FUN_00649920(&piStack_40,s_UnloadObjects_Layer__d_00729db8,iVar1);
          iStack_4 = 0xd;
          uVar3 = FUN_00649940();
          iVar2 = FUN_00647e40(param_2,uVar3);
          iStack_4 = 0xffffffff;
          FUN_00649950();
          if (iVar2 == 0) {
            if ((*param_3 != 6) && (*param_3 != 4)) {
              ExceptionList = pvStack_c;
              return 0;
            }
            FUN_0064a2e0(param_3 + 2);
            ExceptionList = pvStack_c;
            return 1;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x124));
      }
      iVar1 = FUN_00647e40(param_2,s_LoadResources_Layer_List_Count_00729d88);
      if (iVar1 == 0) {
        if (*param_3 != 1) {
          ExceptionList = pvStack_c;
          return 0;
        }
        param_1 = param_1 + 0x148;
      }
      else {
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0x150)) {
          do {
            FUN_00649920(&piStack_40,s_LoadResources_Layer__d_00729d70,iVar1);
            iStack_4 = 0xe;
            uVar3 = FUN_00649940();
            iVar2 = FUN_00647e40(param_2,uVar3);
            iStack_4 = 0xffffffff;
            FUN_00649950();
            if (iVar2 == 0) {
              if ((*param_3 != 6) && (*param_3 != 4)) {
                ExceptionList = pvStack_c;
                return 0;
              }
              FUN_0064a2e0(param_3 + 2);
              ExceptionList = pvStack_c;
              return 1;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_1 + 0x150));
        }
        iVar1 = FUN_00647e40(param_2,s_UnloadResources_Layer_List_Count_00729d3c);
        if (iVar1 != 0) {
          iVar1 = 0;
          if (0 < *(int *)(param_1 + 0x16c)) {
            do {
              FUN_00649920(&piStack_3c,s_UnloadResources_Layer__d_00729d20,iVar1);
              iStack_4 = 0xf;
              uVar3 = FUN_00649940();
              iVar2 = FUN_00647e40(param_2,uVar3);
              iStack_4 = 0xffffffff;
              FUN_00649950();
              if (iVar2 == 0) {
                if ((*param_3 != 6) && (*param_3 != 4)) {
                  ExceptionList = pvStack_c;
                  return 0;
                }
                FUN_0064a2e0(param_3 + 2);
                ExceptionList = pvStack_c;
                return 1;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_1 + 0x16c));
          }
          uVar3 = FUN_004e3380(param_2,param_3);
          ExceptionList = pvStack_c;
          return uVar3;
        }
        if (*param_3 != 1) {
          ExceptionList = pvStack_c;
          return 0;
        }
        param_1 = param_1 + 0x164;
      }
    }
  }
  iVar1 = param_3[0x93];
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < iVar1) {
    iVar2 = iVar1;
  }
  FUN_00417750(iVar2);
  *(int *)(param_1 + 8) = iVar1;
  ExceptionList = pvStack_c;
  return 1;
}

