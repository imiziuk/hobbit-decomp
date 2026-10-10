
void FUN_00475820(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_1c;
  undefined1 local_18 [8];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar5 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d190b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&local_1c,s__s_Target_Object_00727cd0,param_1);
  local_4 = 0;
  uVar2 = FUN_00649940();
  iVar1 = param_2;
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0x10;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x100) = 0x50;
    *(undefined4 *)(iVar3 + 0x104) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s__s_Target_Location_00727cbc,uVar5);
  local_4 = 1;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0xf;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x100) = 0x2f;
    *(undefined4 *)(iVar3 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_18,s__s_Target_Facing_00727ca8,uVar5);
  local_4 = 2;
  local_1c = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) < iVar3 + 1) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        param_2 = *(int *)(iVar1 + 0x10) / 2;
        iVar6 = 1;
        if (0 < param_2) {
          iVar6 = param_2;
        }
        if (iVar3 + iVar6 < 1) {
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
        param_2 = *(int *)(iVar1 + 0x18) + iVar3;
      }
      iVar3 = param_2;
      pvVar4 = operator_new(param_2 * 0x108);
      local_4._0_1_ = 3;
      local_10 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        FUN_00401080(pvVar4,0x108,iVar3,FUN_00480d70);
      }
      iVar3 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < *(int *)(iVar1 + 8)) {
        iVar6 = 0;
        do {
          FUN_00437630(*(int *)(iVar1 + 0xc) + iVar6);
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 0x108;
        } while (iVar3 < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(void **)(iVar1 + 0xc) = pvVar4;
      *(int *)(iVar1 + 0x10) = param_2;
      uVar5 = param_1;
    }
    iVar3 = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 8) = iVar3;
    iVar3 = iVar3 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar3 + 0x80) = 0xf;
    FUN_00647d10(iVar3,local_1c);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x100) = 0x1c;
    *(undefined4 *)(iVar3 + 0x104) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_1,s__s_SetFacing_00727c98,uVar5);
  local_4 = 4;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00474830(uVar5,iVar1);
  ExceptionList = local_c;
  return;
}

