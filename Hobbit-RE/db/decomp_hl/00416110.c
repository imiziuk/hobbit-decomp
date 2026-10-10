
void __fastcall FUN_00416110(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar7 = 0;
  iVar1 = FUN_0054c0f0(s_LaketownGasPuzzle_0071fa2c,0);
  if (iVar1 != 0) {
    FUN_004aaaf0(s_OnActivate_0071fa1c,&DAT_0071fa28,iVar1);
  }
  iVar1 = DAT_0075b7d8;
  if (((DAT_0075b7d8 != 0) && (DAT_0075b7d8 == DAT_0075b780)) && (DAT_0075b7d8 == DAT_0075b7a0)) {
    if (*(int *)(param_1 + 0x450) == 0) {
      FUN_006bf840(*(undefined4 *)(param_1 + 0x448));
      *(undefined4 *)(param_1 + 0x448) = 0;
      *(undefined4 *)(param_1 + 0x44c) = 0;
    }
    *(undefined4 *)(param_1 + 0x444) = 0;
    FUN_00417980(iVar1);
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        iVar2 = FUN_00417830();
        FUN_00647d70(iVar2,*(undefined4 *)(DAT_0075b7dc + iVar6),0x20);
        *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(DAT_0075b784 + iVar7 * 4);
        *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(DAT_0075b7a4 + iVar7 * 4);
        uVar8 = FUN_0054c210(*(undefined4 *)(DAT_0075b74c + iVar6),1);
        *(undefined8 *)(iVar2 + 0x48) = uVar8;
        *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(DAT_0075b7c0 + iVar7 * 4);
        piVar3 = (int *)FUN_0054c0f0(iVar2,1);
        if (piVar3 != (int *)0x0) {
          puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x28))();
          *(undefined4 *)(iVar2 + 0x30) = *puVar4;
          *(undefined4 *)(iVar2 + 0x34) = puVar4[1];
          *(undefined4 *)(iVar2 + 0x38) = puVar4[2];
          puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x30))();
          *(undefined4 *)(iVar2 + 0x3c) = *puVar4;
          *(undefined4 *)(iVar2 + 0x40) = puVar4[1];
          *(undefined4 *)(iVar2 + 0x44) = puVar4[2];
        }
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(undefined4 *)(iVar2 + 0x54) = 0;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x2c;
        *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar2 + 0x20);
      } while (iVar7 < iVar1);
    }
    *(undefined4 *)(param_1 + 0x420) = 1;
    if (DAT_0075b7e4 == 0) {
      if (DAT_0075b7dc != 0) {
        iVar1 = DAT_0075b7dc + -4;
        FUN_006c026a(DAT_0075b7dc,0x2c,*(undefined4 *)(DAT_0075b7dc + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075b7dc = 0;
      DAT_0075b7e0 = 0;
    }
    DAT_0075b7d8 = 0;
    if (DAT_0075b754 == 0) {
      if (DAT_0075b74c != 0) {
        iVar1 = DAT_0075b74c + -4;
        FUN_006c026a(DAT_0075b74c,0x2c,*(undefined4 *)(DAT_0075b74c + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075b74c = 0;
      DAT_0075b750 = 0;
    }
    DAT_0075b748 = 0;
    if (DAT_0075b7c8 == 0) {
      FUN_006bf840(DAT_0075b7c0);
      DAT_0075b7c0 = 0;
      DAT_0075b7c4 = 0;
    }
    DAT_0075b7bc = 0;
    if (DAT_0075b78c == 0) {
      FUN_006bf840(DAT_0075b784);
      DAT_0075b784 = 0;
      DAT_0075b788 = 0;
    }
    DAT_0075b780 = 0;
    if (DAT_0075b7ac == 0) {
      FUN_006bf840(DAT_0075b7a4);
      DAT_0075b7a4 = 0;
      DAT_0075b7a8 = 0;
    }
    DAT_0075b7a0 = 0;
    *(undefined4 *)(param_1 + 0x438) = 0;
    FUN_00406bf0(*(undefined4 *)(param_1 + 0x408),*(undefined4 *)(param_1 + 0x40c));
    uVar5 = FUN_004d2f10();
    *(undefined4 *)(param_1 + 0x428) = uVar5;
    FUN_00406bf0(*(undefined4 *)(param_1 + 0x410),*(undefined4 *)(param_1 + 0x414));
    uVar5 = FUN_004d2f10();
    *(undefined4 *)(param_1 + 0x42c) = uVar5;
    return;
  }
  *(undefined4 *)(param_1 + 0x420) = 0;
  return;
}

