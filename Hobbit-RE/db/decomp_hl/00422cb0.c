
undefined * __fastcall FUN_00422cb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iStack_b8;
  int iStack_b4;
  undefined1 auStack_a4 [152];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006cf4b1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0075ba08 == 0) {
    ExceptionList = &pvStack_c;
    if (DAT_0075ba00 != (int *)0x0) {
      piVar4 = DAT_0075ba00 + -1;
      ExceptionList = &pvStack_c;
      FUN_006c026a(DAT_0075ba00,0x4c,DAT_0075ba00[-1],FUN_0064b190);
      FUN_006bf840(piVar4);
    }
    DAT_0075ba00 = (int *)0x0;
    DAT_0075ba04 = 0;
  }
  param_1 = param_1 + 0x454;
  DAT_0075b9fc = 0;
  iVar1 = FUN_00549470(param_1);
  FUN_00549580(param_1);
  iStack_b4 = *(int *)(iVar1 + 0x54);
  if (0 < iStack_b4) {
    iStack_b8 = 0;
    do {
      iVar6 = 0;
      iVar1 = FUN_00549470(param_1);
      FUN_00549580(param_1);
      uVar2 = FUN_0064b130(*(int *)(iVar1 + 0x58) + iStack_b8);
      iStack_4 = 0;
      piVar4 = DAT_0075ba00;
      iVar1 = DAT_0075ba04;
      if (DAT_0075ba04 < DAT_0075b9fc + 1) {
        if (DAT_0075ba0c == 0) {
          iVar1 = DAT_0075ba04 / 2;
          iVar5 = 1;
          if (0 < iVar1) {
            iVar5 = iVar1;
          }
          if (iVar5 + DAT_0075b9fc < 1) {
            iVar1 = 1;
          }
          else {
            if (iVar1 < 1) {
              iVar1 = 1;
            }
            iVar1 = iVar1 + DAT_0075b9fc;
          }
        }
        else {
          iVar1 = DAT_0075b9fc + DAT_0075ba0c;
        }
        piVar3 = (int *)operator_new(iVar1 * 0x4c + 4);
        iStack_4._0_1_ = 1;
        if (piVar3 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = piVar3 + 1;
          *piVar3 = iVar1;
          FUN_006c043b(piVar4,0x4c,iVar1,FUN_0064afa0,FUN_0064b190);
        }
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        if (0 < DAT_0075b9fc) {
          iVar5 = 0;
          do {
            FUN_0064b7f0(iVar5 + (int)DAT_0075ba00);
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 0x4c;
          } while (iVar6 < DAT_0075b9fc);
        }
        if (DAT_0075ba00 != (int *)0x0) {
          piVar3 = DAT_0075ba00 + -1;
          FUN_006c026a(DAT_0075ba00,0x4c,DAT_0075ba00[-1],FUN_0064b190);
          FUN_006bf840(piVar3);
        }
      }
      DAT_0075ba04 = iVar1;
      DAT_0075ba00 = piVar4;
      FUN_0064b7f0(uVar2);
      DAT_0075b9fc = DAT_0075b9fc + 1;
      iStack_4 = 0xffffffff;
      FUN_0064b190();
      iStack_b8 = iStack_b8 + 0x50;
      iStack_b4 = iStack_b4 + -1;
    } while (iStack_b4 != 0);
  }
  FUN_0064b130(&DAT_00720670);
  iStack_4 = 2;
  FUN_00425270(auStack_a4);
  iStack_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = pvStack_c;
  return &DAT_0075b9f4;
}

