
undefined4 __thiscall FUN_00675fa0(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_120;
  undefined1 local_110 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6c2a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_io_fs__UnmountFileSystem_007507b4);
  iVar4 = 0;
  local_4 = 0;
  FUN_00655890(1);
  FUN_00675e20(local_110,param_2);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = FUN_00647ed0(*(undefined4 *)(iVar4 + *(int *)(param_1 + 0xc)),param_2);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x50;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  if (iVar3 < *(int *)(param_1 + 8)) {
    if (iVar3 == *(int *)(param_1 + 0x13f8)) {
      *(undefined4 *)(param_1 + 0x13f8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x13fc) = 0;
    }
    iVar1 = iVar3 * 0x50;
    iVar4 = *(int *)(param_1 + 0xc) + iVar1;
    iVar5 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0xc) + 0x3c + iVar1)) {
      do {
        FUN_006771a0(*(undefined4 *)(*(int *)(iVar4 + 0x40) + iVar5 * 4));
        iVar4 = *(int *)(param_1 + 0xc) + iVar1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar4 + 0x3c));
    }
    iVar4 = *(int *)(param_1 + 0xc) + 0x34 + iVar1;
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x48 + iVar1) == 0) {
      FUN_006bf840(*(undefined4 *)(iVar4 + 0xc));
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 8) = 0;
    }
    FUN_00674810(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x30 + iVar1));
    iStack_120 = (*(int *)(param_1 + 8) - iVar3) + -1;
    if (0 < iStack_120) {
      do {
        iVar4 = *(int *)(param_1 + 0xc) + 0x50 + iVar1;
        iVar3 = *(int *)(param_1 + 0xc) + iVar1;
        FUN_0064a320(iVar4);
        *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
        *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar4 + 0x30);
        if (iVar3 + 0x34 != iVar4 + 0x34) {
          if (*(int *)(iVar3 + 0x44) < *(int *)(iVar4 + 0x3c)) {
            FUN_006bf840(*(undefined4 *)(iVar3 + 0x40));
            pvVar2 = operator_new(*(int *)(iVar4 + 0x3c) << 2);
            *(void **)(iVar3 + 0x40) = pvVar2;
            *(undefined4 *)(iVar3 + 0x3c) = 0;
            *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar4 + 0x3c);
          }
          iVar5 = 0;
          if (0 < *(int *)(iVar4 + 0x3c)) {
            do {
              *(undefined4 *)(*(int *)(iVar3 + 0x40) + iVar5 * 4) =
                   *(undefined4 *)(*(int *)(iVar4 + 0x40) + iVar5 * 4);
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(iVar4 + 0x3c));
          }
          *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(iVar4 + 0x3c);
        }
        iVar1 = iVar1 + 0x50;
        iStack_120 = iStack_120 + -1;
      } while (iStack_120 != 0);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    DAT_007f8718 = DAT_007f8718 + -1;
  }
  FUN_006558d0(1);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return 0;
}

