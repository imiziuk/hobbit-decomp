
undefined4 __thiscall
FUN_0050d940(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_EDI;
  int iVar7;
  int *piVar8;
  
  FUN_00508d80();
  if ((param_4 != 0) && (0 < *(int *)(param_4 + 0xc))) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      iVar1 = *(int *)(param_4 + 0x10) + iVar6;
      switch(*(undefined4 *)(*(int *)(param_4 + 0x10) + iVar6)) {
      case 3:
        *(undefined4 *)(iVar1 + 0x20) = 7;
        break;
      case 4:
        *(undefined4 *)(iVar1 + 0x1c) = 1;
        *(undefined4 *)(iVar1 + 0x20) = 6;
        break;
      case 5:
        *(undefined4 *)(iVar1 + 0x20) = 8;
        break;
      case 6:
        *(undefined4 *)(iVar1 + 0x20) = 9;
        break;
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
        *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 0x1e;
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 0x78;
        break;
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(undefined4 *)(iVar1 + 0x20) = 0;
        *(undefined4 *)(iVar1 + 0x24) = 0;
        *(undefined4 *)(iVar1 + 0x28) = 0;
        *(undefined4 *)(iVar1 + 0x2c) = 0x102;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x30;
    } while (iVar7 < *(int *)(param_4 + 0xc));
  }
  FUN_00508ff0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (DAT_0076259c == 0) {
    param_1 = param_6;
    if (DAT_00762590 == 0) {
      FUN_006bf840(DAT_00762588);
      DAT_00762588 = (void *)0x0;
      DAT_0076258c = 0;
      param_1 = param_6;
    }
    DAT_00762584 = 0;
    if (DAT_00762574 == 0) {
      FUN_006bf840(DAT_0076256c);
      DAT_0076256c = (void *)0x0;
      DAT_00762570 = 0;
    }
    DAT_00762568 = 0;
    pcVar5 = "IDS_INPUT_PC_BTN_0";
    do {
      uVar2 = FUN_006ab200(&DAT_0071ceb4,pcVar5);
      if (DAT_0076258c < DAT_00762584 + 1) {
        if (DAT_00762594 == 0) {
          iVar6 = DAT_0076258c / 2;
          iVar7 = 1;
          if (0 < iVar6) {
            iVar7 = iVar6;
          }
          if (iVar7 + DAT_00762584 < 1) {
            iVar6 = 1;
          }
          else {
            if (iVar6 < 1) {
              iVar6 = 1;
            }
            iVar6 = iVar6 + DAT_00762584;
          }
        }
        else {
          iVar6 = DAT_00762584 + DAT_00762594;
        }
        pvVar3 = operator_new(iVar6 * 4);
        iVar7 = 0;
        if (0 < DAT_00762584) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar7 * 4) =
                 *(undefined4 *)((int)DAT_00762588 + iVar7 * 4);
            iVar7 = iVar7 + 1;
          } while (iVar7 < DAT_00762584);
        }
        FUN_006bf840(DAT_00762588);
        DAT_00762588 = pvVar3;
        DAT_0076258c = iVar6;
      }
      *(undefined4 *)((int)DAT_00762588 + DAT_00762584 * 4) = uVar2;
      DAT_00762584 = DAT_00762584 + 1;
      pcVar5 = pcVar5 + 0x20;
    } while ((int)pcVar5 < 0x6f0790);
    pcVar5 = "IDS_INPUT_PC_LEFT_JOYSTICK";
    do {
      uVar2 = FUN_006ab200(&DAT_0071ceb4,pcVar5);
      if (DAT_00762570 < DAT_00762568 + 1) {
        if (DAT_00762578 == 0) {
          iVar6 = DAT_00762570 / 2;
          iVar7 = 1;
          if (0 < iVar6) {
            iVar7 = iVar6;
          }
          if (iVar7 + DAT_00762568 < 1) {
            iVar6 = 1;
          }
          else {
            if (iVar6 < 1) {
              iVar6 = 1;
            }
            iVar6 = iVar6 + DAT_00762568;
          }
        }
        else {
          iVar6 = DAT_00762568 + DAT_00762578;
        }
        pvVar3 = operator_new(iVar6 * 4);
        iVar7 = 0;
        if (0 < DAT_00762568) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar7 * 4) =
                 *(undefined4 *)((int)DAT_0076256c + iVar7 * 4);
            iVar7 = iVar7 + 1;
          } while (iVar7 < DAT_00762568);
        }
        FUN_006bf840(DAT_0076256c);
        DAT_0076256c = pvVar3;
        DAT_00762570 = iVar6;
      }
      *(undefined4 *)((int)DAT_0076256c + DAT_00762568 * 4) = uVar2;
      DAT_00762568 = DAT_00762568 + 1;
      pcVar5 = pcVar5 + 0x20;
    } while ((int)pcVar5 < 0x6f08b0);
    DAT_0076259c = 1;
  }
  if (param_1[0x5b] != 0) {
    FUN_006a3240(1,0);
    FUN_006a3240(0x100,1);
  }
  if (param_1[0x5c] != 0) {
    FUN_006a3240(1,0);
    FUN_006a3240(0x100,1);
  }
  iVar6 = DAT_00732e60;
  param_1[0x7d8] = DAT_00732e60;
  iVar7 = 0;
  param_1[0x7d7] = (uint)(iVar6 % 5 != 0) + iVar6 / 5;
  iVar6 = 0;
  do {
    iVar1 = 0;
    do {
      if (param_1[0x7d8] <= iVar7) {
        if (iVar1 < 5) {
          piVar8 = param_1 + iVar6 + iVar1 + 0x1a0;
          for (iVar4 = 5 - iVar1; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar8 = 0;
            piVar8 = piVar8 + 1;
          }
        }
        break;
      }
      piVar8 = &DAT_00732e30 + iVar7;
      iVar4 = iVar6 + iVar1;
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + 1;
      param_1[iVar4 + 0x1a0] = *piVar8;
    } while (iVar1 < 5);
    iVar6 = iVar6 + 0x13b;
    if (0x761 < iVar6) {
      (**(code **)(*param_1 + 0x90))();
      (**(code **)(*param_1 + 0x98))(0);
      return unaff_EDI;
    }
  } while( true );
}

