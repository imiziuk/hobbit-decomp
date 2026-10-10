
undefined4 __thiscall FUN_0044f290(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  void *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfcf0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_74 = param_1;
  if (*(int *)(param_1 + 0xe4) == 0) {
    ExceptionList = &local_c;
    FUN_006bf840(*(undefined4 *)(param_1 + 0xdc));
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (0 < param_4) {
    local_1c = (void *)0x0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_14 = 0;
    local_28 = 0;
    local_24 = 0;
    local_4 = 0;
    pvVar2 = operator_new(0x80);
    iVar3 = 0;
    if (0 < local_20) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar3 * 8) = *(undefined4 *)((int)local_1c + iVar3 * 8);
        *(undefined4 *)((int)pvVar2 + iVar3 * 8 + 4) =
             *(undefined4 *)((int)local_1c + 4 + iVar3 * 8);
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_20);
    }
    FUN_006bf840(local_1c);
    local_64 = param_3;
    local_60 = param_3;
    local_18 = 0x10;
    local_14 = 1;
    local_20 = 0;
    local_5c = param_3;
    local_1c = pvVar2;
    uVar4 = FUN_00405080(&local_70,param_2,&local_64);
    FUN_004357e0(uVar4);
    uVar4 = FUN_00401f00(param_3,param_3,param_3);
    uVar4 = FUN_00402130(local_4c,param_2,uVar4);
    FUN_004357e0(uVar4);
    FUN_0054d4f0(&local_78,0xffffffff,0x1000,local_40);
    uVar4 = FUN_00401f00(param_3,param_3,param_3);
    uVar4 = FUN_00405080(local_58,param_2,uVar4);
    FUN_004357e0(uVar4);
    uVar4 = FUN_00401f00(param_3,param_3,param_3);
    uVar4 = FUN_00402130(&local_70,param_2,uVar4);
    FUN_004357e0(uVar4);
    FUN_004357e0(local_40);
    FUN_004357e0(local_34);
    if (local_78 != -1) {
      FUN_00588ff0(local_78);
      iVar3 = FUN_00589010(local_78,&local_70);
      uVar4 = local_70;
      uVar1 = local_6c;
      while (iVar3 != 0) {
        local_70 = uVar4;
        local_6c = uVar1;
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 1;
        iVar3 = FUN_00406ce0(uVar4,uVar1);
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar3 == -1) {
          FUN_00649720();
        }
        else {
          uVar6 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
          uVar6 = -(uint)((*(byte *)(uVar6 + 0x7f) & 0x10) != 0) & uVar6;
          FUN_00649720();
          if ((((uVar6 != 0) && (*(char *)(uVar6 + 0x7c) == '\x15')) &&
              (piVar5 = (int *)FUN_00452680(), *piVar5 == *(int *)(local_74 + 8))) &&
             (piVar5[1] == *(int *)(local_74 + 0xc))) {
            FUN_00451b50(&local_70);
          }
        }
        iVar3 = FUN_00589010(local_78,&local_70);
        uVar4 = local_70;
        uVar1 = local_6c;
      }
      FUN_00588b20(local_78);
    }
    iVar3 = local_74;
    FUN_004500c0(local_74 + 0xd0,&local_28,param_2,param_4);
    uVar4 = *(undefined4 *)(iVar3 + 0xd8);
    if (local_14 != 2) {
      FUN_006bf840(local_1c);
    }
    ExceptionList = local_c;
    return uVar4;
  }
  ExceptionList = local_c;
  return 0;
}

