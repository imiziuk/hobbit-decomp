
void __fastcall FUN_004157a0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  undefined8 uVar11;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  undefined8 local_10;
  
  FUN_00417340();
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_2c = (undefined4 *)(param_1 + 0x310);
  local_24 = -1;
  do {
    iVar2 = FUN_004021c0(local_2c[0x18],local_2c[0x19]);
    if (iVar2 == 0) {
      return;
    }
    uVar11 = FUN_0041bcd0();
    local_10 = uVar11;
    iVar2 = FUN_004e19b0(&local_10);
    iVar3 = FUN_004e19b0(param_1 + 0x2d8);
    iVar4 = FUN_004e19b0(param_1 + 0x2d0);
    iVar5 = FUN_004e19b0(param_1 + 0x2c8);
    if (((iVar2 == 0) && (iVar3 == 0)) && ((iVar4 == 0 || (iVar5 == 0)))) {
      if (local_30 < 2) {
        if (iVar5 == 0) {
LAB_00415886:
          iVar2 = FUN_0041bcc0();
          if ((((iVar4 != 0) && (*(int *)(iVar2 + 0xa8) == *(int *)(param_1 + 0x2d0))) &&
              (*(int *)(iVar2 + 0xac) == *(int *)(param_1 + 0x2d4))) ||
             (((iVar5 != 0 && (*(int *)(iVar2 + 0xa8) == *(int *)(param_1 + 0x2c8))) &&
              (*(int *)(iVar2 + 0xac) == *(int *)(param_1 + 0x2cc))))) goto LAB_004158bf;
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      else {
        if ((3 < local_30) || (iVar4 == 0)) goto LAB_00415886;
        bVar1 = true;
      }
    }
    else {
LAB_004158bf:
      bVar1 = true;
    }
    iVar2 = FUN_004021c0(*local_2c,local_2c[1]);
    uVar9 = 1 << ((byte)local_30 & 0x1f);
    uVar6 = *(uint *)(param_1 + 0x2c0) & uVar9;
    if (bVar1) {
      local_20 = local_20 | uVar9;
      local_28 = local_28 + 1;
      if (uVar6 == 0) {
        local_24 = local_30;
        uVar7 = FUN_004c6fa0(s_PlateDown_0071fa10);
        iVar3 = FUN_00647e40(uVar7);
        if (iVar3 != 0) {
          FUN_004c6f40(s_PlateDown_0071fa10);
          FUN_004c77d0(0);
        }
        *(ushort *)(iVar2 + 0x15a) = *(ushort *)(iVar2 + 0x15a) & 0xbfff ^ 0x4000;
      }
    }
    else if (uVar6 != 0) {
      local_24 = local_30;
      uVar7 = FUN_004c6fa0(s_PlateUp_0071fa08);
      iVar3 = FUN_00647e40(uVar7);
      if (iVar3 != 0) {
        FUN_004c6f40(s_PlateUp_0071fa08);
        FUN_004c77d0(0);
      }
      *(ushort *)(iVar2 + 0x15a) = *(ushort *)(iVar2 + 0x15a) & 0xbfff ^ 0x4000;
    }
    local_30 = local_30 + 1;
    local_2c = local_2c + 2;
  } while (local_30 < 6);
  iVar2 = *(int *)(param_1 + 700);
  if (local_28 != iVar2) {
    if ((1 << ((byte)local_24 & 0x1f) & *(uint *)(param_1 + 0x2c0)) == 0) {
      *(int *)(param_1 + 0x2ac + iVar2 * 4) = local_24;
      iVar2 = *(int *)(param_1 + 700) + 1;
    }
    else {
      iVar3 = 0;
      if (iVar2 < 1) {
LAB_00415a43:
        iVar2 = *(int *)(param_1 + 700) + -1;
      }
      else {
        piVar10 = (int *)(param_1 + 0x2ac);
        do {
          if (*piVar10 == local_24) {
            if (iVar3 < iVar2) {
              puVar8 = (undefined4 *)(param_1 + 0x2ac + iVar3 * 4);
              do {
                *puVar8 = puVar8[1];
                iVar3 = iVar3 + 1;
                puVar8 = puVar8 + 1;
              } while (iVar3 < *(int *)(param_1 + 700));
            }
            goto LAB_00415a43;
          }
          iVar3 = iVar3 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar3 < iVar2);
        iVar2 = *(int *)(param_1 + 700) + -1;
      }
    }
    *(int *)(param_1 + 700) = iVar2;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    switch(iVar2) {
    case 0:
      iVar2 = param_1 + 0x2e0;
      iVar3 = 2;
      do {
        FUN_00415610(iVar2 + 0x20,0);
        FUN_00415610(iVar2,0);
        FUN_00415610(iVar2 + 0x10,0);
        iVar2 = iVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0x2ac);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x2c4) = 1;
        FUN_00415610(param_1 + 0x2e0,1);
        FUN_00415610(param_1 + 0x2e8,0);
        iVar2 = param_1 + 0x2f0;
        iVar3 = 2;
        do {
          FUN_00415610(iVar2 + 0x10,0);
          FUN_00415610(iVar2,0);
          iVar2 = iVar2 + 8;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      else if (iVar2 == 1) {
        iVar3 = 2;
        *(undefined4 *)(param_1 + 0x2c4) = 2;
        FUN_00415610(param_1 + 0x2f0,1);
        FUN_00415610(param_1 + 0x2f8,0);
        iVar2 = param_1 + 0x2e0;
        do {
          FUN_00415610(iVar2 + 0x20,0);
          FUN_00415610(iVar2,0);
          iVar2 = iVar2 + 8;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      else if (iVar2 == 4) {
        *(undefined4 *)(param_1 + 0x2c4) = 0x10;
        FUN_00415610(param_1 + 0x300,1);
        FUN_00415610(param_1 + 0x308,1);
        iVar2 = param_1 + 0x2f0;
        iVar3 = 2;
        do {
          FUN_00415610(iVar2 + -0x10,0);
          FUN_00415610(iVar2,0);
          iVar2 = iVar2 + 8;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      else {
        iVar2 = param_1 + 0x2e0;
        iVar3 = 2;
        do {
          FUN_00415610(iVar2 + 0x20,0);
          FUN_00415610(iVar2,0);
          FUN_00415610(iVar2 + 0x10,0);
          iVar2 = iVar2 + 8;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0x2ac);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x2b0) == 3) {
          *(undefined4 *)(param_1 + 0x2c4) = 9;
          FUN_00415610(param_1 + 0x2e0,1);
          FUN_00415610(param_1 + 0x2e8,1);
          iVar2 = param_1 + 0x2f0;
          iVar3 = 2;
          do {
            FUN_00415610(iVar2 + 0x10,0);
            FUN_00415610(iVar2,0);
            iVar2 = iVar2 + 8;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        else {
          FUN_00415610(param_1 + 0x2e0,1);
          FUN_00415610(param_1 + 0x2e8,0);
          iVar2 = param_1 + 0x2f0;
          iVar3 = 2;
          do {
            FUN_00415610(iVar2 + 0x10,0);
            FUN_00415610(iVar2,0);
            iVar2 = iVar2 + 8;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else if (iVar2 == 1) {
        iVar2 = 2;
        if (*(int *)(param_1 + 0x2b0) == 2) {
          *(undefined4 *)(param_1 + 0x2c4) = 6;
          FUN_00415610(param_1 + 0x2f0,1);
          FUN_00415610(param_1 + 0x2f8,1);
          iVar3 = param_1 + 0x2e0;
          do {
            FUN_00415610(iVar3 + 0x20,0);
            FUN_00415610(iVar3,0);
            iVar3 = iVar3 + 8;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        else {
          FUN_00415610(param_1 + 0x2f0,1);
          FUN_00415610(param_1 + 0x2f8,0);
          iVar3 = param_1 + 0x2e0;
          do {
            FUN_00415610(iVar3 + 0x20,0);
            FUN_00415610(iVar3,0);
            iVar3 = iVar3 + 8;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else if (iVar2 == 4) {
        if (*(int *)(param_1 + 0x2b0) == 5) {
          *(undefined4 *)(param_1 + 0x2c4) = 0x30;
          FUN_00415610(param_1 + 0x300,2);
          FUN_00415610(param_1 + 0x308,2);
          iVar2 = param_1 + 0x2f0;
          iVar3 = 2;
          do {
            FUN_00415610(iVar2 + -0x10,0);
            FUN_00415610(iVar2,0);
            iVar2 = iVar2 + 8;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        else {
          FUN_00415610(param_1 + 0x300,1);
          FUN_00415610(param_1 + 0x308,1);
          iVar2 = param_1 + 0x2e0;
          iVar3 = 2;
          do {
            FUN_00415610(iVar2 + 0x10,0);
            FUN_00415610(iVar2,0);
            iVar2 = iVar2 + 8;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0x2ac);
      if (iVar2 == 0) {
        iVar2 = param_1 + 0x2e0;
        if (*(int *)(param_1 + 0x2b0) == 3) {
          if (*(int *)(param_1 + 0x2b4) == 5) {
            *(undefined4 *)(param_1 + 0x2c4) = 0x29;
            FUN_00415610(iVar2,2);
            FUN_00415610(param_1 + 0x2e8,2);
            iVar2 = param_1 + 0x2f0;
            iVar3 = 2;
            do {
              FUN_00415610(iVar2 + 0x10,0);
              FUN_00415610(iVar2,0);
              iVar2 = iVar2 + 8;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          else {
            FUN_00415610(iVar2,1);
            FUN_00415610(param_1 + 0x2e8,1);
            iVar2 = param_1 + 0x2f0;
            iVar3 = 2;
            do {
              FUN_00415610(iVar2 + 0x10,0);
              FUN_00415610(iVar2,0);
              iVar2 = iVar2 + 8;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        else {
          FUN_00415610(iVar2,1);
          FUN_00415610(param_1 + 0x2e8,0);
          iVar2 = param_1 + 0x2f0;
          iVar3 = 2;
          do {
            FUN_00415610(iVar2 + 0x10,0);
            FUN_00415610(iVar2,0);
            iVar2 = iVar2 + 8;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else if (iVar2 == 1) {
        iVar2 = 2;
        if (*(int *)(param_1 + 0x2b0) == 2) {
          if (*(int *)(param_1 + 0x2b4) == 3) {
            *(undefined4 *)(param_1 + 0x2c4) = 0xe;
            FUN_00415610(param_1 + 0x2f0,2);
            FUN_00415610(param_1 + 0x2f8,2);
            iVar3 = param_1 + 0x2e0;
            do {
              FUN_00415610(iVar3 + 0x20,0);
              FUN_00415610(iVar3,0);
              iVar3 = iVar3 + 8;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          else {
            FUN_00415610(param_1 + 0x2f0,1);
            FUN_00415610(param_1 + 0x2f8,1);
            iVar3 = param_1 + 0x2e0;
            do {
              FUN_00415610(iVar3 + 0x20,0);
              FUN_00415610(iVar3,0);
              iVar3 = iVar3 + 8;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        else {
          FUN_00415610(param_1 + 0x2f0,1);
          FUN_00415610(param_1 + 0x2f8,0);
          iVar3 = param_1 + 0x2e0;
          do {
            FUN_00415610(iVar3 + 0x20,0);
            FUN_00415610(iVar3,0);
            iVar3 = iVar3 + 8;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else if (iVar2 == 4) {
        if (*(int *)(param_1 + 0x2b0) == 5) {
          *(undefined4 *)(param_1 + 0x2c4) = 0x30;
          FUN_00415610(param_1 + 0x300,2);
          FUN_00415610(param_1 + 0x308,2);
          iVar2 = param_1 + 0x2f0;
          iVar3 = 2;
          do {
            FUN_00415610(iVar2 + -0x10,0);
            FUN_00415610(iVar2,0);
            iVar2 = iVar2 + 8;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        else {
          FUN_00415610(param_1 + 0x300,1);
          FUN_00415610(param_1 + 0x308,1);
          iVar2 = param_1 + 0x2e0;
          iVar3 = 2;
          do {
            FUN_00415610(iVar2 + 0x10,0);
            FUN_00415610(iVar2,0);
            iVar2 = iVar2 + 8;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
  }
  FUN_00417260();
  *(uint *)(param_1 + 0x2c0) = local_20;
  return;
}

