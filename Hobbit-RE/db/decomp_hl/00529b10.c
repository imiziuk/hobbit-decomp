
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00529b10(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d8077;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  DAT_00762924 = FUN_006a2260();
  DAT_00762920 = FUN_006a22a0(0x70);
  iVar2 = FUN_006a22a0(0);
  iVar3 = FUN_006a2260(0xb);
  DAT_00762890 = (float)iVar3;
  DAT_00762894 = (float)iVar2;
  iVar2 = FUN_006a22a0(0);
  iVar3 = FUN_006a2260(0x71);
  _DAT_00762898 = (float)iVar3;
  DAT_0076289c = (float)iVar2;
  iVar2 = FUN_006a22a0(0x8c);
  iVar3 = FUN_006a2260(0x71);
  _DAT_007628a0 = (float)iVar3;
  _DAT_007628a4 = (float)iVar2;
  iVar2 = FUN_006a22a0(0x8c);
  iVar3 = FUN_006a2260(0xb);
  _DAT_007628a8 = (float)iVar3;
  _DAT_007628ac = (float)iVar2;
  *(int *)(param_1 + 0x390) = param_4;
  uVar10 = 0x1c0;
  *(undefined4 *)(param_1 + 0x398) = param_2;
  *(int *)(param_1 + 0x394) = param_4;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  uVar9 = 0x280;
  uVar4 = FUN_006a22a0(0,0x280,0x1c0);
  uVar5 = FUN_006a2260(0,uVar4);
  FUN_004fa730(uVar5,uVar4,uVar9,uVar10);
  FUN_004fa800();
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar4 = DAT_00762aa4;
  uVar5 = DAT_00762a40;
  uVar9 = FUN_006a22a0(0,DAT_00762aa4,DAT_00762a40);
  uVar10 = FUN_006a2260(0,uVar9);
  FUN_004fa730(uVar10,uVar9,uVar4,uVar5);
  FUN_004fa800();
  uVar10 = 0x20;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  uVar9 = 0x20;
  uVar4 = FUN_006a22a0(0xf,0x20,0x20);
  uVar5 = FUN_006a2260(0x96,uVar4);
  FUN_004fa730(uVar5,uVar4,uVar9,uVar10);
  FUN_004fa800();
  *(undefined4 *)(param_1 + 0x164) = 0;
  uVar10 = 0x20;
  _DAT_00762ad8 = 0x44200000;
  uVar9 = 0x20;
  uVar4 = FUN_006a22a0(0x1a,0x20,0x20);
  uVar5 = FUN_006a2260(0x96,uVar4);
  FUN_004fa730(uVar5,uVar4,uVar9,uVar10);
  FUN_004fa800();
  uVar10 = 0x20;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  uVar9 = 0x20;
  uVar4 = FUN_006a22a0(0,0x20,0x20);
  uVar5 = FUN_006a2260(0,uVar4);
  FUN_004fa730(uVar5,uVar4,uVar9,uVar10);
  uVar10 = 0x20;
  uVar9 = 0x20;
  uVar4 = FUN_006a22a0(0,0x20,0x20);
  uVar5 = FUN_006a2260(0,uVar4);
  FUN_004fa730(uVar5,uVar4,uVar9,uVar10);
  uVar10 = 0x20;
  uVar9 = 0x20;
  uVar4 = FUN_006a22a0(0,0x20,0x20);
  uVar5 = FUN_006a2260(0,uVar4);
  FUN_004fa730(uVar5,uVar4,uVar9,uVar10);
  uVar10 = 0x20;
  uVar9 = 0x20;
  uVar4 = FUN_006a22a0(0,0x20,0x20);
  uVar5 = FUN_006a2260(0,uVar4);
  FUN_004fa730(uVar5,uVar4,uVar9,uVar10);
  iVar2 = 0;
  piVar8 = (int *)(param_1 + 0x1bc);
  do {
    FUN_004fa800();
    *piVar8 = iVar2;
    iVar2 = iVar2 + 0x5a;
    piVar8 = piVar8 + 0x16;
  } while (iVar2 < 0x168);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)();
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_006bf840();
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  param_4 = 0;
  if (*(int *)(param_1 + 0x398) < 1) {
    *(undefined4 *)(param_1 + 0x38c) = 0;
  }
  else {
    do {
      local_14 = 3;
      iVar2 = FUN_00647b10(0);
      if (iVar2 < 0x32) {
        local_14 = 8;
      }
      uVar4 = FUN_00647b10(0);
      switch(uVar4) {
      case 0:
        pvVar6 = operator_new(0x2f8);
        uStack_4 = 0;
        if (pvVar6 == (void *)0x0) {
          param_2 = 0;
        }
        else {
          param_2 = FUN_00526ad0();
        }
        uStack_4 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 8);
        if (*(int *)(param_1 + 0x10) < iVar2 + 1) {
          if (*(int *)(param_1 + 0x18) == 0) {
            iVar3 = *(int *)(param_1 + 0x10) / 2;
            iVar7 = 1;
            if (0 < iVar3) {
              iVar7 = iVar3;
            }
            if (iVar7 + iVar2 < 1) {
              iVar3 = 1;
            }
            else {
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              iVar3 = iVar3 + iVar2;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x18) + iVar2;
          }
          pvVar6 = operator_new(iVar3 * 4);
          iVar2 = 0;
          if (0 < *(int *)(param_1 + 8)) {
            do {
              *(undefined4 *)((int)pvVar6 + iVar2 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_1 + 8));
          }
          FUN_006bf840();
          *(void **)(param_1 + 0xc) = pvVar6;
          *(int *)(param_1 + 0x10) = iVar3;
        }
        *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 4) = param_2;
        goto LAB_0052a2a0;
      case 1:
        pvVar6 = operator_new(0x2f4);
        uStack_4 = 1;
        if (pvVar6 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_00527170();
        }
        uStack_4 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 8);
        if (*(int *)(param_1 + 0x10) < iVar2 + 1) {
          if (*(int *)(param_1 + 0x18) == 0) {
            iVar3 = *(int *)(param_1 + 0x10) / 2;
            iVar7 = 1;
            if (0 < iVar3) {
              iVar7 = iVar3;
            }
            if (iVar7 + iVar2 < 1) {
              iVar3 = 1;
            }
            else {
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              iVar3 = iVar3 + iVar2;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x18) + iVar2;
          }
          pvVar6 = operator_new(iVar3 * 4);
          iVar2 = 0;
          if (0 < *(int *)(param_1 + 8)) {
            do {
              *(undefined4 *)((int)pvVar6 + iVar2 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_1 + 8));
          }
LAB_0052a281:
          FUN_006bf840();
          *(void **)(param_1 + 0xc) = pvVar6;
          *(int *)(param_1 + 0x10) = iVar3;
        }
        break;
      case 2:
        pvVar6 = operator_new(0x8e8);
        uStack_4 = 2;
        if (pvVar6 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_00528230();
        }
        uStack_4 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 8);
        if (*(int *)(param_1 + 0x10) < iVar2 + 1) {
          if (*(int *)(param_1 + 0x18) == 0) {
            iVar3 = *(int *)(param_1 + 0x10) / 2;
            iVar7 = 1;
            if (0 < iVar3) {
              iVar7 = iVar3;
            }
            if (iVar7 + iVar2 < 1) {
              iVar3 = 1;
            }
            else {
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              iVar3 = iVar3 + iVar2;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x18) + iVar2;
          }
          pvVar6 = operator_new(iVar3 * 4);
          iVar2 = 0;
          if (0 < *(int *)(param_1 + 8)) {
            do {
              *(undefined4 *)((int)pvVar6 + iVar2 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_1 + 8));
          }
          goto LAB_0052a281;
        }
        break;
      case 3:
        pvVar6 = operator_new(0x560);
        uStack_4 = 3;
        if (pvVar6 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_005279f0();
        }
        uStack_4 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 8);
        if (*(int *)(param_1 + 0x10) < iVar2 + 1) {
          if (*(int *)(param_1 + 0x18) == 0) {
            iVar3 = *(int *)(param_1 + 0x10) / 2;
            iVar7 = 1;
            if (0 < iVar3) {
              iVar7 = iVar3;
            }
            if (iVar7 + iVar2 < 1) {
              iVar3 = 1;
            }
            else {
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              iVar3 = iVar3 + iVar2;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x18) + iVar2;
          }
          pvVar6 = operator_new(iVar3 * 4);
          iVar2 = 0;
          if (0 < *(int *)(param_1 + 8)) {
            do {
              *(undefined4 *)((int)pvVar6 + iVar2 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_1 + 8));
          }
          goto LAB_0052a281;
        }
        break;
      default:
        pvVar6 = operator_new(0x2f8);
        uStack_4 = 4;
        if (pvVar6 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_00526ad0();
        }
        uStack_4 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 8);
        if (*(int *)(param_1 + 0x10) < iVar2 + 1) {
          if (*(int *)(param_1 + 0x18) == 0) {
            iVar3 = *(int *)(param_1 + 0x10) / 2;
            iVar7 = 1;
            if (0 < iVar3) {
              iVar7 = iVar3;
            }
            if (iVar7 + iVar2 < 1) {
              iVar3 = 1;
            }
            else {
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              iVar3 = iVar3 + iVar2;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x18) + iVar2;
          }
          pvVar6 = operator_new(iVar3 * 4);
          iVar2 = 0;
          if (0 < *(int *)(param_1 + 8)) {
            do {
              *(undefined4 *)((int)pvVar6 + iVar2 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_1 + 8));
          }
          goto LAB_0052a281;
        }
      }
      *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 4) = uVar4;
LAB_0052a2a0:
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      iVar2 = param_4;
      if (3 < param_4) {
        iVar2 = param_4 + -4;
      }
      iVar2 = DAT_00762888 * iVar2;
      iVar3 = *(int *)(param_1 + 0x398);
      iVar7 = **(int **)(*(int *)(param_1 + 0xc) + param_4 * 4);
      FUN_006a22a0();
      uVar4 = FUN_006a2260(iVar2 + DAT_00762a00);
      (**(code **)(iVar7 + 0x14))
                (param_4,local_14,((param_4 == iVar3 + -1) - 1 & 0xfffffffa) + 9,uVar4);
      param_4 = param_4 + 1;
    } while (param_4 < *(int *)(param_1 + 0x398));
    *(undefined4 *)(param_1 + 0x38c) = 0;
  }
  ExceptionList = pvStack_c;
  return;
}

