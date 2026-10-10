
void FUN_00476940(undefined4 param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 local_1c;
  undefined4 local_18 [2];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1a96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_18,s__s_Speaker_00727dd4,param_1);
  local_4 = 0;
  local_1c = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = *(int *)(param_2 + 8);
    if (*(int *)(param_2 + 0x10) < iVar3 + 1) {
      if (*(int *)(param_2 + 0x18) == 0) {
        param_2 = *(int *)(param_2 + 0x10) / 2;
        iVar4 = 1;
        if (0 < param_2) {
          iVar4 = param_2;
        }
        if (iVar4 + iVar3 < 1) {
          param_2 = 1;
        }
        else {
          if (param_2 < 1) {
            param_2 = 1;
          }
          param_2 = iVar3 + param_2;
        }
      }
      else {
        param_2 = *(int *)(param_2 + 0x18) + iVar3;
      }
      local_10 = operator_new(param_2 * 0x108);
      local_4._0_1_ = 1;
      pvVar2 = (void *)0x0;
      if ((local_10 != (void *)0x0) && (iVar3 = param_2, pvVar2 = local_10, -1 < param_2 + -1)) {
        do {
          FUN_00437830();
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < *(int *)(iVar1 + 8)) {
        iVar4 = 0;
        do {
          FUN_00437630(*(int *)(iVar1 + 0xc) + iVar4);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x108;
        } while (iVar3 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar2;
      *(int *)(iVar1 + 0x10) = param_2;
    }
    iVar3 = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 8) = iVar3;
    iVar3 = iVar3 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar3 + 0x80) = 0x10;
    FUN_00647d10(iVar3,local_1c);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x100) = 0x50;
    *(undefined4 *)(iVar3 + 0x104) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_1c,s__s_Force_End_After_Duration_Expi_00727db0,param_1);
  local_4 = 2;
  local_18[0] = FUN_00649940();
  if (DAT_0075d338 == 0) {
    param_2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) < param_2 + 1) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        iVar4 = *(int *)(iVar1 + 0x10) / 2;
        iVar3 = 1;
        if (0 < iVar4) {
          iVar3 = iVar4;
        }
        if (param_2 + iVar3 < 1) {
          param_2 = 1;
        }
        else {
          if (iVar4 < 1) {
            iVar4 = 1;
          }
          param_2 = param_2 + iVar4;
        }
      }
      else {
        param_2 = *(int *)(iVar1 + 0x18) + param_2;
      }
      pvVar2 = operator_new(param_2 * 0x108);
      local_4._0_1_ = 3;
      local_10 = pvVar2;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        iVar3 = param_2;
        if (-1 < param_2 + -1) {
          do {
            FUN_00437830();
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      iVar3 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < *(int *)(iVar1 + 8)) {
        iVar4 = 0;
        do {
          FUN_00437630(*(int *)(iVar1 + 0xc) + iVar4);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x108;
        } while (iVar3 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar2;
      *(int *)(iVar1 + 0x10) = param_2;
    }
    iVar4 = *(int *)(iVar1 + 8) + 1;
    iVar3 = iVar4 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(int *)(iVar1 + 8) = iVar4;
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,local_18[0]);
    *(undefined4 *)(iVar3 + 0x84) = 2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00474830(param_1,iVar1);
  ExceptionList = local_c;
  return;
}

