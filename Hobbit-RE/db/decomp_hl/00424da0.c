
void __thiscall FUN_00424da0(int param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iVar1 = (int)param_2;
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006cf553;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = (undefined1 *)FUN_005493e0(param_1 + 0x254);
  iVar7 = 0;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0075b6e0;
  }
  uVar3 = FUN_00649b20(puVar2);
  iVar6 = *(int *)((int)param_2 + 8);
  iStack_4 = 0;
  if (*(int *)((int)param_2 + 0x10) < iVar6 + 1) {
    if (*(int *)((int)param_2 + 0x18) == 0) {
      iVar4 = *(int *)((int)param_2 + 0x10) / 2;
      iVar8 = 1;
      if (0 < iVar4) {
        iVar8 = iVar4;
      }
      if (iVar8 + iVar6 < 1) {
        iVar6 = 1;
      }
      else {
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        iVar6 = iVar6 + iVar4;
      }
    }
    else {
      iVar6 = *(int *)((int)param_2 + 0x18) + iVar6;
    }
    piVar5 = (int *)operator_new(iVar6 * 0x2c + 4);
    iStack_4._0_1_ = 1;
    if (piVar5 == (int *)0x0) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = piVar5 + 1;
      *piVar5 = iVar6;
      FUN_006c043b(param_2,0x2c,iVar6,FUN_006499d0,FUN_00649ba0);
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (0 < *(int *)(iVar1 + 8)) {
      iVar8 = 0;
      do {
        FUN_0064a320(*(int *)(iVar1 + 0xc) + iVar8);
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x2c;
      } while (iVar7 < *(int *)(iVar1 + 8));
    }
    iVar7 = *(int *)(iVar1 + 0xc);
    if (iVar7 != 0) {
      FUN_006c026a(iVar7,0x2c,*(undefined4 *)(iVar7 + -4),FUN_00649ba0);
      FUN_006bf840(iVar7 + -4);
    }
    *(int *)(iVar1 + 0x10) = iVar6;
    *(int **)(iVar1 + 0xc) = param_2;
  }
  FUN_0064a320(uVar3);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  iStack_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = pvStack_c;
  return;
}

