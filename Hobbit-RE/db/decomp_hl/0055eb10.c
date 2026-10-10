
void FUN_0055eb10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006da803;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_AIManager__MakeLinkName_0073e924);
  iVar3 = 0;
  local_4 = 0;
  if (param_1 == 0) {
    FUN_00649b20(&DAT_0075b6e0);
    local_4._0_1_ = 1;
    piVar4 = DAT_007721d4;
    iVar3 = DAT_007721d8;
    if (DAT_007721d8 < DAT_007721d0 + 1) {
      if (DAT_007721e0 == 0) {
        iVar3 = DAT_007721d8 / 2;
        iVar6 = 1;
        if (0 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar6 + DAT_007721d0 < 1) {
          iVar3 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar3 = iVar3 + DAT_007721d0;
        }
      }
      else {
        iVar3 = DAT_007721d0 + DAT_007721e0;
      }
      piVar1 = (int *)operator_new(iVar3 * 0x2c + 4);
      local_4._0_1_ = 2;
      if (piVar1 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = piVar1 + 1;
        *piVar1 = iVar3;
        FUN_006c043b(piVar4,0x2c,iVar3,FUN_006499d0,FUN_00649ba0);
      }
      iVar6 = 0;
      local_4._0_1_ = 1;
      if (0 < DAT_007721d0) {
        iVar5 = 0;
        do {
          FUN_0064a320(iVar5 + (int)DAT_007721d4);
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x2c;
        } while (iVar6 < DAT_007721d0);
      }
      if (DAT_007721d4 != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_007721d8 = iVar3;
    DAT_007721d4 = piVar4;
    FUN_0064a320(local_64);
    DAT_007721d0 = DAT_007721d0 + 1;
  }
  else {
    FUN_00649bd0();
    FUN_0064a750(s_TRIGGERS__0073e918);
    if (0 < *(int *)(param_1 + 0x70)) {
      do {
        uVar7 = FUN_0055cce0(*(undefined4 *)(*(int *)(param_1 + 0x74) + iVar3 * 4));
        if ((int)uVar7 != 0) {
          uVar2 = FUN_0055cce0((int)((ulonglong)uVar7 >> 0x20));
          FUN_0064a7a0(uVar2);
          FUN_0064a750(&DAT_0073e914);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x70));
    }
    FUN_0064a750(s_ACTIONS__0073e908);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x8c)) {
      do {
        uVar7 = FUN_0055cd00(*(undefined4 *)(*(int *)(param_1 + 0x90) + iVar3 * 4));
        if ((int)uVar7 != 0) {
          iVar6 = FUN_0055cd00((int)((ulonglong)uVar7 >> 0x20));
          FUN_0064a7a0(iVar6 + 4);
          FUN_0064a750(&DAT_0073e914);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x8c));
    }
    if (*(int *)(param_1 + 0x34) < 0xff) goto LAB_0055ed49;
    uVar2 = FUN_00649cb0(local_38,0xff);
    local_4._0_1_ = 3;
    FUN_0064a320(uVar2);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
LAB_0055ed49:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

