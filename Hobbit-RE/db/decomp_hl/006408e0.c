
void __thiscall FUN_006408e0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_40;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5d4b;
  local_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 0x24);
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x2c) < iVar6 + 1) {
    iVar7 = 0;
    if (*(int *)(param_1 + 0x34) == 0) {
      iVar1 = *(int *)(param_1 + 0x2c) / 2;
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      if (iVar4 + iVar6 < 1) {
        iVar6 = 1;
      }
      else {
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        iVar6 = iVar6 + iVar1;
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x34) + iVar6;
    }
    ExceptionList = &local_c;
    piVar2 = (int *)operator_new(iVar6 * 0x2c + 4);
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = piVar2 + 1;
      *piVar2 = iVar6;
      FUN_006c043b(piVar5,0x2c,iVar6,&LAB_00642220,FUN_00642240);
    }
    local_4 = 0xffffffff;
    local_40 = 0;
    piVar2 = piVar5;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        piVar3 = (int *)(*(int *)(param_1 + 0x28) + iVar7);
        *piVar2 = *piVar3;
        piVar2[1] = piVar3[1];
        piVar2[2] = piVar3[2];
        piVar2[3] = piVar3[3];
        FUN_00642270(piVar3 + 4);
        local_40 = local_40 + 1;
        iVar7 = iVar7 + 0x2c;
        piVar2 = piVar2 + 0xb;
      } while (local_40 < *(int *)(param_1 + 0x24));
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_006421c0(3);
    }
    *(int **)(param_1 + 0x28) = piVar5;
    *(int *)(param_1 + 0x2c) = iVar6;
  }
  iVar6 = *(int *)(param_1 + 0x24) + 1;
  *(int *)(param_1 + 0x24) = iVar6;
  piVar2 = (int *)(iVar6 * 0x2c + -0x2c + *(int *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar7 = 0;
    do {
      iVar4 = FUN_00647ed0(param_2,*(undefined4 *)(iVar7 + *(int *)(param_1 + 0xc)));
      if (iVar4 == 0) break;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x2c;
    } while (iVar6 < *(int *)(param_1 + 8));
  }
  *piVar2 = iVar6;
  if (iVar6 == *(int *)(param_1 + 8)) {
    FUN_00649b20(param_2);
    iVar7 = *(int *)(param_1 + 8);
    iVar6 = 1;
    local_4 = 1;
    if (*(int *)(param_1 + 0x10) < iVar7 + 1) {
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar1 = *(int *)(param_1 + 0x10) / 2;
        iVar4 = 1;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
        if (0 < iVar4 + iVar7) {
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar6 = iVar7 + iVar1;
        }
      }
      else {
        iVar6 = *(int *)(param_1 + 0x18) + iVar7;
      }
      piVar5 = (int *)operator_new(iVar6 * 0x2c + 4);
      iVar7 = 0;
      local_4._0_1_ = 2;
      if (piVar5 == (int *)0x0) {
        param_2 = (int *)0x0;
      }
      else {
        param_2 = piVar5 + 1;
        *piVar5 = iVar6;
        FUN_006c043b(param_2,0x2c,iVar6,FUN_006499d0,FUN_00649ba0);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      if (0 < *(int *)(param_1 + 8)) {
        iVar4 = 0;
        do {
          FUN_0064a320(*(int *)(param_1 + 0xc) + iVar4);
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar7 < *(int *)(param_1 + 8));
      }
      iVar7 = *(int *)(param_1 + 0xc);
      if (iVar7 != 0) {
        FUN_006c026a(iVar7,0x2c,*(undefined4 *)(iVar7 + -4),FUN_00649ba0);
        FUN_006bf840(iVar7 + -4);
      }
      *(int **)(param_1 + 0xc) = param_2;
      *(int *)(param_1 + 0x10) = iVar6;
    }
    FUN_0064a320(local_38);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  piVar2[1] = param_3;
  FUN_00641ec0();
  ExceptionList = local_c;
  return;
}

