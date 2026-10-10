
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00512410(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  
  FUN_00508ff0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (DAT_00762618 == 0) {
    if (DAT_007625d4 == 0) {
      FUN_006bf840(DAT_007625cc);
      DAT_007625cc = (void *)0x0;
      DAT_007625d0 = 0;
    }
    DAT_007625c8 = 0;
    if (DAT_0076260c == 0) {
      FUN_006bf840(DAT_00762604);
      DAT_00762604 = (void *)0x0;
      DAT_00762608 = 0;
    }
    DAT_00762600 = 0;
    if (DAT_007625f0 == 0) {
      FUN_006bf840(DAT_007625e8);
      DAT_007625e8 = 0;
      _DAT_007625ec = 0;
    }
    _DAT_007625e4 = 0;
    pcVar7 = "IDS_INPUT_KBD_ESCAPE";
    do {
      uVar1 = FUN_006ab200(&DAT_0071ceb4,pcVar7);
      if (DAT_007625d0 < DAT_007625c8 + 1) {
        if (DAT_007625d8 == 0) {
          iVar2 = DAT_007625d0 / 2;
          iVar4 = 1;
          if (0 < iVar2) {
            iVar4 = iVar2;
          }
          if (iVar4 + DAT_007625c8 < 1) {
            iVar2 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar2 = DAT_007625c8 + iVar2;
          }
        }
        else {
          iVar2 = DAT_007625c8 + DAT_007625d8;
        }
        pvVar3 = operator_new(iVar2 * 4);
        iVar4 = 0;
        if (0 < DAT_007625c8) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
                 *(undefined4 *)((int)DAT_007625cc + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < DAT_007625c8);
        }
        FUN_006bf840(DAT_007625cc);
        DAT_007625cc = pvVar3;
        DAT_007625d0 = iVar2;
      }
      *(undefined4 *)((int)DAT_007625cc + DAT_007625c8 * 4) = uVar1;
      DAT_007625c8 = DAT_007625c8 + 1;
      pcVar7 = pcVar7 + 0x20;
    } while ((int)pcVar7 < 0x6f2788);
    pcVar7 = "IDS_INPUT_MOUSE_BTN_L";
    do {
      uVar1 = FUN_006ab200(&DAT_0071ceb4,pcVar7);
      if (DAT_00762608 < DAT_00762600 + 1) {
        if (DAT_00762610 == 0) {
          iVar2 = DAT_00762608 / 2;
          iVar4 = 1;
          if (0 < iVar2) {
            iVar4 = iVar2;
          }
          if (iVar4 + DAT_00762600 < 1) {
            iVar2 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar2 = DAT_00762600 + iVar2;
          }
        }
        else {
          iVar2 = DAT_00762600 + DAT_00762610;
        }
        pvVar3 = operator_new(iVar2 * 4);
        iVar4 = 0;
        if (0 < DAT_00762600) {
          do {
            *(undefined4 *)((int)pvVar3 + iVar4 * 4) =
                 *(undefined4 *)((int)DAT_00762604 + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < DAT_00762600);
        }
        FUN_006bf840(DAT_00762604);
        DAT_00762604 = pvVar3;
        DAT_00762608 = iVar2;
      }
      *(undefined4 *)((int)DAT_00762604 + DAT_00762600 * 4) = uVar1;
      DAT_00762600 = DAT_00762600 + 1;
      pcVar7 = pcVar7 + 0x20;
    } while ((int)pcVar7 < 0x6f28a8);
    pcVar7 = "IDS_INPUT_MOUSE_X_REL";
    do {
      FUN_006ab200(&DAT_0071ceb4,pcVar7);
      FUN_00417a80(&stack0x00000000);
      pcVar7 = pcVar7 + 0x20;
    } while ((int)pcVar7 < 0x6f29c8);
    DAT_00762618 = 1;
  }
  iVar2 = 0;
  iVar4 = 0;
  do {
    iVar5 = 0;
    do {
      if (param_1[0x7d8] <= iVar2) {
        if (iVar5 < 5) {
          piVar8 = param_1 + iVar4 + iVar5 + 0x1a0;
          for (iVar6 = 5 - iVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar8 = 0;
            piVar8 = piVar8 + 1;
          }
        }
        break;
      }
      param_1[iVar4 + iVar5 + 0x1a0] = iVar2;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 5);
    iVar4 = iVar4 + 0x13b;
    if (0x761 < iVar4) {
      (**(code **)(*param_1 + 0x90))();
      (**(code **)(*param_1 + 0x98))(0);
      return unaff_ESI;
    }
  } while( true );
}

