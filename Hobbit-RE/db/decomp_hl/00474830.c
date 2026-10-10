
void FUN_00474830(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_18;
  undefined1 local_14 [4];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d179b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&local_18,s__s_Shot_00727bd4,param_1);
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar5 = param_2;
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 1;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 4;
    *(undefined4 *)(iVar2 + 0xf0) = 0;
    *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s__s_Offset_00727bc8,uVar4);
  local_4 = 1;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 4;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_14,s__s_Duration_00727bbc,uVar4);
  local_4 = 2;
  local_18 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = *(int *)(iVar5 + 8);
    if (*(int *)(iVar5 + 0x10) < iVar2 + 1) {
      if (*(int *)(iVar5 + 0x18) == 0) {
        param_2 = *(int *)(iVar5 + 0x10) / 2;
        iVar6 = 1;
        if (0 < param_2) {
          iVar6 = param_2;
        }
        if (iVar2 + iVar6 < 1) {
          param_2 = 1;
        }
        else {
          if (param_2 < 1) {
            param_2 = 1;
          }
          param_2 = iVar2 + param_2;
        }
      }
      else {
        param_2 = *(int *)(iVar5 + 0x18) + iVar2;
      }
      iVar2 = param_2;
      pvVar3 = operator_new(param_2 * 0x108);
      local_4._0_1_ = 3;
      local_10 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else if (-1 < iVar2 + -1) {
        do {
          FUN_00437830();
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < *(int *)(iVar5 + 8)) {
        iVar6 = 0;
        do {
          FUN_00437630(*(int *)(iVar5 + 0xc) + iVar6);
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 0x108;
        } while (iVar2 < *(int *)(iVar5 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar5 + 0xc));
      *(void **)(iVar5 + 0xc) = pvVar3;
      *(int *)(iVar5 + 0x10) = param_2;
      uVar4 = param_1;
    }
    iVar2 = *(int *)(iVar5 + 8) + 1;
    *(int *)(iVar5 + 8) = iVar2;
    iVar5 = iVar2 * 0x108 + -0x108 + *(int *)(iVar5 + 0xc);
    *(undefined4 *)(iVar5 + 0x80) = 2;
    FUN_00647d10(iVar5,local_18);
    *(undefined4 *)(iVar5 + 0x84) = 0;
    *(undefined4 *)(iVar5 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar5 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_1,s__s_Done_00727bb4,uVar4);
  local_4 = 4;
  uVar4 = FUN_00649940();
  iVar5 = FUN_00425010();
  *(undefined4 *)(iVar5 + 0x80) = 3;
  FUN_00647d10(iVar5,uVar4);
  *(undefined4 *)(iVar5 + 0x84) = 0x34;
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

