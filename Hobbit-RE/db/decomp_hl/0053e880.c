
void __thiscall FUN_0053e880(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_70;
  int local_6c;
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9230;
  local_c = ExceptionList;
  local_6c = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    local_70 = 0;
    ExceptionList = &local_c;
    do {
      iVar5 = *(int *)(param_1 + 0x60) + local_70;
      FUN_00649b20(iVar5);
      iVar4 = 0;
      iVar6 = 0;
      local_4 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          iVar2 = FUN_0064a860(*(int *)(iVar1 + 0xc) + iVar4,local_64);
          if (iVar2 != 0) goto LAB_0053e907;
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (iVar6 < *(int *)(iVar1 + 8));
      }
      iVar6 = -1;
LAB_0053e907:
      local_4 = 0xffffffff;
      FUN_00649ba0();
      if (iVar6 < 0) {
        FUN_00649b20(iVar5);
        iVar4 = *(int *)(iVar1 + 8);
        local_4 = 1;
        if (*(int *)(iVar1 + 0x10) < iVar4 + 1) {
          if (*(int *)(iVar1 + 0x18) == 0) {
            iVar6 = *(int *)(iVar1 + 0x10) / 2;
            iVar5 = 1;
            if (0 < iVar6) {
              iVar5 = iVar6;
            }
            if (iVar5 + iVar4 < 1) {
              iVar4 = 1;
            }
            else {
              if (iVar6 < 1) {
                iVar6 = 1;
              }
              iVar4 = iVar4 + iVar6;
            }
          }
          else {
            iVar4 = *(int *)(iVar1 + 0x18) + iVar4;
          }
          piVar3 = (int *)operator_new(iVar4 * 0x2c + 4);
          iVar5 = 0;
          local_4._0_1_ = 2;
          if (piVar3 == (int *)0x0) {
            param_2 = (int *)0x0;
          }
          else {
            param_2 = piVar3 + 1;
            *piVar3 = iVar4;
            FUN_006c043b(param_2,0x2c,iVar4,FUN_006499d0,FUN_00649ba0);
          }
          local_4 = CONCAT31(local_4._1_3_,1);
          if (0 < *(int *)(iVar1 + 8)) {
            iVar6 = 0;
            do {
              FUN_0064a320(*(int *)(iVar1 + 0xc) + iVar6);
              iVar5 = iVar5 + 1;
              iVar6 = iVar6 + 0x2c;
            } while (iVar5 < *(int *)(iVar1 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          if (iVar5 != 0) {
            FUN_006c026a(iVar5,0x2c,*(undefined4 *)(iVar5 + -4),FUN_00649ba0);
            FUN_006bf840(iVar5 + -4);
          }
          *(int **)(iVar1 + 0xc) = param_2;
          *(int *)(iVar1 + 0x10) = iVar4;
        }
        FUN_0064a320(local_38);
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        local_4 = 0xffffffff;
        FUN_00649ba0();
      }
      local_6c = local_6c + 1;
      local_70 = local_70 + 0x24;
    } while (local_6c < *(int *)(param_1 + 0x5c));
  }
  ExceptionList = local_c;
  return;
}

