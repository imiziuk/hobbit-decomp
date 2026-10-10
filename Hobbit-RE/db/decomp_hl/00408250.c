
void __fastcall FUN_00408250(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  int *piStack_74;
  undefined1 auStack_64 [44];
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006ceb6e;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x110);
  if (*(int *)(param_1 + 0x118) == 2) {
    iVar7 = 0;
    ExceptionList = &pvStack_c;
    if ((iVar2 != 0) && (ExceptionList = &pvStack_c, iVar2 = FUN_00659e10(iVar2), iVar2 == 0)) {
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    if (*(int *)(param_1 + 0x110) == 0) {
      if (*(int *)(param_1 + 0x124) == 0) {
        FUN_00500510();
      }
      else {
        uVar3 = FUN_00659600(**(undefined4 **)(param_1 + 0x128),1);
        *(undefined4 *)(param_1 + 0x110) = uVar3;
        iVar2 = *(int *)(param_1 + 0x124) + -1;
        if (0 < iVar2) {
          do {
            FUN_0064a320(iVar7 + 0x2c + *(int *)(param_1 + 0x128));
            iVar7 = iVar7 + 0x2c;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + -1;
      }
    }
  }
  else {
    iVar7 = 0;
    if (iVar2 == 0) {
      if (DAT_0075b6ec == (char *)0x0) {
        DAT_0075b6ec = s_Voice_Bilbo_00_36_0071d8d4;
      }
      ExceptionList = &pvStack_c;
      if (*(int *)(param_1 + 0x108) == 0 && *(int *)(param_1 + 0x10c) == 0) {
        ExceptionList = &pvStack_c;
        uVar3 = FUN_0054c5c0(0x33,s_C__projects_meridian_Support_Lev_0071d890,0x9d);
        sVar1 = FUN_0054c7c0();
        while (-1 < sVar1) {
          if (sVar1 == -1) {
            piVar8 = (int *)0x0;
          }
          else {
            uVar6 = *(uint *)(DAT_0076f648 + sVar1 * 0x14);
            if (uVar6 == 0) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)(-(uint)((*(byte *)(uVar6 + 0x7f) & 0x10) != 0) & uVar6);
            }
          }
          uVar4 = (**(code **)(*piVar8 + 0x4c))(s_Troll_Lock_Switch_0071d878);
          iVar2 = FUN_00647ed0(uVar4);
          if (iVar2 == 0) {
            iVar2 = piVar8[3];
            *(int *)(param_1 + 0x108) = piVar8[2];
            *(int *)(param_1 + 0x10c) = iVar2;
          }
          sVar1 = FUN_0054c7c0();
        }
        FUN_0054c880(uVar3);
      }
      uVar3 = *(undefined4 *)(param_1 + 0x108);
      uVar4 = *(undefined4 *)(param_1 + 0x10c);
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      uStack_4 = 0;
      iVar2 = FUN_00406ce0(uVar3,uVar4);
      uStack_4 = 0xffffffff;
      if (iVar2 == -1) {
        FUN_00649720();
        *(undefined4 *)(param_1 + 0x108) = 0;
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      else {
        uVar6 = *(uint *)(DAT_0076f648 + iVar2 * 0x14);
        uVar6 = -(uint)((*(byte *)(uVar6 + 0x7f) & 0x10) != 0) & uVar6;
        FUN_00649720();
        if (uVar6 == 0) {
          *(undefined4 *)(param_1 + 0x108) = 0;
          *(undefined4 *)(param_1 + 0x10c) = 0;
        }
        else if (*(int *)(param_1 + 0x104) != *(int *)(uVar6 + 0x16c)) {
          fVar10 = (float10)FUN_00434ca0(0x3b);
          if ((NAN(fVar10) || NAN((float10)DAT_006e92e4)) == (fVar10 == (float10)DAT_006e92e4)) {
            if (*(int *)(param_1 + 0x130) == 0) {
              iVar2 = *(int *)(param_1 + 0x128);
              if (iVar2 != 0) {
                FUN_006c026a(iVar2,0x2c,*(undefined4 *)(iVar2 + -4),FUN_00649ba0);
                FUN_006bf840(iVar2 + -4);
              }
              *(undefined4 *)(param_1 + 0x128) = 0;
              *(undefined4 *)(param_1 + 300) = 0;
            }
            *(undefined4 *)(param_1 + 0x124) = 0;
            FUN_00649b20(s_TrollDoorUnlock_0071d868);
            iVar2 = *(int *)(param_1 + 0x124);
            uStack_4 = 1;
            if (*(int *)(param_1 + 300) < iVar2 + 1) {
              if (*(int *)(param_1 + 0x134) == 0) {
                iVar5 = *(int *)(param_1 + 300) / 2;
                iVar9 = 1;
                if (0 < iVar5) {
                  iVar9 = iVar5;
                }
                if (iVar9 + iVar2 < 1) {
                  iVar2 = 1;
                }
                else {
                  if (iVar5 < 1) {
                    iVar5 = 1;
                  }
                  iVar2 = iVar2 + iVar5;
                }
              }
              else {
                iVar2 = *(int *)(param_1 + 0x134) + iVar2;
              }
              piVar8 = (int *)operator_new(iVar2 * 0x2c + 4);
              uStack_4._0_1_ = 2;
              if (piVar8 == (int *)0x0) {
                piStack_74 = (int *)0x0;
              }
              else {
                piStack_74 = piVar8 + 1;
                *piVar8 = iVar2;
                FUN_006c043b(piStack_74,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
              }
              uStack_4 = CONCAT31(uStack_4._1_3_,1);
              if (0 < *(int *)(param_1 + 0x124)) {
                iVar9 = 0;
                do {
                  FUN_0064a320(*(int *)(param_1 + 0x128) + iVar9);
                  iVar7 = iVar7 + 1;
                  iVar9 = iVar9 + 0x2c;
                } while (iVar7 < *(int *)(param_1 + 0x124));
              }
              if (*(int *)(param_1 + 0x128) != 0) {
                FUN_00407f70(3);
              }
              *(int *)(param_1 + 300) = iVar2;
              *(int **)(param_1 + 0x128) = piStack_74;
            }
            iVar7 = 0;
            FUN_0064a320(auStack_64);
            *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
            uStack_4 = 0xffffffff;
            FUN_00649ba0();
            FUN_00649b20(s_MUSIC_COMBAT_Reg2_Level7_Win_0071d760);
            iVar2 = *(int *)(param_1 + 0x124);
            uStack_4 = 3;
            if (*(int *)(param_1 + 300) < iVar2 + 1) {
              if (*(int *)(param_1 + 0x134) == 0) {
                iVar5 = *(int *)(param_1 + 300) / 2;
                iVar9 = 1;
                if (0 < iVar5) {
                  iVar9 = iVar5;
                }
                if (iVar9 + iVar2 < 1) {
                  iVar2 = 1;
                }
                else {
                  if (iVar5 < 1) {
                    iVar5 = 1;
                  }
                  iVar2 = iVar2 + iVar5;
                }
              }
              else {
                iVar2 = *(int *)(param_1 + 0x134) + iVar2;
              }
              piVar8 = (int *)operator_new(iVar2 * 0x2c + 4);
              uStack_4._0_1_ = 4;
              if (piVar8 == (int *)0x0) {
                piStack_74 = (int *)0x0;
              }
              else {
                piStack_74 = piVar8 + 1;
                *piVar8 = iVar2;
                FUN_006c043b(piStack_74,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
              }
              uStack_4 = CONCAT31(uStack_4._1_3_,3);
              if (0 < *(int *)(param_1 + 0x124)) {
                iVar9 = 0;
                do {
                  FUN_0064a320(*(int *)(param_1 + 0x128) + iVar9);
                  iVar7 = iVar7 + 1;
                  iVar9 = iVar9 + 0x2c;
                } while (iVar7 < *(int *)(param_1 + 0x124));
              }
              if (*(int *)(param_1 + 0x128) != 0) {
                FUN_00407f70(3);
              }
              *(int *)(param_1 + 300) = iVar2;
              *(int **)(param_1 + 0x128) = piStack_74;
            }
            FUN_0064a320(auStack_38);
            *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
            uStack_4 = 0xffffffff;
            FUN_00649ba0();
            *(undefined4 *)(param_1 + 0x118) = 2;
          }
          else {
            uVar3 = FUN_00659600(DAT_0075b6ec,1);
            *(undefined4 *)(param_1 + 0x110) = uVar3;
          }
          *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(uVar6 + 0x16c);
        }
      }
    }
    else {
      ExceptionList = &pvStack_c;
      iVar2 = FUN_00659e10(iVar2);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

