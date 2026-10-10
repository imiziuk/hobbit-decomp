
void __fastcall FUN_0040d560(int param_1)

{
  int *piVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int *piStack_68;
  uint *puStack_64;
  int iStack_60;
  uint local_58 [4];
  uint uStack_48;
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cecf8;
  pvStack_c = ExceptionList;
  uVar9 = *(undefined4 *)(param_1 + 0x15a0);
  uVar7 = *(undefined4 *)(param_1 + 0x15a4);
  ExceptionList = &pvStack_c;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4 = 0;
  iVar4 = FUN_00406ce0(uVar9,uVar7);
  local_4 = -1;
  if (iVar4 == -1) {
    FUN_00649720();
LAB_0040d5c2:
    if (*(int *)(param_1 + 0x15f8) == 0) goto LAB_0040d608;
    iVar4 = FUN_00659e10(*(int *)(param_1 + 0x15f8));
    if ((iVar4 != 0) || (iVar4 = FUN_00659e70(*(undefined4 *)(param_1 + 0x15f8)), iVar4 != 0)) {
      iVar4 = *(int *)(param_1 + 0x15f8);
      uVar9 = 0;
      goto LAB_0040d5f8;
    }
  }
  else {
    uVar8 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    uVar8 = -(uint)((*(byte *)(uVar8 + 0x7f) & 0x10) != 0) & uVar8;
    FUN_00649720();
    if (uVar8 == 0) goto LAB_0040d5c2;
    iVar4 = *(int *)(param_1 + 0x15f8);
    if ((iVar4 == 0) || ((*(byte *)(uVar8 + 0x15b) & 0x40) != 0)) goto LAB_0040d608;
    uVar9 = 0x3f000000;
LAB_0040d5f8:
    FUN_00659c80(iVar4,uVar9);
  }
  *(undefined4 *)(param_1 + 0x15f8) = 0;
LAB_0040d608:
  if ((*(uint *)(param_1 + 0x1630) & 0x2000) == 0) {
    uVar9 = *(undefined4 *)(param_1 + 0x1578);
    uVar7 = *(undefined4 *)(param_1 + 0x157c);
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4 = 1;
    local_4 = FUN_00406ce0(uVar9,uVar7);
    if (local_4 == -1) {
      FUN_00649720();
    }
    else {
      uVar8 = *(uint *)(DAT_0076f648 + local_4 * 0x14);
      bVar2 = *(byte *)(uVar8 + 0x7f);
      local_4 = -1;
      FUN_00649720();
      if (((-(uint)((bVar2 & 0x10) != 0) & uVar8) != 0) && (iVar4 = FUN_004dd210(), iVar4 != 0)) {
        pcVar10 = s_Chain_0071e67c;
        uVar9 = FUN_004dd230(0);
        iVar4 = FUN_00647e40(uVar9,pcVar10);
        if (iVar4 == 0) {
          FUN_00649b20(s_Chain_0071e67c);
          local_4 = 2;
          FUN_00434d90(auStack_38,0xbf800000);
          local_4 = -1;
          FUN_00649ba0();
          FUN_004de610(1);
          FUN_00659600(s_QuestItemSuccess_0071e4dc,1);
          FUN_004dbd50(s_LoadTrigger_TreasuryCableLoad_0071e648);
          *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 0x2000;
        }
        else {
          FUN_004dd1b0();
          FUN_00659600(s_QuestItemFailure_0071e668,1);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x15a8) < 4) {
    uVar9 = *(undefined4 *)(param_1 + 0x15a0);
    uVar7 = *(undefined4 *)(param_1 + 0x15a4);
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4 = 3;
    iVar4 = FUN_00406ce0(uVar9,uVar7);
    local_4 = -1;
    if (iVar4 == -1) {
      FUN_00649720();
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
      uVar8 = -(uint)((*(byte *)(uVar8 + 0x7f) & 0x10) != 0) & uVar8;
      FUN_00649720();
    }
    piStack_68 = (int *)(param_1 + 0x166c);
    puStack_64 = (uint *)(param_1 + 0x1580);
    iStack_60 = 4;
    do {
      if (*piStack_68 == 0) {
        uVar9 = *puStack_64;
        uVar7 = puStack_64[1];
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4 = 4;
        iVar4 = FUN_00406ce0(uVar9,uVar7);
        local_4 = -1;
        if (iVar4 == -1) {
          FUN_00649720();
        }
        else {
          uVar6 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
          uVar6 = -(uint)((*(byte *)(uVar6 + 0x7f) & 0x10) != 0) & uVar6;
          FUN_00649720();
          if (uVar6 != 0) {
            iVar4 = *(int *)(uVar6 + 0x140);
            if (iVar4 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(iVar4 + 0xc);
            }
            if (0 < iVar5) {
              fVar3 = DAT_006e92e4;
              if (iVar4 != 0) {
                fVar3 = *(float *)(iVar4 + 0x10);
              }
              local_58[0] = iVar5 - 3;
              if ((float)(int)local_58[0] < fVar3) {
                FUN_004c7660(*(undefined4 *)(param_1 + 0x15a8));
                FUN_004c77d0(0);
                *(ushort *)(uVar8 + 0x15a) = *(ushort *)(uVar8 + 0x15a) & 0xbfff ^ 0x4000;
                *(int *)(param_1 + 0x15a8) = *(int *)(param_1 + 0x15a8) + 1;
                *piStack_68 = 1;
                uVar9 = *(undefined4 *)(param_1 + 0x15e0);
                uVar7 = *(undefined4 *)(param_1 + 0x15e4);
                FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
                local_4 = 5;
                iVar4 = FUN_00406ce0(uVar9,uVar7);
                local_4 = -1;
                if (iVar4 == -1) {
                  FUN_00649720();
                }
                else {
                  uVar6 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
                  bVar2 = *(byte *)(uVar6 + 0x7f);
                  FUN_00649720();
                  if ((-(uint)((bVar2 & 0x10) != 0) & uVar6) != 0) {
                    FUN_0046a550();
                  }
                }
                uVar9 = FUN_00659600(s_StonePillarMove_Loop_0071e630,1);
                *(undefined4 *)(param_1 + 0x15f8) = uVar9;
              }
            }
          }
        }
      }
      puStack_64 = puStack_64 + 2;
      piStack_68 = piStack_68 + 1;
      iStack_60 = iStack_60 + -1;
    } while (iStack_60 != 0);
    if (*(int *)(param_1 + 0x15a8) == 4) {
      uVar9 = *(undefined4 *)(param_1 + 0x15b0);
      uVar7 = *(undefined4 *)(param_1 + 0x15b4);
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4 = 6;
      iVar4 = FUN_00406ce0(uVar9,uVar7);
      local_4 = -1;
      if (iVar4 == -1) {
        FUN_00649720();
      }
      else {
        uVar8 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
        bVar2 = *(byte *)(uVar8 + 0x7f);
        FUN_00649720();
        if ((-(uint)((bVar2 & 0x10) != 0) & uVar8) != 0) {
          FUN_004de6b0(1);
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 0x1630) & 0x4000) == 0) {
    uVar8 = *(uint *)(param_1 + 0x15b0);
    uVar6 = *(uint *)(param_1 + 0x15b4);
    uStack_48 = uVar8;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    iVar5 = (int)*(short *)(&DAT_0076cd88 + ((uVar8 ^ uVar6) * -0xfb & 0xfff) * 2);
    for (iVar4 = iVar5; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
    }
    while (iVar5 != -1) {
      piVar1 = (int *)(DAT_0076f648 + iVar5 * 0x14);
      iVar4 = *piVar1;
      if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uStack_48)) && (*(uint *)(iVar4 + 0xc) == uVar6)
         ) {
        if (iVar5 == -1) {
          local_4 = -1;
          FUN_00649720();
        }
        else {
          uVar8 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
          bVar2 = *(byte *)(uVar8 + 0x7f);
          local_4 = -1;
          FUN_00649720();
          if ((((-(uint)((bVar2 & 0x10) != 0) & uVar8) != 0) && (iVar4 = FUN_004de6d0(), iVar4 != 0)
              ) && (iVar4 = FUN_004dd210(), iVar4 != 0)) {
            pcVar10 = s_Treasury_Key_0071e620;
            uVar9 = FUN_004dd230(0);
            iVar4 = FUN_00647e40(uVar9,pcVar10);
            if (iVar4 == 0) {
              FUN_00649b20(s_Treasury_Key_0071e620);
              local_4 = 8;
              FUN_00434d90(auStack_38,0xbf800000);
              local_4 = 0xffffffff;
              FUN_00649ba0();
              FUN_004de610(1);
              FUN_00659600(s_QuestItemSuccess_0071e4dc,1);
              *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 0x4000;
              FUN_004dbcd0(s_Treasruy_Key_Placed_0071e60c,0);
              iVar4 = FUN_0040cc40();
              if (iVar4 == 0) {
                uVar9 = *(undefined4 *)(param_1 + 0x15e0);
                uVar7 = *(undefined4 *)(param_1 + 0x15e4);
                FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
                local_4 = 10;
              }
              else {
                uVar9 = *(undefined4 *)(param_1 + 0x15e8);
                uVar7 = *(undefined4 *)(param_1 + 0x15ec);
                FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
                local_4 = 9;
              }
              iVar4 = FUN_00406ce0(uVar9,uVar7);
              local_4 = -1;
              if (iVar4 == -1) {
                FUN_00649720();
              }
              else {
                uVar8 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
                bVar2 = *(byte *)(uVar8 + 0x7f);
                FUN_00649720();
                if ((-(uint)((bVar2 & 0x10) != 0) & uVar8) != 0) {
                  FUN_0046a550();
                }
              }
            }
            else {
              FUN_004dd1b0();
              FUN_00659600(s_QuestItemFailure_0071e668,1);
            }
          }
        }
        goto LAB_0040dc88;
      }
      iVar5 = (int)*(short *)((int)piVar1 + 0xe);
    }
    local_4 = -1;
    FUN_00649720();
  }
LAB_0040dc88:
  puStack_64 = (uint *)(param_1 + 0x15b8);
  piStack_68 = (int *)0x0;
  do {
    uVar8 = *puStack_64;
    uVar6 = puStack_64[1];
    uStack_48 = uVar8;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    iVar5 = (int)*(short *)(&DAT_0076cd88 + ((uVar8 ^ uVar6) * -0xfb & 0xfff) * 2);
    for (iVar4 = iVar5; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
    }
    for (; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
      iVar4 = *(int *)(DAT_0076f648 + iVar5 * 0x14);
      if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uStack_48)) && (*(uint *)(iVar4 + 0xc) == uVar6)
         ) {
        if (iVar5 != -1) {
          uVar8 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
          local_4 = -1;
          uVar8 = -(uint)((*(byte *)(uVar8 + 0x7f) & 0x10) != 0) & uVar8;
          FUN_00649720();
          goto LAB_0040dd69;
        }
        break;
      }
    }
    local_4 = -1;
    FUN_00649720();
    uVar8 = 0;
LAB_0040dd69:
    local_58[(int)piStack_68] = uVar8;
    uVar8 = local_58[0];
    piStack_68 = (int *)((int)piStack_68 + 1);
    puStack_64 = puStack_64 + 2;
  } while ((int)piStack_68 < 2);
  if ((local_58[0] != 0) && (local_58[1] != 0)) {
    if (*(int *)(param_1 + 0x15c8) == 0) {
      if ((*(uint *)(param_1 + 0x1630) & 0x4000) != 0) {
        FUN_004c7660(0);
        FUN_004c77d0(0);
        *(ushort *)(uVar8 + 0x15a) = *(ushort *)(uVar8 + 0x15a) & 0xbfff ^ 0x4000;
        FUN_004c7660(0);
        FUN_004c77d0(0);
        *(ushort *)(local_58[1] + 0x15a) = *(ushort *)(local_58[1] + 0x15a) & 0xbfff ^ 0x4000;
        *(undefined4 *)(param_1 + 0x15c8) = 1;
        ExceptionList = pvStack_c;
        return;
      }
    }
    else if ((((*(int *)(param_1 + 0x15c8) == 1) && (iVar4 = FUN_004c7410(), iVar4 != 0)) &&
             (iVar4 = FUN_004c7410(), iVar4 != 0)) && (iVar4 = FUN_0040cc40(), iVar4 != 0)) {
      puStack_64 = (uint *)(param_1 + 0x15d0);
      piStack_68 = (int *)0x0;
      do {
        uVar8 = local_58[(int)piStack_68];
        FUN_004c7660(1);
        FUN_004c77d0(0);
        *(ushort *)(uVar8 + 0x15a) = *(ushort *)(uVar8 + 0x15a) & 0xbfff ^ 0x4000;
        uVar8 = *puStack_64;
        uVar6 = puStack_64[1];
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        iVar5 = (int)*(short *)(&DAT_0076cd88 + ((uVar8 ^ uVar6) * -0xfb & 0xfff) * 2);
        for (iVar4 = iVar5; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe))
        {
        }
        while (iVar5 != -1) {
          piVar1 = (int *)(DAT_0076f648 + iVar5 * 0x14);
          iVar4 = *piVar1;
          if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar8)) && (*(uint *)(iVar4 + 0xc) == uVar6)
             ) {
            if (iVar5 != -1) {
              uVar8 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
              local_4 = -1;
              uVar8 = -(uint)((*(byte *)(uVar8 + 0x7f) & 0x10) != 0) & uVar8;
              FUN_00649720();
              if (uVar8 != 0) {
                FUN_004c7660(0);
                FUN_004c77d0(0);
                *(ushort *)(uVar8 + 0x15a) = *(ushort *)(uVar8 + 0x15a) & 0xbfff ^ 0x4000;
              }
              goto LAB_0040dfad;
            }
            break;
          }
          iVar5 = (int)*(short *)((int)piVar1 + 0xe);
        }
        local_4 = -1;
        FUN_00649720();
LAB_0040dfad:
        piStack_68 = (int *)((int)piStack_68 + 1);
        puStack_64 = puStack_64 + 2;
      } while ((int)piStack_68 < 2);
      *(undefined4 *)(param_1 + 0x15c8) = 2;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

