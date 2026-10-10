
void __thiscall FUN_0053e650(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_6c;
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d920b;
  local_c = ExceptionList;
  local_6c = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(param_1 + 100)) {
    do {
      uVar2 = FUN_0053f1b0();
      FUN_00649b20(uVar2);
      iVar5 = 0;
      iVar6 = 0;
      local_4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          iVar3 = FUN_0064a860(*(int *)(iVar1 + 0xc) + iVar5,local_64);
          if (iVar3 != 0) goto LAB_0053e6e5;
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x2c;
        } while (iVar6 < *(int *)(iVar1 + 8));
      }
      iVar6 = -1;
LAB_0053e6e5:
      local_4 = 0xffffffff;
      FUN_00649ba0();
      if (iVar6 < 0) {
        uVar2 = FUN_0053f1b0();
        FUN_00649b20(uVar2);
        iVar5 = *(int *)(iVar1 + 8);
        local_4 = 1;
        if (*(int *)(iVar1 + 0x10) < iVar5 + 1) {
          if (*(int *)(iVar1 + 0x18) == 0) {
            iVar3 = *(int *)(iVar1 + 0x10) / 2;
            iVar6 = 1;
            if (0 < iVar3) {
              iVar6 = iVar3;
            }
            if (iVar6 + iVar5 < 1) {
              iVar5 = 1;
            }
            else {
              if (iVar3 < 1) {
                iVar3 = 1;
              }
              iVar5 = iVar5 + iVar3;
            }
          }
          else {
            iVar5 = *(int *)(iVar1 + 0x18) + iVar5;
          }
          piVar4 = (int *)operator_new(iVar5 * 0x2c + 4);
          iVar6 = 0;
          local_4._0_1_ = 2;
          if (piVar4 == (int *)0x0) {
            param_2 = (int *)0x0;
          }
          else {
            param_2 = piVar4 + 1;
            *piVar4 = iVar5;
            FUN_006c043b(param_2,0x2c,iVar5,FUN_006499d0,FUN_00649ba0);
          }
          local_4 = CONCAT31(local_4._1_3_,1);
          if (0 < *(int *)(iVar1 + 8)) {
            iVar3 = 0;
            do {
              FUN_0064a320(*(int *)(iVar1 + 0xc) + iVar3);
              iVar6 = iVar6 + 1;
              iVar3 = iVar3 + 0x2c;
            } while (iVar6 < *(int *)(iVar1 + 8));
          }
          iVar6 = *(int *)(iVar1 + 0xc);
          if (iVar6 != 0) {
            FUN_006c026a(iVar6,0x2c,*(undefined4 *)(iVar6 + -4),FUN_00649ba0);
            FUN_006bf840(iVar6 + -4);
          }
          *(int **)(iVar1 + 0xc) = param_2;
          *(int *)(iVar1 + 0x10) = iVar5;
        }
        FUN_0064a320(local_38);
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        local_4 = 0xffffffff;
        FUN_00649ba0();
      }
      local_6c = local_6c + 1;
    } while (local_6c < *(int *)(param_1 + 100));
  }
  ExceptionList = local_c;
  return;
}

